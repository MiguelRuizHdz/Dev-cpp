/*#include <iostream> 
using namespace std; 
int main() 
 { 
   int *x = NULL; 
   int y = 100000000; 
      x = new int[y]; 
  x [10] = 0; 
   cout << "Puntero: " << (void *) x << endl; 
   delete[] x; 
      return 0;
} */

#include <iostream> 
using namespace std; 
int main()  
{ 
   int *x = 0; 
   int y = 100000000; 
      x = new int[y]; 
   if(x) {      x[10] = 0;      cout << "Puntero: " << (void *) x << endl; 
      delete[] x;   } else {      cout << "Memoria insuficiente." << endl; 
   }    
return 0;} /*
#include <iostream>
using namespace std;
int main() {  
 int *x;  
 int y = 100000000;      
try 
{      
x = new int[y];     
 x[0] = 10;      
cout <<"Puntero:"<<(void *)x<< endl;      delete[]x;   
}   
catch(std::bad_alloc&)
{     
cout << "Memoria insuficiente" << endl;   
}      
return 0;
} 
*/

