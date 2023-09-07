/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   creer-espace-string.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgervais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 17:32:54 by mgervais          #+#    #+#             */
/*   Updated: 2023/09/02 08:29:14 by mgervais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

char	ft_al(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] +=32;
			write(1, &str[i], 1);
		}

		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -=32;
			write(1, &str[i], 1);
		}
		else 
			write(1, &str[i],1);
	i++;	
	}return(0);
}

int 	main(int argc, char *argv[])
{	
	if(argc >= 2)
		ft_al(argv[1]);
}
