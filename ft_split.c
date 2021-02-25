/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anachid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 14:30:52 by anachid           #+#    #+#             */
/*   Updated: 2021/01/30 13:18:46 by anachid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_size(char const *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			while (s[i] && s[i] == c)
				i++;
		}
		else
		{
			j++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (j);
}

char	*ft_copy(char *s, size_t d, size_t f)
{
	char	*str;
	size_t	i;

	i = 0;
	if (!(str = (char *)malloc((f - d + 1) * sizeof(char))))
		return (NULL);
	while (s[d + i] && (d + i) < f)
	{
		str[i] = s[d + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	if (!(str = (char **)malloc((ft_size(s, c) + 1) * sizeof(char *))))
		return (NULL);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		j = i;
		while (s[j] && s[j] != c)
			j++;
		if (i != j)
		{
			str[k] = ft_copy((char *)s, i, j);
			k++;
		}
		i = j;
	}
	str[k] = NULL;
	return (str);
}
