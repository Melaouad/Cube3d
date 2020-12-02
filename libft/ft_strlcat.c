/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melaouad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 01:33:23 by melaouad          #+#    #+#             */
/*   Updated: 2019/11/14 21:59:46 by melaouad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t srclen;
	size_t dstlen;

	srclen = ft_strlen(src);
	if (!dst && size == 0)
		return (srclen);
	dstlen = ft_strlen(dst);
	if (size <= dstlen)
		return (srclen + size);
	size = size - dstlen;
	while (*dst)
		dst++;
	ft_strlcpy(dst, src, size);
	return (srclen + dstlen);
}
