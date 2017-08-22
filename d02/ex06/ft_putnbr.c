/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astepovy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 21:00:46 by astepovy          #+#    #+#             */
/*   Updated: 2016/09/01 21:02:41 by astepovy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int num_count;
	int num;
	int power;

	num = nb;
	num_count = 0;
	while ((num / 10) != 0)
	{
		num /= 10;
		num_count++;
	}
	while (num_count != -1)
	{
		power = num_count;
		num = 1;
		while (power > 0)
		{
			num *= 10;
			power -= 1;
		}
		ft_putchar('0' + (nb / num) % 10);
		num_count -= 1;
	}
}
