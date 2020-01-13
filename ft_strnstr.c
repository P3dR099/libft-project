/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconde-c <pconde-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 17:04:40 by pconde-c          #+#    #+#             */
/*   Updated: 2020/01/13 19:03:16 by pconde-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *dst, const char *src, size_t len)
{
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	while (dst[i] && i < len)
	{
		if (dst[i] == src[0])
		{
			while (src[j] && i + j < len)
			{
				if (src[j] != dst[i + j])
					break ;
				j++;
			}
			if (!src[j])
				return ((char *)dst + i);
		}
		i++;
	}
	if (src[0] == 0)
		return ((char *)dst);
	return (NULL);
}
