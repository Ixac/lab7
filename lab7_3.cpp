#include<iostream>
#include <cmath>
using namespace std;

int adiff(int a,int b){
int c;
int d;

 c=sqrt(pow(a-b,2));
 if(c>180){
 d= sqrt(pow(360-c,2));
 return d%360;
}
else{return c%360;}

}





int main(){
cout << adiff( 710,-180);
}
