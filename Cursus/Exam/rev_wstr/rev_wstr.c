/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbenaiti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 13:47:54 by vbenaiti          #+#    #+#             */
/*   Updated: 2016/11/07 13:54:31 by vbenaiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		main(int ac, char **av)
{
	int i;
	if (ac == 2)
	{
		i = ft_strlen(av[1]);
		while (i >= 0)
		{
			ft_putchar(av[1][i]);
			i--;
		}
	}
	ft_putchar('\n');
	return(0);
}
