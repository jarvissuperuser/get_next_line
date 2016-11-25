#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		cn;

	cn = 0;
	while (s && c)
	{
		if (s[cn] == (char)c)
			return (char *)(const char *)s + cn + 1;
		cn++;
	}
	return NULL;
}