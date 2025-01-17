/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconde-c <pconde-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 13:12:13 by pconde-c          #+#    #+#             */
/*   Updated: 2020/01/15 13:41:59 by pconde-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalpha(int str)
{
	if ((str >= 'A' && str <= 'Z') || (str >= 'a' && str <= 'z'))
		return (1);
	return (0);
}
