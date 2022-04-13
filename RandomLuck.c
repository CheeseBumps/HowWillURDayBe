#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){
    char roll;
    printf("Roll the dice to find out how your day will go! Type R to roll it: \n");
    scanf("%c", &roll);

    srand(time(0));
    int num = rand() % 6 + 1;

    printf("You got %d\n", num);

    switch (num)
    {
    case 1:
        printf("You will face many problems, but you must be patient and try solve them one by one.\nOtherwise you might fall in a trap that you may get out of.\n");
        break;
    case 2:
        printf("Your day will be really boring, and you might get sick.\nDon't worry, you'll recover within tommorow\n");
        break;
    case 3:
        printf("You might quarrel with one of your close friends and that might lead to you two not talking to each other.\nAlso remember to start early if you want to go somewhere as you will face intense amount of traffic\n");
        break;
    case 4:
        printf("You will feel very tired today and so remember to have a good breakfast.\nAlso you might get very angry for no reason at all and be very mean to people,\n so make sure to control your temper!\n");
        break;
    case 5:
        printf("You will fail in everything you do today, so don't get dissapointed as it is probably for the best.\nAlso you will get valuable lesson from these failures so make sure to use them in the upcoming days. Good luck!\n");
        break;
    case 6:
        printf("You should achieve success in everything do today, so make sure to remember how you succeeded and continue working hard\nand repeat the same process in the coming days. ");
        break;

    default:
        printf("You didn't enter a number from the list! I guess your day won't be good\n");
        break;
    }

    system("pause");
    return 0;
}