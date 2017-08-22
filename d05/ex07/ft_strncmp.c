/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astepovy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 21:05:27 by astepovy          #+#    #+#             */
/*   Updated: 2016/09/06 21:05:44 by astepovy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				answer;
	unsigned int	i;

	i = -1;
	answer = 0;
	while (s1[++i] != '\0' && !(answer) && i < n)
		answer = s1[i] - s2[i];
	answer = (!answer) ? (s1[i] - s2[i]) : answer;
	return (answer);
}
