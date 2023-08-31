/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgervais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 13:21:53 by mgervais          #+#    #+#             */
/*   Updated: 2023/08/31 13:59:45 by mgervais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_printstr(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{	
		write(1, &str[i], 1);
		i++;
	}
}
int	main(int argc, char *argv[])
{
	int i;

	i = argc;
	while(i > 0)
	{
		ft_printstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
}
