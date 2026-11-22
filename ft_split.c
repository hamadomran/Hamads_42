/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaalsh <hamaalsh@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 16:07:19 by hamaalsh          #+#    #+#             */
/*   Updated: 2026/11/17 16:07:26 by hamaalsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char	**ft_free_all(char **ptr, int k)
{
	while (k > 0)
	{
		k--;
		free(ptr[k]);
	}
	free(ptr);
	return (NULL);
}

static int	ft_count_words(char const *s, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static char	*ft_make_word(char const *s, char c)
{
	char	*word;
	int		size;
	int		i;

	size = 0;
	while (s[size] != c && s[size] != '\0')
		size++;
	word = malloc((size + 1) * sizeof(char));
	if (word == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int		j;
	int		k;

	ptr = malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (ptr == NULL)
		return (NULL);
	j = 0;
	k = 0;
	while (s[j] != '\0')
	{
		if (s[j] != c && (j == 0 || s[j - 1] == c))
		{
			ptr[k] = ft_make_word(&s[j], c);
			if (ptr[k] == NULL)
				return (ft_free_all(ptr, k));
			k++;
			while (s[j] != c && s[j] != '\0')
				j++;
		}
		else
			j++;
	}
	ptr[k] = NULL;
	return (ptr);
}
