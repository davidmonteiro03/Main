/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 10:51:50 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/28 20:11:33 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int		ft_strlen(const char *s);
int		ft_strncmp(char *s1, char *s2, size_t n);
int		ft_atoi(const char *str);
size_t	ft_strlcpy(char *dest, char *src, size_t size);
void	ft_bzero(void *s, size_t n);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *big, const char *little, size_t len);

#endif
