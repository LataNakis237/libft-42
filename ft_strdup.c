/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmezock- <lmezock-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 20:44:35 by lmezock-          #+#    #+#             */
/*   Updated: 2024/04/09 14:44:25 by lmezock-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	index;
	char	*ptr;

	index = 0;
	while (s1[index] != '\0')
	{
		index++;
	}
	ptr = malloc((index + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	index = 0;
	while (s1[index] != '\0')
	{
		ptr[index] = s1[index];
		index++;
	}
	ptr[index] = '\0';
	return ((char *)ptr);
}

// int main()
// {
//     char *s1 = "";
//     char *a = ft_strdup(s1);
//     if (a == NULL)
//     {
//         printf("memory allocation failed.\n");
//         return (1);
//     }
//     printf("%s", a);
//     free(a);
//     return (0);

// }