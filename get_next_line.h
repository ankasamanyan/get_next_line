/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankasamanyan <ankasamanyan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 20:40:05 by ankasamanya       #+#    #+#             */
/*   Updated: 2022/04/02 16:37:07 by ankasamanya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <unistd.h>
# include <stdlib.h>

char	*get_next_line(int fd);
size_t	gnl_strlen(char *str);
char	*gnl_calloc(int count);
char	*gnl_strdup(char *str);
char	*gnl_strchr(char *str, char c);
char	*gnl_memmove(char *dest, char *src, size_t len);

#endif
// #  define BUFFER_SIZE 10