/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 16:23:57 by cmckelvy          #+#    #+#             */
/*   Updated: 2019/02/12 20:20:50 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char *dest;

	dest = (char*)malloc((ft_strlen(src) + 1) * sizeof(char));
	if (dest)
		return (ft_strcpy(dest, src));
	else
		return (dest);
}
