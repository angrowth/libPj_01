/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anachid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 14:43:25 by anachid           #+#    #+#             */
/*   Updated: 2021/01/23 14:44:33 by anachid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
    t_list * ptr;

    ptr = lst;
    if (!f)
		return ;
	while (ptr)
	{
		f(ptr->content);
        ptr = lst->next;
	}
}
