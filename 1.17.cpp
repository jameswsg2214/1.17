// Example program
#include <iostream>
#include <string>
using namespace std;
class sample
{
    public:
    int a;
    int calc()
{
    for(int i=0;i<a;i++)
    {
        cout<<"hello world"<<endl;
    }
}
};
int main()
{
  sample s;
  
  cout << "Enter the no of times ";
  cin>>s.a;
  s.calc();
}
