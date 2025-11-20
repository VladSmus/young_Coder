// НАХОЖДЕНИЕ ПЕРИМЕТРА ФИГУРЫ INPUT ДВА ЗНАЧЕНИЯ
/*#include <stdio.h>
int main(void){
    int diameter = 113, length = 335;
    double pi = 0.0;

    pi = (float) length / diameter;
    printf("pi = %.5f\n", pi);
    return 0;

}


#include <stdio.h>
int main(void)
{ int a,b,res;
     scanf("%d %d",&a,&b);
     res = a*2+ b*2;
     printf("%d", res);

    return 0;
}

// ИЗМЕНЕНИЕ ДВУЗНАЧЕНОГО ПУТЕМ ЗЕРКАЛЬНОГО ОТРАЖЕНИЯ
#include <stdio.h>

int main()
{
    int num, first, second, result;

    scanf("%d", &num);

    // Получаем цифры числа
    first = num / 10;
    second = num % 10;



    printf("%d%d",second, first);

    return 0;
}

// СУММА ТРЕХ ЦИФР В ТРЕХЗНАЧНОМ ЧИСЛЕ
#include <stdio.h>
int main(void)
{ int num, n1, n2, n3, sum;
     scanf("%d", &num);
     n1 = num / 100;
     n2 = (num % 100 - num % 10) / 10;
     n3 = num % 10;
     sum = n1 + n2+ n3;
     printf("%d",sum);

    return 0;
}

// Составьте программу подсчёта размера оплаты за электроэнергию по показаниями счётчика и тарифу
#include <stdio.h>

int main() {
    int f,s;
    double cost,res;
    scanf("%d %d %lf",&f,&s,&cost);
    res = (s - f) * cost;
    printf("%.2lf",res);
    return 0;
}

// Напишим программу переводящую угол из градусной меры в радианную

#include <stdio.h>

int main() {
    double pi = 3.1415926 , res;
    int angel, A180 = 180;
    scanf("%d",&angel);
    res = (pi/ A180)* angel;
    printf("%.2lf",res);
    return 0;
}
// Нечётные числа. Напишем программу, определяющую нечётные числа.
//Входные данные:На вход программы поступает одно целое неотрицательное число.
//Выходные данные:Программа должна вывести:
//      1 если число нечётное;
//      0 если число чётное.

#include <stdio.h>

int main() {
    int user_num, res;
    scanf("%d", &user_num);
    res = user_num % 2;
    printf("%d", res);
    return 0;
}

// Чётные числа - Напишите программу, определяющую чётные числа.
#include <stdio.h>
int main(void)
{ int u,res;
 scanf("%d",&u);
 res = (u +1)% 2;
 printf("%d",res);

    return 0;
}


// Напишите программу, вычисляющую расстояние между двумя точками на оси координат.
// Формат входных данных: На вход программы поступают два целых числа
#include <stdio.h>
#include <math.h>
int main(void)
{ int n1, n2, res;
 scanf("%d %d",&n1,&n2);
 res = fabs(n2 - n1);
 printf("%d",res);


    return 0;
}
// Напишите программу, вычисляющую расстояние между двумя точками на плоскости.Формат входных данных:
//    На вход программы поступают четыре числа  x1, y1, x2, y2— координаты двух точек на плоскости.

#include <stdio.h>
#include <math.h>
int main() {
    double x1, y1, x2, y2, res;
    scanf("%lf %lf %lf %lf",&x1, &y1, &x2, &y2);
    res = sqrt((pow(x1 -x2,2))+(pow(y1 - y2, 2)));
    printf("%.2f", res);
    return 0;
}

// Напишите программу, вычисляющую площадь треугольника по двум сторонам и углу между ними.

#include <stdio.h>
#include <math.h>
int main(void)
{ double a, b, alfa,aLfa, S, pi = 3.141593;
  scanf("%lf %lf %lf", &a, &b, &alfa);
 alfa = alfa * pi / 180;
  S = 0.5 * a * b * sin(alfa) ;
  printf("%.2f", S);

    return 0;
}

// Биты и целые числа

# include <stdio.h>
#include <math.h>
int main(void)
{ int degree, res ;
  scanf("%d", &degree);
     res = pow(2,degree);
     printf("%d", res);

    return 0;
}

//Написать программу, вычисляющую площадь треугольника по трём сторонам.
// Для вычисления площади используйте формулу Герона:

#include <stdio.h>
#include <math.h>
int main(void)
{ double a,b,c, S, p;
     scanf("%lf %lf %lf",&a,&b,&c);
     p = (a+b+c)/2;
     S = sqrt(p*(p - a)*(p - b)*(p - c)) ;
     printf("%.2f", S);

    return 0;
}

// Объявить необходимые переменные и считать в них значения со входного потока. Также в выражении
//                  a/b*c/d*e/f*h

#include <stdio.h>
#include <math.h>
int main(void)
{ int a,b,c,d,e,f,h;
  double res;
 scanf("%d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&h);
     res =a/(b*(c/(d*(e/((double)f*h)))));
    printf("%.2lf", res);

    return 0;
}

// Перепишите программу так, чтобы она выдавала случайно одно из чисел 0, 1 или 2.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void){

    srand(time(NULL));
    int rand_digit = rand() % 2;

    printf("%d\n",rand_digit);

    return 0;
}

// Поле для игры в рулетку состоит из ячеек от 0 до N.  На вход программе подаётся одно натуральное число N.
// Программа должна выдать случайное число от нуля до N включительно.


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int user;
    srand(time(NULL));
    scanf("%d", &user);
    printf("%d", rand() % user);
    return 0;
}


 //На вход программе подаётся два числа S и E, записанных через пробел. При этом гарантируется, что
 //Программа должна выводить одно случайное число из промежутк[S;E]

#include <stdio.h>
int main(void)
{ int s, e, res;
     srand(time(NULL));
     scanf("%d %d", &s, &e);
     res = s + rand() % (e - s);
     printf("%d", res);

    return 0;
}
*/




