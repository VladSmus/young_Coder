
// 1.1 Write a program that displays the first N natural numbers.
#include <stdio.h>
int main(void){
 int n;
 scanf("%d",&n);
 for (int i = 1; i <= n; i++){
     printf("%d ",i);
 }
    return 0;
}

//1.2 Natural numbers in ascending order belonging to the interval [K,M]. The numbers must be separated by a single space.

#include <stdio.h>
int main(void)
{ int k,m;
 scanf("%d %d",&k,&m);
 if (k <=0){
      k =1;
 }
 for (int i = k; i <= m; i++){
      printf("%d ",i);
 }
    return 0;
}

//1.3 The value of the factorial of the number K.
#include <stdio.h>
int main(void)
{ int k,res=1;
 scanf("%d",&k);
 for (int i = 1; i <= k ; i++){
      res = res * i;
 }
printf("%d",res);
    return 0;
}

//1.4 The Fibonacci sequence is a sequence where each subsequent number is obtained by adding the previous two.
#include <stdio.h>
int main(void)
{ int n, fib1= 0,fib2 = 1,tmp;
 scanf("%d",&n);
 for (int i = 2; i <= n; i++){
      tmp = fib1;
      fib1 = fib2;
      fib2 = fib2 + tmp;

 }
 printf("%d",fib2);
    return 0;
}

//1.5 Number A, two numbers A+1, three numbers A+2, etc. Each number occupies a 5 character wide field, right-aligned.

#include <stdio.h>
int main(void){
 int a,b;
 scanf("%d %d",&a,&b);
 for (int i = a; i <= b; i++){
      for (int j = 0; j <= i - a ; j++){
           printf("%5d",i);
      }
 }
 return 0;
}

// 1.6 Change the program written in the previous step so that each number is output as many times as its value. For example, the number 5 should be output 5 times.

#include <stdio.h>
int main(void)
{ int a,b;
 scanf("%d %d",&a,&b);
 for (int i = a; i <=b; i++){
      for (int j = 0; j <= i -1 ; j++){
           printf("%3d ",i);
      }
 }

    return 0;
}

// 1.7 Divisors -  For a given number n, display all its divisors and their number on the screen.
#include <stdio.h>
int main(void)
{ int n, counter = 0;
  scanf("%d",&n);
 for (int i = 1; i <= n; i++){
      if ( n % i == 0){
           printf("%d ",i);
           counter ++;
      }
 }
 printf("\n%d",counter);
    return 0;
}

//1.8 For a given number N, check whether it is prime.Input data:One natural number N, other than 1.
//Output: 1 -- if the number is prime 0 -- if the number is composite
#include <stdio.h>
#include <stdbool.h>

