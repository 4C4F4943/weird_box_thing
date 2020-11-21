#include<iostream>
using namespace std;
string text_in_box(string the_thing){

	int the_length = the_thing.size();
	for(int j = 0; j < the_length+ 21; j++){if(j == the_length + 20){cout<<"|"<<endl;}else if(j == 0){cout<<"|";}else{cout<<"-";}}
        for(int j = 0; j < the_length+ 21; j++){if(j == the_length + 20){cout<<"|"<<endl;}else if(j == 0){cout<<"|";}else{cout<<"-";}}
        for(int i = 0; i < 22; i ++)
          {       
                  if(i == 10){cout<<the_thing;}
                  else if(i == 0){cout<<"|";}
                  else if(i == 21){cout<<"|";}
                  else{cout<<"-";} 
         }
          
          cout<<endl; 
          for(int j = 0; j < the_length+ 21; j++){if(j == the_length + 20){cout<<"|"<<endl;}else if(j == 0){cout<<"|";}else{cout<<"_";}}
          for(int j = 0; j < the_length+ 21; j++){if(j == the_length + 20){cout<<"|"<<endl;}else if(j == 0){cout<<"|";}else{cout<<"_";}}
	return 0;
}
