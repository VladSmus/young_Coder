
#include <stdio.h>
#include <locale.h>
int main(void){
    char answer;
    setlocale(LC_ALL,"");

    printf("Âûáåðèòå ïðàâèëüíûé âàðèàíò îòâåòà.\n\n");
    printf("Íà÷àëî è êîíåö Âòîðîé ìèðîâîé âîéíû:\n");
    printf("\ta. 1 ñåíòÿáðÿ 1939 — 9 ìàÿ 1945\n");
    printf("\tb. 1 ñåíòÿáðÿ 1939 — 2 ñåíòÿáðÿ 1945\n");
    printf("\tc. 22 èþíÿ 1941 — 9 ìàÿ 1945\n");
    printf("\td. 22 èþíÿ 1941 — 2 ñåíòÿáðÿ 1945\n");

    printf("\nÂâåäèòå âàðèàíò îòâåòà: ");
    scanf("%c",&answer);

    switch (answer) {
    case 'B':
    case 'b':
        printf("GOOD!\n");
        break;
    case 'A':
    case 'a':
    case 'C':
    case 'c':
    case 'D':
    case 'd':
        printf("BAD!\n");
        break;
    default:
        printf("ERROR!\n");
        break;
    }
    return 0;
}

/// Write a program that allows you to get a verbal description of school grades:
//1 — bad
//2 — unsatisfactory
//3 — satisfactory
//4 — good
//5 — excellent
#include <stdio.h>
#include <locale.h>
int main(void)
{   int estimation;
    setlocale(LC_ALL,"");
    scanf("%d",&estimation);
    switch (estimation){
        case 1:
            printf("ïëîõî");
            break;
        case 2:
            printf("íåóäîâëåòâîðèòåëüíî");
            break;
        case 3:
            printf("óäîâëåòâîðèòåëüíî");
            break;
        case 4:
            printf("õîðîøî");
            break;
        case 5:
            printf("îòëè÷íî");
            break;
        default:
            printf("Îøèáêà!");
            break;


    }
    return 0;

}

// If an integer from 1 to 7 is input to the program,
//the program should output the English name of the corresponding day of the week.:
#include <stdio.h>
int main(void)
{
    int day;
    scanf("%d", &day);

    switch(day){

        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("ERROR!\n");
            break;
    }

    return 0;
}

// Write a calculator program for four basic arithmetic operations:
// + addition   - subtraction       * Multiplication        / division

#include <stdio.h>
#include <locale.h>
int main(void){
    char sign;
    int a, b;
    setlocale(LC_ALL,"");
    scanf("%c %d %d",&sign,&a,&b);
    switch (sign){
        case '+':
            printf("%.2f",(double)a+b);
            break;
        case '-':
            printf("%.2f",(double)a-b);
            break;
        case '/':
            printf("%.2f",(double)a/b);
            break;
        case '*':
            printf("%.2f",(double)a*b);
            break;
        default:
            printf("ERROR!");
            break;


    }

    return 0;
}


// Calculator v.0.3

#include <stdio.h>
int main(void)
{ int a,b;
 char c;
 scanf("%d %c %d",&a,&c,&b);
     switch (c) {
         case '+':
             printf("%.2f",(double)a+b);
             break;
         case '-':
             printf("%.2f",(double)a-b);
             break;
         case '*':
         case 'x':
             printf("%.2f",(double)a*b);
             break;
        case '^':
             printf("%.2f",(double)pow(a,b));
             break;
        case '/':
        case ':':
             switch (b){
                 case 0:
                     printf("ERROR!");
                     break;
                 default:
                     printf("%.2f",(double)a/b);
                     break;
             }break;
         default:
             printf("ERROR!");
             break;
     }

    return 0;
}


// Calculates the level of basic metabolism using the Mifflin-Sant Geor
//formula based on the data that you enter (sex, age, height and weight).


#include <stdio.h>
int main(void)
{   char sex;
    int age, height, weight;
    double bmr_male, bmr_female;
    printf("Enter your sex( m - male, or f - female):\n");
    scanf("%c",&sex); // reading sex

    printf("Enter your age (in years, integer number):\n");
    scanf("%d", &age); // reading age

    printf("Enter your height (in centimeters, integer number):\n");
    scanf("%d", &height); // reading height

    printf("Enter your weight (in kilograms, integer number):\n");
    scanf("%d", &weight); // reading weight

    switch (sex){
        case 'm':
            bmr_male = 10*weight + 6.25*height - 5*age + 5;
            printf("|  BMR  |\n");
            printf("|%.2f|\n", bmr_male);
            break;
        case 'f':
            bmr_female = 10*weight + 6.25*height - 5*age - 161;
            printf("|  BMR  |\n");
            printf("|%.2f|\n",bmr_female);
            break;


        default:
            printf("ERROR!");
            break;

    }

    return 0;
}
// Calculate the day number in a non-leap year based on the specified date and month.

