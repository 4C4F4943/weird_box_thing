#include<iostream>
#include<stdlib.h>
#include "color_output.h"
using namespace std;

int main()
{
    srand ( time(NULL) );
    while(true){

    string color_names[] = {"black","red","green","yellow","blue","magenta", "cyan","white"};
    int ran_int2 = rand() % 8;
    int ran_int3 = rand()%8;
    string current_color = color_names[ran_int2];
    string current_color2 = color_names[ran_int3];
    string if_none_yes[] ={" fuck it mask off "," girls are like horses "," do you ever feel like a plastic bag "," i like big buts and i cannot lie "," doo wah diddy diddy diddy dam diddy dou "};
    string the_song_name[] = {"mask_off", "iwrotethisfortaylorswift", "firework", "i_like_big_buts_and_i_cannot_lie","do_wah_diddy"};
    string the_song,the_comparing_song = "";
    int if_none_length =sizeof(if_none_yes)/sizeof(if_none_yes[0]);
    int ran_int = rand()%if_none_length;
    //  cout<<"the random int: "<<ran_int<<"\nthis is the size of the none dipshit shit: "<<if_none_length<<endl;
    string the_thing ;
    print_color("enter in the thing you want and if you have absolutly no inspiration whatsoever then enter idk: ",current_color);
    cin>>the_thing;cout<<endl;
//  cout<<"enter in the thing you want and if you have absolutly no inspiration whatsoever then enter idk: ";cin>>the_thing;cout<<endl;
//  cout<<"the random int: "<<ran_int<<endl;

    if(the_thing == "idk"){the_thing =if_none_yes[ran_int];the_song = the_song_name[ran_int];}
    else if(the_thing == "exit"){exit(0);}
    int the_length = the_thing.size();

    for(int j = 0; j < the_length+ 21; j++){if(j == the_length + 20){text_background("|",current_color2);cout<<endl;}else if(j == 0){text_background("|",current_color2);}else{text_background("-",current_color2);}}
    for(int j = 0; j < the_length+ 21; j++){if(j == the_length + 20){text_background("|",current_color2);cout<<endl;}else if(j == 0){text_background("|",current_color2);}else{text_background("-",current_color2);}}
    for(int i = 0; i < 22; i ++)

    {
        if(i == 10)
        {
        text_background(the_thing, current_color);
        }
        else if(i == 0){text_background("|",current_color2);}
        else if(i == 21){text_background("|",current_color2);}
        else
        {
        text_background("-",current_color2);
        }
    }
    cout<<endl;
    for(int j = 0; j < the_length+ 21; j++){if(j == the_length + 20){text_background("|",current_color2);cout<<endl;}else if(j == 0){text_background("|",current_color2);}else{text_background("_",current_color2);}}
    for(int j = 0; j < the_length+ 21; j++){if(j == the_length + 20){text_background("|",current_color2);;cout<<endl;}else if(j == 0){text_background("|",current_color2);}else{text_background("_",current_color2);}}
    if(the_song != "")
    {
    print_color("from what song is the displayed text: ",current_color);
    //cout<<"from what song is the displayed text: ";
    cin>>the_comparing_song;
    if(the_comparing_song == the_song){system("pyfiglet correct!");}
    else{system("pyfiglet wrong!");cout<<"it was this song: "<<the_song<<endl; }
    }
}
}
                                                                                  
