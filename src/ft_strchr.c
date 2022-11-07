/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhesso <jhesso@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 11:29:39 by jhesso            #+#    #+#             */
/*   Updated: 2022/11/07 21:54:18 by jhesso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*tmp;

	tmp = (char *)s;
	while (*tmp != '\0')
	{
		if (*tmp == c)
			return (tmp);
		tmp++;
	}
	if (c == '\0')
	{
		return (tmp);
	}
	return (NULL);
}
