/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astepovy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 13:32:03 by astepovy          #+#    #+#             */
/*   Updated: 2016/09/08 14:22:38 by astepovy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*out;
	int		i;

	if (max <= min)
		return (NULL);
	out = (int*)malloc((max - min) * sizeof(int));
	i = -1;
	while (max > min && ++i < max - min)
		out[i] = min + i;
	return (out);
}
