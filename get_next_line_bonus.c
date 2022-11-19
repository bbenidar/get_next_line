/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 16:52:15 by bbenidar          #+#    #+#             */
/*   Updated: 2022/11/19 14:17:02 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_read_lbaki(int fd, char *lbaki)
{
	char	*buff;
	int		rd_bytes;

	buff = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buff)
		return (NULL);
	rd_bytes = 1;
	while (!ft_strchr(lbaki, '\n') && rd_bytes != 0)
	{
		rd_bytes = read(fd, buff, BUFFER_SIZE);
		if (rd_bytes == -1)
		{
			free(buff);
			free(lbaki);
			return (NULL);
		}
		buff[rd_bytes] = '\0';
		lbaki = ft_strjoin(lbaki, buff);
	}
	free(buff);
	return (lbaki);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*lbaki[OPEN_MAX];

	if (fd < 0 || BUFFER_SIZE <= 0 || fd > OPEN_MAX)
		return (0);
	lbaki[fd] = ft_read_lbaki(fd, lbaki[fd]);
	if (!lbaki[fd])
		return (NULL);
	line = ft_get_line(lbaki[fd]);
	lbaki[fd] = ft_newlstr(lbaki[fd]);
	return (line);
}
