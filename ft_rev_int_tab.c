#include<stdio.h>
void ft_rev_int_tab(int *tab,int size){	
	int i =size-1;
	int j=0;
	int a;
	while(i > j){
		
		a=tab[i];
		tab[i]=tab[j];
		tab[j];
		j++;
		i--;
				
	}
}
void main (){
	int tab[]={0,1,2,3};
	ft_rev_int_tab(tab,3);

}
