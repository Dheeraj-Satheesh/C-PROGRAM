#include <stdio.h>
struct cricket{
    char name[50];
    int matches;
    float avg_runs;
};
int main()
{
    int T_Players;
    float avg=0.0;
    scanf("%d",&T_Players);
    struct cricket players[T_Players];
    for (int i=0;i<T_Players;i=i+1){
        scanf("%s %d %f",players[i].name,&players[i].matches,&players[i].avg_runs);
    }
    for (int i=0;i<T_Players;i=i+1){
        avg=avg+players[i].avg_runs;
    }
    avg=avg/T_Players;
    for (int i=0;i<T_Players;i=i+1){
        if (avg<players[i].avg_runs){
            printf("%s %d %.2f\n",players[i].name,players[i].matches,players[i].avg_runs);
        }
    }
    return 0;
}
