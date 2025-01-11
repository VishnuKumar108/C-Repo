#include <stdio.h>
int main() {  
    int cost_price, selling_price;
    scanf("%d", &cost_price);
    scanf("%d", &selling_price);
    if (selling_price > cost_price) {
        printf("Profit\n");
    } else if (selling_price < cost_price) {
        printf("Loss\n");
    } else {
        printf("No Profit and No Loss\n");
    }
    return 0;
}
