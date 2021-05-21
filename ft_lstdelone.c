/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdiaz <rdiaz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 13:39:21 by rdiaz             #+#    #+#             */
/*   Updated: 2021/05/06 13:57:55 by rdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
* This function frees the memory of the element passed as argument using 'del'
* function and later the free(3) one. The memory from 'next' must not be deleted.
*
* Parameters provided:
* - t_list *lst: represents the element which memory is to be freed
* - void (*del)(void *): represents the function address used to erase the 
* content of th element
*/

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst != NULL)
		(*del)(lst->content);
	free(lst);
}
