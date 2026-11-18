/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaalsh <hamaalsh@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 17:21:52 by hamaalsh          #+#    #+#             */
/*   Updated: 2026/11/18 17:21:56 by hamaalsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <unistd.h>

void ft_putnbr_fd(int n, int fd) {

  long c;
  long k;

  c = n;
  if (c < 0) {
      c = -c;
      write(fd, "-", 1);
  }

  if (c >= 10) {
      ft_putnbr_fd( c/10, fd);
  }
    k = c % 10 + '0';
    write(fd,&k, 1);

}

/* long c;
int neg;


neg = 0;
c = n;

if (c < 0) {
neg = 1;
c = -c;
}

if (c == 0)
write(fd, '0', 1);

while (c != 0 ) {

} */
