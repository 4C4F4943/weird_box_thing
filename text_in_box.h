#include<iostream>
#include "color_output.h"
using namespace std;
string text_in_box(string the_thing,string color1, string color2){

        int the_length = the_thing.size();

 for(int j = 0; j < the_length+ 21; j++){if(j == the_length + 20){text_background("|",color1);cout<<endl;}else if(j == 0){text_background("|",color1);}else{text_background("-",color1);}}
    for(int j = 0; j < the_length+ 21; j++){if(j == the_length + 20){text_background("|",color1);cout<<endl;}else if(j == 0){text_background("|",color1);}else{text_background("-",color1);}}
    for(int i = 0; i < 22; i ++)

    {
        if(i == 10)
        {
        text_background(the_thing, color2);
        }
        else if(i == 0){text_background("|",color1);}
        else if(i == 21){text_background("|",color1);}
        else
        {
        text_background("-",color1);
        }
    }
    cout<<endl;
    for(int j = 0; j < the_length+ 21; j++){if(j == the_length + 20){text_background("|",color1);cout<<endl;}else if(j == 0){text_background("|",color1);}else{text_background("_",color1);}}
    for(int j = 0; j < the_length+ 21; j++){if(j == the_length + 20){text_background("|",color1);cout<<endl;}else if(j == 0){text_background("|",color1);}else{text_background("_",color1);}}
return 0;
}
