#ifndef _libft_h
#define _libft_h

// library addition
#include <stdio.h>







// type finder
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
// string count
size_t	ft_strlen(const char *str);
// string manipulation
size_t	strlcpy(char *dst, const char *src, size_t size);
size_t	strlcat(char *dst, const char *src, size_t size);
// char manipulation
int	ft_toupper(int c);
int	ft_tolower(int c);
// string locator
int	strncmp(const char *s1, const char *s2, size_t n);
	/* not implemented:
				strrchr
// sub-string locator
	/* not implemented:
				strnstr */
// conversion
int	ft_atoi(const char *str)

// memory manipulation
void	*ft_memset(void *str, int count, size_t size);
void	ft_bzero(void *str, size_t size);
	/* not implemented:
				memcpy
				memmove */
// address locator
	/* not implemented:
				memchr
				memcmp */

// memory allocation:
	/* not implemented:
				calloc
				strdup */






// ADDITIONAL FUNCTIONS:
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);






// BONUS TASK:
/* manipulation of lists struct */







#endif