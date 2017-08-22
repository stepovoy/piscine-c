/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astepovy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/09 09:42:52 by astepovy          #+#    #+#             */
/*   Updated: 2016/09/09 09:42:54 by astepovy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_max(int *tab, int length)
{
	int max;
	int i;

	i = 0;
	max = tab[0];
	while (i < length)
	{
		max = (tab[i] > max) ? tab[i] : max;
		i++;
	}
	return (max);
}
