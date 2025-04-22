# include <stdio.h>
# include <string.h>
typedef struct BankAccount {
    int accountNo;
    char name[100];
    } acc ;
    int main() {
    acc acc1 = {123, "apreeda"};
    acc acc2 = {124, "pramesh"};
    acc acc3 = {125, "dina"};
    printf("acc no = %d", acc1.accountNo);
    printf("name = %s", acc1.name);
    return 0;
    }