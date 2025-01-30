/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmakarya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 18:43:40 by vmakarya          #+#    #+#             */
/*   Updated: 2025/01/27 18:39:20 by vmakarya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*ptr;
	const unsigned char	*ptr1;

	if (!dest && !src)
	{
		return (NULL);
	}
	ptr = (unsigned char *)dest;
	ptr1 = (const unsigned char *)src;
	while (n--)
		*ptr++ = *ptr1++;
	return (dest);
}
