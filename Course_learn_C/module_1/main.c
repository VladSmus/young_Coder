#include <stdio.h>
int main(void)
{ printf("_________________________________________________\n********_________________________________________\n********_________________________________________\n********_________________________________________\n********_________________________________________\n********_________________________________________\n********_________________________________________\n_________________________________________________\n_________________________________________________\n_________________________________________________\n_________________________________________________\n_________________________________________________\n_________________________________________________\n");

    return 0;
}
#include <stdio.h>
int main(void){
    int number_sum, number_a, number_b;
    double half_number, half_number_sum;
    char str_1, str_2;
    str_1 = 'Hello, ma!';
    str_2 = 'I love ya ma! Honestly!';
    number_a = 10;
    number_b = 11;
    number_sum = number_a + number_b;
    printf("%c",str_1,"\n",str_2,"\n");
    printf("%d",number_sum);
    return 0;
}

#include <stdio.h>
int main(void){
    int year; // ãîä
    int month; // ìåñÿö
    int day; // äåíü
    int hours; // ÷àñû
    int minutes; // ìèíóòû
    int seconds; // ñåêóíäû
    int utc_offset; // ñìåøåíèå â ÷àñàõ îòíîñèòåëüíî UTC

    year = 2025;
    month = 11;
    day = 19;
    hours = 10;
    minutes = 31;
    seconds = 9;
    utc_offset = 3;

    printf("Year:%4.4d-Month:%2.2d-Day:%2.2d\nTime:%2.2d:%2.2d:%2.2d-UTC%+2.2d",year, month, day, hours, minutes, seconds, utc_offset);
    return 0;
}


#include <stdio.h>
int main(void){
    char station_code; // áóêâåííûé êîä ìåòåîñòàíöèè
    int station_number; // ÷èñëîâîé êîä ìåòåîñòàíöèè
    float temperature; // òåìïåðàòóðà
    double pressure; // äàâëåíèå

    station_code = 'F';
    station_number = 93;
    temperature = - 4.56;
    pressure = 755.63;

    printf("Weather Station:|%c%d|\nTemperature:|%+.2f|\nPressure:|%.1f|",station_code,station_number,temperature,pressure);
    return 0;
}

#include <stdio.h>
int main(void)
{
    int a=3, b=4;
    double res = 0.75;

    printf("||-----|-----|-----|-----||\n");
    printf("|| act | one | two | res ||\n");
    printf("||=====+=====+=====+=====||\n");
    printf("||%5c|%-5d|%-5d|%5.5d||\n", '+', a, b, a+b);
    printf("||%5c|%5d|%5d|%+4.4d||\n", '-', a, b, a-b);
    printf("||%5c|%5d|%-5d|%5.5d||\n", '*', a, b, a*b);
    printf("||%-5c|%-5d|%5d|%5.3f||\n", '/', a, b, res);
    printf("===========================");

    return(0);
}
#include <stdio.h>
int main(void)
{
    printf("\"I'll be back!\"\n\t(c)Terminator");

    return 0;
}

#include <stdio.h>
int main(void)
{
    printf("N\t10*N\t100*N\t1000*N\n\n");
    for (int i = 1; i <= 10; i++) {

        printf("%d\t%d\t%d\t%d\n", i, 10*i, 100*i, 1000*i);
    }
    return(0);
}

#include <stdio.h>
int main(void)
{
    for (int i = 1; i <= 10; i++){
        for (int j = 1; j <= 10; j++)
            printf("%-5d", i * j);
        printf("\n");
    }

    return(0);
}

#include <stdio.h>
int main(void){
    int a, b, c, res;

    scanf("%d %d %d", &a,&b,&c);
    res = a +b -c;
    printf("%d + %d - %d = %d", a, b,c,res);
    return 0;
}


#include <stdio.h>
int main(void){
    int first_num, second_num, third_num, forth_num;
    scanf("%d %d %d %d", &first_num, &second_num, &third_num, &forth_num);
    printf("%d.%d.%d.%d",first_num, second_num, third_num, forth_num);

    return 0;
}


#include <stdio.h>
int main(void)
{
    int h; // ÷àñû
    int m; // ìèíóòû
    int s; // ñåêóíäû

    scanf("%d", &h);
    scanf("%d", &m);
    scanf("%d", &s);

    int seconds = h*60*60 + m*60 + s;

    printf("%d", seconds);

    return 0;
}

#include <stdio.h>
int main(void){
    char c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12;
    scanf("%c%c%c%c%c%c%c%c%c%c%c%c",&c1,&c2,&c3,&c4,&c5,&c6,&c7,&c8,&c9,&c10,&c11,&c12);
    printf("%c%c (%c%c%c) %c%c%c-%c%c-%c%c",c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12);
    return 0;
}


#include <stdio.h>
int main(void)
{    int dollars;
    double rubles,kurc;
     scanf("%d %lf",&dollars,&kurc);
    rubles = dollars * kurc;

    printf("%.13lf\n", rubles);

    return 0;
}


