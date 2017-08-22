/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astepovy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 17:14:31 by astepovy          #+#    #+#             */
/*   Updated: 2016/09/08 21:42:52 by astepovy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		cout_argv_len(int argc, char **argv)
{
	int	len;
	int	i;
	int	j;

	i = 1;
	len = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			len++;
			j++;
		}
		i++;
	}
	return (len);
}

void	ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	if (i > 0)
	{
		dest[i] = '\n';
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*argline;
	int		len;
	int		i;

	i = 1;
	len = cout_argv_len(argc, argv);
	argline = (char *)malloc(sizeof(*argline) * len + argc - 1);
	while (i < argc)
	{
		ft_strcat(argline, argv[i]);
		i++;
	}
	return (argline);
}
