//
// Created by bharat on 16-02-2024.
//

#include <bits/stdc++.h>
using  namespace  std;
// polymorphism
class Area {
public:
    int calculateArea (int r ){ // circle
        return 3.14 * r *r ;
    }
    int calculateArea (int l , int b){ // rectangle
        return l*b;
    }
};
class  Complex {
    int real , img ;
public:
    Complex(){}
    Complex(int real , int img ){
        this->img = img;
        this->real = real;
    }
    void display(){
        if (img < 0 ){
            cout << real  << "-i" << abs(img) << endl;
        }else{
            cout << real << "+i" << img << endl;
        }

    }
    Complex operator + (Complex &c ){
        Complex ans ;
        ans.real = real + c.real ;
        ans.img = img + c.img;
        return ans;
    }
    Complex operator - (Complex &c){
        Complex ans ;
        ans.real = real - c.real ;
        ans.img = img - c.img ;
        return ans;
    }
};
int main (){
    Complex c1 (2 , 3);
    Complex c2 (2 , 5 );
    Complex c3 = c1 + c2 ;
    Complex c4 = c1 - c2 ;
    c3.display();
    c4.display();

    return 0 ;
}