/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdiaz <rdiaz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 13:03:03 by rdiaz             #+#    #+#             */
/*   Updated: 2021/05/06 13:56:22 by rdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
* This function adds a 'new' element at the end of the list.
*
* Parameters provided:
* - t_list **lst: represents the pointer address to the first element of the list
* - t_list *new: represents the pointer address to the element to be added
*/

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (lst != NULL && new != NULL)
	{
		if (*lst == NULL)
			*lst = new;
		else
			(ft_lstlast(*lst))->next = new;
	}
}
