/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgervais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 11:56:37 by mgervais          #+#    #+#             */
/*   Updated: 2023/08/24 14:59:17 by mgervais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{	
	int	idest;
	int	isrc;

	idest = 0;
	isrc = 0;
	while (dest[idest] != '\0')
	{
		idest++;
	}
	while (src[isrc] != '\0')
	{
		dest[idest] = src[isrc];
		idest++;
		isrc++;
	}
	dest[idest] = '\0';
	return (dest);
}
