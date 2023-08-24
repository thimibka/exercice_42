/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgervais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 10:43:36 by mgervais          #+#    #+#             */
/*   Updated: 2023/08/24 11:00:08 by mgervais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned	int	n;
	int	i;

	i = 0;
	while((s1[i]!= '\0') && (s2[i]) || (i < n))
	{
		if(s1[i] != s2[i])
			{
			return (s1[i] - s2[i]);
			}
			i++;
	}
	return (0);
}


#include<stdio.h>
int	main(void)
{
	char s1[]= "salade";
	char s2[]= "patate";
	printf("%s", ft_strncmp(2);	
}
