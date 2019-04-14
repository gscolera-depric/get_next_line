/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscolera <gscolera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 19:32:11 by gscolera          #+#    #+#             */
/*   Updated: 2018/12/01 15:41:21 by gscolera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 100

# include "libft/libft.h"
# include <fcntl.h>
# include <stdlib.h>

typedef struct			s_file
{
	char				*data;
	int					fd;
	int					ret;
	struct s_file		*next;
}				t_file;

int						get_next_line(const int fd, char **line);

#endif
