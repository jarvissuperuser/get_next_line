/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmugadza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 11:37:21 by tmugadza          #+#    #+#             */
/*   Updated: 2016/11/25 17:03:10 by tmugadza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>

int		ft_strlen(const char *s);
void	ft_putstr(char *str);
int		ft_strlens(const char *s);
int		ft_strncmp(const char *s1, const char *s2, unsigned int n);
int		ft_strcmp(const void *s1, const void *s2, size_t n);
char	*ft_strstr(const char *in, const char *str);
char	*ft_strchr(const char *s, int c);
char	*ft_strsub(const char *s, unsigned int start, size_t len);
char	*ft_strjoin(const char *s1, const char *s2);
char	*ft_strncat(char *dst, const char *src, size_t n);
char	*ft_strcat(char *dst, const char *src);
char	*ft_strnew(size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t n);
void	ft_putchar(char c);
void	ft_do(int *i, char *s, int *index);
int		ft_atoi(const char *c);
int		ft_isascii(int c);
int		ft_isdigit(char c);
void	ft_bzero(void *s, size_t t);
char	*ft_strdup(const char *s);
#endif
