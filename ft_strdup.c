/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtan <amtan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 18:09:04 by amtan             #+#    #+#             */
/*   Updated: 2025/11/21 18:35:29 by amtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <errno.h>
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*p;
	size_t	total;

	total = ft_strlen(s) + 1;
	p = malloc(total);
	if (!p)
	{
		errno = ENOMEM;
		return (NULL);
	}
	ft_memcpy(p, s, total);
	return (p);
}
