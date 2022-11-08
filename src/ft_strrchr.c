/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhesso <jhesso@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 11:55:40 by jhesso            #+#    #+#             */
/*   Updated: 2022/11/08 18:51:49 by jhesso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*tmp;
	int		start;
	char	a;

	tmp = (char *)s;
	start = 0;
	a = (char)c;
	while (*tmp++ != '\0')
		start++;
	tmp--;
	start++;
	if (a == '\0')
		return (tmp);
	while (start-- != 0)
	{
		if (*tmp == a)
			return (tmp);
		tmp--;
	}
	return (NULL);
}
