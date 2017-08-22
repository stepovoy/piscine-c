/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strings.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtitenko <dtitenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/18 13:28:48 by dtitenko          #+#    #+#             */
/*   Updated: 2016/09/18 19:39:48 by dtitenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = -1;
	while (str[++i])
		ft_putchar(str[i]);
}

void	ft_putnbr(int nb)
{
	long nb_l;
	long temp;
	long size;

	nb_l = nb;
	size = 1;
	if (nb_l < 0)
	{
		ft_putchar('-');
		nb_l = -nb_l;
	}
	temp = nb_l;
	while ((temp /= 10) > 0)
		size *= 10;
	temp = nb_l;
	while (size)
	{
		ft_putchar((char)(temp / size) + 48);
		temp %= size;
		size /= 10;
	}
}
