/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astepovy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/04 16:44:17 by astepovy          #+#    #+#             */
/*   Updated: 2016/09/04 16:44:22 by astepovy         ###   ########.fr       */
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
			if ((col == 1 || col == x) && row == 1)
				ft_putchar('A');
			else if ((col == 1 || col == x) && row == y)
				ft_putchar('C');
			else if (row == 1 || row == y || col == 1 || col == x)
				ft_putchar('B');
			else
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
