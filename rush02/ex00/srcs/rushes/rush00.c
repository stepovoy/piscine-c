/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtitenko <dtitenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/04 12:22:11 by dtitenko          #+#    #+#             */
/*   Updated: 2016/09/18 19:43:51 by dtitenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush0x.h"

char	*rush00(int x, int y)
{
	char *rushx;
	char *chars;

	chars = "oooo-|";
	rushx = malloc(x * y + y + 1);
	rushx[0] = '\0';
	if (x > 0 && y > 0)
	{
		ft_first_last_line(x, 0, rushx, chars);
		ft_mid_lines(x, y, rushx, chars);
		if (y > 1)
			ft_first_last_line(x, 1, rushx, chars);
		return (rushx);
	}
	else
		return (NULL);
}
