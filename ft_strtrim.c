/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroselma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 11:42:15 by rroselma          #+#    #+#             */
/*   Updated: 2025/11/24 16:43:00 by rroselma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isset(char cset, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (cset == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	st;
	size_t	en;
	size_t	len;

	st = 0;
	en = ft_strlen(s1) - 1;
	while (s1[st] && ft_isset(s1[st], set))
		st++;
	while (en > st && ft_isset(s1[en], set))
		en--;
	len = (en - st) + 1;
	return (ft_substr(s1, st, len));
}
/*
int	main(void)
{
	char const *ori = "--sal ut -";
	char const *set = "- ";
	printf("%s", ft_strtrim(ori,set));
	return (0);
}*/
