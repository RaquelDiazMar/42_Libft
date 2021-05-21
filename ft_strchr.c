/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdiaz <rdiaz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 19:48:56 by rdiaz             #+#    #+#             */
/*   Updated: 2021/05/15 13:01:09 by rdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * This function locates the first occurrence of c (converted to a char) in the 
 * string pointed to by s. The terminating null character is considered to be 
 * part of the string; therefore if c is '\0', the function locates the 
 * terminating '\0'.
 * 
 * The function returns a pointer to the located character, or NULL if the 
 * character does not appear in the string.
*/
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	size_t	len;
	char	*p;

	i = 0;
	len = ft_strlen(s);
	p = (char *)s;
	if (!s)
		return (NULL);
	while ((i < len) && (p[i] != (char)c))
		i++;
	if (i == len)
	{
		if (c != '\0')
			return (NULL);
	}
	return ((char *)p + i);
}
