/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astepovy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/09 15:39:35 by astepovy          #+#    #+#             */
/*   Updated: 2016/09/09 15:40:29 by astepovy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FT_PERSO_H
# define __FT_PERSO_H
# include <string.h>
# define SAVE_AUSTIN_POWERS "BY ALL MEANS POSSIBLE"

typedef	struct		s_perso
{
	char	*name;
	float	life;
	int		age;
	char	*profession;
}					t_perso;
#endif
