/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anachid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 14:29:10 by anachid           #+#    #+#             */
/*   Updated: 2021/02/25 23:51:12 by anachid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	if (!s)
		return NULL;
	if (!(str =(char *)malloc((len + 1) * sizeof(char))))
		return NULL;
	if (start >= ft_strlen(s))
		return str;
	while (s[start + i] &&  (i < len))
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
