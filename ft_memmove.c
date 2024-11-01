/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgumusta <kgumusta@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 02:19:44 by kgumusta          #+#    #+#             */
/*   Updated: 2024/10/31 10:55:49 by kgumusta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*d;
	char	*s;

	if (!dst && !src)
		return (0);
	if (dst < src)
		return (ft_memcpy(dst, src, n));
	d = (char *)dst;
	s = (char *)src;
	while (n > 0)
	{
		d[n - 1] = s[n - 1];
		n--;
	}
	return (dst);
}
