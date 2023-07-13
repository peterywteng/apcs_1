int main(void)
{
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


}
