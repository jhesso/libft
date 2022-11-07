/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhesso <jhesso@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:09:56 by jhesso            #+#    #+#             */
/*   Updated: 2022/11/07 21:54:18 by jhesso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// // #include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*dst;

	dst = (unsigned char *)s;
	while (n--)
		*dst++ = (unsigned char)0;
}
