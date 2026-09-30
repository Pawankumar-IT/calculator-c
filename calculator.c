 # include <stdio.h>
 int main()
 {
      int a, b, sum, sub, mul, div, choice;
    printf("Enter two numbers :");
    scanf("%d %d",&a,&b);
    printf("Enter your choice (1 to 4) :"); // 1 for addition, 2 for substraction, 3 for mulitiplication, 4 for division.
    scanf("%d", &choice);
    switch(choice) 
    {
        case 1:
            sum = a + b;
            printf("Addition of %d and %d is : %d\n",a,b,sum);
            break;
            case 2:
            sub = a-b;
            printf("Subtraction of %d and %d is : %d\n",a,b,sub);
            break;
            case 3:
            mul= a*b;
            printf("Multiplication of %d and %d is : %d\n",a,b,mul);
            break;
            case 4:
            div = a/b;
            printf("Division of %d and %d is : %d\n",a,b,div);
            break;
    }
    return 0; 
 }