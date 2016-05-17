#include <cstdio>
void parenBit(char [], int, char [], int, bool);
int main(){
	char s[11], z[11];
	scanf("%s", s);
	parenBit(s, 0, z, 0, false);
	printf("%s\n", z);
	return 0;
}
void parenBit(char s[], int i, char z[], int x, bool b){
	if(s[i]==0) {
		z[x]='\0';
		return;
		}
	if(s[i]=='(') b= true;
	if(b==true){
		z[x]=s[i];
		x++;
	}
	if(s[i]==')') b = false;
	parenBit(s, i+1, z, x, b);
}
