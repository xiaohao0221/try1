// 编写一段程序，输入一个整数，
// 显示出输入整数层的金字塔形状。
// 提示：第i行显示 (i - 1) * 2 + 1 个 ‘*’。

#include<stdio.h>

int main (void)
{
int i,j,m;
printf("输入金字塔行数：");
scanf("%d",&m);

for(i=1;i<=m;++i){
	for(j=1;j<m-i;++j)
putchar(' ');

}
for(j=1;j<i;++j)
	putchar('*');
}
putchar('\n');
}
return 0;
}