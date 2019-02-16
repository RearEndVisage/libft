/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 16:19:07 by cmckelvy          #+#    #+#             */
/*   Updated: 2019/02/15 16:26:08 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*new;
	int		i;

	i = -1;
	if (s && f)
	{
		if(!(new = (char*)ft_memalloc(ft_strlen(s) + 1)))
			return (NULL);
		while (s[++i])
			new[i] = f(s[i]);
		return (new);
	}
	return (NULL);
}
