/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconde-c <pconde-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 15:05:21 by pconde-c          #+#    #+#             */
/*   Updated: 2020/01/16 15:54:19 by pconde-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		n;
	char	*r;
	size_t	i;

	if (!s)
		return (NULL);
	if (start > len)
		return (ft_strdup(""));
	i = start;
	while (s[i] && i - start < len)
		i++;
	n = ft_strlen(s);
	r = ft_calloc((i - start + 1), sizeof(char));
	i = start;
	if (r == NULL)
		return (NULL);
	while (s[1] && i - start < len)
	{
		r[i - start] = s[i];
		i++;
	}
	r[i - start] = 0;
	return (r);
}
