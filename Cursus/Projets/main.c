/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbenaiti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 10:10:21 by vbenaiti          #+#    #+#             */
/*   Updated: 2016/11/02 10:24:36 by vbenaiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		main(void)
{
	int 	fd;
	char 	*line;
	int 	i;

	fd = open("fichier", O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("open() error");
		return (1);
	}
	while ((i = get_next_line(fd, &line)) > 0)
	{
		ft_putendl("LINE");
		ft_putendl(line);
		free (line);
	}
	return (1);
}
