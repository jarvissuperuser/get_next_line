/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmugadza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 17:12:30 by tmugadza          #+#    #+#             */
/*   Updated: 2016/11/25 17:15:01 by tmugadza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*f;
	int		l;

	f = (char *)malloc(sizeof(char *) * ft_strlen(s) + 1);
	l = 0;
	while (s[l])
	{
		f[l] = s[l];
		l++;
	}
	f[l] = '\0';
	return (f);
}
