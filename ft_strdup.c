/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconde-c <pconde-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 12:51:01 by pconde-c          #+#    #+#             */
/*   Updated: 2020/01/16 14:49:52 by pconde-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		len;
	char	*r;
	int		i;

	len = ft_strlen(s1) + 1;
	r = ft_calloc(len, sizeof(char));
	i = 0;
	if (r != NULL)
	{
		while (i < len - 1)
		{
			r[i] = s1[i];
			i++;
		}
		r[i] = 0;
	}
	return (r);
}
