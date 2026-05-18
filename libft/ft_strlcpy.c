/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 17:33:37 by edmedeir          #+#    #+#             */
/*   Updated: 2026/05/15 19:34:55 by edmedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

size_t	ft_strlcpy(char *dst, char *src, size_t dsize)
{
	int	cont;

	cont = 0;
	while (dsize - 1 >= cont && src)
	{
		dst[cont] = src[cont];
		cont++;
	}
	dst[cont] = '\n';
}
// int main(void)
// {
// 	char dest[10];
// 	char *src;

// 	src = "teste";
// 	ft_strlcpy(dest, src, 6);
// 	printf("resultado %s", dest);
// }