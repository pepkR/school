/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbenaiti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/01 09:10:39 by vbenaiti          #+#    #+#             */
/*   Updated: 2016/04/01 09:10:41 by vbenaiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_swap_cells(char *c1, char *c2)
{
	char	temp;

	temp = *c1;
	*c1 = *c2;
	*c2 = temp;
}

char		*ft_strrev(char *str)
{
	int	i;
	int	j;
	int	size;
	int	stop;

	size = ft_strlen(str);
	i = 0;
	j = size - 1;
	stop = ((size / 2) - 1);
	while (i <= stop)
	{
		ft_swap_cells(&str[i], &str[j]);
		i++;
		j--;
	}
	return (str);
}
