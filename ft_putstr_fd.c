/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-tal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 16:14:16 by mait-tal          #+#    #+#             */
/*   Updated: 2025/11/03 16:14:18 by mait-tal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putstr_fd(char *s, int fd)
{
	size_t	len;

	if (!s)
		return (write(fd, "(null)", 6));//this should be handled, the fuc now return int.
	len = ft_strlen(s);
	return (write(fd, s, len));
}
