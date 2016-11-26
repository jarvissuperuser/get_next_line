/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmugadza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/11 15:59:38 by tmugadza          #+#    #+#             */
/*   Updated: 2016/11/25 17:47:43 by tmugadza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int i)
{
	p_str	ps;

	ps.il = 0;
	ps.str_or = malloc(sizeof(char) * 64);
	ft_do(&i, ps.str_or, &ps.il);
	while (i >= 1)
	{
		*(ps.str_or + ps.il++) = (i % 10) + '0';
		i /= 10;
	}
	ps.il--;
	i = ps.il;
	if (*ps.str_or == '-')
		i += 1;
	while (ps.il > (i / 2))
	{
		ps.c = *(ps.str_or + ps.il);
		*(ps.str_or + ps.il) = *(ps.str_or + (i - ps.il));
		*(ps.str_or + (i - ps.il--)) = ps.c;
	}
	return (ps.str_or);
}
