/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaalsh <hamaalsh@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 11:14:15 by hamaalsh          #+#    #+#             */
/*   Updated: 2026/11/19 11:14:18 by hamaalsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

unsigned int ft_lstsize(t_list *lst) {

    unsigned int i;

    i = 0;
    while (lst != NULL) {
        i++;
        lst = lst->next;
    }

    return (i);
}

