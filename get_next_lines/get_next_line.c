/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/* i get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melaouad <melaouad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/17 22:13:03 by melaouad          #+#    #+#             */
/*   Updated: 2020/12/02 18:56:23 by melaouad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/get_next_line.h"
int		remplir(char **line, char **str)
{
	char			*temp;
	int				i;
	int				k;

	i = 0;
	*line = ft_strdup("");
	while ((*str)[i] != '\n' && (*str)[i])
		i++;
	if (i != 0 || (*str)[i] == '\n')
	{
		temp = *line;
		*line = ft_substr(*str, 0, i);
		free(temp);
		if ((*str)[i] != '\0')
		{
			temp = ft_strdup(*str + i + 1);
			k = 1;
		}
		else
			k = 0;
		free(*str);
		*str = temp;
		return (k);
	}
	return (0);
}

int		get_next_line(int fd, char **line)
{
	int				ret;
	char			*buff;
	static char		*str;
	char			*ptr;

	if (fd < 0 || line == NULL || fd > 4864 || BUFFER_SIZE < 0)
		return (-1);
	if (!(buff = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1))))
		return (-1);
	if (!str)
		if (!(str = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1))))
			return (-1);
	while ((ret = read(fd, buff, BUFFER_SIZE)) > 0)
	{
		buff[ret] = '\0';
		ptr = ft_strjoin(str, buff);
		free(str);
		str = ptr;
		if (ft_strchr(str, '\n'))
			break ;
	}
	if (ret < 0)
		return (-1);
	free(buff);
	return (remplir(line, &str));
}
