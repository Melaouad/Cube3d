/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melaouad <melaouad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 00:33:25 by melaouad          #+#    #+#             */
/*   Updated: 2020/11/20 00:34:29 by melaouad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"
#include <stdio.h>
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


char **ft_tabnew(void)
{
    char **tab;
    
    tab = (char **) malloc(sizeof(char*));
     if(tab)
        *tab = NULL;
    return (tab);
}
char **ft_readfile (int fd){
    
    int ret;
    char *line;
    char **tab;
    
    tab = ft_tabnew();
    if(!tab)
        return(NULL);
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
   
}
int main(int ac, char **av){

    char **tab;
    int status;
    int save;
    status = 0;
    if (ac >= 2 && ac <= 3)
    {
        status = (ac == 2) ? 0 : -1;
        status +=  ft_checkext(av[1]);     
        status += (ac == 3) ? ft_compare(av[2], "--save" ) : 0;

        if (ac == 3)
            g_e.save = 1;
    }   
    
    if (status == 1)
    {
        if((tab = ft_filehandler(av[1])))
        {
            printf("%d",status);
        }
    }
    return 0;
}
