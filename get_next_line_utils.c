/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberrim <yberrim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 19:09:28 by yberrim           #+#    #+#             */
/*   Updated: 2022/12/02 18:53:06 by yberrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	char	*xtx;
	int		j;

	i = 0;
	if (!s1 && !s2)
		return (NULL);
	xtx = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	while (s1 && s1[i] != '\0')
	{
		xtx[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2 && s2[j] != '\0')
	{
		xtx[i] = s2[j];
		j++;
		i++;
	}
	xtx[i] = '\0';
	free(s1);
	free(s2);
	return (xtx);
}

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strchr(char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			return (&str[i]);
		}
		i++;
	}
	return (NULL);
}
