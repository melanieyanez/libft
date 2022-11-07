/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <myanez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 20:41:07 by myanez-p          #+#    #+#             */
/*   Updated: 2022/11/07 17:02:19 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	while (i < len && haystack[i] != '\0')
	{
		j = 0;
		if (haystack[i] == needle[j])
		{	
			while ((needle[j] == haystack[i + j]) && ((i + j) < len))
			{
				if (needle[j + 1] == '\0')
					return ((char *)&haystack[i]);
				j++;
			}
		}
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	char	str[33] = "Les renards, c'est les meilleurs";
	char	to_find[8] = "renards";
	char	*resultmyfct;
	char	*resultbifct;

	resultmyfct = ft_strstr(str, to_find);
	resultbifct = strstr(str, to_find);
	printf("%s\n%s", resultmyfct, resultbifct);
	return (0);
}*/
