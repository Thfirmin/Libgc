/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gc_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 01:55:29 by thfirmin          #+#    #+#             */
/*   Updated: 2023/02/04 01:57:28 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgc.h"

void	*gc_calloc(size_t count, size_t size, t_mem **list)
{
	void	*ptr;
	t_mem	*mem;

	ptr = calloc(count, size);
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
