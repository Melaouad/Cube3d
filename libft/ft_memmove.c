/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melaouad <melaouad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 15:57:29 by melaouad          #+#    #+#             */
/*   Updated: 2020/12/05 16:42:52 by melaouad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*psrc;
	char	*pdst;

	psrc = (char *)src;
	pdst = (char *)dst;
	if (!psrc && !pdst)
		return (NULL);
	if (src < dst)
	{
		while (len > 0)
		{
			len--;
			pdst[len] = psrc[len];
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
