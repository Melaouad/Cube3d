/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melaouad <melaouad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 00:33:25 by melaouad          #+#    #+#             */
/*   Updated: 2020/12/05 16:45:26 by melaouad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/cub3d.h"



int main(int ac, char **av)
{

    char **tab;
    int status;
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