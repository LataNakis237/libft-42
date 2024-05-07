/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmezock- <lmezock-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 14:59:31 by lmezock-          #+#    #+#             */
/*   Updated: 2024/04/09 14:42:51 by lmezock-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;
	size_t	index;

	ptr = malloc(count * size);
	index = 0;
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (index < count * size)
	{
		ptr[index] = 0;
		index++;
	}
	return ((void *)ptr);
}

// int main()
// {
//     size_t count;
//     size_t size;
//     count = 50;
//     size = sizeof(char);
//     char *a = ft_calloc(count, size);
//     printf("%p\n", (void *)a);
//     return (0);
// }