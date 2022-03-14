#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
 
   string name;
   double salary,totalSell, totalSalary;
   cin>>name>>salary>>totalSell;
  
    totalSalary = salary+(totalSell*0.15) ;
  
    cout<<fixed<<setprecision(2)<<"TOTAL = R$ "<<totalSalary<<endl;
 
    return 0;
}
