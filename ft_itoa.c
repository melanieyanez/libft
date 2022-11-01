/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 12:56:54 by melanieyane       #+#    #+#             */
/*   Updated: 2022/10/29 17:49:33 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	nbr_len(long int nbr)
{
	int	len;

	len = 1;
	if (nbr < 0)
	{
		nbr = nbr * -1;
		len = 2;
	}
	while (nbr >= 10)
	{
		nbr = nbr / 10;
		len ++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char		*result;
	long int	nbr;
	int			i;
	int			len;

	nbr = n;
	len = nbr_len(nbr);
	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	i = len - 1;
	if (nbr < 0)
	{
		result[0] = '-';
		nbr = nbr * -1;
	}
	while (nbr >= 10)
	{
		result[i] = nbr % 10 + 48;
		nbr = nbr / 10;
		i --;
	}
	result[i] = nbr + 48;
	result[len] = '\0';
	return (result);
}

/*int	main(void)
{
	int	nb;

	nb = -2147483648LL;
	printf("%d\n", nb);
	printf("%d\n", nbr_len(nb));
	printf("%s\n", ft_itoa(nb));
}*/
