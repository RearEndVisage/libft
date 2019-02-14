/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 15:52:44 by cmckelvy          #+#    #+#             */
/*   Updated: 2019/02/14 10:50:56 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *needle, char *haystack)
{
	int i;
	int n;

	i = 0;
	if (haystack[0] == '\0')
		return (needle);
	while (needle[i] != '\0')
	{
		n = 0;
		while (needle[i + n] != '\0' && needle[i + n] == haystack[n])
		{
			if (haystack[n + 1] == '\0')
				return (&needle[i]);
			++n;
		}
		++i;
	}
	return (0);
}
