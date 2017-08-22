/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_char.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtitenko <dtitenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/18 16:22:48 by dtitenko          #+#    #+#             */
/*   Updated: 2016/09/18 19:06:07 by dtitenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include "strings.h"

void	ft_add_char(char *dest, char c)
{
	int	i;

	i = ft_strlen(dest);
	dest[i] = c;
	dest[++i] = '\0';
}

void	print_answer(int rushxx, int x, int y, int flg)
{
	if (flg)
		ft_putstr(" || ");
	ft_putstr("[rush-0");
	ft_putnbr(rushxx);
	ft_putstr("] [");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putstr("]");
}
