// stock buy and sell
# include <iostream>
using namespace std;

int  main (){
int prices []={7,1,5,3,6,4};
int n =sizeof(prices)/sizeof(int);

int Maxprice =0, Bestbuy=prices[0];

for (int i = 0; i < n; i++) {
  if (prices[i] > Bestbuy) {
   Maxprice = max(Maxprice,prices[i]-Bestbuy);
  }
  Bestbuy = min(Bestbuy,prices[i]);
}

cout<<Maxprice<<endl;
  return 0;
}