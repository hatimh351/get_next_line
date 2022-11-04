/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 23:10:45 by hlahwaou          #+#    #+#             */
/*   Updated: 2022/11/04 18:41:10 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H
#include <unistd.h>
#include <stdlib.h>

char	*ft_strjoin(char *s1, char *s2);
int		check_new_line(char *str);
char	*ft_strdup(char *s1);
char *get_next_line(int fd);
char	*go_new_line(char *str);

#endif