/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmezock- <lmezock-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 18:58:56 by lmezock-          #+#    #+#             */
/*   Updated: 2024/04/09 14:45:04 by lmezock-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_s;
	size_t	i;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start > s_len)
		len = 0;
	else if (len > s_len - start)
		len = s_len - start;
	new_s = (char *)malloc((len + 1) * sizeof(char));
	if (!new_s)
		return (NULL);
	i = 0;
	while (i < len && start < s_len)
		new_s[i++] = s[start++];
	new_s[i] = '\0';
	return (new_s);
}

// int main()
// {
//     char str[] = "katalya";
//     char *i = ft_substr(str, 2, 4);
//     printf("%s", i);
//     free(i);
//     return (0);
// }