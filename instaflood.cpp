//this is the non delay version for flooding as fast as posible not regarding app delays or limitations

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
system("xdotool type \"<put your text here>\"");
system("xdotool key KP_Enter");
loop++;
}}
