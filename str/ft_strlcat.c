/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 10:23:07 by cmckelvy          #+#    #+#             */
/*   Updated: 2019/02/18 10:47:00 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

unsigned int	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int len;

	i = 0;
	j = 0;
	len = 0;
	while (dest[i] != '\0')
		i++;
	while (src[len] != '\0')
		len++;
	if (size <= i)
		len += size;
	else
		len += i;
	j = 0;
	while (src[j] != '\0' && (i + 1) < size)
	{
		dest[i] = src[j];
		++j;
		++i;
	}
	dest[i] = '\0';
	return (len);
}
