/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anachid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 14:30:21 by anachid           #+#    #+#             */
/*   Updated: 2021/03/22 17:06:20 by anachid          ###   ########.fr       */
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
	size_t	start;
	size_t	end;

	start = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[start] && ft_in((char)s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_in(s1[end - 1], set))
		end--;
	if (!(str = (char *)malloc((end - start + 1) * sizeof(char))))
		return (NULL);
	i = 0;
	while (start < end)
		str[i++] = s1[start++];
	str[i] = '\0';
	return (str);
}
