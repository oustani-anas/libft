/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoustani <aoustani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 23:00:39 by aoustani          #+#    #+#             */
/*   Updated: 2021/12/08 14:19:41 by aoustani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (0);
	str = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!str)
		return (0);
	i = 0;
	j = 0;
	while (s1[i])
	{
		if (i <= ft_strlen(s1))
			str[j++] = s1[i++];
	}
	i = 0;
	while (s2[i])
	{
		if (i <= ft_strlen(s2))
			str[j++] = s2[i++];
	}
	str[j] = '\0';
	return (str);
}
