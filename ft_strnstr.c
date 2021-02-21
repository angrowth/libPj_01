/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anachid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 16:59:44 by anachid           #+#    #+#             */
/*   Updated: 2021/01/30 13:12:23 by anachid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*check(char *a, char *b, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	while (a[i] && i < len)
	{
		if (a[i] == b[j])
		{
			k = i;
			while (a[k] == b[j] && a[k] && b[j] && k < len)
			{
				k++;
				j++;
				if (b[j] == '\0')
					return (&a[i]);
			}
			j = 0;
		}
		i++;
	}
	return (NULL);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*tmp1;
	char	*tmp2;

	tmp1 = (char *)haystack;
	tmp2 = (char *)needle;
	if (needle[0] == '\0')
		return (tmp1);
	return (check(tmp1, tmp2, len));
}
