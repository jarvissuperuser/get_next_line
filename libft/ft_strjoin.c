/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmugadza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 17:18:18 by tmugadza          #+#    #+#             */
/*   Updated: 2016/11/25 17:18:22 by tmugadza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(const char *s1, const char *s2)
{
	char			*s;
	unsigned int	c;
	unsigned int	z;

	c = 0;
	z = 0;
	if ((s = (char *)malloc(ft_strlen(s1) + ft_strlen(s2))))
	{
		while (s1[c])
		{
			s[c] = (char)s1[c];
			c = c + 1;
		}
		while (s2[z])
		{
			s[c + z] = (char)s2[z];
			z = z + 1;
		}
		s[c + z] = '\0';
		return (s);
	}
	return (NULL);
}
