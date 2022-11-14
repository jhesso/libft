/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhesso <jhesso@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 14:18:48 by jhesso            #+#    #+#             */
/*   Updated: 2022/10/29 14:21:50 by jhesso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int main(void)
{
	const char	*s1 = "Hello World!";
	char		*s2;
	char		*ft_s2;

	s2 = strdup(s1);
	ft_s2 = ft_strdup(s1);
	if (s2 == NULL || ft_s2 == NULL)
	{
		printf("could not allocate memory");
		return (-1);
	}
	printf("Result of strdup(): %s\n", s2);
	printf("Result of ft_strdup(): %s\n", ft_s2);
	return (0);
}
