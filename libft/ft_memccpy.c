/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmugadza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/11 15:59:38 by tmugadza          #+#    #+#             */
/*   Updated: 2016/11/25 17:33:10 by tmugadza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memccpy(void *ds, const void *sr, int c, size_t n)
{
	char		*d;
	const char	*s;

	d = ds;
	s = sr;
	while (n--)
	{
		if (*s == (const char)c)
			break ;
		*d++ = *s++;
	}
	return (ds);
}
