#include<stdio.h>
int main()
{
    float Basicsalary,HRA,DA,Grosssalary,PF;
    scanf("%f%f%f",&Basicsalary,&HRA,&DA);
    PF=(12*Basicsalary)/100.0;
    Grosssalary=Basicsalary+HRA+DA+PF;
    printf("%.2f
%.2f",PF,Grosssalary);
    
}