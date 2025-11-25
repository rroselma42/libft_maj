/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroselma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 10:43:53 by rroselma          #+#    #+#             */
/*   Updated: 2025/11/19 18:02:33 by rroselma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	if (d > s)
	{
		i = n;
		while (i--)
			d[i] = s[i];
	}
	else
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}
/*
int main()
{
		char	dest[] = "hey";
	char	src[] = "ok";
//	memmove(dest, src, 0);
	printf("memmove = %s\n", (char *)memmove(dest, src, 0));

char	dest1[] = "hey";
	char	src1[] = "ok";
//	ft_memmove(dest1, src1, 10);
	printf("ft_memmove = %s\n", (char *)ft_memmove(dest1, src1, 0));

	return 0;
}*/
