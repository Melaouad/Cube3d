/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readfiles.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melaouad <melaouad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 17:33:43 by melaouad          #+#    #+#             */
/*   Updated: 2020/12/14 20:16:27 by melaouad         ###   ########.fr       */
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
    while((ret = get_next_line(fd,&line)) > 0)
    {
        tab = ft_tablejoin(tab,line);
        free(line);
    }

    if(*line)
         tab = ft_tablejoin(tab,line);
    free(line);
        
    if (ret < 0)
       return(NULL);
    return(tab);
}