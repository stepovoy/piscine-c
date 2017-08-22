/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astepovy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 20:29:41 by astepovy          #+#    #+#             */
/*   Updated: 2016/09/06 20:37:17 by astepovy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		is_alpha(char c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	if ((c >= '0') && (c <= '9'))
		return (1);
	return (0);
}

int		is_uppercase(char c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	return (0);
}

char	is_lowercase(char c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int counter;
	int word;

	counter = 0;
	word = 0;
	while (str[counter])
	{
		if ((is_lowercase(str[counter])) && (word == 0))
			str[counter] = str[counter] - 32;
		else if ((is_uppercase(str[counter])) && (word == 1))
			str[counter] = str[counter] + 32;
		if (!(is_alpha(str[counter])))
			word = 0;
		else
			word = 1;
		counter++;
	}
	return (str);
}
