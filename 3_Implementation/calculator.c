/**
 * @file calculator.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-02-12
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<stdio.h>

struct complex_number{
    int real;
    int imaginary;
};
int main()
{
    int number11,number12;
    printf("enter 2 numbers");
    scanf("%d%d",&number11,&number12);
    struct complex_number cn1={number11,number12};

    int number21,number22;
    printf("enter 2 numbers");
    scanf("%d%d",&number21,&number22);
    struct complex_number cn2={number21,number22};

    printf("sum of 2 complex numbers is %d+i%d\n",cn1.real+cn2.real,cn1.imaginary+cn2.imaginary);

    return 0;
}