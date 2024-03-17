#include<iostream>
using namespace std;
#define maxsize 10 //静态链表的最大长度 
typedef int elemtype;
struct node
{
	elemtype data;
	int next;//下一个元素的数组下标 
	
};
//node d[maxsize], 将next赋特殊值，判断是否为空   
//初始化 
bool initstaticlinklist(node *l)
{

	for(int i=0;i<maxsize;i++)
	{
		l[i].next=0;
		if(l[i].next!=0)
		{
			return false;
		}
	}
	return true;	
}

int main()
{
	node l[maxsize];
	if(initstaticlinklist(l))
	{
		cout<<"ok"<<endl;
	}
	
}
