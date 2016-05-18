#include <cstdio>
#include <cstring>
int strDist(char [], int, char [], int, int);
bool isSub(char [], int, char  [], int);
int main(){
	char s[11], z[11];
	scanf("%s%s", s, z);
	printf("%d", strDist(s, 0, z, 0, 0));
	return 0;
}
int strDist(char s[], int i, char z[], int a, int b){
	if(s[i]==0) return a;
	if(isSub(s, i, z, 0) && b>a) a=b+strlen(z); 
	if(isSub(s, i, z, 0) || b>0) b++;
	return strDist(s, i+1, z, a, b);
}
bool isSub(char s[], int i, char z[], int x){
	if(z[x]==0) return true;
	if(z[x]!=s[i]) return false;
	return isSub(s, i+1, z, x+1);
}
