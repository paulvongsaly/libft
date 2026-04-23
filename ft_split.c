/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 22:32:14 by marvin            #+#    #+#             */
/*   Updated: 2026/04/23 22:32:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int    count_words(char const *s, char c)
{
	int	i;
	int	count;
	
	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static int	word_len(char const *s, char c)
{
	int	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}
static char	*get_word(char const *s, char c)
{
	int		i;
	int		len;
	char	*word;

	i = 0;
	len = word_len(s, c);
	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static char	**free_all(char **res, int j)
{
	while (j--)
		free(res[j]);
	free(res);
	return (NULL);
}

char    **ft_split(char const *s, char c)
{
	char    **res;
	int	 	i;
	int		j;
	
	res = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!res)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			res[j] = get_word(&s[i], c);
			if (!res[j])
				return (free_all(res, j));
			j++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	res[j] = NULL;
	return (res);
}
