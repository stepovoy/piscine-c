/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astepovy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/09 09:33:16 by astepovy          #+#    #+#             */
/*   Updated: 2016/09/09 09:33:22 by astepovy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_a(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

char	rot(char c)
{
	if ((c >= 'a' && c <= 'j') || (c >= 'A' && c <= 'J'))
		return (c + 16);
	if ((c >= 'k' && c <= 'z') || (c >= 'K' && c <= 'Z'))
		return (c - 10);
	else
		return (0);
}

char	*ft_rot42(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (is_a(str[i]))
			str[i] = rot(str[i]);
		i++;
	}
	return (str);
}
