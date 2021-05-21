/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdiaz <rdiaz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 13:58:29 by rdiaz             #+#    #+#             */
/*   Updated: 2021/05/06 16:23:03 by rdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
* This function suppresses and frees the memory of the last item as a parameter 
* and of all the following elements, with 'del' and free (3). Last, the initial 
* pointer must be set to NULL.
*
* Parameters provided:
* - t_list **lst: represents the pointer address to an element
* - void (*f)(void *): represents the function address that allows to suppress
* the element content
*/

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*element;

	if (lst)
	{
		while (*lst)
		{
			element = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = element;
		}
	}
}
