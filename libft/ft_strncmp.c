/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmugadza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 13:12:27 by tmugadza          #+#    #+#             */
/*   Updated: 2016/05/10 16:13:13 by tmugadza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned int index;

	index = 0;
	while (*s1 == *s2 && index <= n)
	{
		if (*s1 == '\0')
			return (0);
		s1++;
		s2++;
		index++;
	}
	if (*(unsigned char *)s1 < *(unsigned char *)s2)
	{
		return (-1);
	}
	else
	{
		return (+1);
	}
}
