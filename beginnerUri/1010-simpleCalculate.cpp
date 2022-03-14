#include <iostream>
#include <iomanip> 
using namespace std;
 
int main() {
    int pCode1, pUnit1,pCode2, pUnit2;
    double pPrice1, pPrice2, totalAmount;
    
    cin>>pCode1>>pUnit1>>pPrice1>>pCode2>>pUnit2>>pPrice2;
    
    totalAmount = ((double)pUnit1*pPrice1)+ ((double)pUnit2*pPrice2);
 
  
   cout<<fixed<<setprecision(2)<<"VALOR A PAGAR: R$ "<<totalAmount<<endl;
    return 0;
}
