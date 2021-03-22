/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anachid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 16:49:09 by anachid           #+#    #+#             */
/*   Updated: 2021/03/22 19:20:36 by anachid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strllen(const char *str, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (i < dstsize && str[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *restrict dst, const char *restrict src,
	size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	temp;

	i = 0;
	j = 0;
	temp = (unsigned int)ft_strllen(dst, dstsize);
	if (!dstsize)
		return ((unsigned int)ft_strlen(src));
	while (i < dstsize && dst[i])
		i++;
	while (src[j] && (i + j) < (dstsize - 1))
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i + j < dstsize)
		dst[i + j] = '\0';
	if (dstsize <= temp)
		return ((unsigned int)ft_strlen(src) + dstsize);
	else
		return ((unsigned int)ft_strlen(src) + temp);
}
