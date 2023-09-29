/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    main.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 21:54:34 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/29 21:55:31 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

int	main(void)
{
	int		num;
	t_list	*lst;

	num = 42;
	lst = NULL;
	lst = ft_create_elem(&num);
	free(lst);
}
