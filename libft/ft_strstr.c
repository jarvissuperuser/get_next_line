/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmugadza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 17:24:03 by tmugadza          #+#    #+#             */
/*   Updated: 2016/11/25 17:30:52 by tmugadza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *in, const char *str)
{
	int		len;
	int		index;
	int		cnt;

	index = 0;
	cnt = 0;
	len = ft_strlen(str);
	while (in[index])
	{
		if (in[index] == str[cnt])
		{
			while (in[index] == str[cnt] && str[cnt] && in[index])
			{
				cnt++;
				index++;
			}
			index = ft_strlen(in) - 1;
		}
		index++;
	}
	if (cnt != len)
		return ((char *)0);
	return ((char *)str);
}
