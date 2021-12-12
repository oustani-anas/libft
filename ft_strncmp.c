/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoustani <aoustani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 09:47:59 by aoustani          #+#    #+#             */
/*   Updated: 2021/12/06 06:53:52 by aoustani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*ds;
	unsigned char	*sr;

	ds = (unsigned char *)s1;
	sr = (unsigned char *)s2;
	if (n == 0)
		return (0);
	i = 0;
	while ((ds[i] == sr[i] && ds[i] != '\0' && sr[i] != '\0') && i < n - 1)
		i++;
	return (ds[i] - sr[i]);
}
