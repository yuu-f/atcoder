#include <iostream>
#include <string>

using namespace std;

int main(){
  string sa, sb, sc;
  cin >> sa >> sb >> sc;
  
  char ans='X';
  char flag='a';
  int ap=0;
  int bp=0;
  int cp=0;

  while(ans=='X'){
    if(flag=='a'){
      if(sa.length()<ap+1){
        ans = char(toupper(flag)); 
        cout << ans << endl;
      }
      flag=sa[ap];
      ap+=1;
    }else if(flag=='b'){
      if(sb.length()<bp+1){
        ans = char(toupper(flag)); 
        cout << ans << endl;
      }
      flag=sb[bp];
      bp+=1;
    }else{
      if(sc.length()<cp+1){
        ans = char(toupper(flag)); 
        cout << ans << endl;
      }
      flag=sc[cp];
      cp+=1;
    }
  }
}
