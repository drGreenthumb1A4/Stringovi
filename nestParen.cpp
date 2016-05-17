#include <cstdio>
bool nestParen(char [], int, int);
int find(char [], int);
int main(){
	char s[11];
	scanf("%s", s);
	bool x = nestParen(s, 0, find(s, 0));
	printf("%s", x ? "true" : "false");
	return 0;
}
int find(char s[], int i){
	if(s[i]==0) return i-1;
	return find(s, i+1);
}
bool nestParen(char s[], int i, int y){
	if(y==i-1 || (i==y && i==0)) return true;
	if(s[i]!='(' || s[y]!=')') return false;
	return nestParen(s, i+1, y-1);
}
