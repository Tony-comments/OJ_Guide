#include <stdio.h>
int main()
{
	int i;
	char c[128]={'\0'},s[99];
	c['1']='`';c['2']='1';c['3']='2';c['4']='3';c['5']='4';c['6']='5';c['7']='6';c['8']='7';
	c['9']='8';c['0']='9';c['-']='0';c['=']='-';c['W']='Q';c['E']='W';c['R']='E';c['T']='R';
	c['Y']='T';c['U']='Y';c['I']='U';c['O']='I';c['P']='O';c['[']='P';c[']']='[';c['\\']=']';
	c['S']='A';c['D']='S';c['F']='D';c['G']='F';c['H']='G';c['J']='H';c['K']='J';c['L']='K';
	c[';']='L';c['\'']=';';c['X']='Z';c['C']='X';c['V']='C';c['B']='V';c['N']='B';c['M']='N';
	c[',']='M';c['.']=',';c['/']='.';
	while (gets(s)!=NULL)
	{
		for (i=0;s[i]!='\0';i++)
		{
			if (c[s[i]]=='\0')
				printf("%c",s[i]);
			else printf("%c",c[s[i]]);
		}
		printf("\n");
	}
	return 0;
}
