/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anachid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 16:49:09 by anachid           #+#    #+#             */
/*   Updated: 2021/01/23 14:19:29 by anachid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src,
	size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	temp;

	i = 0;
	j = 0;
	temp = (unsigned int)ft_strlen(dst);
	if (dstsize == 0)
		return ((unsigned int)ft_strlen(src));
	while (dst[i])
		i++;
	while (src[j] && (i + j) < (dstsize - 1))
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	if (dstsize <= temp)
		return ((unsigned int)ft_strlen(src) + dstsize);
	else
		return ((unsigned int)ft_strlen(src) + temp);
}
