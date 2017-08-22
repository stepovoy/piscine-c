/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astepovy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/09 15:41:03 by astepovy          #+#    #+#             */
/*   Updated: 2016/09/09 15:41:05 by astepovy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DOOR_H
# define FT_DOOR_H
# include <unistd.h>
# define TRUE 1
# define OPEN 1
# define EXIT_SUCCESS 0
# define CLOSE -1
# define FALSE 0

typedef int		t_bool;

typedef struct	s_bool
{
	t_bool state;
}				t_door;

void			ft_putstr(char *str);
t_bool			close_door(t_door *door);
t_bool			is_door_open(t_door *door);
t_bool			is_door_close(t_door *door);
t_bool			open_door(t_door *door);

#endif
