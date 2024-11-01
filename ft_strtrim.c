/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgumusta <kgumusta@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:01:06 by kgumusta          #+#    #+#             */
/*   Updated: 2024/11/02 01:52:02 by kgumusta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	start_i;
	int	end_i;

	start_i = 0;
	end_i = ft_strlen(s1);
	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	if (end_i > 0)
		end_i--;
	while (s1[start_i] != '\0' && ft_strchr(set, s1[start_i]))
		start_i++;
	while (s1[end_i] != '\0' && ft_strrchr(set, s1[end_i]))
		end_i--;
	return (ft_substr(s1, start_i, end_i - start_i + 1));
}
