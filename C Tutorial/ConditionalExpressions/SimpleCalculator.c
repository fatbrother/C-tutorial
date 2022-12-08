#include<stdio.h>
int main(){
    float n1, n2;
    char op;
    printf("Please enter the calculate: ");
    scanf("%d%c%d",&n1, &op, &n2);
    if(op == '+'){
        printf("%f", n1 + n2);
    } else if(op == '-'){
        printf("%f", n1 - n2);
    } else if(op == '*'){
        printf("%f", n1 * n2);
    } else if(op == '/' && n2 != 0){
        printf("%f", n1 / n2);
    } else{
        printf("Error");
    }
    return 0;
}
// switch (op)
//     {
//     case '+':
//         printf("%f", n1 + n2);
//         break;
//     case '-':
//         printf("%f", n1 - n2);
//         break;
//     case '*':
//         printf("%f", n1 * n2);
//         break;
//     case '/':
//         if (n2 != 0)
//         {
//             printf("%f", n1 / n2);
//             break;
//         }
//     default:
//         printf("ERROR!");
//     }