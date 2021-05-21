/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdiaz <rdiaz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 17:55:52 by rdiaz             #+#    #+#             */
/*   Updated: 2021/05/20 13:12:12 by rdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
* This function applies function 'f' to each character of the character string 
* 's' to create a new one character string (with malloc (3)) that results of 
* the successive applications of 'f'.
* 
* This function returns the character string resulting from successive 
* applications of 'f'. If the assignment fails, it returns NULL.
*/
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*buffer;

	i = 0;
	if (!s)
		return (NULL);
	buffer = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (!buffer)
		return (NULL);
	while (s[i] != '\0')
	{
		buffer[i] = f(i, s[i]);
		i++;
	}
	buffer[i] = '\0';
	return (buffer);
}
