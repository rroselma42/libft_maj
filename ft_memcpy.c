/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroselma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 18:36:29 by rroselma          #+#    #+#             */
/*   Updated: 2025/11/19 11:23:21 by rroselma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	if (n == 0 || (!d && !s))
		return (dest);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}	
	return (dest);
}
/*
int	main(void)
{

	char	dest[50];
	char	dest1[50];
	char	src[] = "";
	char	src1[] = "";
	ft_memcpy(dest1, src1, 0);
	memcpy(dest, src, 0);
	printf("vr_ source = %s | dest = %s \n", src, dest);
	printf("ft_ source = %s | dest = %s\n", src1, dest1);
}*/
