#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    double salary;
    cin >> salary;
    double moneyearn, news;
    int rate;
    if (salary >= 0 && salary <= 400.00)
    {
        news = salary + salary * (15 / 100.00);
        moneyearn = news - salary;
        rate = 15;
    }
    else if (salary > 400 && salary <= 800)
    {
        news = salary + (salary * (double)(12 / 100.00));
        moneyearn = news - salary;
        rate = 12;
    }
    else if (salary > 800 && salary <= 1200)
    {
        news = salary + (salary * (double)(10 / 100.00));
        moneyearn = news - salary;
        rate = 10;
    }
    else if (salary > 1200 && salary <= 2000)
    {
        news = salary + (salary * (double)(7 / 100.00));
        moneyearn = news - salary;
        rate = 7;
    }
    else
    {
        news = salary + (salary * (double)(4 / 100.00));
        moneyearn = news - salary;
        rate = 4;
    }

    printf("Novo salario: %.2f\n", news);
    printf("Reajuste ganho: %.2f\n", moneyearn);
    printf("Em percentual: %d %%\n", rate);

    return 0;
}