#include <iostream>
#include<cmath>

using namespace std;

double deg2rad(double a1){
    double rad = a1*(M_PI/180);
    return rad;

}

double findXComponent(double leght1,double leght2,double rad1,double rad2){
    double  XComponent;
    XComponent= (leght1 * cos(rad1)) + (leght2 * cos(rad2));
     return XComponent;
}

double findYComponent(double leght1,double leght2,double rad1,double rad2){
    double Ycomponent;
    Ycomponent = (leght1 * sin(rad1)) + (leght2 * sin(rad2));
    return Ycomponent;
}

double pythagoras(double xcomponent, double ycomponent){
    double length;
    length = sqrt(pow(xcomponent,2) + pow(ycomponent,2));
    return length;
}
double rad2deg(double atan2)
{
    double direction;
    direction = atan2 * 57.295779513;
    return direction;
}

void showResult(double L, double D)
{
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << "\n";
    cout << "Length of the resultant vector = " << L << "\n";
    cout << "Direction of the resultant vector (deg) = " << D << "\n";
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
}
int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}
