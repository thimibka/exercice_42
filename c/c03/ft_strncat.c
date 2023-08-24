/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgervais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 15:56:42 by mgervais          #+#    #+#             */
/*   Updated: 2023/08/24 17:54:32 by mgervais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{	
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int)
{
		unsigned	int n;
	
		
		size_t	dest_len = ft_strlen(dest);
		size_t i;

		while(i < n && src[i] != '\0')
		{
			dest[dest_len + i] = src[i];
			dest[dest_len + i] = '\0';
			i++;
		}
		return dest;
}
int	main()
{
	char dest[]= "hello";
	char src []= "salut";

	ft_strncat(dest, src);
}
