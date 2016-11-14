/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbenaiti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 12:39:28 by vbenaiti          #+#    #+#             */
/*   Updated: 2016/11/07 12:51:54 by vbenaiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_is_fractol(char *s1, char *s2)
{
	int		i;
	int		j;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] == s2[i])
			j = ft_strlen(s2);
		i++;
	}
	return ((i = j) ? 1 : 0);
}

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		if (ft_is_fractol(av[1], "manderbrot") == 1)
			ft_putstr("manderbrot");
			//ft_manderbrot(struct_future);
		else if (ft_is_fractol(av[1], "julia") == 1)
			ft_putstr("julia");
			//ft_julia(struct_future);
	}
	// instruction
	return (0);
}
