/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhesso <jhesso@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 11:55:40 by jhesso            #+#    #+#             */
/*   Updated: 2022/10/31 16:00:32 by jhesso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*tmp;
	int		start;

	tmp = (char *)s;
	start = 0;
	while (*tmp++ != '\0')
		start++;
	tmp--;
	start++;
	if (c == '\0')
		return (tmp);
	while (start-- != 0)
	{
		if (*tmp == c)
			return (tmp);
		tmp--;
	}
	return (NULL);
}
