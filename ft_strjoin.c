/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgumusta <kgumusta@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:59:37 by kgumusta          #+#    #+#             */
/*   Updated: 2024/11/02 02:07:46 by kgumusta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str1;
	char	*str2;
	char	*s3;

	if (!s1 || !s2)
		return (NULL);
	str1 = (char *)s1;
	str2 = (char *)s2;
	s3 = (char *)malloc(ft_strlen(str1) + ft_strlen(str2) + 1);
	if (!s3)
		return (NULL);
	ft_memcpy(s3, str1, ft_strlen(str1));
	ft_memcpy(s3 + ft_strlen(str1), s2, ft_strlen(str2));
	*(s3 + ft_strlen(str1) + ft_strlen(str2)) = 0;
	return (s3);
}
