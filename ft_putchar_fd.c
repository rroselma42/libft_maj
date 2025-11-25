/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroselma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 18:05:23 by rroselma          #+#    #+#             */
/*   Updated: 2025/11/25 19:01:48 by rroselma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
#include <fcntl.h>
int	main(void)
{
	int fd;
	// creer un fichier , ecrire | ecraser son contenu | ecriture seul
	fd = open("test.txt", O_CREAT | O_TRUNC | O_WRONLY, 0640);
	if (fd == -1)
		return (1);
	printf("fd du fichier ouvert  = %d\n", fd);
	ft_putchar_fd('c', 3);
}*/
