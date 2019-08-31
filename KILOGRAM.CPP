#include<iostream.h>
#include<conio.h>
void main()
 {
 for(int i=2;i<=4;i++)
 {
 cout<<"where kg = kilogram: g =gram: m =meter: cm =centimeter: "<<endl;

float b,kg,g,m,cm;
char a;
 cout<<"\n\nenter any variabal(g,k,m,c) ";
 cin>>a;
 switch(a)
 {
 case 'g':    cout<<"Enter kilogram  number ::";
 cin>>kg;
 cout<<"Gram ::";
  cout<<kg<<"*"<<1000<<"="<<kg*1000<<" g";
		 g=kg*1000;
		 break ;
 case 'k':
 cout<<"Enter gram value ::";
 cin>>g;
  cout<<"Kilogram::";
	     cout<<g<<"/"<<1000<<"="<<g/1000<<" kg";
		 kg=g/1000;
		 break ;
case 'm':  cout<<"Enter centimeter value::";
 cin>>cm;
 cout<<"meter"<<"\n";
	 cout<<cm<<"/"<<100<<"="<<cm/100<<" m";
	 m=cm/100;
	 break;
  case 'c':
   cout<<"Enter meter value::";
 cin>>m;
  cout<<"centimeter";
	 cout<<m<<"*"<<100<<"="<<m*100<<" cm";
	 cm=m*100;
	 break ;

 default:
 {
 cout<<"It is not possible";
 }
 }
 getch();
 }
 }