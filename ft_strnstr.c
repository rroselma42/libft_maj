/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroselma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 12:18:41 by rroselma          #+#    #+#             */
/*   Updated: 2025/11/19 11:06:36 by rroselma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (i < len && big[i])
	{
		j = 0;
		while (little[j] == big[i + j] && (i + j) < len)
		{
			if (little[j + 1] == '\0')
				return ((char *)big + i);
			j++;
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	const char *largestring1 = "Foo Bar Baz";
	const char *largestring = "Foo Bar Baz";
	const char *smallstring1 = "Ba";
	const char *smallstring = "Ba";
	//char *ptr;
	
	printf("%s\n",ft_strnstr(largestring1, smallstring1, 4));
	printf("%s\n",strnstr(largestring, smallstring, 4));
	
}*/
