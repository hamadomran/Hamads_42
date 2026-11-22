/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaalsh <hamaalsh@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 19:25:24 by hamaalsh          #+#    #+#             */
/*   Updated: 2026/10/25 19:25:28 by hamaalsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		k;
	char	*s3;

	j = ft_strlen(s2);
	i = ft_strlen(s1);
	k = 0;
	s3 = malloc(sizeof(char) * (i + j + 1));
	if (s3 == NULL)
		return (NULL);
	while (k < i)
	{
		s3[k] = s1[k];
		k++;
	}
	k = 0;
	while (k < j)
	{
		s3[k + i] = s2[k];
		k++;
	}
	s3[k + i] = '\0';
	return (s3);
}
