/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anachid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 14:32:05 by anachid           #+#    #+#             */
/*   Updated: 2021/01/23 14:33:11 by anachid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_itoa_size(int n)
{
	long int	m;
	int			res;

	res = 0;
	m = n;
	if (m < 0)
	{
		res += 1;
		m *= -1;
	}
	while (m > 9)
	{
		m /= 10;
		res += 1;
	}
	res += 1;
	return (res);
}

char	*ft_itoa(int n)
{
	long int	m;
	char		*str;
	int			size;
	int			i;

	size = ft_itoa_size(n) + 1;
	m = n;
	i = 1;
	if (!(str = (char *)malloc(size * sizeof(char))))
		return (NULL);
	if (m < 0)
	{
		str[0] = '-';
		m *= -1;
	}
	str[size - 1] = '\0';
	while (m > 9)
	{
		str[size - i - 1] = m % 10 + '0';
		m /= 10;
		i++;
	}
	str[size - i - 1] = m + '0';
	return (str);
}
