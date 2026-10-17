/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaalsh <hamaalsh@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 21:38:31 by hamaalsh          #+#    #+#             */
/*   Updated: 2026/10/13 21:38:31 by hamaalsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <string.h>
int	main(void)
{
    char *test;
    char *hay="abbabacaac";
    char *needle="aa";
    test = ft_strnstr(hay,  needle, 5);
    printf("%c and %ld", *test, test-hay);
}