#include <stdio.h>
#include <string.h>

struct team1 {
  char player[50];
  int runs;
  int balls;
  int fours;
  int sixs;
};

int main() {
  struct team1 t[11],tmp;
  char player[50];
  int i, j;
  for (i = 1; i <= 2; i++) {
    printf("enter player %d name : ", i);
    scanf("%s", t[i].player);
    printf("enter the runs %s scored : ", t[i].player);
    scanf("%d", &t[i].runs);
    printf("enter the balls played by %s : ", t[i].player);
    scanf("%d", &t[i].balls);
    printf("enter the fours %s hit : ", t[i].player);
    scanf("%d", &t[i].fours);
    printf("enter the sixs %s hit : ", t[i].player);
    scanf("%d", &t[i].sixs);
    printf("\n");
  }

    printf("player name for search data : ");
    scanf("%s", tmp.player);
    for (j = 1; j <= 2; j++) {
      if (strcmpi(tmp.player, t[j].player)==0) {
        printf("%s's details \n", t[j].player);
        printf("runs : %d \n", t[j].runs);
        printf("balls : %d \n", t[j].balls);
        printf("fours : %d \n", t[j].fours);
        printf("sixs : %d \n", t[j].sixs);
      } else {
        printf("ERROR :\n");
      }
    }
  

  return 0;
}