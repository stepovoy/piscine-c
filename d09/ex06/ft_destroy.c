/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astepovy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/09 09:35:51 by astepovy          #+#    #+#             */
/*   Updated: 2016/09/09 09:36:04 by astepovy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_ultimator.h"

void	ft_destroy(char ***factory)
{
	char **d;
	char *z;

	d = *factory;
	while (d)
	{
		z = *d;
		while (z)
			free(z++);
		free(z);
		d++;
		free(d - 1);
	}
	free(d);
	free(factory);
}
