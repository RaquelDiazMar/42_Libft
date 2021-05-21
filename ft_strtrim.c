/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdiaz <rdiaz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 13:23:24 by rdiaz             #+#    #+#             */
/*   Updated: 2021/05/20 11:32:21 by rdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
* This fucntion allocates memory and returns the character string that is copy
* of s1, without the characters indicated in the set at the beginning and at the
* end of the character string. 
* 
* If the memory allocation fails, the function will return NULL.
*/
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	char	*buffer;

	if (!s1 || !set)
		return (NULL);
	while (ft_strchr(set, *s1) && *s1 != '\0')
		s1++;
	if (*s1 == '\0')
		return (ft_strdup(""));
	i = ft_strlen(s1);
	while (ft_strchr(set, s1[i]))
		i--;
	buffer = ft_substr(s1, 0, i + 1);
	return (buffer);
}
