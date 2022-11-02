/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <myanez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:47:29 by myanez-p          #+#    #+#             */
/*   Updated: 2022/11/02 16:33:57 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	nb_substr(char const *s, char c)
{
	size_t	i;
	size_t	nb;

	i = 0;
	nb = 0;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c)
			nb ++;
		i ++;
	}
	return (nb);
}

char	*substr_gen(char const *s, char c, size_t *index)
{
	char	*sub_result;
	size_t	size;
	size_t	i;

	size = 0;
	while (s[*index] == c && s[*index])
		(*index)++;
	while (s[*index + size] && s[*index + size] != c)
		size ++;
	sub_result = malloc(sizeof(*s) * (size + 1));
	if (!sub_result)
		return (NULL);
	i = 0;
	while (i < size)
	{
		sub_result[i] = s[*index];
		i ++;
		(*index)++;
	}
	sub_result[i] = '\0';
	return (sub_result);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**result;

	result = malloc(nb_substr(s, c) * sizeof(s));
	if (!result)
		return (NULL);
	i = 0;
	j = 0;
	while (i < nb_substr(s, c) - 1)
	{
		result[i] = substr_gen(s, c, &j);
		i ++;
	}
	result[i] = 0;
	return (result);
}

/*
[fail]: your split does not work with one word
[fail]: your split does not work with one word
[crash]: your split does not work with empty string
[crash]: your split will segfault in case --> *str="\0aa\0bbb" c='\0'
*/