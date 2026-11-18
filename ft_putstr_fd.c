/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaalsh <hamaalsh@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 16:57:46 by hamaalsh          #+#    #+#             */
/*   Updated: 2026/11/18 16:57:50 by hamaalsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <unistd.h>

void ft_putstr_fd(char *s, int fd) {
    write(fd, s, ft_strlen(s));
}

