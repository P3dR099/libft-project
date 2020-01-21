/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconde-c <pconde-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 14:50:38 by pconde-c          #+#    #+#             */
/*   Updated: 2020/01/15 14:50:45 by pconde-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*p1;
	char	*p2;
	size_t	i;

	p1 = (char *)dst;
	p2 = (char *)src;
	if (p1 == NULL && p2 == NULL)
		return (NULL);
	i = 0;
	if (src > dst)
		while (i < len)
		{
			p1[i] = p2[i];
			i++;
		}
	else
	{
		while (len > 0)
		{
			p1[len - 1] = p2[len - 1];
			len--;
		}
	}
	i = 0;
	return (dst);
}
