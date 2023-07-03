#include <stdio.h>
struct item
{
    char name[20];
    int price;
    float quantity;
    int totalamount;
};
int sctread(struct item *a)
{
    printf("item name: ");
    gets(a->name);
    printf("price: ");
    scanf("%d", &(a->price));
    printf("quantity: ");
    scanf("%f", &(a->quantity));
    printf("totalamount: ");
    scanf("%d", &(a->totalamount));
}

int sctwrite(struct item *a)
{
    printf("\n\nitem name: ");
    puts(a->name);
    printf("price: ");
    printf("%d", (a->price));
    printf("\nquantity: ");
    printf("%f", (a->quantity));
    printf("\ntotalamount: ");
    printf("%d", (a->totalamount));
}
int main()
{
    struct item *a,a1;
    a=&a1;
    system("clear"); 
    sctread(&a1);
    sctwrite(&a1);
    
}