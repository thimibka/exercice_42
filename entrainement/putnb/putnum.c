/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnum.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgervais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 09:41:39 by mgervais          #+#    #+#             */
/*   Updated: 2023/09/02 12:56:35 by mgervais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_atoi(char *nbr)
{
	int	i;
	int	negative;
	int	result;

	i = 0;
	result = 0;
	negative = 1;
	while (nbr[i] != '\0')
	{
		while ((nbr[i] == ' ') || ((nbr[i] >= '\t') && (nbr[i] <= '\r')))
			i++;
		while (nbr[i] == '-' || nbr[i] == '+')
		{
			if (nbr[i] == '-')
				negative *= -1;
			i++;
		}	
		while ((nbr[i] >= '0') && (nbr[i] <= '9'))
		{
			result = result * 10 + (nbr[i] - '0');
			i++;
		}
		return (result * negative);
	}
	return (0);
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	ft_putchar(nb = nb % 10 + '0');
}

int	main(int argc, char *argv[])
{
	if (argc >= 2)
		ft_putnbr(ft_atoi(argv[1]));
}
