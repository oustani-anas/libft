/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoustani <aoustani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 19:17:18 by aoustani          #+#    #+#             */
/*   Updated: 2021/11/30 22:20:58 by aoustani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dst, int c, size_t len)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)dst;
	i = 0;
	while (i < len)
	{
		str[i++] = (unsigned char)c;
	}
	return (dst);
}
