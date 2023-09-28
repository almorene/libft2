/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almorene <almorene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:10:33 by almorene          #+#    #+#             */
/*   Updated: 2023/09/28 20:03:19 by almorene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	/*size_t	i;
	size_t	j;
	char	*str;

	if (s == NULL)
		return (NULL);
	str = malloc(sizeof (*s) * ((const char)len + 1));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[j] = 0;
	return (str);*/
	unsigned int	i;
	char	*str;

	i = 0;
	str = (char *)malloc(sizeof(char) * len +1);
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*int main (void)
{
	char const *s = "hola, amigo mio";
	unsigned int start = 2;
	size_t len = 20;

	printf("%s" ,ft_substr(s, start, len));
	return(0);
}*/
