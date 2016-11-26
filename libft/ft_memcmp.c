/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmugadza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/11 15:59:38 by tmugadza          #+#    #+#             */
/*   Updated: 2016/11/25 17:34:58 by tmugadza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		i;
	const char	*a1;
	const char	*a2;

	a1 = s1;
	a2 = s2;
	i = 0;
	while (i < n)
	{
		if (*(a1 + i) != *(a2 + i))
			return (*(a1 + i) - *(a2 + i));
		else
			i++;
	}
	return (0);
}
