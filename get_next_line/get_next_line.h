/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebae <ebae@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/16 05:01:38 by shorwood          #+#    #+#             */
/*   Updated: 2023/04/26 15:04:35 by ebae             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef _GET_NEXT_LINE_H
# define _GET_NEXT_LINE_H
# define BUFF_SIZE 4096
# include "libft.h"

typedef struct	s_gnl
{
	int			fd;
	ssize_t		len;
	char		*buf;
	t_lst		pipe;
}				t_gnl;

int				get_next_line(const int fd, char **line);
#endif