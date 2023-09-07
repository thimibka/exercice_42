/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   diviser-entier-par-pointeur.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgervais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 08:49:38 by mgervais          #+#    #+#             */
/*   Updated: 2023/09/02 09:32:47 by mgervais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_soustract(int *b, int a)
{
	int c;
	c = 0;
	c = a / *b;
}


#include<stdio.h>
int	main(void)
{
	int a;
	int b;
	int d;	

	a = 4;
	b* = d;
	d = 2;
	printf("%d", ft_soustract(&b ,a));

}
