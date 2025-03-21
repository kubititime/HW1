#include <stdio.h>
int main()
{
    printf("I love Nisa<\n");
    printf("1\t2\t3\n4\t5\t6\n7\t8\t9\n");
    int myage;
    myage=5;
    int mybage;
    mybage=3;
    int sumage;
    sumage=myage+mybage;
    printf("our ages' sum is %d",sumage);
    float firstsemesterGPA;
    firstsemesterGPA=3.23;
    float secondsemesterGPA;
    secondsemesterGPA=3.72;
    float averageGPA;
    averageGPA=(firstsemesterGPA+secondsemesterGPA)/2;
    printf("your average is %f",averageGPA);
    int x=10;
    int y=4;
    double z=x/(double)y;
    printf("answer is %lf",z);
    int age;
    char name[25];

    printf("How old are you?\n");
    scanf("%d\n",&age);
    printf("You are %d years old\n",age);
    printf("What is your name?");
    //fgets(name, 25, stdin);
    char bro=5;
    char child[25]; // 'a', 'b' 
    printf("What is your name\n");
    scanf("%s",child);
    if(child[25]="Oğuz"){
        printf("You are gay\n");

    }
    else if(child[25]="Murat Diker"){
        printf("Congrulutations! You are real man\n");

    }
    else{
        printf("Congrulutiations! You are straight bro\n");
    }


    
    

    return 0;
}