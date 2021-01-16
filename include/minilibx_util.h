/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minilibx_util.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeskim <jaeskim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 21:18:38 by jaeskim           #+#    #+#             */
/*   Updated: 2021/01/12 16:37:56 by jaeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINILIBX_UTIL_H
# define MINILIBX_UTIL_H

# include "cub3d.h"

extern int	g_color;
extern int	g_stroke;
extern int	g_fill;
extern int	g_no_stroke;

int		rgba(t_uc r, t_uc g, t_uc b, float a);
void	fill_rgba(t_uc r, t_uc g, t_uc b, float a);
void	stroke_rgba(t_uc r, t_uc g, t_uc b, float a);
void	color_rgba(t_uc r, t_uc g, t_uc b, float a);
void	no_stroke(void);

int		calc_rgba(int background, int color);
void	put_pixel(t_img *view, int x, int y);

void	line(t_img *view, t_vec a, t_vec b);
void	rect(t_img *view, t_vec position, int width, int height);
void	mid_point_rect(t_img *view, t_vec position, int width, int height);

#endif
