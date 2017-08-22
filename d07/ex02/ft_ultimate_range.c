/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astepovy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 14:33:18 by astepovy          #+#    #+#             */
/*   Updated: 2016/09/08 16:33:21 by astepovy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;

	if (max <= min)
		return (0);
	*range = (int*)malloc((max - min) * sizeof(int));
	i = -1;
	while (max > min && ++i < max - min)
		(*range)[i] = min + i;
	return (max - min);
}
