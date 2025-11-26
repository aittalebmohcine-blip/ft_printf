/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_upr_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-tal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 09:09:16 by mait-tal          #+#    #+#             */
/*   Updated: 2025/11/26 09:09:52 by mait-tal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_puthex_upr_fd(unsigned int n, int fd)
{
	unsigned int	divisor;
	int				result;
	char			c;

	result = 0;
	divisor = 1;
	while (n / divisor >= 16)
		divisor *= 16;
	while (divisor)
	{
		c = (n / divisor) % 16;
		if (c <= 9)
			c += '0';
		else
			c += '7';
		result += write(fd, &c, 1);
		divisor /= 16;
	}
	return (result);
}
