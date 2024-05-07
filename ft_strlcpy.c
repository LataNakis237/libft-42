/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmezock- <lmezock-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 19:50:00 by lmezock-          #+#    #+#             */
/*   Updated: 2024/04/09 14:44:40 by lmezock-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len_src;

	i = 0;
	len_src = (size_t)ft_strlen(src);
	if (dst && dstsize != 0)
	{
		while (src[i] != '\0' && i < dstsize - 1)
		{
			*(dst + i) = *(src + i);
			i++;
		}
		*(dst + i) = '\0';
	}
	return (len_src);
}

// int main()
// {
//     char src[] = "nakis";
//     char dst[10] = "";
//     printf("%s\n", src);
//     ft_strlcpy(dst, src, 3);
//     printf("%s\n", dst);
//     return (0);
// }