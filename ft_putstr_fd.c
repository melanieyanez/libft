/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <myanez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 13:00:54 by melanieyane       #+#    #+#             */
/*   Updated: 2022/11/07 17:01:20 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i ++;
	}
}

/*int	main(void)
{
	char	file_path[] = "/Users/melanieyanez/Desktop/libft/haricotvert.txt";
	int		file;

	file = open(file_path, O_RDWR);
	ft_putstr_fd("Mojito est un fumier", file);
}*/
