#include<stdio.h>

struct books
{
    char book_Title[20];
    char author_Name[20];
    char subject[20];
    int book_ID;
};

int main(){
    struct books bArray[2];
    int i;
    for(i=0; i<2; i++){
        printf("\nBook: %d\n",i+1);

        printf("Enter Book Title: ");
        scanf("%s",&bArray[i].book_Title);

        printf("Enter Author_Name: ");
        scanf("%s",&bArray[i].author_Name);

        printf("Enter Subject: ");
        scanf("%s",&bArray[i].subject);

        printf("Enter Book ID: ");
        scanf("%d",&bArray[i].book_ID);
    }

    for(i=0; i<2; i++){
        printf("\n");
        printf("Book: %d\n",i+1);
        printf("Book Title: %s\n",bArray[i].book_Title);
        printf("Author_Name: %s\n",bArray[i].author_Name);
        printf("Subject: %s\n",bArray[i].subject);
        printf("Book ID: %d\n",bArray[i].book_ID);
    }
    return 0;
}
