/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtitenko <dtitenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/18 16:14:52 by dtitenko          #+#    #+#             */
/*   Updated: 2016/09/18 20:19:01 by dtitenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"
#include "string.h"
#include "rush0x.h"
#include <fcntl.h>

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (0);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	find_answ(int x, int y, char *input)
{
	int		flag;
	t_rush	rushes[5];
	int		i;

	rushes[0] = &rush00;
	rushes[1] = &rush01;
	rushes[2] = &rush02;
	rushes[3] = &rush03;
	rushes[4] = &rush04;
	flag = 0;
	i = -1;
	while (++i <= 4)
		if (!ft_strcmp(input, rushes[i](x, y)))
		{
			print_answer(i, x, y, flag);
			flag = 1;
		}
	if (flag == 0)
		ft_putstr("aucune");
}

int		main(void)
{
	char	input[30 * 1024];

	input[0] = '\0';
	if (read(0, input, 30 * 1024))
	{
		find_answ(count_x(input), count_y(input), input);
		ft_putstr("\n");
	}
	return (0);
}
