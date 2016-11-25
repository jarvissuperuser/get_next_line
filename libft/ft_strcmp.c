#include "libft.h"
#include <stdlib.h>

int	ft_strcmp(const void *s1, const void *s2, size_t n)
{
	size_t		i;
	const char	*a1;
	const char	*a2;
	int a;

	i = 0;
	a1 = s1;
	a2 = s2;
	while (i < n)
	{
		if (*(a1 + i) == *(a2 + i))
			i++;
		else
			break ;
	}
	a = i;
	while (*(a1 + i))
	{
		if (!*(a2 + a))
			i++ ;
		else
			break ;
	}
	return (i-n);
}