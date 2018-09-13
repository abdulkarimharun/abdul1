#include<iostream>
using namespace std;

int gcd(int x,int y){

if((x>=y)&&(x%y)==0){

return x;
}
else 
gcd(x,x%y);

}
int main(){
	
int x,y,result;


cout<<"Input two numbers";

cin>>x>>y;

result=gcd(x,y);

cout<<"The gcd is "<<result<<endl;

return 0;
 
}
