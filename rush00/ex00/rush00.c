/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astepovy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/04 16:42:08 by astepovy          #+#    #+#             */
/*   Updated: 2016/09/04 16:42:24 by astepovy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int row;
	int col;

	row = 1;
	while (row <= y && (x > 0 && y > 0))
	{
		col = 1;
		while (col <= x)
		{
			if ((col == 1 || col == x) && (row == 1 || row == y))
				ft_putchar('o');
			else if (row == 1 || row == y)
				ft_putchar('-');
			else if (col == 1 || col == x)
				ft_putchar('|');
			else
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
