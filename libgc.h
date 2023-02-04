#ifndef LIBGC_H
# define LIBGC_H
# include <stdlib.h>
# include <stdio.h>

typedef struct s_mem
{
	void			*ptr;
	struct s_mem	*next;
}					t_mem;

// List manipulating
t_mem	*gc_memnew(void *ptr);
void	gc_memadd_back(t_mem **list, t_mem *alloc);

// Garbage Collector utils
void	*gc_malloc(size_t size, t_mem **list);
void	*gc_calloc(size_t count, size_t size, t_mem **list);
void	gc_free(void *ptr, t_mem **list);
void	gc_check_leaks(t_mem *list);
void	gc_allfree(t_mem **list);

#endif
