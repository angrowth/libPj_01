/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anachid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 16:11:05 by anachid           #+#    #+#             */
/*   Updated: 2021/01/31 15:30:51 by anachid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*res;
	int		i;

	i = 0;
	res = NULL;
	if (c == '\0')
		return ((char *)str + ft_strlen(str));
	while (str[i])
	{
		if ((unsigned char)c == str[i])
		{
			res = (char *)&str[i];
			return (res);
		}
		i++;
	}
	return (res);
}
