/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconde-c <pconde-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 12:32:24 by pconde-c          #+#    #+#             */
/*   Updated: 2020/01/21 17:29:10 by pconde-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	r;
	size_t	i;
	size_t	dstsize;

	dstsize = ft_strlen(dest);
	i = 0;
	if (n <= dstsize)
		r = (ft_strlen(src) + n);
	else
	{
		r = (dstsize + ft_strlen(src));
		while (i + dstsize + 1 < n && src[i])
		{
			dest[i + dstsize] = src[i];
			i++;
		}
		dest[i + dstsize] = 0;
	}
	return (r);
}
