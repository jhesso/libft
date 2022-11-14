/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhesso <jhesso@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 13:22:37 by jhesso            #+#    #+#             */
/*   Updated: 2022/10/31 13:27:33 by jhesso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int	main(void)
{
	const char	*s1 = "";
	const char	*s2 = "asdasdasd";
	char		*ret;

	ret = ft_strjoin(s1, s2);
	printf("result of ft_strjoin(): %s\n", ret);
	return (0);
}
