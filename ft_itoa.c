/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconde-c <pconde-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 13:24:51 by pconde-c          #+#    #+#             */
/*   Updated: 2020/01/21 14:22:05 by pconde-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_intlen(int n)
{
	int		i;

	i = 0;
	while (n != 0)
	{
		n /= 10;
		if (n != 0)
			i++;
	}
	return (++i);
}

char	*ft_itoa(int n)
{
	int				i;
	char			*r;
	long int		n2;
	int				isneg;

	i = 1;
	isneg = 0;
	i = ft_intlen(n);
	isneg = (n < 0 ? 1 : 0);
	n2 = (n < 0 ? -(long)n : n);
	i += (isneg ? 1 : 0);
	r = ft_calloc(i + 1, sizeof(char));
	if (r == NULL)
		return (NULL);
	r[i--] = 0;
	while (i >= (isneg == 0 ? 0 : 1))
	{
		r[i] = n2 % 10 + '0';
		n2 /= 10;
		i--;
	}
	r[0] = (isneg ? '-' : r[0]);
	return (r);
}
