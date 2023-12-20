/* Written by Eze-Daniel, Section-03, 04-27-2021, Project-22*/
/*This program is a pig game, a game of dice throw*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>

int roll(void)
{
    int num = (rand()%6)+1;
    return num;
}


int main(void)
{
    srand((unsigned)time(NULL));

    int i=0;
    int Turn_score=0;
    int dice;
    int score=0;
    char yes_or_no;
    
    
    
    
    printf("Turn 1\n");
    
    while(i!=1000)
    {   
        printf("Roll Dice?(Yes or No)enter Y or N)> ");
        yes_or_no = getchar();


        if(yes_or_no=='Y')
        {
            dice = roll();
            if(dice!=1)
            {Turn_score+=dice;
                printf("You rolled a %d, Your turn total = %d\n",dice, Turn_score);
                getchar();
             
            }
            else
            {
                Turn_score = 0;
                printf("Game Over...You Rolled a 1, Turn score= %d\n\n", Turn_score);
                break;
            }
            
        }
        else if(yes_or_no =='N')
        {
            printf("\nTurn score= %d\n\n",Turn_score);
            break;
        }
        i++;
    }
    score+= Turn_score;
    
    
    Turn_score=0;
    printf("Turn 2\n\n");
    
    while(i!=1000)
        
    {
        printf("Roll Dice?(Yes or No)enter Y or N)> ");
        yes_or_no = getchar();
        


        if(yes_or_no=='Y')
        {
            dice = roll();
            if(dice!=1)
            {Turn_score+=dice;
                printf("You rolled a %d, Your turn total = %d\n",dice, Turn_score);
                getchar();
                
            }
            
            else
            {
                Turn_score = 0;
                printf("Game Over...You Rolled a 1, Turn score= %d\n\n", Turn_score);
                break;
            }
            
        }
        else if(yes_or_no =='N')
        {
            printf("Turn score= %d\n\n",Turn_score);
            break;
        }
       
        i++;
     
        
    }
    score+= Turn_score;
    
    
    
    Turn_score=0;
    printf("Turn 3\n\n");
    
    while(i!=1000)
        
    {
        printf("Roll Dice?(Yes or No)enter Y or N)> ");
        yes_or_no = getchar();


        if(yes_or_no=='Y')
        {
            dice = roll();
            if(dice!=1)
            {Turn_score+=dice;
                printf("You rolled a %d, Your turn total = %d\n",dice, Turn_score);
                getchar();
                
            }
            else
            {
                Turn_score = 0;
                printf("Game Over...You Rolled a 1, Turn score= 0\n\n");
                break;
            }
            
        }
        else if(yes_or_no =='N')
        {
            printf("Turn score= %d\n\n",Turn_score);
            break;
        }
        i++;
        
    }
    
        score+= Turn_score;
    
    
    
    Turn_score=0;
    printf("Turn 4\n\n");
    
    while(i!=1000)
        
    {
        printf("Roll Dice?(Yes or No)enter Y or N)> ");
        yes_or_no = getchar();


        if(yes_or_no=='Y')
        {
            dice = roll();
            if(dice!=1)
            {Turn_score+=dice;
                printf("You rolled a %d, Your turn total = %d\n",dice, Turn_score);
                getchar();
                
            }
            else
            {
                Turn_score = 0;
                printf("Game Over...You Rolled a 1, Turn score= 0\n\n");
                break;
            }
            
        }
        else if(yes_or_no =='N')
        {
            printf("Turn score= %d\n\n",Turn_score);
            break;
        }
     
        i++;
        
    }
      score+= Turn_score;
        
    
    
    
    
    Turn_score=0;
    printf("Turn 5\n\n");
    
    while(i!=1000)
        
    {
        printf("Roll Dice?(Yes or No)enter Y or N)> ");
        yes_or_no = getchar();


        if(yes_or_no=='Y')
        {
            dice = roll();
            if(dice!=1)
            {Turn_score+=dice;
                printf("You rolled a %d, Your turn total = %d\n",dice, Turn_score);
                getchar();
                
            }
            else
            {
                Turn_score = 0;
                printf("Game Over...You Rolled a 1, Turn score= 0\n\n");
                break;
            }
            
        }
        else if(yes_or_no =='N')
        {
            printf("Turn score= %d\n\n",Turn_score);
            break;
        }

        i++;
    }
    score+= Turn_score;
    {
    printf("That's the end of the game your score was %d\n\n", score);
}
    system("pause");
    return(0);
}
