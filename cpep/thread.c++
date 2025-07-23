#include<iostream>
#include<thread>
#include<chrono>
using namespace std;
//function that executice all each threads 
void printMessage(string message,int delay){
    for(int i=0;i<=5;i++){
        cout<<message<<" -count"<<endl;
    }
}
int main(){
    printMessage("Saini",5);

}