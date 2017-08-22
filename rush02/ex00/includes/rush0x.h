/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush0x.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtitenko <dtitenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/18 13:42:02 by dtitenko          #+#    #+#             */
/*   Updated: 2016/09/18 19:37:38 by dtitenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH0X_H
# define RUSH0X_H
# include "strings.h"
# include "rush.h"
# include <stdlib.h>

void	ft_add_char(char *dest, char c);
void	ft_first_last_line(int x, int flag, char *rush, char *chars);
void	ft_mid_line(int x, char *rush, char *chars);
void	ft_mid_lines(int x, int y, char *rush, char *chars);

#endif
