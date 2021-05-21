/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdiaz <rdiaz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 15:19:24 by rdiaz             #+#    #+#             */
/*   Updated: 2021/05/15 11:54:00 by rdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * This function "converts a lower-case letter to the corresponding upper-case 
 * letter."
 * 
 * If the argument is a lower-case letter, it returns the corresponding 
 * upper-case letter if there is one; otherwise, the argument is returned 
 * unchanged.".
*/
#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}
