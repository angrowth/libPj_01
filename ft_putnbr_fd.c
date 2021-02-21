/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anachid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 14:36:12 by anachid           #+#    #+#             */
/*   Updated: 2021/01/30 15:01:14 by anachid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*tmp;
	long	i;

	i = n;
	if (i < 0)
	{
		i *= -1;
		write(fd, "-", sizeof(char));
	}
	if (i > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
	{
		tmp = (char *)(i + '0');
		write(fd, tmp, sizeof(char));
	}
}
