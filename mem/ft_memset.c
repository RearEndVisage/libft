/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 12:09:34 by cmckelvy          #+#    #+#             */
/*   Updated: 2019/02/16 22:38:25 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*tmp;

	if (n == 0)
		return (s);
	tmp = (unsigned char*)s;
	while (n--)
	{
		*tmp = (unsigned char)c;
		if (n)
			tmp++;
	}
	return (s);
}
