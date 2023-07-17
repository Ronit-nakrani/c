#include <stdio.h>
#include <string.h>

void show(int show)
{
    printf("(1) match details \n(2) score card ");
    scanf("%d", &show);
}
// void batter();         player data searching mate function

struct bowler
{
    char player[50];
    int over, rungv, wickets;
    float eco;
};
struct batter
{
    char player[50];
    int runsc, balls, fours, sixs;
    float strike_rate;
};


int main()
{
    struct batter bat1[11];
    struct bowler bow1[11];
    struct batter bat2[11];
    struct bowler bow2[11];
    int i;
    char team1[50], team2[50], venue[50], tossby[50];
    char elected[4];

    printf("enter team 1 name : ");
    gets(team1);
    printf("Enter team 2 name : ");
    gets(team2);
    printf("Toss won by : ");
    gets(tossby);
    printf("elected to : ");
    gets(elected);
    printf("Enter the venue name :");
    gets(venue);
    printf("enter the %s's playing xi \n", team1);
    for (i = 1; i <= 2; i++)
    {
        printf("enter player %d :-", i);
        gets(bat1[i].player);
    }
    printf("enter the %s's playing xi \n", team2);
    for (i = 1; i <= 2; i++)
    {
        printf("enter player %d :-", i);
        gets(bat2[i].player);
    }

    printf("1st inning scorecard\n");

    for (i = 1; i <= 2; i++)
    {
        printf("Enter the %d batter name : ", i);
        scanf("%s", &bat1[i].player);
        printf("How many runs %s scored : ", &bat1[i].player);
        scanf("%d", &bat1[i].runsc);
        printf("How many balls %s played : ", &bat1[i].player);
        scanf("%d", &bat1[i].balls);
        printf("How many fours %s hits : ", &bat1[i].player);
        scanf("%d", &bat1[i].fours);
        printf("How many sixs %s hits : ", &bat1[i].player);
        scanf("%d", &bat1[i].sixs);
        // strike-rate print
        printf("\n");
    }

    for (i = 1; i <= 2; i++)
    {
        printf("Enter the %d bowler name : ", i);
        scanf("%s", &bow1[i].player);
        printf("How many overs %s bowled : ", bow1[i].player);
        scanf("%d", &bow1[i].over);
        printf("How many runs %s given : ", &bow1[i].player);
        scanf("%d", &bow1[i].rungv);
        printf("How many wickets %s taken : ", &bow1[i].player);
        scanf("%d", &bow1[i].wickets);
        printf("\n");
        // economy print
    }

    printf("2nd inning scorecard\n");

    for (i = 1; i <= 2; i++)
    {
        printf("Enter the %d batter name : ", i);
        gets(bat2[i].player);
        printf("How many runs %s scored : ", &bat2[i].player);
        scanf("%d", &bat2[i].runsc);
        printf("How many balls %s played : ", &bat2[i].player);
        scanf("%d", &bat2[i].balls);
        printf("How many fours %s hits : ", &bat2[i].player);
        scanf("%d", &bat2[i].fours);
        printf("How many sixs %s hits : ", &bat2[i].player);
        scanf("%d", &bat2[i].sixs);
        // strike-rate print
        printf("\n");
    }

    for (i = 1; i <= 2; i++)
    {
        printf("Enter the %d bowler name : ", i);
        gets(bow2[i].player);
        printf("How many overs %s bowled : ", bow2[i].player);
        scanf("%d", &bow2[i].over);
        printf("How many runs %s given : ", &bow2[i].player);
        scanf("%d", &bow2[i].rungv);
        printf("How many wickets %s taken : ", &bow2[i].player);
        scanf("%d", &bow2[i].wickets);
        printf("\n");
        // economy print
    }

    // printing details
    // switch case vaprvu differnt differnt page show karva mate
    printf("-----------------------------------------------------------------------------------------------------\n");
    printf("Teams : %s Vs %s                                                                                     \n", team1, team2);
    printf("-----------------------------------------------------------------------------------------------------\n");
    printf("Toss : %s won the toss and elected %s first                                                                                       \n", tossby, elected);
    printf("-----------------------------------------------------------------------------------------------------\n");
    printf("Venue : %s                                                                                           \n", venue);
    printf("-----------------------------------------------------------------------------------------------------\n");
    printf("%s :- ", team1);
    for (i = 1; i <= 2; i++)
    {
        printf("%s, ", &bat1[i].player);
    }
    printf("\n-----------------------------------------------------------------------------------------------------\n");
    printf("%s :- ", team2);
    for (i = 1; i <= 2; i++)
    {
        printf("%s, ", &bat2[i].player);
    }
    printf("\n-----------------------------------------------------------------------------------------------------\n");

    return 0;
}