#include <iostream.h>
#include <conio.h>
#define n 5
void data(float a[n]){
for(int i=0;i<n;i++){
cout<<“data ke “<<i<<” : “;
cin>>a[i];
}
}
float meandata(float a[n]){
float d=0;
for(int i=0;i<n;i++){
d+=a[i];
}
return d/n;
}
void main(){
float a[n], mean,tampil;
data(a);
mean=meandata(a);
cout<<endl;
cout<<“Mean \t: “<<mean<<endl;
getch();