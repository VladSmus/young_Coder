
//1. The area of one face of the cube;
//2. The area of the entire cube surface;
//3. The volume of the container.
#include <stdio.h>
#include <math.h>
int main(void)
{ int x, s1,s2,s3;
     scanf("%d",&x);
     s1 = x*x ;
     s2 = 6 * s1;
     s3 = pow(x,3);
     printf("%d %d %d",s1,s2,s3);

    return 0;
}

//Two numbers separated by a space:
//1.Cylinder volume;
//2.The volume of the cone.

#include <stdio.h>
int main(void)
{ int r, h;
 double v1,v2, pi = 3.14159265358979323846;
     scanf("%d %d", &r, &h);
    v1 =(double) 1/3 * pi * r*r * h;
    v2 = pi * r*r * h;
     printf("%.2f %.2f", v2, v1);
    return 0;
}


// Two numbers separated by a single space:
// 1.hours      2. minutes

#include <stdio.h>
int main(void)
{ int sec,hours, minutes;
     scanf("%d",&sec);
     hours = sec / 3600;
     minutes = (sec % 3600) / 60;
     printf("%d %d",hours,minutes);


    return 0;
}

// Input data:Two natural numbers. The firstri is the inner radius of the ring in kilometers,
//the second ro is the outer radius of the ring in kilometers.
//Output data:Two numbers.The first is the width of the ring in kilometers (an integer).
//The second number is the area of the ring in hectares (a real number). Format: two decimal places.

#include <stdio.h>
int main(void)
{ int ri, ro, res1;
 double res2, pi = 3.14159265358979323846;
 scanf("%d %d",&ri,&ro);
    res1 = ro - ri;
    res2 = pi * (pow(ro,2) - pow(ri,2));
        printf("%d %.2f",res1, res2*100);
    return 0;
}

// The mass of one water molecule is approximately 3 ×10-23 grams. The mass of one drop of water is approximately equal to
// 0.05 g. One faceted glass holds ≈249.5 grams of water.
// It is necessary to write a program that calculates the number of water droplets and the number of water molecules in
// N faceted glasses.
// Input data:Natural number N is the number of glasses of water.
// Output data:Two numbers separated by a space.
//The first number − the number of drops of water in N glasses.
//The second number − the number of water molecules in N glasses of water. A real number written in scientific format. Precision: 3 decimal places.
//Reference:
//To output the second number, use the %e format specifier with a precision modifier. Test how it works on your computer.
//To record very small/large real numbers, you can use the scientific recording format. For example:
//double x = 3e-23; // for the number 3*10^{-23} or 0.00000000000000000000003
//double y = 2.35e10; // for writing the number 2350000000000.0

#include <stdio.h>
#include <math.h>
int main(void)
{ int glass, droplets;
     double molecule;
     scanf("%d",&glass);
     droplets = (249.5/ 0.05);
     molecule = (0.05 / 0.00000000000000000000003) * droplets * glass;

     printf("%d %.3e",(droplets* glass ) ,molecule );

    return 0;
}
// Two integers separated by a space.
//the first is the lowest digit of the integer part of the number M / N ;
//the second is the highest digit of the fractional part of the number M / N;

#include <stdio.h>
int main(void)
{ int M, N, first, second;
    double div;
    scanf("%d %d", &M, &N);
    div =(double) M / N;
    first = (int)div % 10;
    second = ((int)(div * 10)) %10;
    printf("%d %d", first, second);

    return 0;
}


//Output data:The number K written in reverse order.

#include <stdio.h>
int main(void)
{ int K, i1, i2, i3;
     scanf("%d", &K);
     i1 = K / 100 ;
     i2 = (K %100 - (K%10)) / 10;
     i3 = K % 10 ;
     printf("%d%d%d",i3,i2, i1);

    return 0;
}
// One number is the difference in bytes between K in binary gigabytes and K in decimal gigabytes.

#include <stdio.h>
#include <math.h>
int main(void)
{long int user, res;
     scanf("%d",&user);
     res =  user * (long)(pow(2,30) - pow(10,9));
    printf("%ld",res);
    return 0;
}

// Output 1 if K = 0    Output 0 if K = 1

