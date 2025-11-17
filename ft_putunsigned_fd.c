#include <unistd.h>
int	ft_putunsigned_fd(unsigned int n,int fd)
{
	unsigned int		divisor;
	int		result;
	char	c;

	result = 0;
	divisor = 1;
	while (n / divisor >= 10)
		divisor *= 10;
	while (divisor)
	{
		c = (n / divisor) % 10 + '0';
		result += write(fd, &c, 1);
		divisor /= 10;
	}
	return (result);
}
