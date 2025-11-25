/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroselma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 13:03:54 by rroselma          #+#    #+#             */
/*   Updated: 2025/11/25 19:18:04 by rroselma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_w(char const *str, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] == c)
			i++;
		if (str[i] != '\0')
		{
			count++;
			while (str[i] != '\0' && str[i] != c)
				i++;
		}
	}
	return (count);
}

static char	*ft_strndup(char const *str, char c, int start)
{
	int		len;
	int		i;
	char	*dup;

	len = 0;
	while (str[start + len] != '\0' && str[start + len] != c)
		len++;
	dup = malloc(sizeof(char) * (len + 1));
	if (!dup)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dup[i] = str[i + start];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

static void	*ft_wfree(char **res, int nb)
{
	int	i;

	i = 0;
	while (i < nb)
	{
		free(res[i]);
		i++;
	}
	free(res);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		j;
	int		i;
	char	**split;

	if (!s)
		return (NULL);
	split = malloc(sizeof(char *) * (count_w(s, c) + 1));
	if (!split)
		return (NULL);
	i = 0;
	j = 0;
	while (s[j] != '\0' && i < count_w(s, c))
	{
		while (s[j] == c)
			j++;
		split[i] = ft_strndup(s, c, j);
		if (!split[i])
			return (ft_wfree(split, i));
		while (s[j] != c && s[j] != '\0')
			j++;
		i++;
	}
	split[i] = NULL;
	return (split);
}
/*
int	main(void)
{
	
	char const	str[] = " test ca va";
	char **res;
	char	c = ' ';
	int	i;

	res = ft_split(str, c);
	i = 0;
	while(res[i])
	{
		 printf("[%s]\n", res[i]);
		i++;
	}
	
	printf("%d\n", count_w(str, c));
	
	ft_wfree(res, i);
	
}
*/
