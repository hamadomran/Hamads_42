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
    char source[] = "GeeksForGeeks";

    char *target = ft_strdup(source);

    printf("%s", target);
}


//int ft_memcmp(const void *s1, const void *s2, size_t n)

