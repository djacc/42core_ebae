/*

get_next_line,

- function reads a set amount of characters
defined as BUFFER_SIZE from the fd file.

- BUFFER_SIZE AMOUNT OF characters are put into a temp string

- if temp string does not contain \n, re-run the function

- if temp string contains \n, return the string until \n,
and update temp string to be chars after \n.

*/

#include "get_next_line.h"

// engine
char	*start_to_read(int fd, char *temp_string)
{
	// buffer is the string that holds the chars inside
	char	*buffer;
	// this will add NULL to buffer and check if read() is correct
	int		bytes_to_read;

	// buffer string size has to be defined
	buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
	// faulty probe
	if (!buffer)
		return (0);
	// its set to start execution 
	bytes_to_read = 1;
	// while temp_string does not contain a \n aswell as end of fd file has not been reached
	while (!ft_strchr(temp_string, '\n') && bytes_to_read != 0) 	// check ft_strchr
	{
		// from fd, buffer_size amount of chars are put into buffer
		// bytes_to_read will be the amount of chars read.
		bytes_to_read = read(fd, buffer, BUFFER_SIZE);
		// faulty probe
		if (bytes_to_read == -1)
		{
			free(buffer);
			return (0);
		}
		// dont forget arrays start from pos 0, str needs null terminator
		buffer[bytes_to_read] = '\0';
		// buffer will be added to temp_string
		temp_string = ft_strjoin(temp_string, buffer);				// check ft_strjoin
		// faulty probe // memory fail when trying to strjoin -- check this
		if (!temp_string)
		{
			free(buffer);
			return (0);
		}
	}
	// while loop will add BUFFER_SIZE amount of chars to temp_string everytime its run
	// while loop will run until \n is found, if found it will return the temp_string,
	free(buffer);
	return (temp_string);
}

// case
char	*get_next_line(int fd)
{
	// output_string is the string up until \n
	char		*output_string;
	// hold_string will temporarily hold the line aswell as any excess chars
	// it needs to be static because of roll-over
	static char	*hold_string;

	// faulty probe
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	// engine;
	hold_string = start_to_read(fd, hold_string);
	// faulty probe
	if (!hold_string)
		return (0);
	// output_string becomes hold_string up until \n
	output_string = ft_find_new_line(hold_string);
	// hold_string becomes everything after \n
	hold_string = ft_remove_output(hold_string);
	//output line
	return (output_string);
}

// =========== =========== =========== =========== 

// find out how to test file -segmentation fault 11
// school test

// =========== =========== =========== =========== 

#include <fcntl.h>
#include <stdio.h>

int main(void)
{
	int fd;
	char *line;

	fd = open("test.txt", O_RDONLY);
	if (fd == -1) 
	{
		printf("Failed to open the file\n");
		return (1);
	}

	while ((line = get_next_line(fd)) != NULL)
	{
		printf("%s\n", line);
		free(line);
	}

	close(fd);
	return (0);
}
