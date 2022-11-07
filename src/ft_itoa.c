/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhesso <jhesso@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 14:45:10 by jhesso            #+#    #+#             */
/*   Updated: 2022/11/07 22:33:50 by jhesso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

// char	*ft_revstr(char *str)
// {
// 	int		i;
// 	int		j;
// 	char	*swap;

// 	i = 0;
// 	j = ft_strlen(str) - 1;
// 	swap = malloc(sizeof(char) * j + 2);
// 	if (swap == NULL)
// 		return (NULL);
// 	if (str[0] == '-')
// 		swap[i++] = '-';
// 	while (j >= 0 && str[j] >= '0' && str[j] <= '9')
// 	{
// 		swap[i] = str[j];
// 		j--;
// 		i++;
// 	}
// 	swap[i] = '\0';
// 	return (swap);
// }

// char	*ft_itoa(int n)
// {
// 	char	*str;
// 	int		i;
// 	int		tmp;

// 	str = malloc(sizeof(n) + 1); // allocating the size of int for now as the number cant be larger right?
// 	if (str == NULL)
// 		return (NULL);
// 	i = 0;
// 	tmp = 0;
// 	if (n == -2147483648)
// 	{
// 		str[0] = '-';
// 		str[1] = '8';
// 		n = 214748364;
// 	}
// 	else if (n < 0)
// 	{
// 		str[i++] = '-';
// 		n *= -1;
// 	}
// 	while (n > 0)
// 	{
// 		tmp = n % 10;
// 		str[i++] = tmp + '0';
// 		n = n / 10;
// 	}
// 	str[i] = '\0';
// 	return (ft_revstr(str));
// }

static int nlen(long int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		n = n * -1;
		len++;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char		*str;
	long int	nbr;
	int			i;

	nbr = n;
	i = nlen(nbr);
	if (!(str = malloc(sizeof(char) * (i + 1))))
		return (NULL);
	str[i--] = '\0';
	if (nbr == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = nbr * -1;
	}
	while (nbr > 0)
	{
		str[i] = '0' + (nbr % 10);
		nbr = nbr / 10;
		i--;
	}
	return (str);
}
