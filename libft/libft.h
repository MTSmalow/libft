/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmedeir <edmedeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 10:18:37 by edmedeir          #+#    #+#             */
/*   Updated: 2026/05/19 20:20:09 by edmedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include<unistd.h>
# include<stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strrchr(const char *str, int c);
size_t	ft_strlen(const char *str);
char	*ft_strdup(const char *s1);

#endif
