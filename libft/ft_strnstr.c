/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 20:33:18 by edmedeir          #+#    #+#             */
/*   Updated: 2026/05/25 16:57:19 by edmedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

char	*ft_strnstr(char *str1, char *str2, int quant)
{
	int		cont;
	int		cont2;
	char	*stresul;

	cont = 0;
	while (str1[cont] && str2[cont2] && quant <= cont)
	{
		if (str1[cont] == str2[cont2])
		{
			stresul[cont2] == str2[cont2];
			cont2++;
		}
		else
			cont2 = 0;
		cont++;
	}
	if (cont2 > 0)
		return (str2);
	else
		return ("");
}
