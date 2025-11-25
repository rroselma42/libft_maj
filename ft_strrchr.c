/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroselma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 20:07:07 by rroselma          #+#    #+#             */
/*   Updated: 2025/11/17 13:23:19 by rroselma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	*res;
	int		i;

	res = (char *)s;
	len = ft_strlen(s);
	i = len;
	while (i >= 0 || c == '\0')
	{
		if (s[i] == (char)c)
			return (res + i);
		i--;
	}
	return (NULL);
}

/*
int	main(void)
{
	printf("ft_strrhr = %s\n", ft_strrchr("bsalut la la compagnie lol", 'b' ));
	printf("strRchr = %s\n", strrchr("bpsalut la compignie lol", 'b' ));
	printf("strrchr = %s\n", strrchr("", 'l' ));
	printf("ft_strrchr = %s\n", ft_strrchr("", 'l' ));
	printf("strrchr = %d\n", (int)(*strrchr("hhdh", '\0' )));
	printf("ft_strrchr = %d\n", (int)(*ft_strrchr("hhdh", '\0' )));

}*/
