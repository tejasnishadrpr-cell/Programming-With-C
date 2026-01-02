#include <stdio.h>

#define GST 0.05
#define DISCOUNT 0.10
#define ITEMS 3

/* Function declarations */
void showMenu();
float calculateTotal(float price[], int qty[]);

int main() {
    float price[ITEMS] = {100, 150, 80};
    int qty[ITEMS];
    float total, gst, discount, finalAmount;
    int i;

    showMenu();

    for (i = 0; i < ITEMS; i++) {
        printf("Enter quantity of item %d: ", i + 1);
        scanf("%d", &qty[i]);
    }

    total = calculateTotal(price, qty);
    gst = total * GST;

    if (total >= 300)
        discount = total * DISCOUNT;
    else
        discount = 0;

    finalAmount = total + gst - discount;

    printf("\n----- BILL -----\n");
    printf("Subtotal : Rs %.2f\n", total);
    printf("GST (5%%) : Rs %.2f\n", gst);
    printf("Discount : Rs %.2f\n", discount);
    printf("Total Payable : Rs %.2f\n", finalAmount);

    return 0;
}

/* Function to display menu */
void showMenu() {
    printf("------ MENU ------\n");
    printf("1. Burger   - Rs 100\n");
    printf("2. Pizza    - Rs 150\n");
    printf("3. Sandwich - Rs 80\n");
}

/* Function to calculate subtotal */
float calculateTotal(float price[], int qty[]) {
    float sum = 0;
    int i;
    for (i = 0; i < ITEMS; i++) {
        sum += price[i] * qty[i];
    }
    return sum;
}
