/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astepovy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 21:00:15 by astepovy          #+#    #+#             */
/*   Updated: 2016/09/07 21:00:16 by astepovy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char const *argv[])
{
	int i;
	int j;

	i = argc - 1;
	while (i > 0 && argc > 1)
	{
		j = 0;
		while (argv[i][j])
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		i--;
		ft_putchar('\n');
	}
	return (0);
}
