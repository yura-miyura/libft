/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuriiartymicloud.com <yuriiartymicloud.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 08:10:34 by yuriiartymi       #+#    #+#             */
/*   Updated: 2025/10/25 08:02:07 by yuriiartymi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
// Libraries to delete
# include <stdio.h>
# include <string.h>
# include <strings.h>
# include <ctype.h>

// # include <ctype.h>
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);

// # include <string.h>
size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);

// # include <strings.h>
void	ft_bzero(void *s, size_t n);

#endif
