/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroselma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 14:38:13 by rroselma          #+#    #+#             */
/*   Updated: 2025/11/24 14:57:56 by rroselma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

/*

void static ft_upper(unsigned int i, char *id_c)
{
	(void)i;
	if (*id_c >= 'a' && *id_c <= 'z')
		*id_c -= 32;

}

int	main(void)
{
	char	str[] = "salut !";

	ft_striteri(str, ft_upper);
	printf("%s\n", str);

}
*/
