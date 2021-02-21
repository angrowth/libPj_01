/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anachid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 14:30:21 by anachid           #+#    #+#             */
/*   Updated: 2021/01/30 13:16:54 by anachid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_in(char c, char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	while (s1[i] && ft_in((char)s1[i], (char *)set))
		i++;
	if (i == ft_strlen(s1) - 1)
		return (NULL);
	while (ft_strlen(s1) - j - 1 >= 0 && ft_in((char)s1[ft_strlen(s1) - j - 1], (char *)set))
		j++;
	if (!(str = (char *)malloc((ft_strlen(s1) - i - j + 1) * sizeof(char))))
		return (NULL);
	while (s1[i] && (i != ft_strlen(s1) - j))
	{
		str[k] = s1[i];
		k++;
	}
	return (str);
}
