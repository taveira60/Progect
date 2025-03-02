#include <stdio.h>
#include <string.h>
int main()
{
    char player1[100];
    printf("Enter your play:\nIf you need !help\n");
    scanf("%s", player1);
    if (strcmp(player1,"!help")==0)
    {
        printf("The rules are:\n\t1)You can only type one option;\n\t2)The options are Scissor, Rock, Paper;\n\t3)Scissor wins against Paper, Paper wins against Rock, Rock win against Scissors.\n");
    }
    return 0;
}