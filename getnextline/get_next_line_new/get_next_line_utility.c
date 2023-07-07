#include "get_next_line.h"

// add ft_strlen
size_t	ft_strlen(const char *str)
{
	size_t	count;

	count = 0;
	while (str[count])
	{
		count++;
	}
	return (count);
}

// add ft_strchr

char	*ft_strchr(const char *str, int index)
{
	while (*str)
	{
		if (*str == (char) index)
		{
			return ((char *)str);
		}
		str++;
	}
	if ((char) index == 0)
		return ((char *)str);
	return (NULL);
}

// add ft_strjoin

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*out;

	if (!s1 || !s2)
		return (0);
	out = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!out)
	{
		return (0);
	}
	ft_strlcpy(out, s1, ft_strlen(s1) + ft_strlen(s2) + 1);
	ft_strlcat(out, s2, ft_strlen(s1) + ft_strlen(s2) + 1);
	return (out);
}

// ft_strlcpy AND ft_strlcat is needed for ft_strjoin

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	pos;
	size_t	src_len;

	pos = 0;
	src_len = ft_strlen(src);
	while (src[pos] && pos + 1 < size)
	{
		dst[pos] = src[pos];
		pos++;
	}
	if (size)
		dst[pos] = '\0';
	return (src_len);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	value;

	if (size == 0)
		return (ft_strlen(src));
	else if (size < ft_strlen(dst))
		value = ft_strlen(src) + size;
	else
		value = ft_strlen(src) + ft_strlen(dst);
	dst_len = ft_strlen(dst);
	src_len = 0;
	while (src[src_len] && dst_len + 1 < size)
	{
		dst[dst_len] = src[src_len];
		src_len++;
		dst_len++;
	}
	dst[dst_len] = '\0';
	return (value);
}

// ================ ================ ================

// output_string becomes hold_string up until \n
//	output_string = ft_find_new_line();

char	*ft_find_new_line(char *check_str)
{
	// will go through each position of str[]
	int		count;
	// get_next_line output 
	// NOTE: free has to be done outside, where get_next_line is being used
	char	*line_output;

	// count for size of string
	count = 0;
	// faulty probe, empty string
	if (!check_str[count])
		return (0);
	// while check_str[count] is not at end and no \n
	// finding size of string
	while (check_str[count] && check_str[count] != '\n')
		count++;
	// + 2 because \0 and \n
	// even when there is no \n its fine // could maybe be improved
	line_output = (char *)malloc(sizeof(char) * (count + 2));
	// faulty probe
	if (!line_output)
		return (0);
	// count for transferring chars
	count = 0;
	// transfer chars from check to line
	while (check_str[count] && check_str[count] != '\n')
	{
		line_output[count] = check_str[count];
		count++;
	}
	// add \n
	if (check_str[count] == '\n')
	{
		line_output[count] = check_str[count];
		count++;
	}
	// add \0
	line_output[count] = '\0';

	return (line_output);
}

// 	hold_string becomes everything after \n
//	hold_string = ft_remove_output(hold_string);

char	*ft_remove_output(char *check_str)
{
	int		count_till_new_line;
	int		count_after_new_line;
	char	*roll_over_str;

	// find size of line
	count_till_new_line = 0;
	while (check_str[count_till_new_line] && check_str[count_till_new_line] != '\n')
		count_till_new_line++;
	//faulty probe
	if (!check_str[count_till_new_line])
	{
		free(check_str);
		return (0);
	}
	// create string the size of the roll over amount
	roll_over_str = (char *)malloc(sizeof(char) * (ft_strlen(check_str) - count_till_new_line + 1));
	if (!roll_over_str)
		return (0);
	// go one more to find the start of roll over string
	count_till_new_line++;
	count_after_new_line = 0;
	// roll_over_str becomes check_str starting after \n
	while (check_str[count_till_new_line])
		roll_over_str[count_after_new_line++] = check_str[count_till_new_line++];
	// add NULL terminator
	roll_over_str[count_after_new_line] = '\0';
	// free check_str since we dont use it anymore
	free(check_str);
	// return
	return (roll_over_str);
}