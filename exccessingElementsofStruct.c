#include <stdio.h>
void main() {
     struct book {
            char name[30];
            int pages;
            float price;
     };
     struct book b = {"How to enjoy life", 542, 100.23};
     struct book *p;
     p = &b;
     printf("Details of the book are:\nName : %s\nNumber of Pages : %d\nPrice of the book : %f\n", p->name, p->pages, p->price);
}