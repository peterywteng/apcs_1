/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(void)
{
    /* 練習1 for loop */
    /*
    int i;
    int stud_num=45;
    for(i=0;i<10;i++){
        if((i%3)==0){
            printf("%d. Hello World %d students \n",0,stud_num);
        }else if ((i%3)==1){
            printf("%d. Hello World %d students \n",1,stud_num);
        }else if ((i%3)==2){
            printf("%d. Hello World %d students \n",2,stud_num);
        }



    }   
    
    */

    /* 練習2 找60的因數 */
    /*
    int i;
    int num=60;
    for(i=2; i<=num/2; i++){
        if( (num % i)==0 ) {
            printf("找到60的因數 %d \n", i);
        }



    }   
    */
    

    /* 練習3 switch case */
    /*
    int i;
    int stud_num=45;
    for(i=0;i<10;i++){
        switch(i%3){
            case 0:
            printf("%d. Hello World %d students \n",0,stud_num);
            break;
            case 1:
            printf("%d. Hello World %d students \n",1,stud_num);
            break; 
            case 2:
            printf("%d. Hello World %d students \n",2,stud_num);
            break;            
        }


    }   
*/


    /* 練習4 switch case + - * / */
/*
    char operator;
    double first, second;
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);
    printf("Enter two operands (using space to separate):");
    scanf("%lf %lf", &first, &second);
    switch (operator) {
        case '+':
            printf ("%.1lf + %.1lf = %.1lf", first, second, first + second);
            break;
        case '-':
            printf ("%.1lf - %.1lf = %.1lf", first, second, first - second);
            break;
        case '*':
            printf ("%.1lf * %.1lf = %.1lf", first, second, first * second);
            break;
        case '/':
            printf ("%.1lf / %.1lf = %.1lf", first, second, first / second);
            break;
        default:
            printf("Error! operator is not correct");
    }


*/


    /* 練習5 array */
/*
    int a[10];
    for (int i=0; i<10; i++) {
        a[i] = i;
        //scanf("%d",&a[i]);
        //printf("\n");
    }
    for (int i=9; i>=0; i--) {
        printf("a[%d] = %d \n", i, a[i]);
        
    }
    printf("Hello World");
*/      


    /* 習題12 array */

    float a[10];
    float sum=0;
    for (int i=0; i<10; i++) {
        scanf("%f",&a[i]);
        sum = sum + a[i]; 
    }

    printf("sum = %.1f \n", sum);
        


    /* 10. 從鍵盤輸入10個整數，統計其中 正數、負數和零的個數，並在螢幕上輸出。 */


    int a[10];
    int 正數=0;
    int 負數=0;
    int 零=0;
    printf("請輸入十個整數:\n");
    for (int i=0; i<=9; i++) {
        scanf("%d",&a[i]);
        if ( a[i] > 0 ) {
            正數 = 正數 + 1;
        } else if ( a[i] == 0) {
            零 = 零 + 1;
        } else {
            負數 = 負數 + 1;
        }
    }

    printf("正數個數=%d, 零的個數=%d, 負數個數=%d", 正數, 零, 負數);
    









    


}
