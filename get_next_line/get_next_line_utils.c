/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaffron <ksaffron@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 17:57:52 by ksaffron          #+#    #+#             */
/*   Updated: 2022/04/01 17:19:51 by ksaffron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr_gnl(char *str, int c)
{
	while (str && *str)
	{
		if (*str == (unsigned char) c)
			return ((char *) str);
		str++;
	}
	if (str && *str == (unsigned char) c)
		return ((char *) str);
	return (NULL);
}

char	*ft_strjoin_gnl(char *s1, char *s2)
{
	char	*s3;
	int		i;

	i = 0;
	if (s2)
	{
		s3 = malloc(ft_strlen_gnl(s1) + ft_strlen_gnl(s2) + 1);
		if (!s3)
			return (NULL);
		while (s1 && s1[i])
		{
			s3[i] = s1[i];
			i++;
		}
		s3[i] = '\0';
		ft_strlcat_gnl(s3, s2, ft_strlen_gnl(s1) + ft_strlen_gnl(s2) + 1);
		if (s1)
		{
			free(s1);
			s1 = 0;
		}
		return (s3);
	}
	return (NULL);
}

char	*ft_substr_gnl(char *s, unsigned int start, size_t len)
{
	char	*result;

	if (!(s))
		return (NULL);
	if (ft_strlen_gnl(s) <= start)
	{
		result = malloc(1);
		result = 0;
		if (!(result))
			return (NULL);
		return (result);
	}
	if (len >= ft_strlen_gnl(s) - start)
	{
		result = malloc(ft_strlen_gnl(s) - start + 1);
		if (!(result))
			return (NULL);
		ft_strlcpy_gnl(result, s + start, ft_strlen_gnl(s) - start + 1);
		return (result);
	}
	result = malloc(len + 1);
	if (!(result))
		return (NULL);
	ft_strlcpy_gnl(result, s + start, len + 1);
	return (result);
}

size_t	ft_strlcat_gnl(char *dest, char *src, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	while (i < n && dest[i])
	{
		i++;
	}
	if (n <= i)
		return (i + ft_strlen_gnl(src));
	len = ft_strlen_gnl(dest) + ft_strlen_gnl(src);
	ft_strlcpy_gnl(dest + i, src, n - i);
	return (len);
}

size_t	ft_strlcpy_gnl(char *dest, char *src, size_t n)
{
	size_t	len;
	size_t	i;

	i = -1;
	len = ft_strlen_gnl(src);
	if (!(dest) && !(src))
		return (0);
	if (len < n)
		while (++i < len + 1)
			dest[i] = src[i];
	else if (n != 0)
	{
		while (++i < n)
			dest[i] = src[i];
		dest[n - 1] = '\0';
	}
	return (len);
}
