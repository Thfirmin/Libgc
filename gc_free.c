/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gc_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 01:57:45 by thfirmin          #+#    #+#             */
/*   Updated: 2023/02/04 02:01:44 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgc.h"

void	gc_free(void *ptr, t_mem **list)
{
	t_mem	*mem;
	t_mem	*tmp;

	mem = *list;
	if (mem->ptr == ptr)
	{
		free(ptr);
		*list = mem->next;
		free(mem);
		return ;
	}
	while(mem->next)
	{
		if (mem->next->ptr == ptr)
		{
			free(ptr);
			tmp = mem->next;
			mem->next = mem->next->next;
			free (tmp);
			return ;
		}
		mem = mem->next;
	}
}
