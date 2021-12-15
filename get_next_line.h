/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhmiguel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 20:22:30 by jhmiguel          #+#    #+#             */
/*   Updated: 2021/12/14 20:22:31 by jhmiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# define OPEN_MAX 256

# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <fcntl.h>

size_t	ft_strlen(char *str);
char	*get_next_line(int fd);
char	*ft_strchr(char *str, char c);
char	*ft_find_nl(char *str);
char	*ft_strcat(char *dest, char *src);
char	*ft_new_save(char *str);
int		ft_count_nl(char *str);

#endif
