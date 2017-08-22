/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astepovy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 12:37:05 by astepovy          #+#    #+#             */
/*   Updated: 2016/09/06 20:42:24 by astepovy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
{
	int counter;

	counter = 0;
	while (str[counter])
		if (str[counter] < 'A' || str[counter++] > 'Z')
			return (0);
	return (1);
}
