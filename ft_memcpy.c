/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmezock- <lmezock-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 16:03:16 by lmezock-          #+#    #+#             */
/*   Updated: 2024/04/09 18:21:23 by lmezock-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		index;
	const char	*src1;
	char		*dst1;

	src1 = (const char *)src;
	dst1 = (char *)dst;
	index = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (index < n)
	{
		dst1[index] = src1[index];
		index++;
	}
	return ((void *)dst);
}

// int main()
// {
//     char src[] = "nakis";
//     char dst[10] = "";
//     printf("%s\n", src);
//     ft_memcpy(dst, src, 3);
//     printf("%s\n", dst);
//     return (0);
// }