/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 10:39:06 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/07/27 10:44:54 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(void *s, size_t n)
{
	size_t	counter;

	counter = 0;
	while (counter < n)
	{
		(s + counter) = '\0';
		counter++;
	}
	return ;
}