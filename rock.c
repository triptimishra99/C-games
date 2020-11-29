#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int generaterandomnumber(int n){
srand(time(NULL));
return rand()%n;
}
int greater(char a, char b){
if (a==b)
    return -1;
else if(a=='r' && b=='s')
    return 1;
else if(a=='s' && b=='p')
    return 1;
else if(a=='p' && b=='r')
    return 1;
else
    return 0;
}
int main(){
    int pscore=0,compscore=0,temp,i;
    char p,c;
    char dict[]={'r','p','s'};
printf("Welcome to rock paper scissors\n");
    for(i=0;i<3;i++)
    {

        printf("Player's turn \n");
        printf("Enter 1 for Rock 2 for paper and 3 for scissor\n");
        scanf("%d",&temp);
        getchar();
        p=dict[temp-1];
        printf("You have chosen %c\n",p);

        printf("Computer's turn \n");
        printf("Enter 1 for Rock 2 for paper and 3 for scissor\n");
        temp=generaterandomnumber(3)+1;
        c=dict[temp-1];
        printf("Computer has chosen: %c\n",c);
        if(greater(p,c)==1)
        {
            pscore+=1;
            printf("You got it!\n");
        }
        else if(greater(p,c)== -1)
        {
            pscore+=1;
            compscore+=1;
            printf("It's a draw\n");
        }
        else
           {
             compscore+=1;
            printf("Computer got it\n");
           }
           printf("You:%d \nComputer:%d\n\n",pscore,compscore);

    }
    if(pscore>compscore)
        printf("Player wins\n");
    else if(pscore <compscore)
        printf("Computer wins\n");
        else
            printf("It's a draw");

return 0;
}
