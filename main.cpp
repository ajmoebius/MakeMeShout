//Kevin Buffardi and class
#include <iostream>
#include <string>

using namespace std;

int main()
{
  string said;  
  int index;

  cout<<"What do you say?\n";
  getline(cin,said);
 

  for(int index=0; index < said.length(); index++)
  {
    char converted = said[index];
    if (said[index]>='a' && said[index] <='z')
    {
      converted = said[index] -('a'-'A');
    }
    /*
    else if(said[index]==".")
    {
      said[index]="!";
    }
    */
    cout<<said[index]<<" "<<converted<<endl;
  }

  cout<<"As a shout, you said:\n"<<said<<endl;

  return 0;
}
