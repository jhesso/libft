/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhesso <jhesso@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:47:34 by jhesso            #+#    #+#             */
/*   Updated: 2022/10/26 19:14:38 by jhesso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

// size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
// {
// 	size_t	i;

// 	i = 0;
// 	while (*dst++ && dstsize-- > 0)
// 		i++;
// 			printf("i after skipping to end of dst: %zu\n", i);
// 	while (*src && dstsize-- > 1)
// 	{
// 		printf("we are in the second while loop.\n");
// 		*dst++ = *src++;
// 		i++;
// 	}
// 	*dst = '\0';
// 	return (i);
// }

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	dst_offset;
	size_t	index;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen((char *)src);
	dst_offset = dst_len;
	index = 0;
	while (src[index] != '\0' && dst_offset < dstsize)
		dst[dst_offset++] = src[index++];
	dst[dst_offset] = '\0';
	return (dst_len + src_len);
}

size_t test_ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
    size_t d_len,s_len,offset,src_index;

    /* obtain initial sizes */
    d_len = strlen(dst);
    s_len = strlen(src);

    /* get the end of dst */
    offset = d_len;

    /* append src */
    src_index = 0;
    while( *(src+src_index) != '\0' )
    {
        *(dst+offset) = *(src+src_index);
        offset++;
        src_index++;
        /* don't copy more than dstsize characters
           minus one */
        if( offset==dstsize-1)
            break;
    }
    /* always cap the string! */
    *(dst+offset) = '\0';

    return( d_len+s_len );
}

size_t apple_strlcat(char *dst, const char *src, size_t siz)
{
	register char *d = dst;
	register const char *s = src;
	register size_t n = siz;
	size_t dlen;

	/* Find the end of dst and adjust bytes left but don't go past end */
	while (n-- != 0 && *d != '\0')
		d++;
	dlen = d - dst;
	n = siz - dlen;

	if (n == 0)
		return(dlen + strlen(s));
	while (*s != '\0') {
		if (n != 1) {
			*d++ = *s;
			n--;
		}
		s++;
	}
	*d = '\0';

	return(dlen + (s - src));	/* count does not include NUL */
}
