/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroselma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 18:49:32 by rroselma          #+#    #+#             */
/*   Updated: 2025/11/24 16:52:42 by rroselma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_free(char *sub)
{
	sub = malloc(1);
	if (!sub)
		return (NULL);
	sub[0] = '\0';
	return (sub);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (len >= s_len - start)
		len = s_len - start;
	sub = NULL;
	if (start >= ft_strlen(s))
		return (ft_free(sub));
	sub = malloc(sizeof(char) * len + 1);
	if (!sub)
		return (NULL);
	i = 0;
	while (i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
/*
int	main(void)
{
	unsigned int st;

	st = 7;
	printf("%s",ft_substr("bonjour", st, 7 ));
//	printf("test");
}*/
