/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 18:50:26 by cmckelvy          #+#    #+#             */
/*   Updated: 2019/02/14 15:38:50 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t n;

	i = 0;
	if (!haystack[0])
		return ((char*)needle);
	while (needle[i] != '\0')
	{
		n = 0;
		while (needle[n] == haystack[i + n] && i + n < len)
			if (!needle[n++])
				return ((char*)&haystack[i]);
		if (n != 0 && !needle[n])
			return ((char*)&haystack[i]);
		++i;
	}
	return (NULL);
}
