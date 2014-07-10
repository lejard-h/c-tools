/*
** myList.h for  in /home/lejard_h/my_lib_c/list
**
** Made by hadrien lejard
** Login   <lejard_h@epitech.net>
**
** Started on  Thu Mar  6 21:07:06 2014 hadrien lejard
** Last update Thu Jul 10 13:43:41 2014 lejard_h
*/

#ifndef __LIST_H__
# define __LIST_H__

typedef struct s_list	t_list;
typedef char		Bool;

struct s_list
{
  void		*data;
  t_list	*prev;
  t_list	*next;
};

t_list		*list_push(t_list **, void *);
t_list		*list_push_back(t_list **, void *);

t_list		*list_insert_after(t_list *, void *);
t_list		*list_insert_before(t_list **, t_list *, void *);
t_list		*list_insert_elem_after(t_list *, t_list *);
t_list		*list_insert_elem_before(t_list **, t_list *, t_list *);

void		list_foreach_data(t_list *, void (*func)(void *));
void		list_foreach(t_list *, void (*func)(t_list *));

t_list		*list_swap_elem(t_list *, t_list *);

t_list		*list_sort(t_list **, Bool (*comp_func)(void *, void *));

t_list		*list_remove_by_value(t_list **, void *);
t_list		*list_remove_by_elem(t_list **, t_list *);

t_list		*list_pop(t_list **);

void		list_error(char *);

#endif /* !__LIST_H__ */
