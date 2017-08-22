/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astepovy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 19:16:43 by astepovy          #+#    #+#             */
/*   Updated: 2016/09/06 19:19:44 by astepovy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	char *s;
	char *d;

	d = dest;
	s = src;
	if (size != 0)
	{
		while (--size != 0)
			if (*s != '\0' && *d != '\0')
				*d++ = *s++;
		*d = (*d != '\0') ? '\0' : *d;
	}
	while (*s != '\0')
		s++;
	return (s - src);
}
