/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astepovy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 12:28:44 by astepovy          #+#    #+#             */
/*   Updated: 2016/09/08 13:27:52 by astepovy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*pointer;

	pointer = (char*)malloc(*src * sizeof(char));
	i = 0;
	while (src[i])
	{
		pointer[i] = src[i];
		i++;
	}
	pointer[i] = '\0';
	return (pointer);
}
