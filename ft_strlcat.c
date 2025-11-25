/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroselma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 15:54:59 by rroselma          #+#    #+#             */
/*   Updated: 2025/11/14 13:12:35 by rroselma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{	
	size_t	l;
	size_t	i;

	i = 0;
	l = ft_strlen(dest);
	if (size <= l)
		return (size + ft_strlen(src));
	while ((l + i) < size - 1 && src[i])
	{
		dest[l + i] = src[i];
		i++;
	}
	dest[l + i] = '\0';
	return (l + ft_strlen(src));
}

/*
int	main(void)
{
	size_t	size = 7;
	size_t	size1 = 7;
	char	dest[] =  "bonjour";
	char	dest1[] = "bonjour";
 	const	char	src[] = "salut";
 	const	char	src1[] = "salut";
	printf("strlcat: %ld\n", strlcat(dest, src, size));
	printf("\nft_strlcat: %ld", ft_strlcat(dest1, src1, size1));
}
*/