#include <stdio.h>
int main(void)
{ int m,d, value = 0;
 scanf("%d %d",&m,&d);
 switch (m-1){
     case 12:
         value = value + 31;
     case 11:
         value = value + 30;
     case 10:
         value = value + 31;
     case 9:
         value = value + 30;
     case 8:
         value = value + 31;
     case 7:
         value = value + 31;
     case 6:
         value = value + 30;
     case 5:
         value = value + 31;
     case 4:
         value = value + 30;
     case 3:
         value = value + 31;
     case 2:
         value = value + 28;
     case 1:
         value = value + 31;
         printf("%d",value + d);
         break;
     default:
         break;

 }

    return 0;
}

// Write a program that counts the product of digits of a given k-digit number X

#include <stdio.h>
int main(void)
{ int k, x,res;
     scanf("%d\n%d",&k,&x);
     switch (k){
         case 1:
             printf("%d",x);
             break;
         case 2:
             res = (x/10) * (x%10);
             printf("%d",res);
             break;
         case 3:
             res = (x/100)*(x%100 /10) * (x%10);
             printf("%d",res);
             break;
         case 4:
             res = (x / 1000)*(x%1000/100)*(x%100 /10) * (x%10);
             printf("%d",res);
             break;
     }

    return 0;
}

// Age verification
#include <stdio.h>
#include <locale.h>
int main(void)
{ int years;
 setlocale(LC_ALL,"");
     scanf("%d",&years);
     switch (years% 10) {
         case 1:
             switch (years){
                 case 11:
                     printf("Ìíå %d ëåò",years);
                     break;
                 default:
                     printf("Ìíå %d ãîä",years);
                     break;
             }
             break;
         case 2:
         case 3:
         case 4:
             switch (years){
                 case 12:
                 case 13:
                 case 14:
                     printf("Ìíå %d ëåò",years);
                     break;
                 default:
                     printf("Ìíå %d ãîäà",years);
                     break;
             }
             break;
         default:
             printf("Ìíå %d ëåò",years);
             break;
     }

    return 0;
}

// In UNIX-like operating systems, file access rights are determined using a system of flags.:
// r -- (read) the right to read the file
// w -- (write) the right to write to the file
// x -- (execute) the right to execute the file

#include<stdio.h>
int main(void)
{ char i1,i2,i3;
 int sum = 0;
 scanf("%c%c%c",&i1,&i2,&i3);
 switch (i1){
     case '-':     // first branch
         switch (i2) {
             case '-':
                 switch (i3){
                     case '-':
                         printf("%d",0);
                         break;
                     case 'x':
                         printf("%d",1);
                         break;
                     default:
                        printf("Invalid format");
                        break;
                 }break;
             case 'w':
                 switch (i3) {
                    case '-':
                        printf("%d",2);
                        break;
                    case 'x':
                        printf("%d",3);
                        break;
                    default:
                        printf("Invalid format");
                        break;
                 }break;
             default:
                 printf("Invalid format");
                 break;

         }break;




     case 'r':    // second branch
         switch (i2) {
             case '-':
                 switch (i3){
                     case '-':
                         printf("%d",4);
                         break;

                     case 'x':
                         printf("%d",5);
                         break;

                     default:
                        printf("Invalid format");
                        break;


                 }break;


             case 'w':
                 switch (i3){
                     case '-':
                         printf("%d",6);
                         break;

                     case 'x':
                         printf("%d",7);
                         break;

                     default:
                        printf("Invalid format");
                        break;


                 }break;

             default:
                 printf("Invalid format");
                 break;




         }break;
     default:
         printf("Invalid format");
         break;
 }
    return 0;
}

// The number module  -negative number;  -a positive number;  - the number is 0.
#include <stdio.h>
int main(void)
{
    int x, abs_x;
    scanf("%d", &x);

    abs_x = x * (1 - 2 *(x < 0));
    printf("%d\n", abs_x);

    return 0;
}
// Quadrants

