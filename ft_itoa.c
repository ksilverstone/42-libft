/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgumusta <kgumusta@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 21:18:13 by kgumusta          #+#    #+#             */
/*   Updated: 2024/11/01 19:07:00 by kgumusta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	numcount(int n)
{
	if (!(n / 10))
		return (1);
	else
		return (1 + numcount(n / 10));
}

static char	*convert(int n, char *ptr, int size)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		ptr[0] = '-';
		n *= -1;
		i = 1;
	}
	ptr[--size] = 0;
	while (size > i)
	{
		ptr[--size] = (n % 10) + '0';
		n /= 10;
	}
	return (ptr);
}

char	*ft_itoa(int n)
{
	int		size;
	char	*ptr;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	size = numcount(n) + 1;
	if (n < 0)
		size ++;
	ptr = (char *)malloc(size);
	if (!ptr)
		return (0);
	return (convert(n, ptr, size));
}
