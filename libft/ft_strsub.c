#include "libft.h"
#include <stdlib.h>

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	char	*ns;
	size_t	ni;

	if ((ns = (char *)malloc(sizeof(char *) * ((len) + 1)))){
		ni = 0;
		while (s[start] && ni < len)
		{
			ns[ni++] = s[start++];
		}
		ns[ni] = '\0';
		return ns;
	}
	return NULL;
}