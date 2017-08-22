/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astepovy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/03 17:36:09 by astepovy          #+#    #+#             */
/*   Updated: 2016/09/03 18:52:55 by astepovy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_sqrt(int nb)
{
	int sqrt;

	sqrt = 0;
	if (nb > 0)
	{
		while (sqrt * sqrt < nb)
		{
			sqrt++;
		}
		if (sqrt * sqrt == nb)
			return (sqrt);
		else
			return (0);
	}
	else
		return (0);
}
