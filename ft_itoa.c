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

static int	ft_count_chars(long n)
{
	int	count;

	count = 0;
	if (n <= 0)
		count = 1;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	long	m;
	int		count;
	int		j;

	m = n;
	count = ft_count_chars(m);
	ptr = malloc((count + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	if (m < 0)
	{
		ptr[0] = '-';
		m = -m;
	}
	ptr[count] = '\0';
	j = 0;
	while (m != 0 || j == 0)
	{
		ptr[count - 1 - j] = (m % 10) + '0';
		m = m / 10;
		j++;
	}
	return (ptr);
}
