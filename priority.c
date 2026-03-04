#include <stdio.h>

struct process{
    char pid[10];
    int at, bt, pr;
    int ct, wt, tat;
    int done;
};

int main()
{
    int n;
    scanf("%d",&n);

    struct process p[20];

    for(int i=0;i<n;i++)
    {
        scanf("%s %d %d %d",p[i].pid,&p[i].at,&p[i].bt,&p[i].pr);
        p[i].done=0;
    }

   .
  ..
     ..
     ...
     ..
     ..

    printf("Waiting Time:\n");
    for(int i=0;i<n;i++)
        printf("%s %d\n",p[i].pid,p[i].wt);

    printf("Turnaround Time:\n");
    for(int i=0;i<n;i++)
        printf("%s %d\n",p[i].pid,p[i].tat);

    printf("Average Waiting Time: %.2f\n",avg_wt/n);
    printf("Average Turnaround Time: %.2f\n",avg_tat/n);

    return 0;
}
