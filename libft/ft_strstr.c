/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdlamini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/10 12:37:27 by mdlamini          #+#    #+#             */
/*   Updated: 2016/05/11 13:15:24 by mdlamini         ###   ########.fr       */
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
				//printf("cnt:%i len:%i\n\n", cnt, len);
			}
			index = ft_strlen(in) - 1;
		}
		index++;
	}
	if (cnt != len)
		return (char *) 0;
	return ((char *) str);
}
