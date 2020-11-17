#include<iostream>
using namespace std;


void print_color(string txt, string color)
{
	string color_codes[] = {"30","31","32","33","34","35","36","37"};
	string color_names[] = {"black","red","green","yellow","blue","magenta", "cyan","white"};
	string res;
	bool found = false;
	int x = sizeof(color_codes) / sizeof(color_codes[0]);
	int ran_int = rand()%x;
	for(int i = 0; i < x ; i++){
	if(color_names[i] == color){
	res = "\033[1;"+color_codes[i]+"m"+txt+ "\033[0m";
	found = true;
	}
	}/*
	if(found == false){
        cout << "\033[1;"+color_codes[ran_int]+"mThe color wasnt found.\033[0m\n";
    }*/
	cout<<res;
}
void text_background(string txt, string color)
{
	string color_codes[] = {"30","31","32","33","34","35","36","37"};
    string color_names[] = {"black","red","green","yellow","blue","magenta", "cyan","white"};
	string res;
	bool found = false;
	int x = sizeof(color_codes) / sizeof(color_codes[0]);
	int ran_int = rand() % x;
	for(int i = 0; i < x; i++){
	if(color_names[i] == color){
	res = "\033[7;"+color_codes[i]+"m"+txt+ "\033[0m";
	}
	}/*
	if(found == false){
		cout << "\033[7;"+color_codes[ran_int]+"mThe color wasnt found.\033[0m\n";
	}*/
	cout<<res;
	

}
