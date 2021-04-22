#include <iostream>

using namespace std;




int main()
{

   int d,i,j ;

   cout << "combien de lignes ? " << endl ;
   cin >> d ;
   int n = 3 * d ;

   for (int m=1 ; m<=d; ++m){
   for (int i=1 ; i< n; ++i){

    cout << " " ;

   }
    n=n-1 ;
   cout << "*"<< endl;
   }

for (int i= 1 ; i<=2*d;  ++i){
    cout<< "*" ;
}
 cout << ""<<  endl;

 int f=1 ;

 for(int k=1; k<=d ; ++k){

    for(int l=1; l<=f; ++l){
    cout << " " ;
    }
    cout << "*" << endl;
 f= f+1 ;
 }
int g= d;
for (int i=1; i<d; ++i){
 for(int e=1; e<g; ++e){
    cout << " ";
 }
 cout << "*" << endl;
 g=g-1 ;
}

for (int i= 1 ; i<=2*d;  ++i){
    cout<< "*" ;
}
 cout << ""<<  endl;



 int p=1 ;

 for(int k=1; k<=d ; ++k){

    for (int s=1 ; s<2*d; ++s){
        cout << " " ;
    }
    for(int l=1; l<=p; ++l){
    cout << " " ;
    }
    cout << "*" << endl;
 p= p+1 ;
 }


    return 0;
}
