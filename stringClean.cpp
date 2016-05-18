#include <cstdio>
void stringClean(char [], int, char [], int, char);
int main(){
	char s[11], z[20];
	scanf("%s", s);
	stringClean(s, 0, z, 0, -1);
	printf("%s\n", z);
	return 0;
}
void stringClean(char s[], int i, char z[], int x, char y){
	if(s[i]==0){
		z[x]='\0';
		return;
	}
	if(s[i]==y){
		x--;
	}
	else z[x]=s[i];
	stringClean(s, i+1, z, x+1, s[i]);
}
