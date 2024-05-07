/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmezock- <lmezock-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 18:26:24 by lmezock-          #+#    #+#             */
/*   Updated: 2024/04/09 14:42:43 by lmezock-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	index;

	str = (char *)s;
	index = 0;
	while (index < n)
	{
		str[index] = 0;
		index++;
	}
}

// int main()
// {
//     char s[] = "nakis";
//     printf("before : %s\n", s);
//     ft_bzero(s, 5);
//     printf("after : %s\n", s);
//     return (0);
// }