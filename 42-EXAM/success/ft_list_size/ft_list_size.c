#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int	i;
	t_list *list;

	i = 0;
	list = begin_list;
	if (list)
	{
		while (list)
		{
			list = list->next;
			i++;
		}
	}
	return (i);
}
