/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconde-c <pconde-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 13:41:43 by pconde-c          #+#    #+#             */
/*   Updated: 2020/01/21 16:47:31 by pconde-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*r;

	i = 0;
	if (!s || !(r = ft_calloc(ft_strlen(s) + 1, sizeof(char))))
		return (NULL);
	while (s[i])
	{
		r[i] = (*f)(i, s[i]);
		i++;
	}
	return (r);
}
