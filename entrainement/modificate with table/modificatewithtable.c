/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   modificatewithtable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgervais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 15:47:06 by mgervais          #+#    #+#             */
/*   Updated: 2023/09/07 10:57:35 by mgervais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdlib.h>

void ft_swap(char *a, char *b)
{
    char c;
    
    c = *a;
    *a = *b;
    *b = c;
}

int     ft_strlen(char *str, char delimiteur)
{
    int i;

    i = 0;
    while(str[i] != delimiteur)
    {
        i++;
    }
    return(i);
}

void    ft_putstr(char *str)
{
    int i;

    i = 0;
    while(str[i]!= '\0')
    {
        write(1, &str[i], 1);
        i++;
    }
}

char *copy(char *src, int nombreletters)
{
    int i;
    char *dest;

    dest = (char*)malloc(sizeof(char) * (nombreletters + 1));
    i = 0;
    while(src[i]!= '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return(dest);
}



char  *createarray(int nombreletters, char *str)
{
    char *array;
    int i;
    
    i = 0; 
    array = (char*)malloc(sizeof(char) * nombreletters);
       while (i < nombreletters)
       {
            array = copy(str, nombreletters);
			i++;
       }
	return (array);
}

char   **createcontainer(int nombremot, char *totalstring)
{
    char **container;
	int i;
	
	i = 0;
    container = (char**)malloc(sizeof(char*) * (nombremot + 1) + 1);
        while(i < nombremot)
        {
            container[i] = createarray(nombremot, totalstring);
			i++;
        }
	return (container);
        
}

void    calculmots(char *totalstring)
{
    int nombremot;
    int i;
    
    nombremot = 0;
    i = 0; 
    while (totalstring[i] != '\0')
    {
    
        if((totalstring[i] == ' ') || ((totalstring[i] >='\b') && (totalstring[i] <= '\r')))
            nombremot ++;
			i++;
    }
    createcontainer(nombremot, totalstring); 
}

#include<stdio.h>
int    ft_totalty(char *totalString)
{
   // int nombreLettersTotal;
       
   // nombreLettersTotal = ft_strlen(totalString, '\0');
    calculmots(totalString);    
    return(0);
}

int    main(void)
{
    char phrase[]= "hello my name is mika";
    ft_totalty(phrase);
}
