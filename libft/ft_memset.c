/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melaouad <melaouad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 15:57:39 by melaouad          #+#    #+#             */
/*   Updated: 2020/12/05 16:42:54 by melaouad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

void		*ft_memset(void *b, int c, size_t len)
{
	size_t		i;
	char		*temp;

	i = 0;
	temp = (char*)b;
	while (i < len)
	{
		temp[i] = c;
		i++;
	}
	return (b);
}
