/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-tal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 09:12:25 by mait-tal          #+#    #+#             */
/*   Updated: 2025/11/26 09:12:27 by mait-tal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libftprintf.h"

int	ft_putpointer_fd(void *ptr, int fd)
{
	unsigned long	divisor;
	int				result;
	char			c;
	unsigned long	address;

	if (ptr == NULL)
		return (write(fd, "(nil)", 5));
	result = ft_putstr_fd("0x", fd);
	divisor = 1;
	address = (unsigned long)ptr;
	while (address / divisor >= 16)
		divisor *= 16;
	while (divisor)
	{
		c = (address / divisor) % 16;
		if (c <= 9)
			c += '0';
		else
			c += 'W';
		result += write(fd, &c, 1);
		divisor /= 16;
	}
	return (result);
}
