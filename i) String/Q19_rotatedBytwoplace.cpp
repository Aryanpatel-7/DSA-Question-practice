 // check if string is rotated by two place (greekForgreek)


 #include <iostream>
using namespace std;

 void rotateclockwise (string &s){
  char c =s[s.size()-1];
  int index = s.size()-2;

  while(index >=0){
    s[index+1]=s[index];
    index--;
  }
  s[0]=c;


 }
int  rotateanticlockwise(string &s){
   char c =s[0];
  int index = 1;

  while(index <s.size()){
    s[index-1]=s[index];
    index++;
  }
  s[s.size()-1]=c;

}


int main()
{
  string s1 = "amazon", s2 = "azonam";

  if(s1.size() != s2.size())
  return 0;

  string  Clockwise, antiClockwise;
 
   Clockwise = s1;
   rotateclockwise( Clockwise);
     rotateclockwise( Clockwise);
   
   
   if( Clockwise ==s2)
     cout<<"true";
   

  antiClockwise = s1;
  rotateanticlockwise(antiClockwise);
  rotateanticlockwise(antiClockwise);
  
  if(antiClockwise == s2)
  cout<<"true";

  return 0;
}