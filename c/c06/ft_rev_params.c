/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgervais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 07:48:08 by mgervais          #+#    #+#             */
/*   Updated: 2023/08/31 08:53:44 by mgervais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putstr(char *str)
{
	int j;

	j = 0;
	while (str[j] != '\0')
	{
		write(1, &str[j] ,1);
		j++;
	}
}

int	main(int argc, char *argv[])
{
	int i;

	i = argc - 1;	
	while (i > 0)
	{		
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i--;
	}
}
