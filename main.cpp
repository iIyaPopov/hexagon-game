#include "hexagon.h"
void main(){
	FILE* input_file = fopen ("map.txt", "r");
	char* map[map_height];
	int mode;
	cout << "Play mode:\n	1 - Computer VS Computer\n	2 - Human VS Computer\n";
	cout << "Input play mode: ";
	cin >> mode;
	Scan_Map(map, input_file);
	Play(mode, map);
	fclose(input_file);
	for(int i = 0; i < map_height; i++)
		delete [] map[i];
}