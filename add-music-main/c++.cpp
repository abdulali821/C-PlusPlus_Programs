#include<iostream>
#include<windows.h>
#include<MMsystem.h>
using namespace std;
int main(){
	PlaySound(TEXT("song.wav"),NULL,SND_SYNC);
	return 0;
}
