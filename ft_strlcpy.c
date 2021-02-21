/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anachid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 16:36:14 by anachid           #+#    #+#             */
/*   Updated: 2021/01/31 15:37:52 by anachid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src,
	size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!dstsize)
		return (ft_strlen(src));
	while (src[i] && (i + 1) < dstsize)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	j = ft_strlen(dst);
	dst[j] = '\0';
	return (ft_strlen(src));
}
