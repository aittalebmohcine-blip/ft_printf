/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-tal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 09:15:46 by mait-tal          #+#    #+#             */
/*   Updated: 2025/11/26 09:21:26 by mait-tal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putunsigned_fd(unsigned int n, int fd)
{
	unsigned int	divisor;
	int				result;
	char			c;

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
