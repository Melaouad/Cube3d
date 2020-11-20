/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melaouad <melaouad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 01:03:19 by melaouad          #+#    #+#             */
/*   Updated: 2020/11/20 00:07:05 by melaouad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H
#include"libft/libft.h"

# include <fcntl.h>


typedef struct s_env 
{
  int save;
    /* data */
} t_env;
    t_env g_e;


int		ft_compare(char *s1, char *s2);
int     ft_checkext(char *ext);
#endif
