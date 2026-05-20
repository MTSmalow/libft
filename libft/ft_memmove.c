/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 11:52:45 by edmedeir          #+#    #+#             */
/*   Updated: 2026/05/19 22:11:57 by edmedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t cont)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			cont2;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (dest == src || cont == 0)
		return (dest);
	if (dest < src && cont != 0)
	{
		cont2 = 0;
		while (cont2 < cont)
		{
			d[cont2] = s[cont2];
			cont2++;
		}
	}
	else
		while (cont > 0)
		{
			d[cont - 1] = s[cont - 1];
			cont--;
		}
	return (dest);
}
