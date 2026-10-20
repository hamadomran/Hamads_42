/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaalsh <hamaalsh@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 15:39:56 by hamaalsh          #+#    #+#             */
/*   Updated: 2026/10/20 15:40:06 by hamaalsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <string.h>


int ft_atoi(const char *str)
{
    int i;
    int j;
    int sign;
    sign = 1;
    i = 0;
    j = 0;

    while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }

    while (str[i] >= '0' && str[i] <= '9')
    {
        j = 10 * j;
        j = j + (str[i] - '0');
        i++;
    }

    return (j * sign);
}
//skip all characters until an integer is reached
//To convert a string number to an integer, take the number - '0'. That gives you only the first number.
//Say the string is "123", you took the first character "1" - "0" = 1. Initial value = 0 so 0 + 1 = 1
//Then you do 1*10 = 10
//Then take the second character "2" - "0" = 2. Initial value is 10 so 10+2 = 12
//Then you do 12 * 10 = 120
//Then take the third character "3" - "0" = 3. Initial value is 120 so 120+3 = 123