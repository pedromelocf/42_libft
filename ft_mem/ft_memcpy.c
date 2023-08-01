/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 10:55:32 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/08/01 17:54:08 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	counter;
	char* ptrdest;
	const char* ptrsrc;

	counter = 0;
	ptrdest = dest;
	ptrsrc = src;
	while (counter < n)
	{
		ptrdest[counter] = ptrsrc[counter];
		counter++;
	}
	return (dest);
}
