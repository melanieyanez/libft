/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 12:49:43 by melanieyane       #+#    #+#             */
/*   Updated: 2022/10/29 13:23:17 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/*int	main(void)
{
	int	c;

	c = '9';
	printf("ma fontion donne %d\n", ft_isdigit(c));
	printf("la vraie fontion donne %d\n", isdigit(c));
}*/
