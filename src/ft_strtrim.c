/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhesso <jhesso@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:18:01 by jhesso            #+#    #+#             */
/*   Updated: 2022/11/08 21:33:34 by jhesso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	*ft_strtrim(char const *s1, char const *set)
// {
// 	char	*ret;
// 	int		len;
// 	int		i;
// 	int		j;

// 	if (s1 == NULL)
// 		return (NULL);
// 	len = 0;
// 	while (s1[i] != '\0')
// 	{
// 		if ()
// 		i++;
// 	}
// 	i = 0;
// 	j = 0;
// }

static int	calc_len2(char const *s1, char const *set, int i)
{
	int	j;
	int	match;

	match = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		while (set[j] != '\0')
			if (s1[j] == set[j++])
				match = -1;
		if (match == -1)
			break;
		i++;
	}
	return (i);
}

static int	calc_len(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	set_len;
	int	match;

	i = 0;
	set_len = ft_strlen(set);
	match = 0;
	while (*s1 != '\0')
	{
		j = 0;
		while (set[j] != '\0')
		{
			if (s1[i] != set[j] && j == set_len - 1)
				match = -1;
			j++;
		}
		i++;
		if (match == -1)
			break;
	}
	return (calc_len2(s1, set, i));
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		ret_len;
	char	*ret;
	int		j;
	int		not_found;

	ret_len = calc_len(s1, set);
	ret = malloc(sizeof(ret) * ret_len + 1);
	if (ret == NULL)
		return (NULL);
	not_found = 1;
	while (*s1 != '\0' && not_found == 1)
	{
		j = 0;
		while (set[j] != '\0')
		{
			if (*s1 == set[j++])
				s1++;
		}
	}
}
