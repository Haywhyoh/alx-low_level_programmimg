#include <stdlib.h>
#include "main.h"
/**
* *_calloc - allocates memory for an array
* @nmemb: number of array elements
* @size: the size of each byte of the array
* 
* Returns: Null when malloc fails and when size and nmemb = 0
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
  char *ptr;
  unsigned int i;
  
  if (size == 0 || nmemb == 0)
  {
    return (NULL);
  }
  
  ptr = malloc(size * nmeb);
  
  if (ptr == NULL)
  {
    return (NULL);
  }
  
  for (i = 0; i < (size * nmemb); i++)
  {
    ptr[i] = 0;
  }
  return (ptr);
}
