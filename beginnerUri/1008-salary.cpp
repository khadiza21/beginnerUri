#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
 
  int eNumber ,workHrs;
  double amount, salary;
  
  cin>>eNumber>>workHrs>>amount;
  
  salary = (double)workHrs*amount;
  
  cout<<"NUMBER = "<<eNumber<<endl<<fixed<<setprecision(2)<<"SALARY = U$ "<<salary<<endl;
  
    return 0;
}
