/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astepovy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/14 13:14:42 by astepovy          #+#    #+#             */
/*   Updated: 2016/09/14 13:15:01 by astepovy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list **begin_list)
{
	t_list	*elem;
	t_list	*buf;

	buf = *begin_list;
	while (buf)
	{
		elem = buf;
		buf = buf->next;
		free(elem);
	}
	*begin_list = 0;
}
