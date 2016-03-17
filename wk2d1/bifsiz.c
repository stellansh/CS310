#define buffer_size 1024
#define table_size buffer_size/4
#undef buffer_size
#define buffer_size 512
int main(){
	printf("%d\n", table_size);
