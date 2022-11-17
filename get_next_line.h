/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 12:56:29 by bbenidar          #+#    #+#             */
/*   Updated: 2022/11/17 13:08:37 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
//--------------haeders-------------//
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
//------------function prototype-----------//
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1000
# endif

char	*ft_strjoin(char *left_str, char *buff);
char	*ft_strchr(char *s, int c);
size_t	ft_strlen(char *str);
char	*get_next_line(int fd);
char	*ft_newlstr(char *left_str);
char	*ft_get_line(char *left_str);
char	*ft_read_lbaki(int fd, char *lbaki);

#endif
