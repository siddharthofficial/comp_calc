///////////////////////////////////////////////////////////////////////////////
#include<iostream>
#include<cmath>
////////////////////////////////////////////////////////////////////////////////////////
using namespace std;
float prin,time,a,amount,compound;
//////////////////////////////////////////////////////////////////////////////////////////////////////
int  ff(float rate){
compound=pow((1+rate/100),time);

amount=compound*prin;
// cout<<amount<<endl;
 return amount;

}

//////////////////////////////////////////////////////////////////////////////////////////////////////////


int main()
{

cout<<"enter priciple"<<endl;
cin>>prin;    
cout<<"enter time"<<endl;
cin>>time; 
cout<<"choose bank"<<endl;
cout<<"1) sbi"<<endl; //8.67
cout<<"2) canara"<<endl; //10
cout<<"3) boi"<<endl;//8.55
cout<<"4)pnb"<<endl;//10.25
cout<<"5) union bank"<<endl;//9.3
cin>>a;
if(a==1){
  cout<<"total amount u have to pay in sbi is- "<<ff(8.67)<<endl;
}
if(a==2){
cout<<"total amount u have to pay in canara is- "<<ff(10)<<endl;


}

if(a==3){
    cout<<"total amount u have to pay in boi  is- "<<ff(8.55)<<endl;


}
if(a==4){
cout<<"total amount u have to pay in pnb is- "<<ff(10.25)<<endl;



}
if(a==5){
cout<<"total amount u have to pay in union bank is- "<<ff(9.3)<<endl;

}
    return 0;
}

