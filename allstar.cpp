#include <cstdio>
void allStar(char [], int, char [], int);
int main(){
	char s[11], z[20];
	scanf("%s", s);
	allStar(s, 0, z, 0);
	printf("%s\n", z);
	return 0;
}
void allStar(char s[], int i, char z[], int x){
	if(s[i+1]==0){
		z[x]=s[i];
		z[x+1]='\0';
		return;
	}
	z[x]=s[i];
	z[x+1]='*';
	allStar(s, i+1, z, x+2);
}