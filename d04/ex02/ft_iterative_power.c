/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astepovy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/03 15:42:19 by astepovy          #+#    #+#             */
/*   Updated: 2016/09/03 20:29:00 by astepovy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int n;

	n = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
		while (power > 0)
		{
			n *= nb;
			power--;
		}
	return (n);
}
