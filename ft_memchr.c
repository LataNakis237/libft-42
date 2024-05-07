/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmezock- <lmezock-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 16:43:54 by lmezock-          #+#    #+#             */
/*   Updated: 2024/04/03 19:07:00 by lmezock-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str = (const unsigned char *)s;
	size_t				index;

	index = 0;
	while (index < n)
	{
		if (str[index] == (unsigned char)c)
		{
			return ((void *)&str[index]);
		}
		index++;
	}
	return (NULL);
}

// int main()
// {
//     char str[] = "hello";
//     char c = 'o';
//     char * result = ft_memchr(str, c, 4);
//     printf("%td\n", result - str);
//     return (0);
// }