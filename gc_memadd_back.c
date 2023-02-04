/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gc_memadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 01:50:28 by thfirmin          #+#    #+#             */
/*   Updated: 2023/02/04 01:51:42 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgc.h"

void	gc_memadd_back(t_mem **list, t_mem *alloc)
{
	t_mem	*mem;

	mem = *list;
	if (mem)
		while (mem->next)
			mem = mem->next;
	if (!mem)
		*list = alloc;
	else
		mem->next = alloc;
}
