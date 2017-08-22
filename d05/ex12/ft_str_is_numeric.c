/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astepovy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 12:17:02 by astepovy          #+#    #+#             */
/*   Updated: 2016/09/06 20:39:44 by astepovy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
{
	int counter;

	counter = 0;
	while (str[counter])
	{
		if (str[counter] < 48 || str[counter] > 57)
			return (0);
		counter++;
	}
	return (1);
}
