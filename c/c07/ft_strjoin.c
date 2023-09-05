/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgervais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 16:38:34 by mgervais          #+#    #+#             */
/*   Updated: 2023/09/05 19:30:29 by mgervais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

char	*ft_strcat(char *dest, char *src)
{	
	int	idest;
	int	isrc;

	idest = 0;
	isrc = 0;
	while (dest[idest] != '\0')
		idest++;
	while (src[isrc] != '\0')
	{
		dest[idest] = src[isrc];
		idest++;
		isrc++;
	}
	dest[idest] = '\0';
	return (dest);
}

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
		i++;
	return(i);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	int i;
	int totalsize;
	char *totalphrase;
	
	if(size == 0)
	{
		totalphrase = malloc(sizeof(char) * 0);
		return (totalphrase);
	}
	i = 0;
	totalsize = 0;
	totalphrase = 0;
	while( i < size)
	{
		totalsize = totalsize + ft_strlen(strs[i]) +ft_strlen(sep);
		i++;
	}

	totalphrase = (char*)malloc(sizeof(char) * totalsize);
	i = 0;
	while ( i < size - 1)
	{
		totalphrase = ft_strcat(totalphrase, strs[i]);
		totalphrase = ft_strcat(totalphrase, sep);
		i++;
	} 
	printf("%s", totalphrase);
	return(totalphrase);	
}

int	main(int argc, char *argv[])
{
	ft_strjoin(argc, &*argv, "-");
}	
