/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconde-c <pconde-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 15:30:56 by pconde-c          #+#    #+#             */
/*   Updated: 2020/01/21 15:35:36 by pconde-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char		c;
	long int	n2;

	if (n < 0)
	{
		write(fd, "-", 1);
		n2 = -(long int)n;
	}
	else
		n2 = n;
	if (n2 > 9)
		ft_putnbr_fd(n2 / 10, fd);
	c = (n2 % 10) + '0';
	write(fd, &c, 1);
}
