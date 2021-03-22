/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anachid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 14:42:37 by anachid           #+#    #+#             */
/*   Updated: 2021/03/22 15:25:14 by anachid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*ptr_list;

	ptr_list = *lst;
	if (!del)
		return ;
	while (ptr_list)
	{
		temp = (ptr_list)->next;
		ft_lstdelone(ptr_list, del);
		ptr_list = temp;
	}
	*lst = NULL;
}
