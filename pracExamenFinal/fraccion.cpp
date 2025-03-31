#include <iostream>

using namespace std;

class Fraction{
    int gcd(int a,int b) { 
        return b==0 ? a : gcd(b,a % b); 
        }
    int n, d;
    protected:
        friend ostream& operator<<(ostream& output, Fraction& ot){
            output << ot.n << "/" << ot.d;
            return output;
        };
    public:
        Fraction(int n,int d = 1) : n(n/gcd(n, d)), d(d/gcd(n, d)){}
        int num() const{ 
            return n; 
        }
        int den() const{ 
            return d;
        }
        Fraction& operator *= (const Fraction& rhs){
            int new_n= n * rhs.n/gcd(n * rhs.n , d*rhs.d);
            d = d * rhs.d/ gcd(n * rhs.n, d * rhs.d);
            n = new_n;
            return *this;
        }
        bool operator == (Fraction& ot){
            if( n == ot.n ){ 
                return true;
            }
            return false;
        }
        bool operator != (Fraction& ot){
            if( n != ot.n ){ 
                return true;
            }
            return false;
        }
        Fraction operator*(Fraction& ot){
            Fraction ftmp(n * ot.n, d * ot.d);
            return ftmp;
        }
        friend Fraction operator*(int ent, Fraction& ot){
            Fraction ftmp(ent * ot.n, 1 * ot.d);
            return ftmp;
        }  
        //Prefija    
        Fraction& operator++(){
            ++n;
            ++d;
            return *this;
        }
        Fraction operator++(int){
            Fraction tmp{*this};
            ++(*this);
            return tmp;
        }
        
};

int main() {
    Fraction f1(3, 8) , f2(1, 2), f3(10, 2);
    Fraction f4 = f1 * f2;
    Fraction f5 = 2 * f2;

    cout << (f1 == f2) << "\n" <<(f1 != f2) << "\n";
    cout << f1 << " * " << f2 << " = " << f4 << "\n"
         << 2 << " * " << f1 << " = " << f5 << "\n";
    cout << ++f1 << "\n" << ++f2 ;
    cout << "\n" << f2;
}