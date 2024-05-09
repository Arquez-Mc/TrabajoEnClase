#include <iostream>
using namespace std;

int main() {
    
char opcion,letra='X';

do{
    cout<<" Este es el menu del dia de hoy, escoja una letra\n";
cout<<" A.Ensalada\n";
cout<<" B. Sopa \n";
cout<<" C.Tortas\n";
cout<<" D. Pupusas\n";
cout<<" E.Hotdog\n";
cin>>opcion;
    
}
while (opcion !=letra);


return 0;
}