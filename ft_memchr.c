/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anachid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 15:37:05 by anachid           #+#    #+#             */
/*   Updated: 2021/01/18 15:53:15 by anachid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*t;
	size_t			i;

	i = 0;
	t = (unsigned char *)s;
	if (t[0] == (unsigned char)c)
		return (&t[i]);
	while (i < n && t[i] != (unsigned char)c)
	{
		i++;
		if (t[i] == (unsigned char)c)
			return (&t[i]);
	}
	return (NULL);
}
