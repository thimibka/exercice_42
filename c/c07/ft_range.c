/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgervais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 09:36:58 by mgervais          #+#    #+#             */
/*   Updated: 2023/09/05 08:59:39 by mgervais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int i;
	int sustract;
	int *result;

	
	i = 0;
	sustract = max - min;
	if(sustract <= 0)
		return(NULL);
	result = (int*)malloc(sizeof(int) * sustract);

	while(i < sustract)
	{
		result[i] = min;
		printf("%d\n",result[i]);
		i++;
		min++;
	}
	return(result);
}

int	main(void)
{
	int min;
	int max;

	min = 5;
	max = 10; 
	ft_range(min, max);
}


