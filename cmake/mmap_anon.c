#include <sys/types.h>
#include <sys/mman.h>
#include <unistd.h>

#ifndef MAP_ANONYMOUS
#define MAP_ANONYMOUS MAP_ANON
#endif

int
main ()
{
int n = MAP_ANONYMOUS;
  ;
  return 0;
}

