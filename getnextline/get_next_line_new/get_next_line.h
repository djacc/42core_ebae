#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

// main
char	*get_next_line(int fd);
char	*start_to_read(int fd, char *temp_string);

// additionals
char	*ft_find_new_line(char *check_str);
char	*ft_remove_output(char *check_str);

// libft
size_t	ft_strlen(const char *str);
char	*ft_strchr(const char *str, int index);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);

#endif