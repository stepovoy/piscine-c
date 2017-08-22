/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtitenko <dtitenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/18 17:30:26 by dtitenko          #+#    #+#             */
/*   Updated: 2016/09/18 20:12:04 by dtitenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H

void	print_answer(int rushxx, int x, int y, int flg);
typedef	char	*(*t_rush)(int, int);
char	*rush00(int x, int y);
char	*rush01(int x, int y);
char	*rush02(int x, int y);
char	*rush03(int x, int y);
char	*rush04(int x, int y);
int		count_y(char *str);
int		count_x(char *str);
#endif
