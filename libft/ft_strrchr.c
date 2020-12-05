/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melaouad <melaouad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 16:01:09 by melaouad          #+#    #+#             */
/*   Updated: 2020/12/05 16:43:45 by melaouad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

char		*ft_strrchr(const char *s, int c)
{
	int		i;

	i = (int)ft_strlen(s);
	if (s[i] == c)
		return ((char*)(s + i));
	while (i >= 0)
	{
		if (s[i] == c)
			return ((char*)(s + i));
		i--;
	}
	return (NULL);
}
