/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaalsh <hamaalsh@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 13:17:11 by hamaalsh          #+#    #+#             */
/*   Updated: 2026/10/17 13:17:28 by hamaalsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <unistd.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	m;

	k = ft_strlen(dst);
	i = ft_strlen(dst);
	j = 0;
	m = ft_strlen(src);
	if (dstsize > 0)
	{
		while (i < dstsize - 1 && src[j])
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		if (i < dstsize)
			dst[i] = '\0';
	}
	if (dstsize < k)
		return (m + dstsize);
	return (k + m);
}
