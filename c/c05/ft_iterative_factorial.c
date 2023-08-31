/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgervais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 08:36:56 by mgervais          #+#    #+#             */
/*   Updated: 2023/08/30 11:55:42 by mgervais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	facto;

	facto = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (facto > 1)
	{
		facto--;
		nb = nb * (facto);
	}
	return (nb);
}
