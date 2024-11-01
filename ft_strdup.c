/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgumusta <kgumusta@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:59:16 by kgumusta          #+#    #+#             */
/*   Updated: 2024/11/01 19:07:22 by kgumusta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *src)
{
	char	*ptr;
	size_t	len;

	len = ft_strlen(src);
	ptr = (char *)malloc(len + 1);
	if (!ptr)
		return (0);
	ft_strlcpy(ptr, src, len + 1);
	return (ptr);
}
