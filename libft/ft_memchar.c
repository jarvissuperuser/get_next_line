/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmugadza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/11 15:59:38 by tmugadza          #+#    #+#             */
/*   Updated: 2016/11/25 17:41:00 by tmugadza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memchar(const void *s, const char c, size_t n)
{
	const char	*a;
	char		*st;
	void		*r;

	a = (char *)(const char *)s;
	r = (char *)a;
	if (n)
	{
		while (n--)
		{
			if (*a++ == c)
				return ((char *)(const char *)a);
		}
		r = malloc(1);
		st = r;
		*st = '\0';
		return ((void *)(const char *)st);
	}
	else
		return (r);
}
