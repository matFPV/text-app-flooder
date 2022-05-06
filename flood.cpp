//this is the delay version made for aps that have chat delays to 'prevent' spaming if it runs too slow for you try playing with the delays or using instaflood instead

#include <iostream>
#include<stdlib.h>
#include<string.h>
#include<string>
 using namespace std;
	//vars
int loop;
int repeatfor;
	//main
int main() {
	//repfor
std::cout << "repeat for:";
std::cin >> repeatfor;
	//time to click into a nother window
system("sleep 5");
	//loop
while (loop<repeatfor){
system("xdotool type \"<put your text here\"");
system("sleep 1");
system("xdotool key KP_Enter");
loop++;
system("sleep 0.5");
}}
