/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaalsh <hamaalsh@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 17:13:49 by hamaalsh          #+#    #+#             */
/*   Updated: 2026/10/25 17:13:52 by hamaalsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	void			*ptr;
	unsigned char	*p_ptr;
	size_t			i;

	i = 0;
	while (s1[i] != '\0')
		i++;
	ptr = ft_calloc(i + 1, sizeof(char));
	p_ptr = (unsigned char *)ptr;
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		p_ptr[i] = s1[i];
		i++;
	}
	p_ptr[i] = '\0';
	return (ptr);
}
