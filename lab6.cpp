#include <iostream>
using namespace std;

double equation(double n){

if(n==0){

return 1;

}
else{

return ((n/(n+2))-10)*equation(n-1);

}

}

double equation(){

cout<<"Please enter a number: "<<endl;
double x;
cin>>x;

if(x==1){
    return (x/(x+2))-10;
}
else{
    return ((x/(x+2))-10)*equation(x-1);
}
}

int main(){

cout<<"Please enter a number: "<<endl;
int n;
cin>>n;
cout<<equation(n)<<endl;
cout<<equation()<<endl;

}

