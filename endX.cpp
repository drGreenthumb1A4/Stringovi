#include <cstdio>
void endX(char [], int);
int find(char [], int);
int main(){
	char s[11];
	scanf("%s", s);
	endX(s, 0);
	printf("%s\n", s);
	return 0;
}
void endX(char s[], int i){
	if(s[i]=='\0') return;
	if(s[i]=='x'){
		int  z = find(s, i);
		if(z!=-1){
		
		char t = s[z];
		s[z] = s[i];
		s[i] = t;
		
		 } 
	}
	endX(s, i+1);
}
int find(char s[], int i){
	if(s[i]==0) return -1;
	if(s[i]!='x') return i;
	return find(s, i+1);
}
