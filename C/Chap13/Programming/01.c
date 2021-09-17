#include <stdio.h>
#include <string.h>

struct book {
	int id;
	char title[100];
	char author[20];
};

int main()
{
	struct book b1;
	
	b1.id = 1;
	strcpy(b1.title, "바람과 함께 사라지다");
	strcpy(b1.author, "마가렛 미첼");

	printf("{%d, %s, %s}", b1.id, b1.title, b1.author);

	return 0;
}