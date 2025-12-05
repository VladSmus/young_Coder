// ÍÀÕÎÆÄÅÍÈÅ ÏÅÐÈÌÅÒÐÀ ÔÈÃÓÐÛ INPUT ÄÂÀ ÇÍÀ×ÅÍÈß UTF-8 Прииврврвав
#include <stdio.h>
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

// ÈÇÌÅÍÅÍÈÅ ÄÂÓÇÍÀ×ÅÍÎÃÎ ÏÓÒÅÌ ÇÅÐÊÀËÜÍÎÃÎ ÎÒÐÀÆÅÍÈß
#include <stdio.h>

int main()
{
    int num, first, second, result;

    scanf("%d", &num);

    // Ïîëó÷àåì öèôðû ÷èñëà
    first = num / 10;
    second = num % 10;



    printf("%d%d",second, first);

    return 0;
}

// ÑÓÌÌÀ ÒÐÅÕ ÖÈÔÐ Â ÒÐÅÕÇÍÀ×ÍÎÌ ×ÈÑËÅ
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

// Ñîñòàâüòå ïðîãðàììó ïîäñ÷¸òà ðàçìåðà îïëàòû çà ýëåêòðîýíåðãèþ ïî ïîêàçàíèÿìè ñ÷¸ò÷èêà è òàðèôó
#include <stdio.h>

int main() {
    int f,s;
    double cost,res;
    scanf("%d %d %lf",&f,&s,&cost);
    res = (s - f) * cost;
    printf("%.2lf",res);
    return 0;
}

// Íàïèøèì ïðîãðàììó ïåðåâîäÿùóþ óãîë èç ãðàäóñíîé ìåðû â ðàäèàííóþ

#include <stdio.h>

int main() {
    double pi = 3.1415926 , res;
    int angel, A180 = 180;
    scanf("%d",&angel);
    res = (pi/ A180)* angel;
    printf("%.2lf",res);
    return 0;
}
// Íå÷¸òíûå ÷èñëà. Íàïèøåì ïðîãðàììó, îïðåäåëÿþùóþ íå÷¸òíûå ÷èñëà.
//Âõîäíûå äàííûå:Íà âõîä ïðîãðàììû ïîñòóïàåò îäíî öåëîå íåîòðèöàòåëüíîå ÷èñëî.
//Âûõîäíûå äàííûå:Ïðîãðàììà äîëæíà âûâåñòè:
//      1 åñëè ÷èñëî íå÷¸òíîå;
//      0 åñëè ÷èñëî ÷¸òíîå.

#include <stdio.h>

int main() {
    int user_num, res;
    scanf("%d", &user_num);
    res = user_num % 2;
    printf("%d", res);
    return 0;
}

// ×¸òíûå ÷èñëà - Íàïèøèòå ïðîãðàììó, îïðåäåëÿþùóþ ÷¸òíûå ÷èñëà.
#include <stdio.h>
int main(void)
{ int u,res;
 scanf("%d",&u);
 res = (u +1)% 2;
 printf("%d",res);

    return 0;
}


// Íàïèøèòå ïðîãðàììó, âû÷èñëÿþùóþ ðàññòîÿíèå ìåæäó äâóìÿ òî÷êàìè íà îñè êîîðäèíàò.
// Ôîðìàò âõîäíûõ äàííûõ: Íà âõîä ïðîãðàììû ïîñòóïàþò äâà öåëûõ ÷èñëà
#include <stdio.h>
#include <math.h>
int main(void)
{ int n1, n2, res;
 scanf("%d %d",&n1,&n2);
 res = fabs(n2 - n1);
 printf("%d",res);


    return 0;
}
// Íàïèøèòå ïðîãðàììó, âû÷èñëÿþùóþ ðàññòîÿíèå ìåæäó äâóìÿ òî÷êàìè íà ïëîñêîñòè.Ôîðìàò âõîäíûõ äàííûõ:
//    Íà âõîä ïðîãðàììû ïîñòóïàþò ÷åòûðå ÷èñëà  x1, y1, x2, y2— êîîðäèíàòû äâóõ òî÷åê íà ïëîñêîñòè.

#include <stdio.h>
#include <math.h>
int main() {
    double x1, y1, x2, y2, res;
    scanf("%lf %lf %lf %lf",&x1, &y1, &x2, &y2);
    res = sqrt((pow(x1 -x2,2))+(pow(y1 - y2, 2)));
    printf("%.2f", res);
    return 0;
}

// Íàïèøèòå ïðîãðàììó, âû÷èñëÿþùóþ ïëîùàäü òðåóãîëüíèêà ïî äâóì ñòîðîíàì è óãëó ìåæäó íèìè.

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

// Áèòû è öåëûå ÷èñëà

# include <stdio.h>
#include <math.h>
int main(void)
{ int degree, res ;
  scanf("%d", &degree);
     res = pow(2,degree);
     printf("%d", res);

    return 0;
}

//Íàïèñàòü ïðîãðàììó, âû÷èñëÿþùóþ ïëîùàäü òðåóãîëüíèêà ïî òð¸ì ñòîðîíàì.
// Äëÿ âû÷èñëåíèÿ ïëîùàäè èñïîëüçóéòå ôîðìóëó Ãåðîíà:

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

// Îáúÿâèòü íåîáõîäèìûå ïåðåìåííûå è ñ÷èòàòü â íèõ çíà÷åíèÿ ñî âõîäíîãî ïîòîêà. Òàêæå â âûðàæåíèè
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

// Ïåðåïèøèòå ïðîãðàììó òàê, ÷òîáû îíà âûäàâàëà ñëó÷àéíî îäíî èç ÷èñåë 0, 1 èëè 2.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void){

    srand(time(NULL));
    int rand_digit = rand() % 2;

    printf("%d\n",rand_digit);

    return 0;
}

// Ïîëå äëÿ èãðû â ðóëåòêó ñîñòîèò èç ÿ÷ååê îò 0 äî N.  Íà âõîä ïðîãðàììå ïîäà¸òñÿ îäíî íàòóðàëüíîå ÷èñëî N.
// Ïðîãðàììà äîëæíà âûäàòü ñëó÷àéíîå ÷èñëî îò íóëÿ äî N âêëþ÷èòåëüíî.


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


 //Íà âõîä ïðîãðàììå ïîäà¸òñÿ äâà ÷èñëà S è E, çàïèñàííûõ ÷åðåç ïðîáåë. Ïðè ýòîì ãàðàíòèðóåòñÿ, ÷òî
 //Ïðîãðàììà äîëæíà âûâîäèòü îäíî ñëó÷àéíîå ÷èñëî èç ïðîìåæóòê[S;E]

#include <stdio.h>
int main(void)
{ int s, e, res;
     srand(time(NULL));
     scanf("%d %d", &s, &e);
     res = s + rand() % (e - s);
     printf("%d", res);

    return 0;
}







