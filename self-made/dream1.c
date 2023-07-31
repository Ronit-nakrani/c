#include <stdio.h>
#include <string.h>

struct bowler
{
    char player[1][50];
    int over, rungv, wickets;
    float eco;
};
struct batter
{
    char player[1][50];
    int runsc, balls, fours, sixs;
    float strike_rate;
};

int main()
{
    struct batter bat1[11], bat2[11];
    struct bowler bow1[11], bow2[11];
    int i, j, page;
    char team1[50], team2[50], venue[50], tossby[50];
    char elected[4], cmp[1][50];

    printf("Enter team 1 name : ");
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
        scanf("%s", &bat1[i].player);
    }
    printf("enter the %s's playing xi \n", team2);
    for (i = 1; i <= 2; i++)
    {
        printf("enter player %d :-", i);
        scanf("%s", &bat2[i].player);
    }

    printf("\n1st inning scorecard\n");

    for (i = 1; i <= 2; i++)
    {
        printf("Enter the %d batter name : ", i);
        scanf("%s", &bat1[i].player);
        printf("How many runs %s scored : ", bat1[i].player);
        scanf("%d", &bat1[i].runsc);
        printf("How many balls %s played : ", bat1[i].player);
        scanf("%d", &bat1[i].balls);
        printf("How many fours %s hits : ", bat1[i].player);
        scanf("%d", &bat1[i].fours);
        printf("How many sixs %s hits : ", bat1[i].player);
        scanf("%d", &bat1[i].sixs);
        bat1[i].strike_rate = (bat1[i].runsc*100)/bat1[i].balls;
        printf("\n");
    }

    for (i = 1; i <= 2; i++)
    {
        printf("Enter the %d bowler name : ", i);
        scanf("%s", &bow2[i].player);
        printf("How many overs %s bowled : ", bow2[i].player);
        scanf("%d", &bow2[i].over);
        printf("How many runs %s given : ", bow2[i].player);
        scanf("%d", &bow2[i].rungv);
        printf("How many wickets %s taken : ", bow2[i].player);
        scanf("%d", &bow2[i].wickets);
        bow2[i].eco = bow2[i].rungv/bow2[i].over;
        printf("\n");
    }

    printf("2nd inning scorecard\n");

    for (i = 1; i <= 2; i++)
    {
        printf("Enter the %d batter name : ", i);
        scanf("%s", bat2[i].player);
        printf("How many runs %s scored : ", bat2[i].player);
        scanf("%d", &bat2[i].runsc);
        printf("How many balls %s played : ", bat2[i].player);
        scanf("%d", &bat2[i].balls);
        printf("How many fours %s hits : ", bat2[i].player);
        scanf("%d", &bat2[i].fours);
        printf("How many sixs %s hits : ", bat2[i].player);
        scanf("%d", &bat2[i].sixs);
        bat2[i].strike_rate = (bat2[i].runsc*100)/bat2[i].balls;
        printf("\n");
    }

    for (i = 1; i <= 2; i++)
    {
        printf("Enter the %d bowler name : ", i);
        scanf("%s", &bow1[i].player);
        printf("How many overs %s bowled : ", bow1[i].player);
        scanf("%d", &bow1[i].over);
        printf("How many runs %s given : ", bow1[i].player);
        scanf("%d", &bow1[i].rungv);
        printf("How many wickets %s taken : ", bow1[i].player);
        scanf("%d", &bow1[i].wickets);
        bow1[i].eco = bow1[i].rungv/bow1[i].over;
        printf("\n");
    }

