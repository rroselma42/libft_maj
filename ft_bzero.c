/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroselma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 17:52:01 by rroselma          #+#    #+#             */
/*   Updated: 2025/11/11 18:10:07 by rroselma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*p;

	p = s;
	i = 0;
	while (i < n)
	{
		p[i] = '\0';
		i++;
	}
}
/*
int	main(void)
{
	char s[] = "test";
	char p[] = "salut";
	printf("avant fct : %s\n", s);
	bzero(s, 2);
	printf("apres bzero fct :  %s\n", s);
	printf("avant fct ft_bzero : %s\n", p);
	ft_bzero(p, 2);
	printf("apres fct ft_bzero: %s", p);
}*/
