#include <cstdio>
int strCount(char [], int, char []);
bool isSub(char [], int, char  [], int);
int main(){
	char s[11], z[11];
	scanf("%s%s", s, z);
	printf("%d", strCount(s, 0, z));
	return 0;
}
int strCount(char s[], int i, char z[]){
	if(s[i]==0) return 0;
	return (isSub(s, i, z, 0)? 1 : 0) + strCount(s, i+1, z);
}
bool isSub(char s[], int i, char z[], int x){
	if(z[x]==0) return true;
	if(z[x]!=s[i]) return false;
	return isSub(s, i+1, z, x+1);
}

