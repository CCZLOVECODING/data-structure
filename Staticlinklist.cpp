#include<iostream>
using namespace std;
#define maxsize 10 //��̬�������󳤶� 
typedef int elemtype;
struct node
{
	elemtype data;
	int next;//��һ��Ԫ�ص������±� 
	
};
//node d[maxsize], ��next������ֵ���ж��Ƿ�Ϊ��   
//��ʼ�� 
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
