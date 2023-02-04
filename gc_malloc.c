/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gc_malloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 01:51:55 by thfirmin          #+#    #+#             */
/*   Updated: 2023/02/04 02:11:11 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgc.h"

void	*gc_malloc(size_t size, t_mem **list)
{
	void	*ptr;
	t_mem	*mem;

	ptr = malloc(size);
	if (!ptr)
		return (0);
	mem = gc_memnew(ptr);
	if (!mem)
	{
		free(ptr);
		return (0);
	}
	gc_memadd_back(list, mem);
	return (ptr);
}
