#include<iostream.h>
void main(){
int n,i,l[50];
String s[50];
cin>>n;
for(i=0;i<n;i++){
cin>>s[i];
l[i]=strlen(s[i]);
}
for(i=0;i<n;i++){
if(l[i]==2){
cout<<s[i];
}
}
for(i=0;i<n;i++){
if((s[i].charAt(0)=='r')&&(s[i].charAt(1)=='a')){
cout<<s[i];
}
}
}
