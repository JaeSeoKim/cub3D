/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d_bonus.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeskim <jaeskim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 23:19:39 by jaeskim           #+#    #+#             */
/*   Updated: 2021/02/25 03:41:47 by jaeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_BONUS_H
# define CUB3D_BONUS_H

# include <mlx.h>
# include <stdlib.h>
# include <unistd.h>
# include <math.h>
# include <fcntl.h>
# include <time.h>
# include "libft.h"
# include "x_event.h"

# ifdef __APPLE__
#  include "key_mac_bonus.h"
#  include "dummy_mac_bonus.h"
# else
#  include "key_linux.h"
# endif

# define CUB3D_TITLE "jaeskim's cub3D - bonus!"
# define WALL_STRIP_WIDTH 1
# define TILE 64
# define FOV 66
# define WALK_S 0.08
# define TURN_S 3
# define NOD_S 15
# define SENS 10

# define U_DIV 1
# define V_DIV 1
# define V_MOVE 0.0

# define ERROR 1
# define SUCCES 0

# define M_2PI 6.28318530717958647692528676655900576
# define M_PI 3.14159265358979323846264338327950288
# define M_PI_2 1.57079632679489661923132169163975144
# define M_PI_4 0.785398163397448309615660845819875721
# define M_PI_180 0.017453292519943295769236907684886

# define BITMAPFILEHEADER 14
# define BITMAPINFOHEADER 40

# define NO 0
# define SO 1
# define WE 2
# define EA 3
# define S_Y 4
# define S_Y2 5
# define S_R 6
# define S_R2 7
# define S_G 8
# define S_G2 9
# define S_B 10
# define S_B2 11
# define F 12
# define C 13
# define R 14

# define LIFEBAR 0
# define LIFEBAR_PATH "src_bonus/assets/lifebar.xpm"
# define LIFEBAR_START_X 19
# define LIFEBAR_START_Y 5
# define LIFEBAR_SIZE_X 66
# define LIFEBAR_SIZE_Y 3

# include "cub3d_type_bonus.h"
# include "cub3d_util_bonus.h"
# include "cub3d_init_bonus.h"
# include "cub3d_update_bonus.h"
# include "cub3d_render_bonus.h"

int		save_bmp(t_cub3d *g);

int		handle_key_pressed(int keycode, t_cub3d *g);
int		handle_key_released(int keycode, t_cub3d *g);
int		handle_exit_window(t_cub3d *g);
int		handle_loop(t_cub3d *g);

void	exit_cub3d(t_cub3d *g, int code);
void	exit_cub3d_msg(t_cub3d *g, char *msg);

#endif
