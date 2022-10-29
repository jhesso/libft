/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhesso <jhesso@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 13:45:54 by jhesso            #+#    #+#             */
/*   Updated: 2022/10/29 14:06:18 by jhesso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	c;
	char	*tmp;

	ptr = malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	c = 0;
	tmp = (char *)ptr;
	while (c < count)
		tmp[c++] = 0;
	return (ptr);
}
