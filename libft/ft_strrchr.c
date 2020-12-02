/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melaouad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 16:01:09 by melaouad          #+#    #+#             */
/*   Updated: 2019/11/14 22:02:50 by melaouad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
