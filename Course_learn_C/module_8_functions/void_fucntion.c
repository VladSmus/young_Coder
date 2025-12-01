/*
// vabbalabbadabdab!
// 1.1 Adder Write a function named sum that calculates the sum of two integer arguments passed to it.
int sum(int a,int b){
 int sum = a+b;
 return sum;
}

// 1.2 Minimum Describe a function named min that calculates the minimum of two numbers passed to it.

int min (int a, int b){
    int min = b;
    if (a < b){
         min = a;
    }
    return min;
}


// 1.3 Output data: One integer is a minimum of three numbers passed to the function.

#include<stdio.h>
int min_num(int a, int b, int c)
{ int min = a;
 if ((a >= b) && (b <= c)){
      min = b;
 } else if ( (a >= c) &&( c <= b)){
      min = c;
 }
  return min;
}

int main(void)
{ int a=0,b=0,c=0,minimum = 0;
  scanf("%d %d %d",&a,&b,&c);
 minimum = min_num(a,b,c);
 printf("%d",minimum);
    return 0;
}

// 1.4  Factorial  Write a function named factorial that calculates the factorial of the number passed to it as an argument.

#include <stdio.h>
int factorial(int);
int main(void)
{ int n,fact;
 scanf("%d",&n);
  fact = factorial(n);
 printf("%d",fact);
    return 0;
}
int factorial(int k){
 int res = 1;
 if ( (k == 0) || (k == 1)){
      return 1;
 }

 for (int i = 2; i <=k; i++){
      res *= i;
 }
 return res;

}

// 1.5 Number of combinations Let's say you have N hockey players. You need to form a team of K people from them.
// How many options are there to do this? There is a standard answer to such questions - the number of combinations.

#include<stdio.h>
int factorial(int p)
{ int res = 1;
 if ((p == 0) || (p == 1)){
      return res;
 }
 for (int i = 2; i <=p; i++){
      res*=i;
 }
 return res;

}

int combin(int n, int k)
{ int res;
 res = factorial(n) / (factorial(k) * ( factorial(n-k)));
 return res;
}

int main(void){
    int n = 0, k = 0;
    scanf("%d %d", &n, &k);

    printf("%d", combin(n, k));

    return 0;
}

// 1.6 Output data: k is the first number of a sequence of three natural numbers such that k(k+1)(k+2)=x, or -1 if the number x cannot be represented in this form.

#include<stdio.h>
int sequence_multipliers(int n)
{ int k = 1, res = 0;
    while ( res != n){
     res = k *(k+1)*(k+2);
     k ++;
     if ( k > (n / 20)){
          k = -1;
          return k;
     }
}
 return k-1;

}

int main(void)
{ int n, res;
 scanf("%d",&n);
 res = sequence_multipliers(n);
 printf("%d",res);

    return 0;
}

// 1.7 Output data: A square of characters in the specified format.

#include <stdio.h>

char square(int x, char c)
{ for(int i = 0; i < x; i++){
     for (int j = 0; j < x; j++){
         printf("%c",c);
     }printf("\n");
}

}
int main()
{ int n,c;
 scanf("%d %c",&n,&c);
 char res = square(n,c);
  printf("%c",res);
  return 0;
}

// 1.8 The task was to write a function that outputs all the divisors of the number K that entered the input.

void factors(int k){
int i;
for(i =1; i <= k; i++){
     if( k % i == 0){
          printf("%d ", i);
     }
}
}

// 1.9 The input of the is_prime function receives the number K. ​​​​​
// Redo the function so that it returns the number 1 if the number K is prime, or 0 if the number K is not prime.

int is_prime(int k)
{ if ( k <= 1 ){
     return 0;
}
 if ( k == 2){
     return 1;
}
 if ( k % 2 == 0){
         return 0;
     }
 for(int i = 3; i * i < k; i+= 2){
      if ( k % i == 0){
           return 0;
      }
 }
  return 1;
}

// 1.10 Date formatting Write a print_date function(int d, int m, int y, int k) that outputs the date in one of the specified formats.

#include <stdio.h>
void print_date(int d, int m, int y, int k)
{ if ( k == 0){
     printf("%02d.%02d.%02d",d,m,y%100);
} else if ( k == 1){
     printf("%02d.%02d.%d",d,m,y);
} else {
     printf("%d/%02d/%02d",y,m,d);
}
}
int main()
{ int d,m,y,k;
 scanf("%d %d %d %d",&d,&m,&y,&k);
 print_date(d,m,y,k);
  return 0;
}


// 2.1  test pointers

int *p_a = &a;
int *p_b = &b;

//
char *p_ch = &ch;
*p_ch = inp;

//

printf("%d %d",*p_2,*p_1);

//

printf("%d",*p_1+*p_2);

//

int c = 0, d = 0;
scanf("%d %d", &c, &d);
*p_1 = c;
*p_2 = d;

//

 *p_dbl = (*p_1) / (double) (*p_2);

 //

 int temp;
temp = *p_1;
*p_1 = *p_2;
*p_2 = temp;

//

if ( (*p_a <= *p_b) && (*p_a <= *p_c)){
     *p_b = *p_a;
     *p_c = *p_a;
} else if ( (*p_b <= *p_a) && (*p_b <= *p_c)){
     *p_a = *p_b;
     *p_c = *p_b;
} else {
     *p_b = *p_c;
     *p_a = *p_c;
}

//

// 3.1 a function that swaps the values of variables.

void swap(int * a, int * b)
{ int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

// 3.2 Write a function that replaces the natural number x with the sum of the digits that make up the number x.
void sum_digits(int *x)
{ int temp = *x, sum = 0;
 while( temp > 0){
     sum += temp % 10;
     temp /=10;
 }
 *x = sum;
}


// 3.3 to the variable x is the minimum of the values of x and y, and to the variable y is the maximum of these values.

void minmax(int *x, int *y)
{ int tempx = *x, tempy = *y;
  if ( *x > *y){
      *y = tempx;
      *x = tempy;

  }

}


// 3.4 case: 0 — lower, 1 — upper.
// If the value passed in the ch variable is not a Latin alphabet character or is already in the correct case, then nothing needs to be done with it.

void char_register(char *ch, int fl){
    if ( ('A' <= *ch && *ch <= 'Z') || ('a' <= *ch && *ch <= 'z')){
        if ( fl == 1 && ('a' <= *ch && *ch <= 'z')){
             *ch -= 32;
        }
        if ( fl == 0 && ('A' <= *ch && *ch <= 'Z')){
             *ch += 32;
        }
        }

}

// 3.5 The Caesar Cipher

void char_cesar(char *ch, int shift)
{
    *ch+= shift;
if (*ch > 'z'){
     *ch-=26;
}
}


// 3.6 the largest common divisor for the numbers x and y.

int gcd(int x, int y)
{  while(y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }
    return x;


}

// 3.7 reduce fractions with numerator a and denominator b.

int gcd(int x, int y)
{
    while (y != 0){
        int temp = y;
        y = x % y;
        x = temp;
}
return x;
}

void reduce_fraction(int *a, int *b)
{ int divisor =  gcd(*a,*b);
  *a /= divisor;
  *b /= divisor;

}

// 3.8 In the arr array, it replaces the negative elements of the array with their modules.
// In addition, the function should return the number of substitutions performed.

int abs_arr(int arr[], int n)
{ int counter= 0;
    for(int i = 0; i < n; i++){
         if ( arr[i] < 0){
              counter= counter +1;
              arr[i]*= -1;

         }
    }
return counter;
}

// 3.9 the function returns the maximum or minimum element of the arr array, depending on the value of the flag fl. 0 is the minimum, 1 is the maximum.

int minmax(int arr[], int n, int fl)
{ int need_n = arr[0];
    if ( fl == 1){
     for (int i = 0; i < n; i++){
          if ( arr[i] > need_n){
               need_n  = arr[i];
          }
     }
} else {
     for (int i = 0; i < n; i++){
         if ( arr[i] < need_n){
              need_n = arr[i];
         }
     }
}
 return need_n;
}


// 3.10 the function sorts the array passed to it in ascending or descending order, depending on the value of the fl flag:
// 0 - from smaller to larger, 1 - from larger to smaller.

void sort_arr(int arr[], int n, int fl)
{ for (int i = 0; i < n - 1; i++) {
        int idx = i;

        for (int j = i + 1; j < n; j++) {
            if ((fl == 0 && arr[j] < arr[idx]) || (fl == 1 && arr[j] > arr[idx])) {
                idx = j;
            }
        }

        if (idx != i) {
            int temp = arr[i];
            arr[i] = arr[idx];
            arr[idx] = temp;
        }
    }

}


// 3.11 the position of the first occurrence of the element with the arg value in the arr array. If no such element is found, the function should return the value -1.


int linear_search(int arr[], int n, int arg)
{ for(int i = 0; i < n; i++){
     if (arr[i] == arg){
          return i;
     }
}
return -1;
}

// 3.12 The function must find the ordinal number of the element with the value arg in the ascending array arr.
// If no such element is found, the function should return the value -1.

int binary_search(int arr[], int n, int arg)
{
    int left = 0;
    int right = n;
    int res = -1;

    while (left < right) {
        int mid = (left + right) / 2;

        if (arg <= arr[mid])
            right = mid;
        else
            left = mid + 1;
    }

    if (right < n && arr[right] == arg)
        res = right;

	return res;
}

// THE END !
*/
