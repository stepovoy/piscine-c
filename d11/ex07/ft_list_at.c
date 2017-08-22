/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astepovy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/14 14:12:23 by astepovy          #+#    #+#             */
/*   Updated: 2016/09/14 14:12:45 by astepovy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	i;
	t_list			*elem;

	i = 1;
	elem = begin_list;
	if (!elem)
		return (0);
	while (i < nbr)
	{
		elem = elem->next;
		if (!elem)
			return (0);
		i++;
	}
	return (elem);
}