// Ôóíêöèÿ ïðîâåðêè ïðîñòîòû ÷èñëà N
bool isPrime(int n) {
    // Ïðîâåðÿåì ñëó÷àè ìàëûõ ÷èñåë âðó÷íóþ
    if (n <= 1)
        return false;

    // Äëÿ ÷¸òíûõ ÷èñåë ñðàçó âîçâðàùàåì False êðîìå ñëó÷àÿ 2
    if ((n % 2 == 0 && n != 2))
        return false;

    // Èùåì äåëèòåëè ñðåäè íå÷¸òíûõ ÷èñåë îò 3 äî sqrt(n)
    int limit = n / 2 + 1;   // Âåðõíÿÿ ãðàíèöà äëÿ ïåðåáîðà
    for (int i = 3; i * i <= n; i += 2) { // Ïåðåáèðàåì íå÷¸òíûå ÷èñëà íà÷èíàÿ ñ 3
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int N;
    scanf("%d", &N);

    // Åñëè ÷èñëî ïðîñòîå âûâîäèì 1 èíà÷å 0
    printf(isPrime(N) ? "1\n" : "0\n");

    return 0;
}

// 1.9 Finding the maximum element
#include <stdio.h>

int main(void) {

  int N = 0;

  scanf("%d", &N);

  int max = - 9999;
  int number = 0;

  for (int i = 1; i <= N; i++){
    scanf(" %d", &number);
    if (max < number){
      max = number;
    } else {
       continue;
    }
  }

  printf("%d\n", max);

  return 0;
}

// 2.1 Print the sequence of numbers received at the input before the number -9999

#include <stdio.h>
int main(void)
{ int i = 0;
    while (i != -9999){
         scanf("%d ",&i);
         printf("%d ",i);
    }

    return 0;
}

// 2.2 Display all the elements of the sequence, except the final -9999, on the screen.

#include <stdio.h>
int main(void)
{ int i = 0;
 while (i != -9999) {
    scanf("%d ",&i);
    if (i == -9999){
         break;
    }else {
         printf("%d ",i);
    }
 }

    return 0;
}

// 2.3 Calculate the sum of the elements of a sequence of unknown length.

#include <stdio.h>
int main(void)
{ int i = -1, counter= 0;
  while (i !=0){
       scanf(" %d",&i);
       counter = counter +i;
  }
 printf("%d",counter);
    return 0;
}

// 2.4 It is necessary to find the maximum and minimum elements of the sequence, of unknown length.

#include <stdio.h>

int main() {
    int num, max = 0, min = 0;


    scanf("%d", &num);
    if(num != 0){
        max = num;
        min = num;

        while(scanf("%d", &num) && num != 0){
            if(num > max)
                max = num;

            if(num < min)
                min = num;
        }
    }

    printf("%d %d\n", max, min);

    return 0;
}

// 2.5 Number of digits
Count the number of digits in a natural number record N.
#include <stdio.h>
int main(void)
{ int n,c= 0;
 scanf("%d",&n);
 while ( n !=0){
       c++;
       n= n /10;
 }
 printf("%d",c);
    return 0;
}

// 2.6 One natural number is N

#include <stdio.h>

int main() {
    int N, r = 1;
    scanf("%d", &N);
    while((1 << r) < N) {
        r++;
    }

    printf("%d\n", r);

    return 0;
}

// 2.7 The digits of the number N written in reverse order.
#include <stdio.h>
int main(void)
{int n, remainder = 0;
 scanf("%d",&n);
 while (n !=0){
      remainder = n %10;
      n = n /10;
      printf("%d",remainder);
 }
    return 0;
}

// 2.8 Input data: two positive integers a and b. Output data:The smallest number d that is divisible by both of these numbers without remainder

#include <stdio.h>
int main(void)
{ int a,b, i = 1, s =1;
 scanf("%d %d",&a,&b);
while (i > 0){
     s++;
    if ( (s%a == 0) &&( s % b == 0)){
        i = 0;
    }
} printf("%d",s);
    return 0;
}

// 2.9 Output data: A pyramid of natural numbers of height N.
#include <stdio.h>
int main(void)
{ int n;
 scanf("%d", &n);
 for (int i = 1; i <= n ; i ++){

      for (int j = 1; j <= i ; j++){
           printf("%d ",j);
      }
     printf("\n");
 }

    return 0;
}

// 2.10 Duplicates. Remove duplicates from the sequence.

#include <stdio.h>
int main(void)
{ int n, k, temp1, temp2;
 scanf("%d\n",&n);

 for (int i = 0; i <= n; i++){
      scanf(" %d",&k);
      temp2 = temp1;
      temp1 = k;
      if (temp1 != temp2){
         printf("%d ",k);
         continue;
      } else {
           continue;
      }

 }

    return 0;
}

// 2.11 Output data:The number 0 -- if the sequence is ascending, or the number k -- if the sequence is not ascending,
//  where k is the ordinal number of the first member of the sequence that violates its ascending.

#include <stdio.h>
int main(void)
{ int n, temp1=-99999,temp2=-99999, c = 0;

 while( scanf("%d",&n)!= -9999){
     if (n == -9999){
          break;
     }
     temp2 = temp1;
     temp1 = n;
     c++;
     if (temp1 <= temp2){
          printf("%d",c);
          return 0;
     }

 } printf("%d",0);
    return 0;
}

// 2.12 The sum of the elements. Find the sum of the sequence elements located between the zeros.

#include <stdio.h>
int main(void)
{ int n,sum = 0;
 while(scanf("%d",&n) != 0){
      if (n == 0){
           break;
      }
 }
 while (scanf("%d",&n) != 0){
      if (n == 0){
           break;
      }
     if ( n != 0){
         sum = sum +n;

     }
 } printf("%d",sum);
    return 0;
}



// 2.13 Write a program that displays numbers from 1 to 100. In this case, instead of numbers that are multiples of three, the program should output the word "Fizz",
// and instead of numbers that are multiples of five, the word "Buzz". If the number is a multiple of both 3 and 5, then the program should output the word "FizzBuzz"

#include <stdio.h>
int main(void){
  int n = 0;
 while ( n < 100){
     n++;
     if ((n % 3 == 0 )&&( n % 5 == 0)){
          printf("FizzBuzz ");
     }else if (n % 3 == 0 ){
          printf("Fizz ");
     }else if (n % 5 == 0 ){
          printf("Buzz ");
     } else {
          printf("%d ",n);
     }


 }

    return 0;
}





