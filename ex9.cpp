#include <iostream> 
#include <stdio.h> 
using namespace std;  
int main() {
    float a, b, product; 
    a = 20; 
    b = 7; 
    printf("please input a number\n"); 
    scanf("%f",&a);
    // Calculating product 
    product = 3.1415926535897932384626264338327950288419716939937510582097494459230781640628620899862803421170679*a * a;
    printf("Product = %f", product); 
    return 0; 
}
