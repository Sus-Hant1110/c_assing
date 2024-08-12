#include <stdio.h>

int main() {
    int a, b;
    unsigned int ua, ub;
    short int sa, sb;
    long int la, lb;
    float fa, fb;
    double da, db;
    long double lda, ldb;
    
    // integers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Sum is: %d\n", a + b);
    
    // unsigned integers
    printf("Enter two numbers: ");
    scanf("%u %u", &ua, &ub);
    printf("Sum is: %u\n", ua + ub);
    
    // short integers
    printf("Enter two numbers: ");
    scanf("%hd %hd", &sa, &sb);
    printf("Sum is: %hd\n", sa + sb);
    
    // long integers
    printf("Enter two numbers: ");
    scanf("%ld %ld", &la, &lb);
    printf("Sum is: %ld\n", la + lb);
    
    // floats
    printf("Enter two numbers: ");
    scanf("%f %f", &fa, &fb);
    printf("Sum is: %f\n", fa + fb);
    
    //  doubles
    printf("Enter two : ");
    scanf("%lf %lf", &da, &db);
    printf("Sum is: %lf\n", da + db);
    
    // long doubles
    printf("Enter two numbers: ");
    scanf("%Lf %Lf", &lda, &ldb);
    printf("Sum is: %Lf\n", lda + ldb);
    
    return 0;
}
