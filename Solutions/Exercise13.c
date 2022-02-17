#include<stdio.h>
struct courier{
    char Sender_Name[20];
    char Sender_Address[20];
    char Receiver_Name[20];
    char Receiver_Address[20];
    float Per_Kg_Price;
    float Total_Weight;
};

int main(){
    struct courier c1;
    inputCourier(c1);
    return 0;
}

void inputCourier(struct courier c1){
    printf("Sender_Name: "),scanf("%s",&c1.Sender_Name);
    printf("Sender_Address: "),scanf("%s",&c1.Sender_Address);
    printf("Receiver_Name: "),scanf("%s",&c1.Receiver_Name);
    printf("Receiver_Address: "),scanf("%s",&c1.Receiver_Address);
    printf("Per_Kg_Price: "),scanf("%f",&c1.Per_Kg_Price);
    printf("Total_Weight: "),scanf("%f",&c1.Total_Weight);
    printCourier(c1);
}

void printCourier(struct courier c1){
    float Bill;
    printf("\nSender_Name: %s\n",c1.Sender_Name);
    printf("Sender_Address: %s\n",c1.Sender_Address);
    printf("Receiver_Name: %s\n",c1.Receiver_Name);
    printf("Receiver_Address: %s\n",c1.Receiver_Address);
    printf("Per_Kg_Price: %f\n",c1.Per_Kg_Price);
    printf("Total_Weight: %f\n",c1.Total_Weight);

    Bill=c1.Total_Weight*c1.Per_Kg_Price;
    printf("\nBill: %.2f",Bill);
}
