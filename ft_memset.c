/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroselma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 16:16:26 by rroselma          #+#    #+#             */
/*   Updated: 2025/11/11 17:50:38 by rroselma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;

	p = s;
	i = 0;
	while (i < n)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
/*
int main( void )
{
   char buffer[] = "This is a test of the memset function";

   	printf( "Before: %s\n", buffer);
	memset(buffer, '/', 5);
  // ft_memset( buffer, '*', 5 );
   printf( "After:  %s\n", buffer );

	
}*/
