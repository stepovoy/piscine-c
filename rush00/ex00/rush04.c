/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astepovy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/04 16:45:04 by astepovy          #+#    #+#             */
/*   Updated: 2016/09/04 16:45:07 by astepovy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int r;
	int c;

	r = 1;
	while (r <= y && (x > 0 && y > 0))
	{
		c = 1;
		while (c <= x)
		{
			if ((c == 1 && r == 1) || (c == x && r == y && c > 1 && r > 1))
				ft_putchar('A');
			else if ((c == x && r == 1) || (c == 1 && r == y))
				ft_putchar('C');
			else if (r == 1 || r == y || c == 1 || c == x)
				ft_putchar('B');
			else
				ft_putchar(' ');
			c++;
		}
		ft_putchar('\n');
		r++;
	}
}
