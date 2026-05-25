/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 20:06:39 by edmedeir          #+#    #+#             */
/*   Updated: 2026/05/25 16:57:16 by edmedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *str1, char *str2, int siz)
{
	int	cont;

	cont = 0;
	while (cont + 1 <= siz)
	{
		if (str1[cont] == str2[cont])
			cont++;
		else
			return (str1[cont] - str2[cont]);
		return (0);
	}
}
