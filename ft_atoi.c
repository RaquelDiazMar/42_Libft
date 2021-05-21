/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdiaz <rdiaz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 13:52:00 by rdiaz             #+#    #+#             */
/*   Updated: 2021/05/15 12:06:13 by rdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * This function "converts the initial portion of the string pointed to by str 
 * to int representation."
 * 
 * Notice that if no valid conversion could be performed, it returns zero.
 * 
 * Notice that when it takes from the string variable a character that is not 
 * recognized as part of a number, it interrupts the conversion.
*/

#include "libft.h"
#include <limits.h>

int	ft_atoi(const char *str)
{
	long	number;
	int		sign;

	number = 0;
	sign = 1;
	while ((*str == 32) || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		if ((number * sign) > INT_MAX)
			return (-1);
		if ((number * sign) < INT_MIN)
			return (0);
		number = (number * 10) + (*str - '0');
		str++;
	}
	return (number * sign);
}
