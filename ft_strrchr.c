/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anachid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 16:19:34 by anachid           #+#    #+#             */
/*   Updated: 2021/01/31 15:33:11 by anachid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*res;
	int		i;

	res = (char *)str;
	i = ft_strlen(str) - 1;
	if (c == '\0')
		return ((char *)str + ft_strlen(str));
	while (i >= 0)
	{
		if ((unsigned char)c == res[i])
			return (&res[i]);
		i--;
	}
	return (NULL);
}
