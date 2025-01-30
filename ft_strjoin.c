/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmakarya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 00:14:19 by vmakarya          #+#    #+#             */
/*   Updated: 2025/01/30 18:50:08 by vmakarya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*copy;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	copy = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!copy)
		return (NULL);
	i = -1;
	j = -1;
	while (s1[++i])
		copy[i] = s1[i];
	while (s2[++j])
		copy[i++] = s2[j];
	copy[i] = '\0';
	return (copy);
}
