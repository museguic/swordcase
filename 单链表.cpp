/*#include<iostream>
using namespace std;
typedef struct Lnode {
	int data;                                        //数据域
	struct Lnode* next;//指针域
}Lnode,*LinkList;//*LinkList为指向结构体Lnode的指针类型

bool InitList_L(LinkList& L) {        //构造一个空的单链表L
	L = new Lnode;                    //生成头指针L，指向头节点
	if (!L)                           //判断是否生成成功
		return false;
	L->next = NULL;                   //头指针付为空指针
	return true;
}

void CreateList_H(LinkList& L) {                  //生成一个链表（前插法）
	int n;                                        //定义中间量
	LinkList s;                                   //定义一个新指针s
	cout << "请输入元素个数n：" << endl;
	cin >> n;
	cout << "前插法创建单链表..." << endl;
	while (n--)
	{
		s = new Lnode;                              //生成新节点s；
		cin >> s->data;                             //生成元素值赋给节点
		s->next = L->next;                           
		L->next = s;                                 //将节点s插入头指针之后   L->next指向一个位置，现在令s的指针指向原本L->next指向的位置
	}												//再将s的地址交给L->next，实现插入
}
void CreateList_R(LinkList& L) {                    //生成一个链表（尾插法）
	int n;
	LinkList s, r;									//定义两个新指针
	L->next = NULL;                                 //建立一个带头结点的空链表
	r = L;                                          //尾指针r指向头节点
	cout << "请输入元素个数n：" << endl;
	cin >> n;
	cout << "尾插法创建单链表..." << endl;
	while (n--)
	{
		s = new Lnode;								//建立一个新的节点s		
		cin >> s->data;                             //将数据放入地址s中
		s->next = NULL;								//令s指向空
		r->next = s;                                //令尾指针指向s
		r = s;										//令r指向s（令r节点移动到s的位置保证下一次仍然对r进行操作）
	}
}

bool GetElem_L(LinkList &L, int i, int& e) {     //通过位置寻找链表内的数字
	LinkList p;                                   //新建一个指针p
	int j = 1; 
	p = L->next;									//p指向头节点
	while (j < i && p) {						//只要没有到i位置且存在p指针，p指针后移				
		p = p->next;							
		j++;
	}
	if (!p || j > i)							//如果p指针不存在，就是超出了链表范围，返回false
		return false;
	e = p->data;                                //j=i后p不在后移，指向i位置，将i位置的值赋给e
	return true;
}
 
bool LocateElem_L(LinkList &L, int e) {              //通过数字找位置
	LinkList p;
	p=L->next;                                 //p指针指向链表头节点；
	while (p && p->data != e)                 //存在p即p在链表的范围内 p指针指向的值不为要寻找的e，则p指针后移
		p = p->next;
	if (!p)
	{
		return false;
	}
	return true;
}

bool ListInsert_L(LinkList& L, int i, int e) {    //插入一个值
	LinkList p = L, s;
	int j = 0;
	while (p && j < i - 1)
	{
		p = p->next;
		j++;
	}
	if (!p || j > i - 1)
		return false;
	s = new Lnode;
	s->data = e;
	s->next = p->next;
	p->next = s;
	return true;
}
bool ListDelete_L(LinkList& L, int i) {
	LinkList p = L, q;
	int j = 0;
	while ((p->next) && (j < i - 1))
	{
		p = p->next;
		j++;
	}
	if (!(p->next) || (j > i - 1))
		return false;
	q = p->next;
	p->next = q->next;
	delete q;
	return true;
}

void Listprint_L(LinkList &L) {
	LinkList p;
	p = L->next;
	while (p) {
		cout << p->data << "\t";
		p = p->next;
	}
	cout << endl;
}

int main() {
	int i, x, e, choose;
	LinkList L;
	cout << "1.初始化\n";
	cout << "2.创建单链表（前插法）\n";
	cout << "3.创建单链表（尾插法）\n";
	cout << "4.取值\n";
	cout << "5.查找\n";
	cout << "6.插入\n";
	cout << "7.删除\n";
	cout << "8.输出\n";
	cout << "9.退出\n";
	choose = -1;
	while (choose != 0) {
		cout << "请输入数字选择：";
		cin >> choose;
		switch (choose)
		{
		case 1:
			if (InitList_L(L))
				cout << "初始化一个空的单链表！\n";
			break;
		case 2:
			CreateList_H(L);
			cout << "前插法创建单链表结果\n";
			Listprint_L(L);
			break;
		case 3:
			CreateList_R(L);
			cout << "尾插法创建单链表：\n";
			Listprint_L(L);
			break;
		case 4:
			cout << "请输入一个位置i用来取值：";
			cin >> i;
			if (GetElem_L(L, i, e)) {
				cout << "查找成功\n";
				cout << "第" << i << "个元素是：" << e << endl;
			}
			else
				cout << "查找失败\n\n";
			break;
		case 5:
			cout << "请输入所要查找元素x：";
			cin >> x;
			if (LocateElem_L(L, x))
				cout << "查找成功\n";
			else
				cout << "查找失败！" << endl;
			break;
		case 6:
			cout << "请输入插入的位置和元素（用空格隔开）：";
			cin >> i;
			cin >> x;
			if (ListInsert_L(L, i, x))
			{
				cout << "插入成功.\n\n";
			}
			else
			{
				cout << "插入失败！\n\n";
			}
			break;
		case 7:
			cout << "请输入所要删除的元素位置:";
			cin >> i;
			if (ListDelete_L(L, i))
				cout << "删除成功！\n";
			else
				cout << "删除失败！\n";
		case 8:
			Listprint_L(L);
			break;
		case 9:
			return 0;
		}
		
	}
	return 0;

}*/