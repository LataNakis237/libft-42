/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmezock- <lmezock-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 15:48:26 by lmezock-          #+#    #+#             */
/*   Updated: 2024/04/09 14:56:19 by lmezock-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*str;
	size_t	index;

	str = (char *)s;
	index = 0;
	while (index < n)
	{
		str[index] = c;
		index++;
	}
	return ((void *)str);
}

// int main()
// {
//     char str[] = "nakis";
//     ft_memset(str, 'a', 5);
//     printf("%s", str);
//     return (0);
// }