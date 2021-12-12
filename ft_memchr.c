/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoustani <aoustani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 14:27:59 by aoustani          #+#    #+#             */
/*   Updated: 2021/12/04 09:33:58 by aoustani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p1;

	p1 = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (p1[i] == (unsigned char)c)
		{
			return ((unsigned char *)s + i);
		}
		i++;
	}
	return (0);
}
