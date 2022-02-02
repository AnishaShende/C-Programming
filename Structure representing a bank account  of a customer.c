#include <stdio.h>

struct cust{
    int acnum;
    char name[20];
    float money;
    int year;
};
int main()
{
    struct cust c1;
    printf("Enter the account number : ");
    scanf("%d", &c1.acnum);
    printf("Enter the name of the account holder : ");
    scanf("%s", c1.name);
    printf("Enter the amount of money in account : ");
    scanf("%f", &c1.money);
    printf("Enter the year of creation of account : ");
    scanf("%d", &c1.year);
    printf("Account number : %d\n", c1.acnum);
    printf("Account holder : %s\n", c1.name);
    printf("Account money : %.2f\n", c1.money);
    printf("Account creation year : %d\n", c1.year);
    return 0;
}
