#include <stdio.h>
#include <time.h>

  int main () {
    printf("[]---------------------------------------------------[]\n");
    printf("[]        password maker v0.5 by felipe silva        []\n");
    printf("[]---------------------------------------------------[]\n");
    int o;
    char pass[50];
    srand (time (NULL));
    for (o = 0; o < 50; o++) {
      pass[o] = 33 + rand() % 93;
    }
    printf("\n %s \n", pass);
  return 0;
  }
