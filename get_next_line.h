/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankasamanyan <ankasamanyan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 20:40:05 by ankasamanya       #+#    #+#             */
/*   Updated: 2022/03/28 21:08:23 by ankasamanya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
// #  define BUFFER_SIZE 10
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

char	*get_next_line(int fd);
size_t	gnl_strlen(char *str);
char	*gnl_calloc(int count);
char	*gnl_strdup(char *str);
char	*gnl_strchr(char *str, char c);
char	*gnl_memmove(char *dest, char *src, size_t len);

#endif
