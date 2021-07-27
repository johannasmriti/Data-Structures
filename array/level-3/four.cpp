/*Stock Buy Sell to Maximize Profit
Difficulty Level : Medium
Last Updated : 10 Jul, 2021
 
The cost of a stock on each day is given in an array, 
find the max profit that you can make by buying and selling in those days.
For example, if the given array is {100, 180, 260, 310, 40, 535, 695}, 
the maximum profit can earned by buying on day 0, selling on day 3. Again buy on day 4 and sell on day 6. 
If the given array of prices is sorted in decreasing order, then profit cannot be earned at all.*/
#include <iostream>

using namespace std;

int main()
{
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++){
       cin>>a[i];
   }
   int max=0;
   for(int i=1;i<n;i++){
       if(a[i-1]<a[i]){
           max+=a[i]-a[i-1];
       }
   }
   cout<<max<<endl;
   return 0;
}
