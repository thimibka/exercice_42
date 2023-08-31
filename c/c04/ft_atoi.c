/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgervais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 12:46:10 by mgervais          #+#    #+#             */
/*   Updated: 2023/08/29 08:12:24 by mgervais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	istr;
	int	result;
	int	countnegative;

	istr = 0;
	result = 0;
	countnegative = 1;
	while ((str[istr] == ' ') || ((str[istr] >= '\t') && (str[istr] <= '\r')))
		istr ++ ;
	while (str[istr] == '-' || str[istr] == '+')
	{	
		if (str[istr] == '-')
			countnegative *= -1;
		istr++;
	}
	while ((str[istr] >= '0') && (str[istr] <= '9'))
	{
		result = result * 10 + (str[istr] - '0');
		istr++;
	}
	return (result * countnegative);
}
