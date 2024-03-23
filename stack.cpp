#include<iostream>
using namespace std;
#define maxsize 10
typedef int elemtype;
//struct sqstack{
//	elemtype data[maxsize];//��̬������ջ��Ԫ�� 
//	int top;//ջ��ָ�� 
//};
////��ʼ��ջ 
//void initstack(sqstack &s)
//{
//	s.top=-1;
//}
////�ж�ջ��
//bool stackempty(sqstack &s)
//{
//	if(s.top==-1)
//	{
//		return true;
//	}
//	else{
//		return false;
//	}
//}
////��Ԫ����ջ
//bool push(sqstack &s,elemtype x){
//	if(s.top==maxsize-1)
//	{
//		return false;
//	}
//	s.top+=1;
//	s.data[s.top]=x;
//	return true;
//} 
////��ջ����
//bool pop(sqstack &s,elemtype x){
//	if(s.top=-1)
//		return false;
//	x=s.data[s.top];
//	s.top--;
//	return true;
//}
////����ջ ******************************&************
//
//struct shstack{
//	elemtype data[maxsize];//��̬������ջ��Ԫ�� 
//	int top0;//0��ջջ��ָ��
//	int top1;//1��ջջ��ָ�� 
//};
////��ʼ������ջ 
//void initshstack(shstack &s)
//{
//	s.top0=-1;
//	s.top1=maxsize;
//}



//��ʽջ���ඨ�� *****************************
template<class t>
struct linknode{
	t data;
	linknode *next;
};
template <class t>
class linkstack{
public:
	linkstack():top(0){}
	~linkstack(){makeempty();}
	int getsize();
	bool push(const t&x);
	bool pop(t&x);
	void makeempty();
	bool gettop(t & x);
	bool isempty() const {return(top==NULL)?true:false;};
private:
	linknode<t> *top;	
};
//���ٲ��� 
template<class t>
void linkstack<t>::makeempty(){
	linknode<t> *p;
	while(top!=NULL)
	{
		p=top;
		top=top->next;
		delete p;
	}
}
//ջ��������� 
template<class t>
bool linkstack<t>::push(const t&x)
{
	top=new linknode<t>(x,top);
	if(top==NULL)
	{
		return false;
	}
	return false;	
}
//��ջ 
template<class t>
bool linkstack<t>::pop(t &x)
{
	if(isempty()==true) 
		return false;//ջ�ղ���ջ 
	linknode<t> *p=top;
	top=top->next;
	x=p->data;
	delete p;
	return true;
	
}
//����ջ��Ԫ��
template <class t>
bool linkstack<t>::gettop(t & x)
{
	if(isempty())
	{
		return false;
	}
	x=top->data;
	return true;
} 


//����ջ��
template<class t>
int linkstack<t>::getsize()
{
	linknode<t> *p=top;
	int k=0;
	while(p!=NULL)
	{
		p=p->next;
		k++;
	}
	return k;
} 
int main()
{
	
	
}
