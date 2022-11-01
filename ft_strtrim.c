/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 13:02:51 by melanieyane       #+#    #+#             */
/*   Updated: 2022/10/31 17:30:17 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_in_charset(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		i ++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		i;
	char	*result;

	result = "";
	start = 0;
	end = ft_strlen(s1) - 1;
	while (is_in_charset(s1[start], set) == 1)
		start ++;
	while (is_in_charset(s1[end], set) == 1)
		end --;
	if (start < end)
		result = malloc(sizeof(char) * (end - start + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (start <= end)
	{
		result[i] = s1[start];
		i ++;
		start ++;
	}
	result[i] = '\0';
	return (result);
}

/*int	main(void)
{
	char	s1_test[] = "                 ";
	char	set_test[] = "  ";

	printf("%s\n", ft_strtrim(s1_test, set_test));
}*/

//your strtrim does not work with full blank input
//[KO]: your strtrim did not allocate the good size so the \0 test may be false