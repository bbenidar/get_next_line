/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 16:52:32 by bbenidar          #+#    #+#             */
/*   Updated: 2022/11/17 18:17:11 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
//--------------haeders-------------//
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
//------------function prototype-----------//
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1000
# endif

char	*ft_strjoin(char *left_str, char *buff);
char	*ft_strchr(char *s, int c);
size_t	ft_strlen(char *str);
char	*get_next_line(int fd);
char	*ft_newlstr(char *lbaki);
char	*ft_get_line(char *lbaki);
char	*ft_read_lbaki(int fd, char *lbaki);

#endif