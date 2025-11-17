#ifndef LIBFTPRINTF
# define LIBFTPRINTF

#include <stdarg.h>
#include <unistd.h>

int	ft_printf(const char *, ...);

int	ft_putchar_fd(char c, int fd);

int	ft_putstr_fd(char *s, int fd);
size_t	ft_strlen(const char *s);

int	ft_putnbr_fd(int n, int fd);

int	ft_putunsigned_fd(unsigned int n,int fd);

int	ft_puthex_low_fd(unsigned int n, int fd);

int	ft_puthex_upr_fd(unsigned int n, int fd);

int	ft_putpointer_fd(void *ptr, int fd);

#endif
