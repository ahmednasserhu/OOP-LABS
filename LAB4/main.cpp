#include <iostream>
using namespace std;



class Complex
{
private:
    int Real;
    int Imaginary;
public:
    /*
    Complex(Complex& c){
        c.Real = this->Real;
        c.Imaginary = this->Imaginary;
    }*/
    Complex(int Real = 0,int Imaginary = 0){
        this->Real = Real;
        this->Imaginary = Imaginary;
    }

    void setReal(int _Real)
    {
        Real = _Real;
    }
    int getReal(void)
    {
        return Real;
    }
    void setImaginary(int Imaginary_num)
    {
        Imaginary = Imaginary_num;
    }
    int getImaginary(void)
    {
        return Imaginary;
    }

    void setComplex(int Real,int Imaginary){
        this->Real = Real;
        this->Imaginary = Imaginary;
    }

    Complex add(Complex com)
    {
        Complex result;
        result.setReal(Real + com.getReal());
        result.setImaginary(Imaginary + com.Imaginary);
        return result;
    }

    Complex subtract(Complex com)
    {
        Complex result;
        result.setReal(Real - com.getReal());
        result.setImaginary(Imaginary - com.getImaginary());
        return result;
    }

    Complex operator +(const Complex& c){
        Complex res(Real+c.Real,Imaginary+c.Imaginary);
        return res;
    }

    Complex operator -(const Complex& c){
        Complex res(Real-c.Real,Imaginary-c.Imaginary);
        return res;
    }

    Complex operator +=(const Complex& c){
        this->Real = this->Real + c.Real;
        this->Imaginary = this->Imaginary + c.Imaginary;
        return *this;
    }

    int operator ==(const Complex& c){
        return this->Real == c.Real && this->Imaginary == c.Imaginary;
    }

    Complex operator ++(){
        this->Real = this->Real + 1;
        return *this;
    }

    Complex operator --(){
        this->Real = this->Real - 1;
        return *this;
    }

    Complex operator ++(int){
        Complex temp = *this;
        this->Real = this->Real + 1;
        return temp;
    }

    Complex operator --(int){
        Complex temp = *this;
        this->Real = this->Real - 1;
        return temp;
    }

    Complex operator+(int number){
        Complex res(this->Real+number,this->Imaginary);
        return res;
    }
    operator float(){
        return this->Real;
    }



    Complex add(Complex com1, Complex com2);
    void print(void);
    friend Complex subtract(Complex com1, Complex com2);




};//end class


Complex operator + (int number,Complex& c){
    Complex res(c.getReal() + number, c.getImaginary());
    return res;
}

Complex operator - (int number,Complex& c){
    Complex res(c.getReal() - number, c.getImaginary());
    return res;
}


void Complex :: print(void)
{
    cout<<"Number = "<<Real;
    if(Imaginary>0)
    {
        cout<<"+"<<Imaginary<<"j";
    }
    else if(Imaginary<0)
    {
        cout<<Imaginary<<"j";
    }
    cout<<endl;
}

Complex subtract(Complex com1, Complex com2)
{
    Complex result;
    result.Real = com1.Real - com2.Real;
    result.Imaginary = com1.Imaginary - com2.Imaginary;
    return result;
}

Complex add(Complex com1, Complex com2)
{
    Complex result;
    result.setReal(com1.getReal() + com2.getReal());
    result.setImaginary(com1.getImaginary() + com2.getImaginary());
    return result;
}

int main()
{

    Complex c1, c2,c3,c4;
    c1.setComplex(10,20);
    c2.setComplex(5,15);
    c3 = c1;
    //c3.print();
    //printf("%.2f",(float)c3);
    //printf("%d",c3==c1);
    c1+=c2;
    c1.print();
    return 0;
}
