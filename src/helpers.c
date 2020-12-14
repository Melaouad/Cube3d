/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melaouad <melaouad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 01:05:55 by melaouad          #+#    #+#             */
/*   Updated: 2020/12/14 17:50:47 by melaouad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/cub3d.h"

int		ft_compare(char *s1, char *s2)
{
	size_t	len;
	size_t	lens1;
	size_t	lens2;

	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	len = (lens1 > lens2) ? lens1 : lens2;
	if (!ft_strncmp(s1, s2, len))
		return (1);
	return (0);
}
int ft_checkext(char *ext)
{

    int len;
    len = ft_strlen(ext);
    if(!ft_strncmp(&ext[len - 4],".cub",4))
        return 1;
    return 0;
}


int ft_fileexist (char *path)
{
    int fd;

    fd = open(path, O_RDONLY);
    close (fd);
    return ((fd < 0 ) ? 0 : 1);
}
char **ft_filehandler(char *filename)
{
    char **tab;
    int fd;

    if(ft_fileexist(filename))
    {
        fd = open (filename,O_RDONLY);
        tab = ft_readfile(fd);
        close(fd);
        return(tab);
   }
    return(NULL);
}