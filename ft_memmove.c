/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <myanez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 22:33:32 by melanieyane       #+#    #+#             */
/*   Updated: 2022/11/02 13:00:54 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (!dst && !src)
		return (0);
	if (dst > src && src + len > dst)
	{
		i = len - 1;
		while (len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i --;
			len --;
		}
	}
	else
	{
		i = 0;
		while (len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i ++;
			len --;
		}
	}
	return (dst);
}
