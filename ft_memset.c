/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdiaz <rdiaz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 16:44:37 by rdiaz             #+#    #+#             */
/*   Updated: 2021/05/19 11:50:32 by rdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
 * This "function writes len bytes of value c (converted to an unsigned char) 
 * to the string b", returning its first argument (b).
 *
 * A char string (ptr) is created to hold a casted version of void b parameter, 
 * then ptr is initialized as casted version of b and a loop is run.
 */
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)b;
	while (len--)
	{
		*ptr++ = (unsigned char)c;
	}
	return (b);
}
