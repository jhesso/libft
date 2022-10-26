/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhesso <jhesso@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:55:05 by jhesso            #+#    #+#             */
/*   Updated: 2022/10/26 12:06:30 by jhesso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*tmp_src;
	char	*tmp_dst;
	
	tmp_src = (char *)src;
	tmp_dst = (char *)dst;
	while (n--)
		*tmp_dst++ = *tmp_src++;
	return (dst);
}
