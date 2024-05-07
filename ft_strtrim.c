/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmezock- <lmezock-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 20:03:55 by lmezock-          #+#    #+#             */
/*   Updated: 2024/04/09 14:44:59 by lmezock-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new_str;
	size_t	begin;
	size_t	end;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	if (set[0] == '\0' || s1[0] == '\0')
		return (ft_strdup(s1));
	begin = 0;
	end = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[begin]) && s1[begin])
		begin++;
	while (ft_strchr(set, s1[end]) && begin < end)
		end--;
	new_str = (char *)malloc((end - begin + 2) * sizeof(char));
	if (!new_str)
		return (NULL);
	i = 0;
	while (begin <= end)
		new_str[i++] = s1[begin++];
	new_str[i] = '\0';
	return (new_str);
}
// int main() {
//     char s1[] = "katalya";
//     char set[] = "kya";
//     char *str = ft_strtrim(s1, set);
//     if (str == NULL) {
//         printf("Memory allocation failed.\n");
//         return (1);
//     }
//     printf("%s\n", str);
//     free(str); // Free allocated memory
//     return (0);
// }

// int main()
// {
//     char s1[] = "katalya";
//     char set[] = "t";
//     char *str = ft_strtrim(s1, set);
//     printf("%s", str);
//     return (0);
// }