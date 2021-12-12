/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoustani <aoustani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 22:50:55 by aoustani          #+#    #+#             */
/*   Updated: 2021/12/08 18:20:20 by aoustani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_word(char const *s, char c)
{
	int	lw;
	int	w;

	lw = 0;
	w = 0;
	while (s[lw])
	{
		if (s[lw] != c && (s[lw + 1] == c || s[lw + 1] == '\0'))
		w++;
		lw++;
	}
	return (w);
}

static char	**free_word(char **s)
{
	while (*s)
		free(*s++);
	free (s);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**word;
	int		lwrd;
	int		j;

	j = 0;
	if (!s)
		return (NULL);
	word = malloc ((ft_count_word(s, c) + 1) * sizeof(char *));
	if (!word)
		return (NULL);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		lwrd = 0;
		while (s[lwrd] != c && s[lwrd])
			lwrd++;
		if (*s && lwrd)
			word[j++] = ft_substr(s, 0, lwrd);
		if (lwrd != 0 && !(word[j - 1]))
			return (free_word(word));
		s += lwrd;
	}
	word[j] = NULL;
	return (word);
}
