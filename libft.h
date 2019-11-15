/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlobos-m <dlobos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 13:40:48 by dlobos-m          #+#    #+#             */
/*   Updated: 2019/11/15 17:21:55 by dlobos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <stddef.h>

int		ft_atoi(const char *n);
int		ft_toupper(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isprint(int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_tolower(int c);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t num, size_t tam);
void	*ft_memccpy(void *str1, const void *str2, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memcpy(void *str1, const void *str2, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memset(void *str, int c, size_t len);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strnstr(const char *dst, const char *src, size_t len);
char	*ft_strrchr(const char *s, int c);
char	*ft_substr(const char *s, unsigned int start, size_t len);
char	*ft_strtrim(char const *s1, char const *set);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(const char *s);

#endif
