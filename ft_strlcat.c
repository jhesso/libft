/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhesso <jhesso@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:47:34 by jhesso            #+#    #+#             */
/*   Updated: 2022/11/03 13:57:24 by jhesso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	const char	*src_cpy;
	char		*dst_cpy;
	size_t		dst_len;
	size_t		i;
	size_t		src_len;

	src_cpy = src;
	dst_cpy = dst;
	src_len = ft_strlen(src);
	if (dst_cpy == NULL && dstsize == 0)
		return (src_len);
	dst_len = ft_strlen(dst);
	if (dst_len > dstsize)
		return (dstsize + src_len);
	i = 0;
	while (dst_cpy[i] != '\0')
		i++;
	while (*src_cpy != '\0' && i < dstsize - 1)
	{
		dst_cpy[i] = *src_cpy;
		i++;
		src_cpy++;
	}
	dst_cpy[i] = '\0';
	return (dst_len + src_len);
}
