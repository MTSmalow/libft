/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 14:48:38 by edmedeir          #+#    #+#             */
/*   Updated: 2026/05/18 14:59:31 by edmedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<libft.h>

char	*ft_strchr(const char *str, int c)
{
	char	*p;

	p = (char *)str;
	while (*p)
	{
		if (*p == (char)c)
			return (p);
		p++;
	}
	if ((char)c == '\0')
		return (p);
	return (0);
}
