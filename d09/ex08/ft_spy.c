/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astepovy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/09 09:37:01 by astepovy          #+#    #+#             */
/*   Updated: 2016/09/09 09:37:03 by astepovy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		size;
	char	*str;

	size = 0;
	while (src[size])
		size++;
	str = (char *)malloc(sizeof(*str) * (size + 1));
	while (*src)
		*str++ = *src++;
	*str = '\0';
	return (str - size * sizeof(*str));
}

char	*word(char *str)
{
	while (*str == ' ' || *str == '\t' || *str == '\v' || *str == '\n')
		str++;
	return (str);
}

int		forb_word(char *str, char **words)
{
	char *temp;
	char *str0;

	str0 = word(str);
	while (*words)
	{
		str = str0;
		temp = *words;
		while ((*temp == *str || (*temp - 'a' + 'A') == *str) && *(++temp))
			str++;
		str++;
		str = word(str);
		if (!*temp && !*str)
			return (1);
		words++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	char	**words;

	words = (char **)malloc(sizeof(*words) * 4);
	words[0] = ft_strdup("attack");
	words[1] = ft_strdup("president");
	words[2] = ft_strdup("powers");
	words[3] = 0;
	while (--argc)
	{
		if (forb_word(*++argv, words))
		{
			write(1, "Alert!!!\n", 9);
			return (0);
		}
	}
}
