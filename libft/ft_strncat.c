/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmugadza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 17:13:34 by tmugadza          #+#    #+#             */
/*   Updated: 2016/11/25 17:14:33 by tmugadza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strncat(char *dst, const char *src, size_t n)
{
	char	*newstr;
	size_t	length;
	size_t	ltotal;
	size_t	cnt;

	length = ft_strlen(dst);
	ltotal = length + ft_strlen(src);
	newstr = malloc(ltotal);
	cnt = 0;
	while (cnt < ltotal && cnt < length + n && n > 0)
	{
		if (length > cnt)
			newstr[cnt] = dst[cnt];
		else
			newstr[cnt] = src[cnt - length];
		cnt++;
	}
	newstr[cnt] = '\0';
	free(dst);
	dst = newstr;
	return (newstr);
}
