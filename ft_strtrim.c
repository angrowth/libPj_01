/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anachid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 14:30:21 by anachid           #+#    #+#             */
/*   Updated: 2021/03/22 15:18:22 by anachid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_in(const char c, const char *str)
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
	if (!s1 || !set)
		return (NULL);
	while (s1[i] && ft_in((char)s1[i], set))
		i++;
	while ((int)((ft_strlen(s1) - j) - 1) >= 0 &&
			ft_in((char)s1[ft_strlen(s1) - j - 1], (char *)set))
		j++;
	if (i == ft_strlen(s1) && j == ft_strlen(s1))
		return ((char *)"");
	if (!(str = (char *)malloc((ft_strlen(s1) - i - j + 1) * sizeof(char))))
		return (NULL);
	k = i - 1;
	while (s1[++k] && (k != ft_strlen(s1) - j))
		str[k - i] = s1[k];
	str[k - i] = '\0';
	return (str);
}