#include <stdio.h>
int main(void)
{ double x, y;
  int res;
     scanf("%lf %lf",&x,&y);
     res = ((x>0)&&(y>0)) + (((x< 0) && (y>0)) * 2) + (((x< 0) && (y <0))* 3) + (((x >0) && (y<0))* 4);
     printf("%d",res);
    return 0;
}
// IP address validation  Input data: IP address: four decimal numbers separated by dots.
//Output data: The "IP string is valid!" if the IP address is correct", otherwise the "IP string is invalid!"

#include <stdio.h>
int main(void)
{ int i1,i2,i3,i4,res;
  char c1,c2,c3;
  scanf("%d%c%d%c%d%c%d",&i1,&c1,&i2,&c2,&i3,&c3,&i4);
  res = (i1 >= 0 && i1 <= 255) && (i2 >= 0 && i2 <= 255) && (i3 >= 0 && i3 <= 255) && (i4 >= 0 && i4 <= 255);
  switch (res){
      case 1:
          switch (c1) {
              case '.':
                  switch (c2){
                      case '.':
                          switch (c3){
                              case '.':
                                  printf("IP is valid!");
                                  break;
                              default:
                                  printf("IP is invalid!");
                                  break;
                          }break;
                      default:
                            printf("IP is invalid!");
                            break;
                  }break;
              default:
                  printf("IP is invalid!");
                  break;
          }break;

      default:
          printf("IP is invalid!");
          break;
  }

    return 0;
}
// Input data:Four numbers:The first three numbers are the values received from sensors s1, s2 and s3
//The fourth number is the status of the master switch m
//Output data:Three numbers represent the lighting condition on the first, second and third floors.

#include <stdio.h>
int main(void)
{
    int s1, s2, s3, m,res1, res2,res3, res;
    scanf("%d %d %d %d", &s1, &s2, &s3, &m);
    res1 = ((m == 0 || m != -1) * s1) + (m == 1 && s1 == 0);
    res2 = ((m == 0 || m != -1) * s2) + (m == 1 && s2 == 0);
    res3 = ((m == 0 || m != -1) * s3) + (m == 1 && s3 == 0);
    printf("%d %d %d", res1,res2,res3);
    return 0;
}

// Input data:Four integers. The first two numbers are the coordinates of point
// A (the first point), the next two numbers are the coordinates of point, B(the second point).
//Output data:Output a single integer - the number of the point that is closer to the origin.
// If the distances between the points to the origin are equal, then output 0.

#include <stdio.h>
#include <math.h>
int main(void)
{ int x1,y1,x2,y2,res1,res2;
  scanf("%d %d\n%d %d",&x1,&y1,&x2,&y2);
  res1 = sqrt(x1*x1 + y1*y1) ;
  res2 = sqrt(x2*x2 + y2*y2) ;
  if (res1 < res2){
       printf("%d",1);
  } else if (res1 == res2){
       printf("%d",0);
  }
 else {
       printf("%d",2);
  }
  return 0;
}

// Input data:From zero to two real numbers x,y.
//Output data:If there is not enough data to work with, then output the Incorrect input line.
//One integer is the number of the quadrant in which the point(x,y) is located.
//If the point is located on one of the axes, or at the origin, then output the Incorrect input string

#include <stdio.h>

int main(void)
{       int value_read;
        double x, y;
        value_read = scanf("%lf%lf", &x, &y);
        // Äîáàâüòå ñþäà early returns
         if (value_read < 2) {
              printf("Incorrect input");
              return 0;
         }
        if (x == 0 || y == 0){
             printf("Incorrect input");
              return 0;
        }
        if (x > 0) {
                if (y > 0) {
                        printf("%d\n", 1);
                } else {
                        printf("%d\n", 4);
                }
        } else {
                if (y > 0) {
                        printf("%d\n", 2);
                } else {
                        printf("%d\n", 3);
                }
        }

        return 0;
}

// Input data:Two natural numbers: the first is the number in the month, the second is the number of the month in the year.
//Output data:The correct string if the date is correct, and the error string if there can be no such date.

#include <stdio.h>
int main(void)
{ int d,m;
 scanf("%d %d",&d,&m);
 if ((m == 2) && ((d > 0) &&( d <= 29))){
      printf("correct");
 } else if ((m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12 ) && ((d > 0) && (d <=31))){
      printf("correct");
 } else if (( m==  4 || m == 6 || m == 9 || m == 11) && ((d > 0) && (d <= 30))){
     printf("correct");
 } else {
      printf("error");
 }
    return 0;
}


