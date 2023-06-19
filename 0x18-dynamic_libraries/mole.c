/* Made by MEGATRON */

static int val = 0;

int rand(void){
	int luck[] = {8, 8, 7, 9, 23, 74};
	int a = val;

	val++;
	if (val >= 6)
		val = 0;

	return luck[a];
}
