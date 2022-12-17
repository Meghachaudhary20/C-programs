#include <stdio.h>
#include <conio.h>
void main()
{
    int marks;
    printf("enter marks!");
    scanf("%d",&marks);
    if(marks==100){
      printf("student is genius");  
    }
    else if(marks>80 && marks<100){
      printf("student is topper");  
    }else if(marks>=60 && marks<79)
    {
      printf("first division");  
    }
    else{
      printf("student is average");  
    }
    getch();
}
