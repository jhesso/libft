/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhesso <jhesso@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 22:17:44 by jhesso            #+#    #+#             */
/*   Updated: 2022/10/31 16:07:55 by jhesso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int	main(void)
{
	const char	*str = "\t\v\f\r\n \f-06050";
	int			ret;
	int			ft_ret;

	ret = atoi(str);
	ft_ret = ft_atoi(str);
	printf("Return value of atoi(): %d\n", ret);
	printf("Return value of ft_atoi(): %d\n", ft_ret);
	return (0);
}
