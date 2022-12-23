#include<iostream>
using namespace std;
main()
{

string name;
float matric,matric_per,matric_weigh;
float inter,inter_per,inter_weigh;
float ecat,ecat_per,ecat_weigh;

cout<<"Enter your name ";
cin>>name;
cout<<"Enter your matric marks(out of 1100) ";
cin>>matric;
cout<<"Enter your intermediate marks(out of 550) ";
cin>>inter;
cout<<"Enter our ecat marks(out of 400) ";
cin>>ecat;

matric_per=matric*100/1100;
inter_per=inter*100/550;
ecat_per=ecat*100/400;

matric_weigh=matric_per*10/100;
inter_weigh=inter_per*40/100;
ecat_weigh=ecat_per*50/100;

float aggregate;

aggregate=matric_weigh+inter_weigh+ecat_weigh;

cout<<"The required aggregate is "<<aggregate;

}