/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconde-c <pconde-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 13:43:05 by pconde-c          #+#    #+#             */
/*   Updated: 2020/01/13 14:30:22 by pconde-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dst2;
	char	*src2;
	size_t	i;

	dst2 = (char *)dst;
	src2 = (char *)src;
	if (dst2 == NULL && src2 == NULL)
	{
		return (NULL);
		while (i < len)
		{
			src2[i] = dst2[i];
			i++;
		}
	}
	else
	{
		while (len > 0)
		{
			src2[len - 1] = dst2[len - 1];
			len--;
		}
	}
	i = 0;
	return (dst);
}
