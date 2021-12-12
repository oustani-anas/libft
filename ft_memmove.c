/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoustani <aoustani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 11:56:04 by aoustani          #+#    #+#             */
/*   Updated: 2021/12/04 09:34:55 by aoustani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dd;
	unsigned char	*ss;

	dd = (unsigned char *)dst;
	ss = (unsigned char *)src;
	if (!dst && !src)
		return (0);
	if (dst > src)
	{
		while (0 < len--)
		{
			dd[len] = ss[len];
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
