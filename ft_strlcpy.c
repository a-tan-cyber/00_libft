/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtan <amtan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 16:15:07 by amtan             #+#    #+#             */
/*   Updated: 2025/11/19 16:53:32 by amtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dsize)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = 0;
	while (src[src_len])
	{
		if (dsize > 0 && i < dsize - 1)
		{
			dst[i] = src[src_len];
			i++;
		}
		src_len++;
	}
	if (dsize > 0)
		dst[i] = '\0';
	return (src_len);
}
