/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 12:46:54 by melanieyane       #+#    #+#             */
/*   Updated: 2022/10/29 13:50:39 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

/*int	main(void)
{
	int	c;

	c = '^';
	printf("ma fontion donne %d\n", ft_isalnum(c));
	printf("la vraie fontion donne %d\n", isalnum(c));
}*/
