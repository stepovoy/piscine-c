/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtitenko <dtitenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/18 18:45:23 by dtitenko          #+#    #+#             */
/*   Updated: 2016/09/18 19:38:07 by dtitenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush0x.h"

void	ft_first_last_line(int x, int flag, char *rush, char *chars)
{
	int		i;
	char	left;
	char	right;
	char	mid;

	i = -1;
	mid = chars[4];
	if (flag == 0)
	{
		left = chars[0];
		right = chars[1];
	}
	else
	{
		left = chars[2];
		right = chars[3];
	}
	ft_add_char(rush, left);
	while (++i < x - 2)
		ft_add_char(rush, mid);
	if (x > 1)
		ft_add_char(rush, right);
	ft_add_char(rush, '\n');
}

void	ft_mid_line(int x, char *rush, char *chars)
{
	char	mid_l_r;
	int		i;

	i = -1;
	mid_l_r = chars[5];
	ft_add_char(rush, mid_l_r);
	while (++i < x - 2)
		ft_add_char(rush, ' ');
	if (x > 1)
		ft_add_char(rush, mid_l_r);
	ft_add_char(rush, '\n');
}

void	ft_mid_lines(int x, int y, char *rush, char *chars)
{
	int i;

	i = -1;
	while (++i < y - 2)
		ft_mid_line(x, rush, chars);
}
