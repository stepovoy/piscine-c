/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astepovy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/15 12:06:17 by astepovy          #+#    #+#             */
/*   Updated: 2016/09/15 12:07:46 by astepovy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
		ft_putchar(*str++);
}

int		ft_display_file(char *filename)
{
	int		fh;
	char	buf[129];
	int		len;

	if ((fh = open(filename, O_RDONLY)) == -1)
		return (1);
	while ((len = read(fh, buf, 128)))
	{
		buf[len] = '\0';
		ft_putstr(buf);
	}
	close(fh);
	return (0);
}

int		main(int argc, char *argv[])
{
	if (argc == 2)
	{
		if (ft_display_file(argv[1]) == 1)
		{
			ft_putstr("An read error occurred\n");
			return (1);
		}
		return (0);
	}
	else if (argc > 2)
	{
		ft_putstr("Too many arguments.\n");
		return (1);
	}
	else
	{
		ft_putstr("File name missing.\n");
		return (1);
	}
}
