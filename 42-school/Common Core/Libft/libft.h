/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 10:51:50 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/28 14:51:38 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

void	*ft_memset(void *s, int c, unsigned int n);
void	*ft_memcpy(void *dest, const void *src, unsigned int n);
void	ft_bzero(void *s, unsigned int n);
char	*ft_strrchr(const char *s, int c);

#endif
