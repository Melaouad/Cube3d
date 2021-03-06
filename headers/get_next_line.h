/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melaouad <melaouad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/17 22:13:03 by melaouad          #+#    #+#             */
/*   Updated: 2020/12/14 20:13:51 by melaouad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdio.h>
# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>
#include "../headers/libft.h"

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 100
# endif


int		get_next_line(int fd, char **line);

#endif