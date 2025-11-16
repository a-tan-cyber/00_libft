/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtan <amtan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 00:00:53 by amtan             #+#    #+#             */
/*   Updated: 2025/11/17 00:22:44 by amtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	a;
	char	z_cap;
	char	digit;
	char	symbol;

	a = 'a';
	z_cap = 'Z';
	digit = '1';
	symbol = '#';
	printf("'%c' -> %d\n", a, ft_isalpha(a));
	printf("'%c' -> %d\n", z_cap, ft_isalpha(z_cap));
	printf("'%c' -> %d\n", digit, ft_isalpha(digit));
	printf("'%c' -> %d\n", symbol, ft_isalpha(symbol));
}

