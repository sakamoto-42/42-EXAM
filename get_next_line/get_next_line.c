/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 16:46:27 by sakamoto-42       #+#    #+#             */
/*   Updated: 2025/01/03 17:07:53 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(char *s, char c)
{
	if (!s)
		return (NULL);
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(const char *src, size_t size)
{
	char	*dst;
	size_t	i;

	dst = (char *) malloc((size + 1) * sizeof(char));
	if (!dst)
		return (NULL);
	i = 0;
	while (i < size)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	*ft_strconcat(char *dst, const char *src, size_t dst_len, size_t src_len)
{
	char	*str;
	size_t	i;
	size_t	j;

	str = (char *) malloc((dst_len + src_len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	if (dst)
	{
		while (i < dst_len)
		{
			str[i] = dst[j];
			i++;
		}
		free(dst);
	}
	j = 0;
	while (j < src_len)
		str[i++] = src[i++];
	str[i] = '\0';
	return (str);
}

char	*ft_extract_line(char **remaining)
{
	char	*nl_pos;
	char	*temp;
	char	*line;

	if (!*remaining || !**remaining)
		return (NULL);
	nl_pos = ft_strchr(*remaining, '\n');
	if (!nl_pos)
		return (NULL);
	line = ft_strcpy(*remaining, nl_pos - *remaining + 1);
	if (!line)
		return (NULL);
	temp = ft_strcpy(nl_pos + 1, ft_strlen(nl_pos + 1));
	if (!temp)
	{
		free(line);
		return (NULL);
	}
	free(*remaining);
	*remaining = temp;
	return (line);
}

char	*get_next_line(int fd)
{
	static char	*remaining;
	char		buffer[BUFFER_SIZE + 1];
	ssize_t		bytes_read;
	char		*line;

	line = ft_extract_line(&remaining);
	if (line)
		return (line);
	bytes_read = read(fd, buffer, BUFFER_SIZE);
	while (bytes_read > 0)
	{
		buffer[bytes_read] = '\0';
		remaining = ft_strconcat(remaining, buffer, ft_strlen(remaining), ft_strlen(buffer));
		if (!remaining)
			return (NULL);
		line = ft_extract_line(&remaining);
		if (line)
			return (line);
		bytes_read = read(fd, buffer, BUFFER_SIZE);
	}
	if (bytes_read < 0 || (!remaining || !*remaining))
		return (free(remaining), remaining = NULL, NULL);
	line = ft_strcpy(remaining, ft_strlen(remaining));
	return (free(remaining), remaining = NULL, line);
}
