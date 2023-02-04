/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gc_check_leaks.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 02:02:24 by thfirmin          #+#    #+#             */
/*   Updated: 2023/02/04 02:10:08 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgc.h"

void	gc_check_leaks(t_mem *list)
{
	while (list)
	{
		printf ("leaks %p address\n", list->ptr);
		list = list->next;
	}
}
