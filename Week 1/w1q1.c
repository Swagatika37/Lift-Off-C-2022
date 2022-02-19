#include <stdio.h>

int main() {
    char Name[45];
    int r;
    char Branch[40];
    char Hobby[50];
    printf("Enter your Name\n");
    scanf("%s", Name);
    printf("Your name is %s \n",Name);
    
    printf("Enter Your Roll no.\n");
    scanf("%d",&r);
    printf("Your Roll no. is %d\n",r);

    printf("Enter Your Branch: \n");
    scanf("%s",Branch);
    printf("Your Branch is %s\n",Branch);

    printf("Enter Your Hobby \n");
    scanf("%s",Hobby);
    printf("Your Hobby is %s ",Hobby);
    
    return 0;
}
