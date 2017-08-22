/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astepovy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 18:46:37 by astepovy          #+#    #+#             */
/*   Updated: 2016/09/08 21:45:31 by astepovy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		sym(char *str, int i)
{
	int n;

	n = 0;
	while (str[i] != '\t' && str[i] != '\n' && str[i] != ' ' && str[i])
	{
		i++;
		n++;
	}
	return (n);
}

int		ft_nb_words(char *str)
{
	int i;
	int words;
	int isword;

	i = 0;
	words = 0;
	isword = 0;
	while (str[i])
	{
		while (str[i] != '\n' && str[i] != '\t' && str[i] != ' ' && str[i])
		{
			isword = 1;
			i++;
		}
		if (str[i] == '\n' || str[i] == '\t' || str[i] == ' ' || str[i] == '\0')
		{
			if (isword == 1)
				words += 1;
			isword = 0;
			if (str[i] != '\0')
				i += 1;
			i += (str[i] == '\0') ? 0 : 1;
		}
	}
	return (words);
}

char	**ft_split_whitespaces(char *str)
{
	int	word;
	int	i;
	int	j;
	char**tab;

	if ((tab = malloc(sizeof(char**) * (ft_nb_words(str) + 1))) == NULL)
		return (0);
	i = 0;
	word = 0;
	while (str[i])
	{
		while ((str[i] == ' ' || str[i] == '\t' || str[i] == '\n') && (str[i]))
			i++;
		if (str[i])
		{
			j = 0;
			if (((tab[word] = malloc(sizeof(char*) * (sym(str, i) + 1))) == 0))
				return (0);
			while (str[i] != '\n' && str[i] != '\t' && str[i] != ' ' && str[i])
				tab[word][j++] = str[i++];
			tab[word++][j] = '\0';
		}
	}
	tab[word] = 0;
	return (tab);
}
