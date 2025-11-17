#include "libftprintf.h"

static int	print_on_type(char c, va_list args)
{
  if (c == 'c')
      return (ft_putchar_fd(va_arg(args, int), 1));//func exist.
  else if (c == 's')
      return (ft_putstr_fd(va_arg(args, char *), 1));
  else if (c == 'd' || c == 'i')
      return (ft_putnbr_fd(va_arg(args, int), 1));
  else if (c == 'u')
			//putint and putunsigned could be the same func
      return (ft_putunsigned_fd(va_arg(args, unsigned int), 1));
  else if (c == 'x')
      return (ft_puthex_low_fd(va_arg(args, unsigned int), 1));
  else if (c == 'X')
      return (ft_puthex_upr_fd(va_arg(args, unsigned int), 1));
  else if (c == 'p')
      return (ft_putpointer_fd(va_arg(args, void *), 1));
  else if (c == '%')
      return (ft_putchar_fd('%', 1));
  else
		return (ft_putchar_fd('%', 1) + ft_putchar_fd(c, 1));
	return 0;
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int	i;
	int	result;
 
	va_start(args, str);
	i = 0;
  result = 0;
	while(str[i])
	{
		if (str[i] == '%')
    {
      //send the next char as a c to the printing function
      result += print_on_type(str[i+1], args);
			i++;
    }
		else
			result += write(0, &str[i], 1);
		i++;
	}
	va_end(args);
	return (result);
}
