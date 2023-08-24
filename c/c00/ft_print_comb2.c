/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgervais <fseetp@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 08:47:47 by mgervais          #+#    #+#             */
/*   Updated: 2023/08/20 20:09:09 by mgervais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_ten(int n)
{
	char	c;

	c = '0' + n / 10;
	write(1, &c, 1);
	c = '0' + n % 10;
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 97)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_ten(a);
			write(1, " ", 1);
			ft_ten(b);
			write(1, ", ", 2);
			b++;
		}
		a++;
	}
	write(1, "98 99", 5);
}

int	main()
{
	ft_print_comb2();
}
