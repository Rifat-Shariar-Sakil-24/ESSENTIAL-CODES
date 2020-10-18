#include <iostream>
#include <bitset>
using namespace std;
int main()
{
long long n; cin >> n;
string binary = bitset<40>(n).to_string(); //to binary
cout<<binary<<"\n";

unsigned long decimal = bitset<40>(binary).to_ulong();//to decimal
cout<<decimal<<"\n";
return 0;
}
