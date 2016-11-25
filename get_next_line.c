#include "get_next_line.h"

int		haschr(const char *s, char c)
{
	int	cn;

	cn = 0;
	while (s[cn])
	{
		if(s[cn] == c )
			return (1);
		cn++;
	}
	return (0);
}

int		poschr(const char * s, char c)
{
	int	cn;

	cn = 0;
	while (s[cn])
	{
		if(s[cn] == c )
			return (cn);
		cn++;
	}
	return (0);
} 

void	subrout(char **s, char **l,int e)
{
	char	*tmp;
	char	*a;
	int		i;

	if (haschr(*s, 10)){
		i = poschr(*s, 10);
		tmp = ft_strsub(*s, 0, i);
		*l = ft_strdup(tmp);
		free(tmp);
		a = *s;
		*s = ft_strsub(*s, i+1, ft_strlen(*s));
		free(a);
	}
	else if(e == 0)
	{
		*l = ft_strdup(*s);
	}
}


int		get_next_line(int fd, char **line)
{
	static char	*s;
	int			e;
	char		*tmp;

	if (fd>=0){
		if (s==NULL)
			s = ft_strnew(BUFFSIZE + 1);
		tmp = ft_strnew(BUFFSIZE + 1);
		while ((e = read(fd,tmp,BUFFSIZE))&& !haschr(s, EOF))
		{
			s = ft_strcat(s,tmp);
			if ((haschr(s, 10) || haschr(s, 0))&&
					!((s[0] == 10) && s[BUFFSIZE] == 10))
				break; 
		}
		free(tmp);
		subrout(&s,line,e);
		if (ft_strlen(s) == ft_strlen(*line)&& e== 0)
		{
			free(s);
			return 0;
		}
		return 1;
	}
	return -1;
}
