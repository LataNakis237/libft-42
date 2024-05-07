/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmezock- <lmezock-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 20:39:20 by lmezock-          #+#    #+#             */
/*   Updated: 2024/04/09 14:44:37 by lmezock-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// size_t ft_strlen(const char *str) {
//     size_t len = 0;
//     while (str[len] != '\0') {
//         len++;
//     }
//     return (len);
// }

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len_dst;
	size_t	len_src;

	len_dst = 0;
	if (dst)
		len_dst = (size_t)ft_strlen(dst);
	len_src = (size_t)ft_strlen(src);
	i = 0;
	if (dstsize == 0 || dstsize <= len_dst)
		return (dstsize + len_src);
	while ((i < dstsize - len_dst - 1) && src[i] != '\0')
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[len_dst + i] = '\0';
	return (len_dst + len_src);
}
// #include<stdio.h>
// int main()
// {
//     char src[] = "hello";
//     char dst[10] = "world";
//     unsigned int result = ft_strlcat(dst, src, 0);
//     printf("%u\n", result);
//     return (0);
// }