/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-tal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 16:13:54 by mait-tal          #+#    #+#             */
/*   Updated: 2025/11/03 16:14:01 by mait-tal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putnbr_fd(int n, int fd)
{
	int		divisor;
	int		result;
	char	c;

	if (n == -2147483648)
		return (write (fd, "-2147483648", 11));
	result = 0;
	if (n < 0)
	{
		result += write(fd, "-", 1);
		n = -n;
	}
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
