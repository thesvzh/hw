#include <stdio.h>
#include <stdlib.h>
#include <iostream>


using namespace std;
class Fraction
{
private:
        int num, den;
    void normalize ();
    int gcf (int a, int b);
    int lcm (int a, int b);
public:
        void set (int n, int d){num = n; den = d; normalize();}
        int get_num(){return num;}
        int get_den(){return den;}
        Fraction add(Fraction other);
    Fraction mult(Fraction other);
};

int main()
{
        Fraction fract1, fract2, fract3 ;
    int X1, Y1, x2 ,y2 ;
        char str [81];
        while (1){
                cout << " Enter numerator: " ;
                cin  >> X1;
        cout << " Enter denominator: " ;
                cin  >> Y1;
                fract1.set(X1,Y1);
                cout <<  "Drob is " << fract1.get_num()<< "/" << fract1.get_den() <<endl;
        cout << " Enter numerator: " ;
                cin  >> x2;
        cout << " Enter denominator: " ;
                cin  >> y2;
        fract2.set(x2,y2);
                cout <<  "Drob is " << fract2.get_num()<< "/" << fract2.get_den()<<endl;
        fract3 = fract1.add(fract2);
                cout << fract3.get_num()<< "/" <<fract3.get_den();
                cout << " Do again (Y or N)";
                cin  >> str;
                if (!(str[0] == 'Y' || str[1] == 'N'))
                        break;
        }
}

void Fraction::normalize() {

      if (num == 0 || den == 0) {
          num=0;
          den=1;
      }

      if (den < 0) {
          num *= -1;
          den *= -1;
      }

      int n = gcf(num,den);
      num = num / n;
      den = den / n;
}

int Fraction::gcf(int a, int b) {
     if (a % b==0)
        return abs(b);
     else
          return gcf(b, a % b);
}

int Fraction::lcm(int a, int b) {
     return (a / gcf(a,b)) * b;
}

Fraction Fraction::add(Fraction other) {
            Fraction fract;
            int lcd = lcm(den, other.den);
            int quot1 = lcd/den;
            int quot2 = lcd/other.den;
            fract.set(num * quot1 + other.num * quot2, lcd);
            fract.normalize();
            return fract;
}

Fraction Fraction::mult(Fraction other) {
            Fraction fract;
            fract.set(num * other.num, den * other.den);
            fract.normalize();
            return fract;
}
