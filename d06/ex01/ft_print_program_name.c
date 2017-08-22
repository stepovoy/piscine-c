/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astepovy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 20:59:44 by astepovy          #+#    #+#             */
/*   Updated: 2016/09/07 20:59:46 by astepovy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char *argv[])
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (argv[i][j] && argc > 0)
	{
		ft_putchar(argv[i][j]);
		j++;
	}
	ft_putchar('\n');
	return (0);
}
