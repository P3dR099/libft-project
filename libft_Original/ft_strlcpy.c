/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconde-c <pconde-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 14:41:48 by pconde-c          #+#    #+#             */
/*   Updated: 2020/01/08 15:09:05 by pconde-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	n;

	i = 0;
	while (src[i] != '\0')
		i++;
	n = 0;
	if (size == 0)
	{
		return (i);
	}
	while (src[n] != '\0' && n < (size - 1))
	{
		dest[n] = src[n];
		n++;
	}
	dest[n] = '\0';
	return (i);
}
