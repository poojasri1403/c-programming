STRUCTURE USING MALLOC:


#include <stdio.h>
#include<stdlib.h>
struct supplier
{
  char sname[20];
  char location[20];
};
struct product
{
    int id;
    char pname[20];
    int price;
    struct supplier detail;
    
};

int main() {
        int i,n;
        struct product*p;
        printf("Enter the number of products:\n");
        scanf("%d",&n);
       p=(struct product *)malloc(n* sizeof(struct product));
        if(p==NULL)
        {
          return 1;
        }
        for(int i=0;i<n;i++)
        {
            printf("Enter the detail of the products :\n");
        }
        printf("product ID :\n");
        scanf("%d",&p[i].product.id);

    return 0;
}







DATA STRUCTURE LINKED LIST:


#include <stdio.h>
#include<stdlib.h>
struct contact
{
    long int number;
    struct contact*next;
};

int main() {
  struct contact *ct1 = (struct contact*)malloc(sizeof(struct contact));
  struct contact *ct2= (struct contact*)malloc(sizeof(struct contact));
  struct contact *ct3 = (struct contact*)malloc(sizeof(struct contact));
  ct1->number = 9988776655;
  ct2->number = 9876543210;
  ct3->number = 7092542872;
  ct1->next=ct2;
  ct2->next=ct3;
  ct3->next=NULL;
  struct contact *head = ct1;
  printf("Contact: \n");
  while(head != NULL)
  {
      printf("%ld------>\n",head->number);
      head = head->next;
  }
  printf("Finish");
  return 0;
}



PROBLEM 1:

#include <stdio.h>
#include<stdlib.h>
struct contact
{
    long int number;
    struct contact*next;
};

int main() {
  struct contact *ct1 = (struct contact*)malloc(sizeof(struct contact));
  struct contact *ct2= (struct contact*)malloc(sizeof(struct contact));
  struct contact *ct3 = (struct contact*)malloc(sizeof(struct contact));
  scanf("%d",&ct1->number);
  scanf("%d",&ct2->number);
  scanf("%d",&ct3->number);
  ct1->next=ct2;
  ct2->next=ct3;
  ct3->next=NULL;
  struct contact *head = ct1;
  while(head != NULL)
  {
      printf("%ld->",head->number);
      head = head->next;
  }
  printf("NULL");
  return 0;
}


PROBLEM 2:

#include <stdio.h>
#include<stdlib.h>
struct student
{
    int roll;
    struct student*next;
};

int main() {
  struct student *rn1 = (struct student*)malloc(sizeof(struct student));
  struct student *rn2= (struct student*)malloc(sizeof(struct student));
  scanf("%d",&rn1->roll);
  scanf("%d",&rn2->roll);
  rn1->next=rn2;
  rn2->next=NULL;
  struct student *head = rn1;
  while(head != NULL)
  {
      printf("Roll %ld->",head->roll);
      head = head->next;
  }
  printf("NULL");
  return 0;
}









PROBLEM 3:


#include <stdio.h>
#include<stdlib.h>
struct cart
{
    int items;
    struct cart*next;
};

int main() {
  struct cart *i1 = (struct cart*)malloc(sizeof(struct cart));
  struct cart*i2= (struct cart*)malloc(sizeof(struct cart));
  struct cart*i3= (struct cart*)malloc(sizeof(struct cart));

  
  scanf("%d",&i1->items);
  scanf("%d",&i2->items);
  scanf("%d",&i3->items);
  i1->next=NULL;
  i2->next=i1;
  i3->next=i2;
  struct cart *head = i3;
  while(head != NULL)
  {
      printf("%d->",head->items);
      head = head->next;
  }
  printf("NULL");
  return 0;
}






PROBLEM 4:


#include <stdio.h>
#include<stdlib.h>
struct bank
{
    int ac;
    long int cd;
    struct bank*next;
};

int main() {
  struct bank *i1 = (struct bank*)malloc(sizeof(struct bank));
  struct bank*i2= (struct bank*)malloc(sizeof(struct bank));
  scanf(" %d",&i1->ac);
  scanf(" %d",&i1->cd);
  scanf(" %d",&i2->ac);
  scanf(" %d",&i2->cd);
  i1->next=i2;
  i2->next=NULL;

  struct bank *head = i1;
  while(head != NULL)
  {
      printf("%d-%ld->",head->ac,head->cd);
      head = head->next;
  }
  printf("NULL");
  return 0;
}



PROBLEM 1:

#include <stdio.h>
#include<stdlib.h>
struct customer
{
    int acnum;
    long int con;
    struct customer*next;
};

int main() {
  struct customer *ct1 = (struct customer*)malloc(sizeof(struct customer));
  struct customer *ct2= (struct customer*)malloc(sizeof(struct customer));
  scanf("%d",&ct1->acnum);
  scanf("%d",&ct1->con);
   scanf("%d",&ct2->acnum);
  scanf("%d",&ct2->con);
  ct1->next=ct2;
  ct2->next=NULL;
  struct customer *head = ct1;
  while(head != NULL)
  {
      printf("%d-%ld->",head->acnum,head->con);
      head = head->next;
  }
  printf("NULL");
  return 0;
}


PROBLEM 2:


#include <stdio.h>
#include<stdlib.h>
struct student
{
    int roll;
    char name[20];
    char dept[20];
    struct student*next;
};

int main() {
  struct student *ct1 = (struct student*)malloc(sizeof(struct student));
  struct student *ct2= (struct student*)malloc(sizeof(struct student));
  scanf("%d",&ct1->roll);
  scanf("%s",ct1->name);
  scanf("%s",ct1->dept);
   scanf("%d",&ct2->roll);
  scanf("%s",ct2->name);
  scanf("%s",ct2->dept);
  ct1->next=ct2;
  ct2->next=NULL;
  struct student *head = ct1;
  while(head != NULL)
  {
      printf("%d %s %s->",head->roll,head->name,head->dept);
      head = head->next;
  }
  printf("NULL");
  return 0;
}


PROBLEM 3:


#include <stdio.h>
#include<stdlib.h>
struct orders
{
    int id;
    char name[20];
    int price;
    char status[20];
    struct orders*next;
};

int main() {
  struct orders *ct1 = (struct orders*)malloc(sizeof(struct orders));
  struct orders *ct2= (struct orders*)malloc(sizeof(struct orders));
  scanf("%d",&ct1->id);
  scanf("%s",ct1->name);
  scanf("%d",&ct1->price);
  scanf("%s",ct1->status);
   scanf("%d",&ct2->id);
  scanf("%s",ct2->name);
  scanf("%d",&ct2->price);
  scanf("%s",ct2->status);
  ct1->next=ct2;
  ct2->next=NULL;
  struct orders *head = ct1;
  while(head != NULL)
  {
      printf("%d %s %d %s->",head->id,head->name,head->price,head->status);
      head = head->next;
  }
  printf("NULL");
  return 0;
}




