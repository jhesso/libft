/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhesso <jhesso@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 21:43:16 by jhesso            #+#    #+#             */
/*   Updated: 2022/11/04 15:46:32 by jhesso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
// {
// 	char	*hay;
// 	char	*need;
// 	int		found;
// 	int		needle_size;

// 	hay = (char *)haystack;
// 	need = (char *)needle;
// 	found = 0;
// 	needle_size = ft_strlen(need);
// 	if (need[0] == '\0')
// 		return (hay);
// 	while (len != 0 && *hay != '\0')
// 	{
// 		if ((found > 0 && *hay - 1 == *need - 1 && *hay == *need)
// 			|| (found == 0 && *hay == *need))
// 		{
// 			found++;
// 			need++;
// 		}
// 		if (found == needle_size)
// 			return (hay - found + 1);
// 		hay++;
// 		len--;
// 	}
// 	return (NULL);
// }

// char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
// {
// 	char	*hay;
// 	char	*need;
// 	int		found;
// 	int		needle_size;

// 	hay = (char *)haystack;
// 	need = (char *)needle;
// 	found = 0;
// 	needle_size = ft_strlen(need);
// 	if (need[0] == '\0')
// 		return (hay);
// 	while (len != 0 && *hay != '\0')
// 	{
// 		while ((found > 0 && *hay - 1 == *need - 1 && *hay == *need)
// 			|| (found == 0 && *hay == *need))
// 		{
// 			found++;
// 			need++;
// 			hay++;
// 		}
// 		if (found == needle_size)
// 			return (hay - found + 1);
// 		need = need - found;
// 		found = 0;
// 		len--;
// 	}
// 	return (NULL);
// }

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle == NULL || *needle == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (needle[j] == haystack[i + j] && i + j < len)
		{
			if (needle[j + 1] == '\0')
				return ((char *)haystack + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
