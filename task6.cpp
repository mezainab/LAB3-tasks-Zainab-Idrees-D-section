#include <iostream>
using namespace std;
main() 
{
string name;
float matric;
float matricPer;
float matricWeightage;
float inter;
float interPer;
float interWeightage;
float ecat;
float ecatPer;
float ecatWeightage;
float aggregate;


cout << "your name: ";
cin >>name;
cout << "matric marks: ";
cin >>matric;
cout << "inter marks: ";
cin >>inter;
cout << "ecat marks: ";
cin >>ecat;

matricPer = matric/1100 *100;
interPer = inter/1100 *100;
ecatPer = ecat/400 *100;
matricWeightage = matricPer*0.1;
interWeightage = interPer*0.4;
ecatWeightage = ecatPer*0.5;

aggregate = matricWeightage + interWeightage + ecatWeightage; 

cout << "aggregate: " <<aggregate;

}
