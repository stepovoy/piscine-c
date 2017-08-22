/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astepovy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 18:49:35 by astepovy          #+#    #+#             */
/*   Updated: 2016/09/06 21:16:26 by astepovy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int dest_size;
	unsigned int src_size;

	i = 0;
	while (dest[i] != '\0')
		i++;
	dest_size = i;
	i = 0;
	while (src[i] != '\0')
		i++;
	src_size = i;
	i = 0;
	while (src[i] != '\0' && ((dest_size + i) < (size - 1)))
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	dest[dest_size + i] = '\0';
	return (src_size + ((dest_size < size) ? dest_size : size));
}
