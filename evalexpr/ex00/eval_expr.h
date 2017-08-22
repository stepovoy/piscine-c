/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astepovy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 15:16:20 by astepovy          #+#    #+#             */
/*   Updated: 2016/09/17 15:16:42 by astepovy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVAL_EXPR_H
# define EVAL_EXPR_H

int		eval_expr(char *expr);
int		parse_sum(char **expr);
int		parse_factors(char **expr);
int		parse_number(char **expr);
#endif
