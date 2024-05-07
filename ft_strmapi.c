/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmezock- <lmezock-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 20:48:23 by lmezock-          #+#    #+#             */
/*   Updated: 2024/04/09 18:15:00 by lmezock-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int ft_strlen(char const *str)
// {
//     int count;
//     count = 0;
//     while (str[count] != '\0')
//     {
//         count++;
//     }
//     return (count);
// }

char	funct(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = c - 32;
	}
	return (c);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		len;
	char	*result;
	int		i;

	len = ft_strlen(s);
	result = malloc((len + 1) * sizeof(char));
	i = 0;
	if (result == NULL)
	{
		return (NULL);
	}
	while (s[i] != '\0' && i < len)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[len] = '\0';
	return (result);
}

// int main()
// {
//     char *s = "love katalya";
//     char *result = ft_strmapi(s, func);
//     printf("%s", result);
//     return (0);
// }