// printing details
home:
    printf("(1) match details \n(2) score card \n(3) search player data \n");
    scanf("%d", &page);
    switch (page)
    {
    case 1:
        printf("-----------------------------------------------------------------------------------------------------\n");
        printf("Match : %s Vs %s                                                                                     \n", team1, team2);
        printf("-----------------------------------------------------------------------------------------------------\n");
        printf("Toss : %s won the toss and elected %s first                                                          \n", tossby, elected);
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
        goto home;
    case 2:
        printf("-----------------------------------------------------------------------------------------------------\n");
        printf("\n1st innings score-card\n");
        printf("\n-----------------------------------------------------------------------------------------------------\n");
        printf("%s's Batting\n", team1);
        printf("-----------------------------------------------------------------------------------------------------\n");
        printf(" Batter                               runs       balls       fours       sixs       strike rate      \n");
        printf("-----------------------------------------------------------------------------------------------------\n");
        for (i = 1; i <= 2; i++)
        {
            printf(" %s                                 %d         %d          %d           %d         %1.2f                 \n", bat1[i].player, bat1[i].runsc, bat1[i].balls, bat1[i].fours, bat1[i].sixs,bat1[i].strike_rate);
            printf("-----------------------------------------------------------------------------------------------------\n");
        }
        printf("-----------------------------------------------------------------------------------------------------\n");
        printf("%s's Bowling\n", team2);
        printf("-----------------------------------------------------------------------------------------------------\n");
        printf(" Bowler                                        over        runs        wickets     economy           \n");
        printf("-----------------------------------------------------------------------------------------------------\n");
        for (i = 1; i <= 2; i++)
        {
            printf(" %s                                          %d          %d           %d          %1.2f                      \n", bow2[i].player, bow2[i].over, bow2[i].rungv, bow2[i].wickets,bow2[i].eco);
            printf("-----------------------------------------------------------------------------------------------------\n");
        }
        printf("\n2nd innings score-card\n");
        printf("\n-----------------------------------------------------------------------------------------------------\n");
        printf("%s's Batting\n", team2);
        printf("-----------------------------------------------------------------------------------------------------\n");
        printf(" Batter                               runs       balls       fours       sixs       strike rate      \n");
        printf("-----------------------------------------------------------------------------------------------------\n");
        for (i = 1; i <= 2; i++)
        {
            printf(" %s                                 %d         %d          %d           %d          %1.2f                \n", bat2[i].player, bat2[i].runsc, bat2[i].balls, bat2[i].fours, bat2[i].sixs,bat2[i].strike_rate);
            printf("-----------------------------------------------------------------------------------------------------\n");
        }
        printf("-----------------------------------------------------------------------------------------------------\n");
        printf("%s's Bowling\n", team1);
        printf("-----------------------------------------------------------------------------------------------------\n");
        printf(" Bowler                                        over        runs        wickets     economy           \n");
        printf("-----------------------------------------------------------------------------------------------------\n");
        for (i = 1; i <= 2; i++)
        {
            printf(" %s                                          %d          %d           %d           %1.2f                  \n", bow1[i].player, bow1[i].over, bow1[i].rungv, bow1[i].wickets,bow1[i].eco);
            printf("-----------------------------------------------------------------------------------------------------\n");
        }
        goto home;
    case 3:
        printf("enter player name for comparision");
        scanf("%s", &cmp);
        void *name = &cmp;
        void *player;
        for (i = 1; i <= 2; i++)
        {
            if (strcmpi(name, player = &bat1[i].player) == 0 && strcmpi(name, player = &bow1[i].player) == 0)
            {
                printf("%s's details\n", bat1[i].player);
                printf("%s's bating stats\n", bat1[i].player);
                printf("Runs = %d\n", bat1[i].runsc);
                printf("Balls = %d\n", bat1[i].balls);
                printf("Fours = %d\n", bat1[i].fours);
                printf("Six = %d\n", bat1[i].sixs);
                printf("%s's bowling stats\n", bow1[i].player);
                printf("Over = %d\n", bow1[i].over);
                printf("Runs = %d\n", bow1[i].rungv);
                printf("Wickets = %d\n", bow1[i].wickets);
            }
            else if (strcmpi(name, player = &bat2[i].player) == 0 && strcmpi(name, player = &bow2[i].player) == 0)
            {
                printf("%s's details\n", bat2[i].player);
                printf("%s's bating stats\n", bat2[i].player);
                printf("Runs = %d\n", bat2[i].runsc);
                printf("Balls = %d\n", bat2[i].balls);
                printf("Fours = %d\n", bat2[i].fours);
                printf("Six = %d\n", bat2[i].sixs);
                printf("%s's bowling stats\n", &bow2[i].player);
                printf("Over = %d\n", bow2[i].over);
                printf("Runs = %d\n", bow2[i].rungv);
                printf("Wickets = %d\n", bow2[i].wickets);
            }
            else if (strcmpi(name, player = &bat1[i].player) == 0)
            {
                printf("%s's details\n", bat1[i].player);
                printf("%s's bating stats\n", bat1[i].player);
                printf("Runs = %d\n", bat1[i].runsc);
                printf("Balls = %d\n", bat1[i].balls);
                printf("Fours = %d\n", bat1[i].fours);
                printf("Six = %d\n", bat1[i].sixs);
            }
            else if (strcmpi(name, player = &bow1[i].player) == 0)
            {
                printf("%s's bowling stats\n", &bow1[i].player);
                printf("Over = %d\n", bow1[i].over);
                printf("Runs = %d\n", bow1[i].rungv);
                printf("Wickets = %d\n", bow1[i].wickets);
            }
            else if (strcmpi(name, player = &bat2[i].player) == 0)
            {
                printf("%s's details\n", bat2[i].player);
                printf("%s's bating stats\n", bat2[i].player);
                printf("Runs = %d\n", bat2[i].runsc);
                printf("Balls = %d\n", bat2[i].balls);
                printf("Fours = %d\n", bat2[i].fours);
                printf("Six = %d\n", bat2[i].sixs);
            }
            else if (strcmpi(name, player = &bow2[i].player) == 0)
            {
                printf("%s's bowling stats\n", &bow2[i].player);
                printf("Over = %d\n", bow2[i].over);
                printf("Runs = %d\n", bow2[i].rungv);
                printf("Wickets = %d\n", bow2[i].wickets);
            }
            else
            {
                printf("ERROR : ");
            }
            goto home;
        }
    }
    return 0;
}