/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhesso <jhesso@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 21:43:16 by jhesso            #+#    #+#             */
/*   Updated: 2022/10/28 22:05:29 by jhesso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*hay;
	char	*need;
	int		found;
	int		needle_size;

	hay = (char *)haystack;
	need = (char *)needle;
	found = 0;
	needle_size = ft_strlen(need);
	if (need[0] == '\0')
		return (hay);
	while (len != 0 && *hay != '\0')
	{
		if ((found > 0 && *hay - 1 == *need - 1 && *hay == *need)
			|| (found == 0 && *hay == *need))
		{
			found++;
			need++;
		}
		if (found == needle_size)
			return (hay - found + 1);
		hay++;
		len--;
	}
	return (NULL);
}
