#include <iostream>
#include <iomanip>

 using namespace std;
 
int main() {
    int x;
    double y,average;
    cin>>x>>y;
    average =  (double)x/y;
    
    cout<<fixed<<setprecision(3)<<average<<" km/l"<<endl;
    return 0;
}
