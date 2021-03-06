/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melaouad <melaouad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 15:55:27 by melaouad          #+#    #+#             */
/*   Updated: 2020/12/05 16:37:54 by melaouad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

int		countnbr(int n)
{
	int index;

	index = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 10;
		index++;
	}
	return (index);
}

char	*ft_itoapos(int n)
{
	char	*p;
	int		a;

	if (n >= 0)
	{
		a = countnbr(n);
		if (!(p = malloc(sizeof(char) * (a + 1))))
			return (NULL);
		p[a] = '\0';
		a--;
		while (a >= 0)
		{
			p[a] = n % 10 + '0';
			n = n / 10;
			a--;
		}
		return (p);
	}
	return (NULL);
}

char	*ft_itoa(int n)
{
	char	*p;
	int		a;

	if (n >= 0)
		return (p = ft_itoapos(n));
	if (n < 0)
	{
		a = countnbr(n);
		if (!(p = malloc(sizeof(char) * (a + 2))))
			return (NULL);
		p[a + 1] = '\0';
		p[0] = '-';
		while (a > 0)
		{
			p[a] = (n % 10) * -1 + '0';
			n = n / 10;
			a--;
		}
		return (p);
	}
	return (NULL);
}
