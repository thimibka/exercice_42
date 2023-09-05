/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgervais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 10:49:45 by mgervais          #+#    #+#             */
/*   Updated: 2023/09/05 16:31:24 by mgervais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int sustract;
	int *tmp;

	i = 0;
	sustract = max - min;
	if(min >= max)
	{
		return(0);
	}
	tmp = (int *)malloc(sizeof(int) * sustract);
	while(i < sustract)
	{
		tmp[i] = min;
		min++;
		i++;
	}
	*range = tmp;
	return(sustract);
}

int	main(void)
{
	int **range;
	range = (int **) malloc(sizeof(int) * 5);
	printf("%d", ft_ultimate_range(range, 5, 10));
}
