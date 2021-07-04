//
// Created by mac on 2021/7/1.
//

#include "iostream"
#include "string"
using namespace std;

const double PI =3.14;

class Circle{

public:
    int r;

    int getR() const {
        return r;
    }

    void setR(int r) {
//        Circle::r = r;
        this->r = r;
    }

    double  calculateZC(){
        return PI*r*r;
    }
};

int main(){
    Circle circle ;
    circle.setR(10);
    double cz = circle.calculateZC();
    cout<< circle.getR()<<endl;
    cout<<cz<<endl;
}