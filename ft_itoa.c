/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroselma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 14:33:06 by rroselma          #+#    #+#             */
/*   Updated: 2025/11/24 14:50:24 by rroselma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_len(long int n)
{
	int	count;

	count = 0;
	if (n <= 0)
	{
		count++;
		n *= -1;
	}
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int			len;
	long int	nb;
	char		*res;

	nb = n;
	len = count_len(nb);
	res = malloc((sizeof(char) * (len + 1)));
	if (!res)
		return (NULL);
	res[len] = '\0';
	if (nb < 0)
	{
		nb *= -1;
		res[0] = '-';
	}
	if (nb == 0)
		res[--len] = '0';
	while (len > 0 && res[len - 1] != '-')
	{
		res[len - 1] = (nb % 10) + '0';
		nb = nb / 10;
		len--;
	}
	return (res);
}

/*
int	main(void)
{
	printf("%s\n", ft_itoa(123));
	printf("%s\n", ft_itoa(-123));
	printf("%s\n", ft_itoa(-32768));
	printf("%s\n", ft_itoa(32767));
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa((546773)));
}*/
