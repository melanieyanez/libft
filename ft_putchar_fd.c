/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 12:58:03 by melanieyane       #+#    #+#             */
/*   Updated: 2022/10/29 13:23:51 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*int	main(void)
{
	char	file_path[] = "/Users/melanieyanez/Desktop/libft/haricotvert.txt";
	int		file;

	file = open(file_path, O_RDWR);
	ft_putchar_fd('B', file);
}*/
