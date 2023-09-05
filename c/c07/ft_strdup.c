/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgervais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 15:46:53 by mgervais          #+#    #+#             */
/*   Updated: 2023/09/04 09:06:21 by mgervais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>
int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int isrc;
	char *dest;

	dest = (char*)malloc(sizeof(char) * ft_strlen(src) + 1);
	isrc = 0;
	while (src[isrc] != '\0')
	{
		dest[isrc] = src[isrc];
		isrc++;
	}
	printf("%d", ft_strlen(dest));
	
	printf("%s",dest);
	return (dest);
}

int	main(int argc, char *argv[])
{
	if(argc >= 2)
	{
		ft_strdup(argv[1]);
	}
}


