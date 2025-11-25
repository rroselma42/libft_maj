/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroselma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 10:53:39 by rroselma          #+#    #+#             */
/*   Updated: 2025/11/17 13:09:29 by rroselma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;	

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

/*
int	main(void)
{
	char myStr1[] = "ABCD";
	char myStr2[] = "ABCE";
	int cmp = ft_memcmp(myStr1, myStr2, 4);

	if (cmp > 0) 
 		 printf("%s is greater than %s\n", myStr1, myStr2);
	else if (cmp < 0)
  		printf("%s is greater than %s\n", myStr2, myStr1);
	else
  		printf("%s is equal to %s\n", myStr1, myStr2);
}*/
