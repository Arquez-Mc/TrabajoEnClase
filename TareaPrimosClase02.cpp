#include <iostream>
using namespace std;

int main() {

int num,n;
bool primo=true;

cout<<"Por favor ingrese cualquier numero entero\n";
cin >> n;

if (num<1){
primo=false;
}

else{

for (int i=2;i<n;i++)
{
    if (n%i==0){primo=false;
    break;
        
    }
}
}

if(primo)
cout<<"si es primo"<< endl;


else cout<<"no es primo"<<endl;  


return 0;

}
