#include <stdlib.h>
#include <stdio.h>
#include <math.h>


float  sum(float num1, float num2){
        return(num1+num2);
}
float substract(float num1, float num2){
        return(num1-num2);
}
float multiply(float num1, float num2){
        return(num1*num2);
}
float divide(float num1, float num2){
        return(num1/num2);
}
float modulo(float num1, float num2){
        return ((int)num1 % (int)num2);
}
float hip(float num1, float num2){
        return (sqrt(num1*num1 + num2*num2));
}

void showposition(){
        printf("The calculator just work with two values\n");
        printf("To use the calculator you have to put the values in this form: \n ./a.out [number] [operator][number}\n");
        printf("\n List of operators: \n\n");
        printf("Addition.............. '+'\n");
        printf("Subtraction........... '-'\n");
        printf("Multiply.............. 'x'\n");
        printf("Divide by............. '/'\n");
        printf("Module of............. '%'\n");
	printf("Hipotenuse............ 's'\n\n");
 }

int main(int argc, char** argv){
int arguments = argc-1;

char operation =(char)*argv[2];
float num1 = atof(argv[1]);
float num2 = atof(argv[3]);


switch(operation){
        case '+':
                printf("%.3f\n", sum(num1,num2));
        break;
        case '-':
                printf("%.3f\n",substract(num1,num2));
        break;
        case 'x':
                printf("%.3f\n", multiply(num1, num2));
        break;
        case '/':
                printf("%.3f\n", divide(num1, num2));
        break;
        case '%':
                printf("%.3f\n", modulo(num1, num2));
        break;
        case 's':
                printf("%.3f\n", hip(num1, num2));
        break;
        default:
                printf("Unknow operator %c\n, operation\n");
        showposition();
        break;

}
return 0;
}

