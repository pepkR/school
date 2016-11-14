/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbenaiti <vbenaiti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/30 15:28:50 by vbenaiti          #+#    #+#             */
/*   Updated: 2016/04/01 09:30:04 by vbenaiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_cast_nbr(char *str)
{
	int res;

	res = 0;
	while (*str && (*str >= '0') && (*str <= '9'))
	{
		res = res * 10 + (*str - 48);
		str++;
	}
	return (res);
}

int			ft_atoi(const char *str)
{
	char *ps;

	ps = (char *)str;
	if (ps == NULL)
		return (0);
	while (*ps && (*ps == ' ' || *ps == '\t' || *ps == '\n' || *ps == '\v' ||
				*ps == '\f' || *ps == '\r'))
		ps++;
	if (*ps && *ps >= '0' && *ps <= '9')
		return (ft_cast_nbr(ps));
	else if (*ps && *ps == '+')
		return (ft_cast_nbr(++ps));
	else if (*ps && *ps == '-')
		return (ft_cast_nbr(++ps) * -1);
	else
		return (0);
}
