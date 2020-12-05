/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melaouad <melaouad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 15:57:22 by melaouad          #+#    #+#             */
/*   Updated: 2020/12/05 16:42:49 by melaouad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

void		*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	const char	*srct;
	char		*destt;

	srct = src;
	destt = dest;
	i = 0;
	if (!srct && !destt)
		return (NULL);
	if (src == dest)
		return (dest);
	while (i < n)
	{
		destt[i] = srct[i];
		i++;
	}
	return (dest);
}
