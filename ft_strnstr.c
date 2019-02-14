/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 18:50:26 by cmckelvy          #+#    #+#             */
/*   Updated: 2019/02/14 15:43:07 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	k;

	if (!to_find[0])
		return ((char*)str);
	i = -1;
	while (str[++i])
	{
		k = 0;
		while (to_find[k] == str[i + k] && i + k < len)
			if (!to_find[k++])
				return ((char*)&str[i]);
		if (k != 0 && !to_find[k])
			return ((char*)&str[i]);
	}
	return (NULL);
}
