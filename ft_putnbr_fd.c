/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 12:59:14 by melanieyane       #+#    #+#             */
/*   Updated: 2022/10/30 09:22:27 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	nbr;

	nbr = n;
	if (nbr < 0)
	{
		ft_putchar_fd('-', fd);
		nbr = nbr * -1;
	}
	if (nbr >= 10)
		ft_putnbr_fd(nbr / 10, fd);
	ft_putchar_fd((nbr % 10 + 48), fd);
}

/*int	main(void)
{
	char	file_path[] = "/Users/melanieyanez/42/libft/haricotvert2.txt";
	int		file;

	file = open(file_path, O_RDWR);
	ft_putnbr_fd(-1000043, file);
}*/
