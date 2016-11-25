#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*f;
	int		l;

	f = (char *)malloc(sizeof(char *) * ft_strlen(s) + 1);
	l = 0;
	while(s[l])
	{
		f[l] = s[l];
		l++;
	}
	f[l] = '\0';
	return (f);
}

