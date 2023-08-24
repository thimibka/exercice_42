/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgervais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 10:39:57 by mgervais          #+#    #+#             */
/*   Updated: 2023/08/24 10:33:12 by mgervais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char str)
{
	if (((str >= 'A') && (str <= 'Z'))
		|| ((str >= 'a') && (str <= 'z'))
		|| ((str >= '0') && (str <= '9')))
	{
		return (1);
	}
	return (0);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if ((((ft_str_is_alpha(str[i - 1]) == 0)) \
		&& ((str[i] >= 'a') && (str[i] <= 'z'))))
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
