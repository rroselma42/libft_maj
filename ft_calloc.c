/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroselma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 13:48:43 by rroselma          #+#    #+#             */
/*   Updated: 2025/11/25 19:11:45 by rroselma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*ptr;
	size_t	i;

	i = 0;
	if (nmemb != 0 && size > SIZE_MAX / nmemb)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (!ptr)
		return (NULL);
	while (i < nmemb * size)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
/*
int main(void)
{
	int	i;
	
	i = 0;
	 printf("SIZE_MAX = %zu\n", SIZE_MAX);
    printf("si (nmb * size) > size_max \n");
    void *p = ft_calloc(SIZE_MAX, 2);
    printf("nmemb = size_max : %p\n\n", p);
    if (p)
        free(p);

    printf("allocation string\n");
    char *str = ft_calloc(5, sizeof(char));

    printf("str : ");
    while ( i < 5)
	{
        printf("%d ", str[i]);
		i++;
	}
    printf("\n");
    free(str);

    return 0;
}
*/
