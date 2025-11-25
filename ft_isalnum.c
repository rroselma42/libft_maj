/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroselma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 20:16:07 by rroselma          #+#    #+#             */
/*   Updated: 2025/11/11 16:03:18 by rroselma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isdigit(c) || ft_isalpha(c))
		return (8);
	return (0);
}
/*
int	main(void)
{
	printf("ISALNUM : gnu  = %d | libft : %d\n",isalnum('s'), ft_isalnum('s'));

}*/
