#include<stdio.h>
#include<stdlib.h>
void limover(char[],char[],int);
int mainfunction(int,int);
int main()
{
    char playername_1[30],playername_2[30];
    int choice,overs;
    printf("-------------Welcome to Hand Cricket Game------------------------------\n");
    printf("----------------------------Let's Play---------------------------------\n");
    printf("Enter the name of player 1:");
    scanf("%s",playername_1);
    printf("Enter the name of player 2:");
    scanf("%s",playername_2);
    printf("Following are the choices:\n");
    printf("1)Limited Overs\n");
    printf("2)Till one player gets out\n");
    printf("3)Exit\n");
    printf("Enter your choice:");
    scanf("%d",&choice);
    if(choice==1)
            {     printf("Enter the number of overs:");
                  scanf("%d",&overs);
                  limover(playername_1,playername_2,overs);
                  }
    else if(choice==2)
                      printf("Not Completed,will update soon\n");
    else
                 printf("Game over\n");
    return 0;
}
void limover(char playername_1[30],char playername_2[30],int overs)
{
     int choice1,choice2,totalruns,x,second,first,third,fourth;
     printf("%s choose 1 for Odd(Heads) and 2 for Even(Tails)\n",playername_1);
     printf("Enter you choice:");
     scanf("%d",&choice1);
     x=rand()%2;
     if(x==choice1)
        {    printf("%s has won the toss\n",playername_1);
             printf("Choose 1:Bat\n");
             printf("Choose 2:Bowl\n");
             printf("Enter your choice:");
             scanf("%d",&choice2);
             if(choice2==1)
                    {        printf("%s has opted to bat\n",playername_1);
                             printf("%s will bowl\n",playername_2);
                             totalruns=0;
                             first=mainfunction(totalruns,overs);
                             printf("---------------------------Final Score of %s=%d-------------------------------\n",playername_1,first);
                    }
             else if(choice2==2)
                    {         printf("%s has opted to bowl\n",playername_1);
                              printf("%s will bat\n",playername_2);
                              totalruns=0;
                              second=mainfunction(totalruns,overs);
                              printf("--------------------------Final Score of %s=%d---------------------------------\n",playername_2,second);
                               } 
        }
     else
         {   printf("%s has won the toss\n",playername_2);
             printf("Choose 1:Bat\n");
             printf("Choose 2:Bowl\n");
             printf("Enter your choice:");
             scanf("%d",&choice2);
             if(choice2==1)
                    {        printf("%s has opted to bat\n",playername_2);
                             printf("%s will bowl\n",playername_1);
                             totalruns=0;
                             second=mainfunction(totalruns,overs);
                             printf("-----------------------------Final Score of %s=%d--------------------------------------\n",playername_2,second);
                    }
             else if(choice2==2)
                    {         printf("%s has opted to bowl\n",playername_2);
                              printf("%s will bat\n",playername_1);
                              totalruns=0;
                              first=mainfunction(totalruns,overs);
                              printf("-----------------------------Final Score of %s=%d---------------------------------------\n",playername_1,first);
                               }
         }
     if(choice1==x)
        {          if(choice2==1)
                   {             printf("%s will bat\n",playername_2);
                                 printf("%s will bowl\n",playername_1);
                                 totalruns=0;
                                 fourth=mainfunction(totalruns,overs);
                                 printf("-----------------------------------------Final Score of %s=%d-------------------------------------\n",playername_2,fourth);
                   }
                   else if(choice2==2)
                   {    printf("%s will bat\n",playername_1);
                        printf("%s will bowl\n",playername_2);
                        totalruns=0;
                        third=mainfunction(totalruns,overs);
                        printf("------------------------------------------Final Score of %s=%d-------------------------------------\n",playername_1,third);
                   }
        }
     else
        {          if(choice2==1)
                   {             printf("%s will bat\n",playername_1);
                                 printf("%s will bowl\n",playername_2);
                                 totalruns=0;
                                 third=mainfunction(totalruns,overs);
                                 printf("-----------------------------------------Final Score of %s=%d-------------------------------------\n",playername_1,third);
                   }
                   else if(choice2==2)
                   {    printf("%s will bat\n",playername_2);
                        printf("%s will bowl\n",playername_1);
                        totalruns=0;
                        fourth=mainfunction(totalruns,overs);
                        printf("------------------------------------------Final Score of %s=%d--------------------------------------\n",playername_2,fourth);
                   }
        }
                   
     if(fourth>first || second>third)
            printf("----------------------------------------CONGRATULATIONS %s wins-------------------------------------------\n",playername_2);
     else if(first>fourth || third>second)
            printf("-----------------------------------------CONGRATULATIONS %s wins------------------------------------------\n",playername_1);
     else
            printf("--------------------------------------------Match is Drawn-------------------------------------------------\n");
}
int mainfunction(int totalruns,int overs)
{
     int i,j,runs,wicket,space;
     wicket=0;
     for(i=0;i<overs;i++)
             {         if(wicket==10)
                                     break;
                       else
                       {for(j=1;j<=6;j++)
                         { printf("Batsman enter your number:");
                          scanf("%d",&space);
                          printf("Overs=%d.%d\n",i,j);
                          runs=rand()%7;
                          if(runs==space)
                          {   printf("That's OUT!!\n");
                              wicket=wicket+1;
                              printf("Score=%d-%d\n",totalruns,wicket);
                              if(wicket==10)
                                        {    break;
                                        }
                              }
                          else if(space==1)
                          {   printf("1 Run\n");
                              totalruns=totalruns+1;
                              printf("Score=%d-%d\n",totalruns,wicket);
                              }
                          else if(space==2)
                          {  printf("2 runs\n");
                             totalruns=totalruns+2;
                             printf("Score=%d-%d\n",totalruns,wicket);
                             }
                          else if(space==3)
                          {   printf("3 Runs\n");
                              totalruns=totalruns+3;
                              printf("Score=%d-%d\n",totalruns,wicket);
                              }
                          else if(space==4)
                          {    printf("Good Shot! 4 Runs\n");
                               totalruns=totalruns+4;
                               printf("Score=%d-%d\n",totalruns,wicket);
                               }
                          else if(space==6)
                          {    printf("BOOM\n");
                               printf("What a Shot 6 runs\n");
                               totalruns=totalruns+6;
                               printf("Score=%d-%d\n",totalruns,wicket);
                               }
                          else if(space==5)
                          {   printf("5 Runs scored\n");
                              totalruns=totalruns+5;
                              printf("Score=%d-%d\n",totalruns,wicket);
                              }
                          else
                              printf("Dot Ball\n");
                              printf("Score=%d-%d\n",totalruns,wicket);
                              }
                              } 
                              }
     return(totalruns);
}
