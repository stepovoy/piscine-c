/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astepovy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/09 09:36:44 by astepovy          #+#    #+#             */
/*   Updated: 2016/09/09 09:36:45 by astepovy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	if (base == 1)
		return (0);
	if (base % 2)
		return (1 + ft_collatz_conjecture(base * 3 + 1));
	return (1 + ft_collatz_conjecture(base / 2));
}
