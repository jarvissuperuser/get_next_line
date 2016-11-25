#include "libft.h"
#include <stdlib.h>

char *ft_strcat(char *dst, const char *src)
{
	char	*newstr;
	int		length;
	int		ltotal;
	int		cnt;

	length = ft_strlen(dst);
	ltotal = length + ft_strlen(src);
	newstr = malloc(ltotal+1);
	while (cnt < ltotal)
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
	return newstr;
}