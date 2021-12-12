/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoustani <aoustani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 20:58:21 by aoustani          #+#    #+#             */
/*   Updated: 2021/12/08 17:52:49 by aoustani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	di;
	size_t	si;
	size_t	t;

	di = 0;
	si = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	else if (dstsize < ft_strlen(dst))
		t = ft_strlen(src) + dstsize;
	else
		t = ft_strlen(src) + ft_strlen(dst);
	while (dst[di])
		di++;
	while (src[si] && di < dstsize - 1)
	{
		dst[di] = src[si];
		di++;
		si++;
	}
	dst[di] = '\0';
	return (t);
}
