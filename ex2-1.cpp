/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

/*
int main()
{
    printf("Hello World");

    return 0;
}

int main(void)
{
    int chad = 15;




    printf(" %d ",chad);

//    return 0;
}




// Create variables
int myNum = 15;            // Integer (whole number)
int myNum2 = 16;            // Integer (whole number)
float myFloatNum = 5.99;   // Floating point number
char myLetter = 'D';       // Character
int 十五 = 15;            // Integer (whole number)

int main(void)
{

    myNum = myNum2;
    // Print variables
    printf("%d\n", myNum);
    printf("%f\n", myFloatNum);
    printf("%c\n", myLetter);
    printf("%d\n", myNum + (int)myFloatNum);
    printf("%d\n", 十五);
*/
int main(void)
{
    /*
//    int a=10, b=20;
    int a, b;
    int c;

    printf("plz input a: ");
    scanf("%d", &a);
    printf("plz input b: ");
    scanf("%d", &b);
    
    c = a<b;
    printf("c=%d\n",c);
    
    c = a>b;
    printf("c=%d\n",c);

    c = a==b;
    printf("c=%d\n",c);

    if(a<b){
        printf("a<b\n");
    }
    else{
        printf("a>=b\n");
    }

    if(a<b && a>5){
        printf("a<b\n");
    }
    else{
        printf("a>=b 或 a<=5 \n");
    }
    
    

    if(a<b || a>5){
        printf("a<b 或 a>5 \n");
    }
    else{
        printf("a>=b  \n");
    }



    if(a<b ){
        printf("a<b \n");
    }
    else if (a==b){
        printf("a==b  \n");
    }else{
        printf("a>b \n");
        
    }

*/

/*    
    int a, b;

    printf("Please input a: ");
    scanf("%d", &a);
    printf("Please input b: ");
    scanf("%d", &b);

    printf("a^2 + b^2 = %d\n",a*a + b*b);
*/

/*

    float r;

    printf("Please input r (cm): ");
    scanf("%f", &r);

    if(r>=0) {
        printf("圓面積 = %f cm^2\n", 3.1415926*r*r );
        printf("圓周長 = %f cm\n", 2*3.1415926*r );
    }
    else {
        printf("r<0!!!");
    }
*/


    int i,j;
    
    for(i=1;i<10;i++){
        printf("\n",i);
       for(j=1;j<10;j++){
            printf("%dx%d=%d\t",i,j,i*j);
//            printf("i = %d j=%d ",i,j);
        }
    }
    


}



