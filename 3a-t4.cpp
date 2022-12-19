#include<iostream> 
#include <limits>
using namespace std; 
int main()
{
int k, i = 1, sum_k = 0, number;
   while (true) {
       cout << " Enter the amount of integers to sum = "; 
        cin >> k;
        if (!cin) 
        {
           cout << " Warning! Your input should be an integer!" <<endl;  
           cin.clear();
           cin.ignore();          
        }
        else
          break;
    } 
 if (k == 0)
 sum_k = 0;
    else
do {
    while (true) {
cout << "Enter integer nr. " << i << ": "; 
cin >> number;
 if (!cin) 
        {
           cout << " Warning! Your input should be an integer!" <<endl;  
           cin.clear();
           cin.ignore();          
        }
        else
 break;
}
sum_k += number; i++;
} while (i <= k);
cout << " The total sum of " << k << " integers is: "  << sum_k;
return 0;
} 


