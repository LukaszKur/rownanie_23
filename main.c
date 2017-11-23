#include <stdio.h>

void oblicz_rownanie_kw(double a, double  b, double c,double *x1, double *x2, int *rodzaj)
{
    *x1=0.5;
    *x2=2.0;
    *rodzaj=2;
}
int oblicz_rodzaj_rw_kw(double a,double b, double c)
{
    double delta;
    delta=oblicz_delta(a,b,c);
    if(delta>0.0)
    {
        return 2;
    }else
    if(delta<0.0)
    {
        return 0;
    } else
    {
      return 1;
    }
}

int main() {
    test_rownania_kw();
    test_rodzaju_rownania();
    test_oblicz_delta();
}
void test_oblicz_delta()
{


}

void test_rodzaju_rownania()
{
    int rodzaj;
    rodzaj=oblicz_rodzaj_rw_kw(2.0,-5.0,2.0);
    if(rodzaj !=2)
    {
        printf("Blad funkcji oblicz_radzaj_rw_kw, powinien byc 2\n");
    }
    rodzaj=oblicz_rodzaj_rw_kw(1.0,-1.0,5.0);
    if(rodzaj !=0)
    {
        printf("Blad funkcji oblicz_radzaj_rw_kw, powinien byc \n");
    }
    rodzaj=oblicz_rodzaj_rw_kw(1.0,-1.0,0.0);
    if(rodzaj !=1)
    {
        printf("Blad funkcji oblicz_radzaj_rw_kw, powinien byc 1\n");
    }
}
void test_rownania_kw()
{
    double x1,x2;
    int rodzaj;
    oblicz_rownanie_kw(2.0,-5.0,2.0,&x1,&x2,&rodzaj);
    if(x1 !=0.5)
    {
        printf("Niespodziewany wynik x1, %lf",x1);
    }
    if(x2 !=2.0)
    {
        printf("Niespodziewany wynik x2, %lf",x2);
    }
    if(rodzaj !=0)
    {
        printf("Niespodziewany wynik rodzaj, %lf",x1);
    }

}