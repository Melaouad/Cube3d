/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melaouad <melaouad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 17:22:16 by melaouad          #+#    #+#             */
/*   Updated: 2020/12/05 16:40:44 by melaouad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../headers/libft.h"

size_t		ft_strlen(const char *s)
{
	size_t counter;

	counter = 0;
	while (*s != '\0')
	{
		counter++;
		s++;
	}
	return (counter);
}
int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*temp1;
	unsigned char	*temp2;

	temp1 = (unsigned char*)s1;
	temp2 = (unsigned char*)s2;
	i = 0;
	if (!s1 && !s2)
		return (0);
	while ((temp1[i] || temp2[i]) && i < n)
	{
		if (temp1[i] != temp2[i])
			return (temp1[i] - temp2[i]);
		i++;
	}
	return (0);
}