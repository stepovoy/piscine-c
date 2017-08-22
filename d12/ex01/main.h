/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astepovy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/15 12:14:31 by astepovy          #+#    #+#             */
/*   Updated: 2016/09/15 12:16:32 by astepovy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

# include <unistd.h>
# include <fcntl.h>
# include <errno.h>
# include <stdio.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_puterr(char *name, char *file, int no);
int		ft_cat(char *filename);
#endif
