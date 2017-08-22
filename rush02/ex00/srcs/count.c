/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtitenko <dtitenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/18 17:18:42 by dtitenko          #+#    #+#             */
/*   Updated: 2016/09/18 19:01:40 by dtitenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		count_x(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\n')
		i++;
	return (i);
}

int		count_y(char *str)
{
	int i;
	int cnt;

	i = -1;
	cnt = 0;
	while (str[++i])
		if (str[i] == '\n')
			cnt++;
	return (cnt);
}
