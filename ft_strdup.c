/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroselma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 13:13:27 by rroselma          #+#    #+#             */
/*   Updated: 2025/11/19 11:10:19 by rroselma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*dup;
	int		len;

	len = ft_strlen(s);
	dup = malloc(sizeof(char) * len + 1);
	if (dup == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
/*
int	main(void)
{
	char *string = "this is a copy";
	char *string1 = "this is a copy";
   	char *newstr;
   	char *newstr1;
//	printf("%s", strdup("salut"));
//	printf("%s", ft_strdup("salut"));
	if ((newstr = strdup(string)) != NULL)
		printf("The new string is: %s\n", newstr);
	if ((newstr1 = ft_strdup(string1)) != NULL)
		printf("The new string is: %s\n", newstr1);
	return 0;
}*/
