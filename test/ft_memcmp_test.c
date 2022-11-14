/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhesso <jhesso@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 20:29:20 by jhesso            #+#    #+#             */
/*   Updated: 2022/10/31 14:58:49 by jhesso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

// int	main(void)
// {
// 	char	*s1 = NULL;
// 	char	*s2 = "Hllo World!";
// 	size_t	n;
// 	int		ret;
// 	// int		ft_ret;

// 	n = 12;
// 	ret = memcmp(s1, s2, n);
// 	// ft_ret = ft_memcmp(s1, s2, n);
// 	printf("return value of memcmp(): %d\n", ret);
// 	// printf("return value of ft_memcmp(): %d\n", ft_ret);
// 	return (0);
// }

int main () 
{
    char *st1 = "atoms\0\0\0\0";
    char *st2 = "atoms\0abc";
    size_t sizet1 = 8;
    int i1 = memcmp(st1, st2, sizet1);
    printf("%d\n", i1);
    
    char *ste1 = "atoms\0\0\0\0";
    char *ste2 = "atoms\0abc";
    size_t sizet2 = 8;
    int i2 = ft_memcmp(ste1, ste2, sizet2);
    printf("%d\n\n", i2);
    
    char str1[] = "AB";
    char str2[] = "ABcdf";
    int size;
    size = memcmp(str1, str2, 4);
    printf("%d\n", size);
   
       char s1[] = "AB";
       char s2[] = "ABcdf";
    int s;
    s = ft_memcmp(s1, s2, 4);
    printf("%d", s);
       
    return(0);
}
