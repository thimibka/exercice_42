/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   modificate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgervais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 20:16:05 by mgervais          #+#    #+#             */
/*   Updated: 2023/09/04 14:24:57 by mgervais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_totalty(char *str)
{
	int	index;

	index = 20;
	while(str[index] != '\0')
	{
		if(str[index] == ' ')
	 		write(1, "    ", 4);
	 	
		if ((str[index] >= 'A' && str[index] <= 'Z') 
			|| (str[index] >= 'a' && str[index] <= 'z'))
		{	
			write(1, &str[index], 1);
			write(1, " ",1);
		}
		index--;
	}
	return(0);
}

int	main(void)
{	
	char speak[]= "hello my name is mika";
	write(1, "hello my name is mika", 21);
	write(1, "\n", 1);
	ft_totalty(speak);

	
}
