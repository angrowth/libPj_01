/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anachid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 14:44:43 by anachid           #+#    #+#             */
/*   Updated: 2021/03/22 15:52:06 by anachid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*temp;
	t_list	*ret;

	temp = lst;
	if (!lst)
		return (NULL);
	if (!(new_lst = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	ret = new_lst;
	while (lst)
	{
		new_lst->content = f(lst->content);
		lst = lst->next;
		if (!(new_lst->next = (t_list *)malloc(sizeof(t_list))))
			return (NULL);
		new_lst = new_lst->next;
		new_lst->next = NULL;
	}
	ft_lstclear(&temp, del);
	return (ret);
}
