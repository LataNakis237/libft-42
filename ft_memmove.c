/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmezock- <lmezock-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 21:34:45 by lmezock-          #+#    #+#             */
/*   Updated: 2024/04/11 19:47:56 by lmezock-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*ptr_dst;
	char	*ptr_src;

	i = 0;
	if (!dst && !src)
		return (NULL);
	ptr_dst = (char *)dst;
	ptr_src = (char *)src;
	if (ptr_dst < ptr_src)
	{
		while (i < len)
		{
			ptr_dst[i] = ptr_src[i];
			i++;
		}
		return (dst);
	}
	while (len > 0)
	{
		ptr_dst[len - 1] = ptr_src[len - 1];
		len--;
	}
	return (dst);
}

// #include<stdio.h>
// int main()
// {
//     char src[] = "katalya";
//     char *dst;
//     char *i = ft_memmove (dst, src, 5);
//     printf("%p", i);
//     return (0);
// }