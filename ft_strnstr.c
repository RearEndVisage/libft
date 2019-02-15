/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 18:50:26 by cmckelvy          #+#    #+#             */
/*   Updated: 2019/02/14 16:31:51 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	n;

	if (!needle[0])
		return ((char*)haystack);
	i = 0;
	while (haystack[i])
	{
		n = 0;
		while (needle[n] == haystack[i + n] && i + n < len)
			if (!needle[n++])
				return ((char*)&haystack[i]);
		if (n != 0 && !needle[n])
			return ((char*)&haystack[i]);
		i++;
	}
	return (NULL);
}

int		main(int argc, char *argv[])
{
	if (argc == 0)
		return 1;
	printf("%s", ft_strnstr(argv[1], argv[2], 88888 ));
	return 0;
}
