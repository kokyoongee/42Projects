/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekok-yoo <ekok-yoo@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 11:31:45 by ekok-yoo          #+#    #+#             */
/*   Updated: 2022/06/09 11:31:45 by ekok-yoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*rest;
	char		buffer[BUFFER_SIZE + 1];
	int			read_bytes;

	read_bytes = read(fd, buffer, BUFFER_SIZE);
	while (read_bytes > 0)
	{
		buffer[read_bytes] = '\0';
		join_rest(&rest, buffer);
		if (ft_strchr(rest, '\n') != NULL)
			return (get_line(&rest));
		read_bytes = read(fd, buffer, BUFFER_SIZE);
	}
	return (get_line(&rest));
}

void	join_rest(char **rest, char *buffer)
{
	char	*new;

	if (*rest == NULL)
		*rest = ft_strndup("", 0);
	new = ft_strjoin(*rest, buffer);
	free(*rest);
	*rest = new;
}

char	*get_line(char **r)
{
	char	*ret;
	char	*temp;
	char	*pos;

	if (!*r)
		return (NULL);
	pos = ft_strchr(*r, '\n');
	if (pos)
	{
		ret = ft_strndup(*r, pos - *r + 1);
		temp = ft_strdup(pos + 1);
		free(*r);
		*r = temp;
	}
	else
	{
		if (ft_strlen(*r) == 0)
			return (NULL);
		ret = ft_strdup(*r);
		free(*r);
		*r = NULL;
	}
	return (ret);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dst;
	char	*cpy;

	dst = (char *)malloc(sizeof(dst) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (dst && s1 && s2)
	{
		cpy = dst;
		while (*s1 != '\0')
			*dst++ = *s1++;
		while (*s2 != '\0')
			*dst++ = *s2++;
		*dst = '\0';
	}
	else
		return (NULL);
	return (cpy);
}
