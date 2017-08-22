/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compact.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astepovy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/09 15:41:19 by astepovy          #+#    #+#             */
/*   Updated: 2016/09/09 15:41:21 by astepovy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_compact(char **tab, int length)
{
	int		i;
	int		s_of_shift;

	i = -1;
	s_of_shift = 0;
	while (++i < length)
	{
		while (!tab[i] && i++ < length)
			s_of_shift++;
		tab[i - s_of_shift] = tab[i];
		tab[i] = 0;
	}
	return (length - s_of_shift);
}
