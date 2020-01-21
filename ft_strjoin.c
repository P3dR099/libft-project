/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconde-c <pconde-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 16:10:05 by pconde-c          #+#    #+#             */
/*   Updated: 2020/01/21 16:07:17 by pconde-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		size;
	int		pos_dest;
	int		pos_src;
	char	*r;

	if (!s1 || !s2)
		return (NULL);
	size = ft_strlen(s1) + ft_strlen(s2);
	r = malloc((size + 1) * sizeof(char));
	if (r == NULL)
		return (NULL);
	pos_dest = 0;
	pos_src = 0;
	while (s1[pos_dest])
	{
		r[pos_dest] = s1[pos_dest];
		pos_dest++;
	}
	while (s2[pos_src])
	{
		r[pos_dest + pos_src] = s2[pos_src];
		pos_src++;
	}
	r[pos_dest + pos_src] = 0;
	return (r);
}
