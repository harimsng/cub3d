#ifndef SCREEN_RENDERER_H
# define SCREEN_RENDERER_H

# include <stdio.h>
# include <math.h>
# include <sys/time.h>

# include "MLX42_Input.h"
# include "cub3d.h"
# include "hook.h"
# include "minimap.h"
# include "raycasting.h"
# include "drawline.h"

//#include "sprite.h"

# define FOV (M_PI / 3)
# define MINIMAP_RAY_NUM (1)

void	screen_renderer(void *data);
void	draw_col_line(t_mlx_data *data, t_ray point, int idx);
void	render_main_img(t_mlx_data data);

#endif
