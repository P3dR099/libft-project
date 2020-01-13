/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconde-c <pconde-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 12:32:24 by pconde-c          #+#    #+#             */
/*   Updated: 2020/01/09 15:23:40 by pconde-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	n;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	n = 0;
	if (size == 0)
		return (i);
	while (src[n] != '\0' && n < (size - 1))
	{
		dest[i] = src[n];
		i++;
		n++;
	}
	dest[i] = '\0';
	//a = pos_dest + pos_src;
	return (i);
}
