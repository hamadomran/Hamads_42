/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaalsh <hamaalsh@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 19:10:22 by hamaalsh          #+#    #+#             */
/*   Updated: 2026/10/25 19:10:24 by hamaalsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substring;
	size_t			i;
	unsigned int	k;
	size_t			size;

	k = ft_strlen(s);
	if (k - start < len)
		size = k - start;
	else
		size = len;
	if (start >= k)
		size = 0;
	substring = malloc(sizeof(char) * (size + 1));
	if (substring == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		substring[i] = s[start + i];
		i++;
	}
	substring[i] = '\0';
	return (substring);
}
