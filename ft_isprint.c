/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdiaz <rdiaz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 14:57:57 by rdiaz             #+#    #+#             */
/*   Updated: 2021/05/15 11:06:38 by rdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * This function "tests for any printing character, including space (` '). The 
 * value of the argument must be representable as an unsigned char or the value 
 * of EOF".
 * 
 * It returns "zero if the character tests false and returns non-zero if the 
 * character tests true".
*/
#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
