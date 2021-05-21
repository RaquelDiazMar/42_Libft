/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdiaz <rdiaz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 14:25:42 by rdiaz             #+#    #+#             */
/*   Updated: 2021/05/06 16:17:51 by rdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
* This function performs an iteration over 'lst' list and applies 'f' function 
* to the content of each element. Creates a new list as a result of 'f' 
* iteration. 'del' function is available in case is needed to remove content 
* from any element.
*
* Parameters provided:
* 1.- t_list *lst: represents the pointer address to an element
* 2.- void *(*f)(void *): represents the function address to be applied over 
* the list
* 3.- void (*del)(void *): represents the function address to be applied an 
* element in case deletion of its 'content' is needed.
*/

#include "libft.h"

t_list 	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*first;
	t_list	*aux;

	if (lst && f)
	{
		new = ft_lstnew(f(lst->content));
		first = new;
		lst = lst->next;
		while (lst)
		{
			aux = lst->next;
			new->next = ft_lstnew(f(lst->content));
			if (!new)
				del(lst);
			new = new->next;
			lst = aux;
		}
		return (first);
	}
	return (NULL);
}
