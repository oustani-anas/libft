/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoustani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 22:02:10 by aoustani          #+#    #+#             */
/*   Updated: 2021/12/06 22:02:50 by aoustani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*cur;

	if (lst)
	{
		while (*lst)
		{
			cur = (*lst)->next;
			ft_lstdelone(*lst, del);
			(*lst) = cur;
		}
	}
}
