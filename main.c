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
int main(void) {

    char str[] = "Hello";
    char test[10];
    char c = 'l';

    test = ft_strchr(str, c);

    printf("%s", str);

}
