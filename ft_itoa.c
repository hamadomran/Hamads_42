/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaalsh <hamaalsh@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 18:25:29 by hamaalsh          #+#    #+#             */
/*   Updated: 2026/11/17 18:25:33 by hamaalsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char *ft_itoa(int n) {

    int count;
    char *ptr;
    int neg;
    long m;
    long k;
    int j;

    neg = 0;
    j = 0;
    m = n;
    k = n;
    count = 0;

    if (k == 0)
        count++;

    if (k < 0) {
        count++;
        k = -k;
    }

    while (k != 0) {
        k = k / 10;
        count++;
    }

    ptr = malloc((count+1) * sizeof(char));
    if (ptr == NULL)
        return (NULL);

    if (m < 0) {
        neg = 1;
        m = -m;
    }

    if (m == 0) {
        ptr[0] = '0';
        ptr[1] = '\0';
        return (ptr);
    }

    ptr[count - j] = '\0';
    while (m != 0) {
        ptr[count - 1 - j] = (m % 10) + '0';
        m = m / 10;
        j++;
    }

    if (neg == 1)
        ptr[count - 1 - j] = '-';

    return (ptr);

}

