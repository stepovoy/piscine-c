/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astepovy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 21:04:42 by astepovy          #+#    #+#             */
/*   Updated: 2016/09/06 21:04:45 by astepovy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int i;
	int neg_flag;
	int num;

	i = 0;
	neg_flag = 0;
	num = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\v' ||
	str[i] == '\r' || str[i] == '\f' || str[i] == '\n')
		i++;
	if (str[i] == 45)
		neg_flag = 1;
	if (str[i] == 45 || str[i] == 43)
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		num = num * 10;
		num = num + ((int)str[i] - 48);
		i++;
	}
	if (neg_flag == 1)
		return (-num);
	else
		return (num);
}
