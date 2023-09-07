/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   modificatewithtable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgervais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 15:47:06 by mgervais          #+#    #+#             */
/*   Updated: 2023/09/06 15:47:13 by mgervais         ###   ########.fr       */
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

int     ft_strlen(char *str, char delimiteur) //str = nombre de lettre
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

char copy(char *src, int sizemot)//reception de hello et 
{
    int i;
    char *dest;

    dest = (char*)malloc(sizeof(char)* sizemot + 1);
    i = 0;
    while(src[i]!= sizemot)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return(&dest);
}

char createarray(char *str, int nombremots, int nombreletters)//reception "hello...", nombre de mots(espace) et 21 
{
    char *array;
    char **totalarray;
    int i;
    
    i = 0; 
    totalarray = (char**)malloc(sizeof(char*) * (nombremots + 1);
	   while (i < nombremots + 1)
	   {
	   	 totalarray[i] = copy(str), nombreletters + 1);//envoi de hello et hchhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh
	   }
    ft_putstr(str);
    return(*str);
}

void    countletters(char *totalstring, int nombreletters)//reception "hello..." et 21
{
    int i;
    int nombremots;
    
    i = 0;
    nombremots = 0; 
    while (totalstring[i] != '\0')
    {
    
    	if((totalstring[i] == ' ') || ((totalstring[i] >='\b') && (totalstring[i] <= '\r')))
    		nombremots ++;
        i++;
    }
    createarray(totalstring, nombremots, nombreletters);//envoi de "hello...", nombre de mots(espace) et 21    
}

#include<stdio.h>
int    ft_totalty(char *str)
{
    int nombreletters;
       
    nombreletters = ft_strlen(str, '\0'); //retour "21" 
    countletters(str, nombreletters);    //envoi "hello"...et 21
    return(0);
}

int    main(void)
{
    char phrase[]= "hello my name is mika";
    ft_totalty(phrase);
}

