#include<bits/stdc++.h>
using namespace std;

bool vow(char c)
{
  switch(tolower(c))
  {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
      return true;
  }
  return false;
}

int main(int argc, char** argv)
{
  string s;
  cin >> s;
  for(int i = 0; i < s.length()-1; i++)
  {
    if((!vow(s[i])) && vow(s[i]))
    {
      cout << s[i] << s[i+1] << " ";
    }
  }
  return 0;
}
