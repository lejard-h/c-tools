/*
** list_free.c for  in /home/lejard_h/projects/nmobjdump/src/nm
**
** Made by hadrien lejard
** Login   <lejard_h@epitech.net>
**
** Started on  Thu Mar 13 09:43:52 2014 hadrien lejard
** Last update Thu Jul 10 13:44:38 2014 lejard_h
*/

#include <stdlib.h>
#include "list.h"

void		list_free(t_list *list, void (*free_data)(void *))
{
  t_list	*tmp;
  t_list	*next;

  tmp = list;
  while (tmp)
    {
      if (free_data)
	free_data(tmp->data);
      free(tmp->data);
      next = tmp->next;
      free(tmp);
      tmp = next;
    }
}
