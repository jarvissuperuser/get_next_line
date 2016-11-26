/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmugadza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/11 13:30:47 by tmugadza          #+#    #+#             */
/*   Updated: 2016/11/25 17:35:58 by tmugadza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *ds, const void *sr, size_t n)
{
	char		*d;
	const char	*s;

	d = ds;
	s = sr;
	if (n == 0)
		return (d);
	while (n--)
	{
		*d++ = *s++;
	}
	return (d);
}
