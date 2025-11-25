/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroselma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 14:04:35 by rroselma          #+#    #+#             */
/*   Updated: 2025/11/17 13:42:44 by rroselma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size <= 0)
		return (ft_strlen(src));
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}
/*
int	main(void)
{
	char	dest[] = "salutation";
	char	dest1[] = "salutation";
 	const	char	src[] = "source";
 	const	char	src1[] = "source";
	printf("strlcpy: %ld", strlcpy(dest, src, 0));
	printf("\nft_strlcpy: %ld", ft_strlcpy(dest1, src1, 0));
}*/