#include <stdio.h>
int main(void)
{ int user, res;
     scanf("%d",&user);
     res = (user + 1) %2 ;
     printf("%d",res);


    return 0;
}

// The factorial of a natural number N
#include <stdio.h>
int main(void)
{ int res = 1, x = 1;
     printf("%d       = %d!\n",res,x);
     x =x +1;
     res = res * x;
     printf("%d       = %d!\n",res,x);
     x =x +1;
     res = res * x;
     printf("%d       = %d!\n",res,x);
     x =x +1;
     res = res * x;
     printf("%d      = %d!\n",res,x);
     x =x +1;
     res = res * x;
     printf("%d     = %d!\n",res,x);
     x =x +1;
     res = res * x;
     printf("%d     = %d!\n",res,x);
     x =x +1;
     res = res * x;
     printf("%d    = %d!\n",res,x);
     x =x +1;
     res = res * x;
     printf("%d   = %d!\n",res,x);
     x =x +1;
     res = res * x;
     printf("%d  = %d!\n",res,x);
     x =x +1;
     res = res * x;
     printf("%d = %d!\n",res,x);
    return 0;
}

// To calculate it, you can use the following approximate formula:
// e=1+ 1/1! + 1/2! + 1/3! + 1/4! + …
#include <stdio.h>
int main(void)
{ int i=1, e =1;
 double res;
     e = e * i;
     res = 1 + (double) 1  / (e);
     //////
     i = i +1;
     e = e * i;
     res = res + (double) 1 / (e);
     ///
     i = i +1;
     e = e * i;
     res = res + (double) 1 / (e);
     printf("%.5f\n",res);
    ///
    i = i +1;
     e = e * i;
     res = res + (double) 1 / (e);
     printf("%.5f\n",res);
     i = i +1;
     e = e * i;
     res = res + (double) 1 / (e);
     printf("%.5f\n",res);

    return 0;
}


// Use data, and arithmetic operations can be important for other purposes.
// The following formula is used for this: e^x= 1+ x / 1! + x^2/2! + x^ 3/3! + x ^ 4/4! + …
#include <stdio.h>
#include <math.h>
int main(void)
{ double x,i = 1 ;
 long long fac = 1;
    double res1, res2;
    scanf("%lf",&x);
     res1 = 1 + ( (double)x / fac * i);
     res2 = exp(x);
 ///////
     i = i + 1;
     fac = fac * i;
     res1 = res1 + ( (double)pow(x,i) / fac );
     ///
     i = i + 1;
     fac = fac * i;
     res1 = res1 + ( (double)pow(x,i) / fac );
     i = i + 1;
     fac = (long long) fac * i;
     res1 = res1 + ( (double)pow(x,i) / fac );
     i = i + 1;
     fac =(long long) fac * i;
     res1 = res1 + ( (double)pow(x,i) / fac );
     printf("%.6lf\n%.6lf",res1, res2);
    return 0;
}
// Output data: Two integers separated by a space.
//The first number is the radius of the saucer-like planet (in kilometers);
//The second number is the flight time between diametrically opposite points of
// a saucer-like planet on an IL-96 aircraft (speed 900 km/h).
#include <stdio.h>
int main(void)
{ int r, res1, res2, speed = 900;
     scanf("%d", &r);
     res1 = r * 2;
     res2 = res1* 2 / speed;
     printf("%d %d", res1, res2);

    return 0;
}

// Determine whether a number is even or odd.
#include <stdio.h>
int main(void)
{ int u_i, res;
     scanf("%d",&u_i);
     res =  abs(u_i) % 2 ? -1 : 1   ;
     printf("%d", res );

    return 0;
}
// Calculate the difference between the number of odd and even numbers.

