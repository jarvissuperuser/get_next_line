//1234567890123456789012345678901234567890
#ifndef __GET_NEXT_LINE_H
# define __GET_NEXT_LINE_H
# include "libft/libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# define BUFFSIZE 32

int	get_next_line(int fd, char **line);
#endif