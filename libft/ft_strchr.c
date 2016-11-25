/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmugadza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 17:08:19 by tmugadza          #+#    #+#             */
/*   Updated: 2016/11/25 17:08:59 by tmugadza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		cn;

	cn = 0;
	while (s && c)
	{
		if (s[cn] == (char)c)
			return ((char *)(const char *)s + cn + 1);
		cn++;
	}
	return (NULL);
}
