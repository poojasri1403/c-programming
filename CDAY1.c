
/*AREA :


#include <stdio.h>

int main() {
    float l = 5.00;
    float w = 6.00;
    float area;
    area = l*w;
    printf("%f",area);

    return 0;
}

AVARAGE:


#include<stdio.h>
int main(){
   float mark1 = 80;
   float mark2 = 95;
   float avarage;
   avarage = (mark1+mark2)/2;
   printf("%f",avarage);
   return 0;
   }
   
   
COST WITH GST:

#include<stdio.h>
int main()
{
    float unit=10;
    float cost =10;
    float gst = 0.20;
    float totalcost;
    float totalcostwithgst;
    totalcost = unit*cost;
    printf("the total cost of the units %2f\n",totalcost);
    gst = totalcost*gst;
    printf("the gst is %2f\n",gst);
    totalcostwithgst= totalcost + gst;
    printf("the total cost with gst is %2f",totalcostwithgst);
    return 0;
} 


TRANSACTION IN ATM:

#include <stdio.h>
int main() {
    int savings = 100000;
    int transaction = 95000;
    int currentamount;
    currentamount = savings-transaction;
    printf("the balance amount is %d\n",currentamount);
    if(currentamount<10000)
        printf("the current amount is below 10000");
    return 0;
} */





/*CHOOSE THE LANGUAGE:

#include <stdio.h>
#include<string.h>
int main() {
    int number;
    printf(".......choose the number......\n");
    printf("  1 - Tamil\n");
    printf("  2 - English\n");
    printf("  3 - Hindi\n");
    printf("Enter the choice : ", number);
    scanf("%d", &number);
switch(number)
{
    case 1:
          number= 1;
          printf("you have choosen Tamil");
          break;
    case 2:
         number= 2;
         printf("you have choosen English");
         break;
    case 3:
         number = 3;
         printf("you have choosen Hindi");
         break;
    default:
           printf("Invalid choice . choose between 1 to 3");
}
    return 0;
}*/

ATM CARD CORRECT PIN:

#include<stdio.h>
int main()
{
    int pinnumber;
    pinnumber = 1403;
    int pin, balance = 100000, wd,rd,attempts=3;
    printf("Welcome to the ATM\n");
    while(attempts>0)
    {
        printf("Enter the PIN :",pin);
        scanf("%d",&pin);
        if(pin==pinnumber)
        {
            printf("The Pin is correct\n");
            printf("Enter the withdrawal amount\n");
            scanf("%d",&wd);
            if(wd<=balance)
            {
              printf("Transaction sucessfull\n");
              balance = balance - wd;
              printf("The remaining balance is %d",balance);
             return 0;
            }
        }
         else
            {
             printf("Incorrect pin\n");
              attempts--;
            }
        }
    
    printf("your ATM card is blocked\n");
}
            
