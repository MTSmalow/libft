/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft-putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 11:13:27 by edmedeir          #+#    #+#             */
/*   Updated: 2026/05/28 11:21:37 by edmedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	result;

	if (n < 0)
	{
		write(fd, '-', 1);
		if (n == -2147483648)
		{
			write(fd, "2147483648", 10);
			return ;
		}
		n = n * -1;
	}
	if (n >= 9)
		ft_putnbr_fd(n / 10, fd);
	result = n % 10 + '0';
	write(fd, &result, 1);
}
