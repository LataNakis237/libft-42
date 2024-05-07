/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmezock- <lmezock-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 14:58:13 by lmezock-          #+#    #+#             */
/*   Updated: 2024/04/09 14:44:22 by lmezock-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			d;

	i = 0;
	d = c;
	while (s[i])
	{
		if (s[i] == d)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == d)
		return ((char *)&s[i]);
	return (NULL);
}

// char*   ft_strchr(const char *str, int c)
// {
// 	while (*str)
// 	{
// 		if (*str == (char)c)
// 			return ((char *)str);
// 		str++;
// 	}
// 	if (*str == (char)c)
// 		return ((char *)str);
// 	return (NULL);
// }

// int	main(void)
// {
// 	char str[] = "hello";
// 	char c = 'l';
// 	char *result = ft_strchr(str, c);
// 	printf("%p\n", result);
// 	return (0);
// }