#include <stdio.h>
int main(void)
{ int user1, user2, user3, user4, user5, res;
 int odd1, odd2, odd3, odd4, odd5, sum_odd;
 int even1, even2, even3, even4, even5, sum_even;
    scanf("%d %d %d %d %d",&user1, &user2, &user3, &user4, &user5);
 /// to abs
     user1 = abs(user1);
     user2 = abs(user2);
     user3 = abs(user3);
     user4 = abs(user4);
     user5 = abs(user5);
    /// Odd numbers
    odd1 = user1 % 2;
    odd2 = user2 % 2;
     odd3 = user3 % 2;
     odd4 = user4 % 2;
     odd5 = user5 % 2;
     sum_odd = odd1 + odd2 + odd3 + odd4 +odd5;
 /// Even numbers
     even1 = (user1 +1) % 2;
     even2 = (user2 +1) % 2;
     even3 = (user3 +1) % 2;
     even4 = (user4 +1) % 2;
     even5 = (user5 +1) % 2;
     sum_even = even1 + even2 + even3 + even4 +even5;
 /// Result
     res = sum_odd - sum_even;
    printf("%d",res );
    return 0;
}
// Determine if all the entered numbers are equal to zero.

#include <stdio.h>
#include <math.h>
int main(void){
    int u1, u2, u3, u4, u5, result;
    scanf("%d %d %d %d %d", &u1, &u2, &u3, &u4, &u5);
    result = (u1 * u1) + (u2 * u2) +  (u3 * u3) +  (u4 * u4) +  (u5 * u5) ;
    printf("%d",result);
    return 0;


}
// The number obtained from the number K by decimal shifting to the right.
#include <stdio.h>
int main(void)
{ int user_number;
    scanf("%d",&user_number);
    printf("%d",(user_number / 10));
    return 0;
}

// K seconds have passed since the beginning of the day.
//Find the number of seconds that have passed since the beginning of the last hour.

#include <stdio.h>
int main(void)
{ int k,res;
     scanf("%d",&k);
     res = k - ((k / 3600) * 3600);
     printf("%d",res);

    return 0;
}

// K seconds have passed since the beginning of the day.
//Find the number of seconds that have passed since the beginning of the last minute.

#include <stdio.h>
int main(void)
{ int k, res;
     scanf("%d", &k);
     res = k - ((k / 60) * 60);
    printf("%d",res);
    return 0;
}

// It's the K-th day of the year. Determine the number of the current week in the year.
// We assume that January 1st was Monday.
#include <stdio.h>
int main(void)
{ int k, res;
    scanf("%d",&k);
     res = (k -1) / 7 + 1;
     printf("%d",res);
    return 0;
}

 //The amoeba is the simplest single—celled organism. The amoeba divides into two every 3 hours.
// Determine how many amoebas there will be in K hours, if there was one amoeba initially.

#include <stdio.h>
int main(void)
{ int u, res;
     scanf("%d",&u);
     res = pow(2, (u /3)) ;
     printf("%d",res);

    return 0;
}



// Write a program that converts feet and inches into meters and centimeters.
#include <stdio.h>
int main(void)
{ int F,D, metre, cm;
     scanf("%d %d", &F,&D);
     metre = (int)(F * 12 + D) * 0.0254;
     cm = (int)((F * 12 + D) * 2.545)- 100;
     printf("%d\'%d\" = %d.%d m",F,D,metre,cm);

    return 0;
}

// Convert a number from binary to decimal.

#include <stdio.h>
#include <math.h>
int main(void)
{ int user_n, i1,i2,i3,i4, sum_i;
     scanf("%d", &user_n);
     ///// separate each digit
     i1 = user_n % 10;
     i2 = (user_n % 100) / 10;
     i3 = (user_n % 1000) / 100;
     i4 = user_n / 1000;
     //// the sums of each digit
     sum_i = i1 * pow(2,0) + i2 * pow(2,1) + i3 * pow(2,2) + i4 * pow(2,3);
     printf("%d",sum_i);

    return 0;
}
// Conversion from any number system to decimal

#include <stdio.h>
#include <math.h>
int main(void)
{ int user_num,user_numsys, i1,i2,i3,i4, sum_i;
     scanf("%d %d", &user_numsys, &user_num);
     i1 = user_num % 10;
     i2 = (user_num % 100) /10;
     i3 = (user_num % 1000)/100;
     i4 = user_num /1000;
     sum_i = i1 * pow(user_numsys,0) + i2 * pow(user_numsys,1) +  i3 * pow(user_numsys,2) +  i4 * pow(user_numsys,3);
     printf("%d",sum_i);
    return 0;
}




