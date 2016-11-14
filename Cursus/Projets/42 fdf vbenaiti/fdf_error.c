/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf_error.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbenaiti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/24 13:06:19 by vbenaiti          #+#    #+#             */
/*   Updated: 2016/11/07 13:06:41 by vbenaiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	fdf_exit(void)
{
	exit(1);
}

void	fdf_malloc_error(void)
{
	ft_putstr_fd("malloc error\n", 2);
	fdf_exit();
}

void	fdf_map_error(void)
{
	ft_putstr_fd("map error\n", 2);
	fdf_exit();
}

void	fdf_arg_error(void)
{
	ft_putstr_fd("Un seul argument pris en compte.\n", 2);
	fdf_exit();
}
