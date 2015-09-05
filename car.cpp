#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;
int deposit=0,miles,days,bata;
float amt,n,rate=0.0;
char choice;
static int ery(float n)
{
int c ;
cin>>miles;
c=miles* n;
return c;
}
int chauffer()
{
cout << " How many days would you like to hire the car for" << "\n" << endl;
cin >> days;
switch(days)
{
case 1:
cout<<"for 1 DAY ";
bata=120;break;
case 2:
cout<<"for 2 DAYS";
bata=140;
break;
case 3:
cout<<"for 3 DAYS ";
bata=160;
break;
case 4:
cout<<"for 4 DAYS ";
bata=165;
break;
default:
cout<<"for 5 and ABOVE DAYS ";
bata=170;
break;
}

}
int self()
{
    cout<< "\n\n\n" << "There are the cars to choose from" << "\n" << endl;
  cout<< "A..Land Rover " <<  "\n" << endl;
  cout<< "B.. Toyota" << "\n" << endl;
  cout<< "C..Suzuki " << "\n" << endl;
  cout<< "D..Mitsubishi" << "\n" << endl;
cout<< "E..Honda " << "\n" << endl;
cout<< "F..General motors" << "\n" << endl;
cout<< "G..Renault" << "\n" << endl;
cout<< "H...Peugeot" << "\n" << endl;
cout<< "I..Jeep" << "\n" << endl;
cout<< "J..kia" << "\n" << endl;

cout << " Which car would you like to rent (A,B, C ,D,E,F,G,H,I or J)" << "\n" << endl;
cin >> choice;
switch (choice) 
{
  case 'A':
cout<<"deposit amount is 12000 \n";
cout<<"enter the no of miles\n";
amt=ery(7.87);
break;
case 'B':
cout<<"deposit amount is 14000 \n";
cout<<"enter the no of miles\n";
amt=ery(6.92);
break;
case 'C':
cout<<"deposit amount is 16000 \n";
cout<<"enter the no of miles\n";
amt=ery(15.32);
break;
case 'D':
cout<<"deposit amount is 11000 \n";
cout<<"enter the no of miles\n";
amt=ery(16.99);
break;
case 'E':
cout<<"deposit amount is 9000 \n";
cout<<"enter the no of miles\n";
amt=ery(12.38);
break;
case 'F':
cout<<"deposit amount is 16500 \n";
cout<<"enter the no of miles\n";
amt=ery(16.31);
break;
case 'G':
cout<<"deposit amount is 12900 \n";
cout<<"enter the no of miles\n";
amt=ery(14.22);
break;
case 'H':
cout<<"deposit amount is 13000 \n";
cout<<"enter the no of miles\n";
amt=ery(16.32);
break;
case 'I':
cout<<"deposit amount is 14500 \n";
cout<<"enter the no of miles\n";
amt=ery(17.32);
break;
case 'J':
cout<<"deposit amount is 14800 \n";
cout<<"enter the no of miles\n";
amt=ery(16.32);
break;
}
}
int main ()
{
char custname[10],custadr[30];
int option;
float result;
cout<< "\t\t\t\t" << " CAR RENTAL MANAGEMENT " << "\n" <<endl;
 cout<<"provide customer Name\t";
 cin>>custname;
 cout<<"provide customer address\t";
cin>>custadr;
cout<<"enter the choice of drive"<<endl;
cout<<"1.chauffer"<<endl;
 cout<<"2.self driven"<<endl;
 cin>>option;
if(option==1)
result=chauffer();
else
result= self();
cout<<"The name of customer is:"<<custname<<endl;
cout<<"the choice of drive is:"<<option<<endl;
cout<<"the total amount is:"<<amt<<endl;
}