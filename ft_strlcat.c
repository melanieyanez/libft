/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 10:53:20 by melanieyane       #+#    #+#             */
/*   Updated: 2022/10/30 10:54:25 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dst_len;

	dst_len = ft_strlen(dst);
	i = 0;
	if (dstsize != 0 && dst_len < dstsize)
	{
		while (src[i] != '\0' && i < dstsize - dst_len - 1)
		{
			dst[dst_len + i] = src[i];
			i ++;
		}
		dst[dst_len + i] = '\0';
	}
	if (dstsize < dst_len)
		return (dstsize + ft_strlen(src));
	return (dst_len + ft_strlen(src));
}
