#include <iostream>
using namespace std;
int main(){
    float phy,chem,maths,eng,bio,sum,per;
    cin>>phy>>chem>>maths>>eng>>bio;
    sum=phy+chem+maths+eng+bio;
    per=(sum/500)*100;
    cout<<sum<<endl<<per;
    return 0;
}
