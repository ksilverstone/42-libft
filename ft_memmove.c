/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgumusta <kgumusta@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 02:19:44 by kgumusta          #+#    #+#             */
/*   Updated: 2024/11/01 21:17:10 by kgumusta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	if (!dst && !src)
		return (0);
	if (dst < src)
		return (ft_memcpy(dst, src, n));
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	while (n > 0)
	{
		d[n - 1] = s[n - 1];
		n--;
	}
	return (dst);
}
