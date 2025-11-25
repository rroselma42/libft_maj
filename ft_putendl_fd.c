/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroselma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 14:35:15 by rroselma          #+#    #+#             */
/*   Updated: 2025/11/25 20:03:05 by rroselma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}
/*
int	main(void)
{
	int fd;
	char	str[] = "salut";

	fd = open("test.txt", O_CREAT | O_WRONLY | O_TRUNC , 0640);
	if(fd == -1)
		return(1);
//	printf("fdnum = %d", fd);
	ft_putendl_fd(str, fd);
}*/
