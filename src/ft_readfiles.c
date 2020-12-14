/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readfiles.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melaouad <melaouad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 17:33:43 by melaouad          #+#    #+#             */
/*   Updated: 2020/12/14 17:52:05 by melaouad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/cub3d.h"

char **ft_readfile (int fd)
{
    
    int ret;
    char *line;
    char **tab;
    
    tab = ft_tabnew();
    if(!tab)
        return(NULL);

    ret = get_next_line(fd,&line);
    ft_putnbr_fd(ret,1);
    while((ret = get_next_line(fd,&line)) > 0)
    {
        write(1,"kkkk",4);
        tab = ft_tablejoin(tab,line);
        free(line);
    }

    //if(*line)
    //{
    //    tab = ft_tablejoin(tab,line);
    //    free(line);
    //}    
    //if (ret < 0)
    //    return(NULL);
    return(tab);
}