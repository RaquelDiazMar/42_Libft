/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdiaz <rdiaz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 16:41:49 by rdiaz             #+#    #+#             */
/*   Updated: 2021/05/20 13:09:38 by rdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
* This function allocates memory and returns the string of characters that 
* represents the integer argument. Negative numbers are managed.
* 
* The return value is the string character that represents the integer value.
* In case there is a memory allocation issue, the functions returns the NULL
* value.
*/
#include "libft.h"
#include <limits.h>

static size_t	size(long num)
{
	size_t		i;

	i = 0;
	if (num == 0)
	{
		i++;
		return (i);
	}
	if (num < 0)
	{
		num = num * -1;
		i++;
	}
	while (num > 0)
	{
		num = num / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	size_t			len;
	long			nu;
	char			*buffer;

	nu = n;
	len = size(nu);
	buffer = (char *)malloc(sizeof(char) * len + 1);
	if (!buffer)
		return (NULL);
	buffer[len--] = '\0';
	if (n == 0)
		buffer[0] = '0';
	if (nu < 0)
	{
		buffer[0] = '-';
		nu = nu * -1;
	}
	while (nu > 0)
	{
		buffer[len] = (nu % 10) + '0';
		nu = nu / 10;
		len--;
	}
	return (buffer);
}
