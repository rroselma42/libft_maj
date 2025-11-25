/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroselma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 19:23:00 by rroselma          #+#    #+#             */
/*   Updated: 2025/11/24 16:40:51 by rroselma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*res;

	res = (char *)s;
	i = 0;
	while (s[i] != '\0')
	{	
		if (s[i] == (char)c)
			return (res + i);
		i++;
	}
	if (s[i] == (char)c)
		return (res + i);
	return (NULL);
}

/*
int	main(void)
{
	
	printf("strchr = %s\n", strchr("salut", 'l' ));
	printf("ft_strchr = %s\n", ft_strchr("salut", 'l' ));
	printf("strchr = %s\n", strchr("", 'l' ));
	printf("ft_strchr = %s\n", ft_strchr("", 'l' ));
	printf("strchr = %d\n", (int)(*strchr("hhdh", '\0' )));
	printf("ft_strchr = %d\n", (int)(*ft_strchr("hhdh", '\0' )));
}*/
