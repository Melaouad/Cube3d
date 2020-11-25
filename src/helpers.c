/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melaouad <melaouad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 01:05:55 by melaouad          #+#    #+#             */
/*   Updated: 2020/11/25 03:15:50 by melaouad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/cub3d.h"
#include "../headers/libft.h"
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
size_t  ft_tablecount(char **tab)
{
    size_t i;
    if (!tab)
        return (0);
    i = 0;
    while (tab[i])
        i++;
    return(i);
}
char **ft_tabnew(void)
{
    char **tab;

    tab = (char **) malloc(sizeof(char*));
    if(!tab)
        tab = NULL;
    return (tab);
}
char **ft_tablejoin(char **tab, char *line)
{

size_t len;
char **new_tab;
size_t i;
len = ft_tablecount(tab);
new_tab = (char**)malloc(sizeof(char*) * (len + 2));
if(!tab)
    return (NULL)

}
char **ft_readfile (int fd){
    
    int ret;
    char *line;
    char **tab;
    
    tab = ft_tabnew();
    if(!tab)
        return(NULL);
    while((ret = get_next_line(fd,&line)) > 0)
    {tab = ft_table
        
    }
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