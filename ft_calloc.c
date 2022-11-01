/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MYft_calloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:53:28 by melanieyane       #+#    #+#             */
/*   Updated: 2022/10/31 20:19:43 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*result;

	result = malloc(count * size);
	if (!result)
		return (NULL);
	ft_bzero(result, count * size);
	return (result);
}
