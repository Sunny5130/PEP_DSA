#include<iostream>
using namespace std;
int vol(int r,int h){
    int vol=3.14*r*r*h;
    return vol;
}
int vol(int side){
    int vol=side*side*side;
    return vol;
}
int vol(int l,int b,int h){
    int vol=l*b*h;
    return vol;
}
int main(){
    int volS=vol(3,2);
    int volCu=vol(2);
    int volC=vol(3,2,3);
    cout<<"VOlume of cylinder: "<<volS<<endl;
    cout<<"VOlume of cube: "<<volCu<<endl;
    cout<<"VOlume of cuboid: "<<volC<<endl;
}