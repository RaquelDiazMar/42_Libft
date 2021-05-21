/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdiaz <rdiaz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 16:06:16 by rdiaz             #+#    #+#             */
/*   Updated: 2021/05/20 18:02:49 by rdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This function reserves memory and returns a string table obtained by 
 * separating 's' with the character 'c', which is used as a delimiter. The 
 * table must end with NULL.
 * 
 * If the memory reservation fails the function return NULL.
 * 
 * Note: functions declared as static so that they can only be accessed from this
 * file and so to prevent call from other files.
 */
#include "libft.h"

static size_t	ft_count(char const *s, char c)
{
	int		i;
	size_t	count;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			while (s[i] && s[i] != c)
				i++;
			count++;
		}
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**buffer;
	size_t	i;
	size_t	j;
	size_t	start;

	if (!s)
		return (NULL);
	buffer = (char **)malloc(sizeof(char *) * (ft_count(s, c) + 1));
	if (!buffer)
		return (NULL);
	i = 0;
	j = 0;
	while (i < ft_strlen(s))
	{
		if (s[i] && s[i] != c)
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			buffer[j++] = ft_substr(s, start, i - start);
		}
		i++;
	}
	buffer[j] = NULL;
	return (buffer);
}
