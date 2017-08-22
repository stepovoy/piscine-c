/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astepovy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 12:58:58 by astepovy          #+#    #+#             */
/*   Updated: 2016/09/06 20:44:11 by astepovy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int counter;

	counter = 0;
	while (str[counter])
		if (str[counter] < 32 || str[counter++] > 127)
			return (0);
	return (1);
}
