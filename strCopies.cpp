#include <cstdio>
int strCopies(char [], int, char []);
bool isSub(char [], int, char  [], int);
int main(){
	char s[11], z[11];
	int x;
	scanf("%s%s%d", s, z, &x);
	bool b = (strCopies(s, 0, z)>=x)? true : false;
	printf("%s", b ? "true" : "false");
	return 0;
}
int strCopies(char s[], int i, char z[]){
	if(s[i]==0) return 0;
	return (isSub(s, i, z, 0)? 1 : 0) + strCopies(s, i+1, z);
}
bool isSub(char s[], int i, char z[], int x){
	if(z[x]==0) return true;
	if(z[x]!=s[i]) return false;
	return isSub(s, i+1, z, x+1);
}

