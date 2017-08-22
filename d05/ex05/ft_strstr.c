/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astepovy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 15:50:10 by astepovy          #+#    #+#             */
/*   Updated: 2016/09/05 17:58:43 by astepovy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int temp;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		temp = i;
		j = 0;
		while (to_find[j] != '\0' && str[j] != '\0' && str[temp] == to_find[j])
		{
			temp++;
			j++;
		}
		if (to_find[j] == '\0')
			return (str + i);
		i++;
	}
	return (0);
}
