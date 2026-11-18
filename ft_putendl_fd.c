/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaalsh <hamaalsh@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 17:15:47 by hamaalsh          #+#    #+#             */
/*   Updated: 2026/11/18 17:15:50 by hamaalsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <unistd.h>

void ft_putendl_fd(char *s, int fd) {

    write(fd, s, ft_strlen(s));
    write(fd, "\n", 1);

}

