/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melaouad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 15:59:47 by melaouad          #+#    #+#             */
/*   Updated: 2019/11/14 21:59:17 by melaouad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	if (s1 && s2)
	{
		p = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
		if (p == NULL)
			return (NULL);
		while (s1[j])
		{
			p[i++] = s1[j++];
		}
		while (s2[k])
		{
			p[i++] = s2[k++];
		}
		p[i] = '\0';
		return (p);
	}
	return (NULL);
}
