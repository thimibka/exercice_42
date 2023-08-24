/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div-mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgervais <fseetp@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 13:13:39 by mgervais          #+#    #+#             */
/*   Updated: 2023/08/20 17:52:15 by mgervais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp_a;
	int	temp_b;

	temp_a = *a;
	temp_b = *b;
	*a = temp_a / temp_b;
	*b = temp_a % temp_b;
}
