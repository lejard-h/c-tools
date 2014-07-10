/*
** list_error.c for  in /home/lejard_h/my_lib_c/list
**
** Made by hadrien lejard
** Login   <lejard_h@epitech.net>
**
** Started on  Thu Mar  6 21:16:14 2014 hadrien lejard
** Last update Thu Mar  6 21:23:31 2014 hadrien lejard
*/

#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void	list_error(char *msg)
{
  write(2, "Error list : ", 13);
  write(2, msg, strlen(msg));
  write(2, "\n", 1);
  exit(EXIT_FAILURE);
}
