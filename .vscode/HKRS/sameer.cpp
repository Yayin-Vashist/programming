#include <iostream>
using namespace std;
int main()
{
  int cs, total, inf, rooms, normal;
  cin>>cs;
  for(int i=1; i<=cs; i++)
  {
    cin>>total>>inf;
  if(total==inf)
  {
    rooms=(2*total)-1;
    cout<<rooms;
  }
  else if(inf==0)
  {
    cout<<total;
  }
  else
  {
    normal=total-inf;
    rooms=normal+(inf-2)+(2*inf-1);
    cout<<rooms;
  }
}
  return 0;
}