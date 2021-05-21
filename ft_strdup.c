/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdiaz <rdiaz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 11:23:11 by rdiaz             #+#    #+#             */
/*   Updated: 2021/05/19 12:40:27 by rdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * This function allocates sufficient memory for a copy of the string s1 
 * (setting the size the same as the orginal string), does the copy (including 
 * the null character), and returns a pointer to it. The pointer may 
 * subsequently be used as an argument to the function free(3).
 * 
 * If insufficient memory is available, NULL is returned.
*/
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*buffer;
	size_t	i;

	i = 0;
	buffer = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!buffer)
		return (NULL);
	while (s1[i])
	{
		buffer[i] = s1[i];
		i++;
	}
	buffer[i] = '\0';
	return (buffer);
}
