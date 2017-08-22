/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astepovy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 16:47:47 by astepovy          #+#    #+#             */
/*   Updated: 2016/09/13 17:38:05 by astepovy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*new_list;
	t_list	*new_element;

	i = 0;
	new_list = NULL;
	while (i < ac)
	{
		new_element = ft_create_elem(av[i]);
		new_element->next = new_list;
		new_list = new_element;
		i++;
	}
	return (new_list);
}
