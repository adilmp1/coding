#include <stdio.h>
struct item
{
    char name[20];
    int price;
    float quantity;
    int totalamount;
};
int sctread(struct item a)
{
    printf("item name: ");
    getchar();
    gets(a.name);
    printf("price: ");
    scanf("%d", &a.price);
    printf("quantity: ");
    scanf("%f", &a.quantity);
    printf("totalamount: ");
    scanf("%d", &a.totalamount);
}
int main()
{
    struct item a;
    int n;
    scanf("%d", &n);

    sctread(a);
    printf("item name: ");
    puts(a.name);
    printf("price: %d\n", a.price);
    printf("quantity: %f\n", a.quantity);
    printf("totalamount: %d\n", a.totalamount);
}
