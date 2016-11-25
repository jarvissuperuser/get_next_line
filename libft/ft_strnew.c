#include "libft.h"
#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char	*ns;

	ns = (char *)malloc(sizeof(char) * size);
	ft_bzero(ns,size);
	return (ns);
}

