/*#include<iostream>
using namespace std;
typedef struct Lnode {
	int data;                                        //������
	struct Lnode* next;//ָ����
}Lnode,*LinkList;//*LinkListΪָ��ṹ��Lnode��ָ������

bool InitList_L(LinkList& L) {        //����һ���յĵ�����L
	L = new Lnode;                    //����ͷָ��L��ָ��ͷ�ڵ�
	if (!L)                           //�ж��Ƿ����ɳɹ�
		return false;
	L->next = NULL;                   //ͷָ�븶Ϊ��ָ��
	return true;
}

void CreateList_H(LinkList& L) {                  //����һ������ǰ�巨��
	int n;                                        //�����м���
	LinkList s;                                   //����һ����ָ��s
	cout << "������Ԫ�ظ���n��" << endl;
	cin >> n;
	cout << "ǰ�巨����������..." << endl;
	while (n--)
	{
		s = new Lnode;                              //�����½ڵ�s��
		cin >> s->data;                             //����Ԫ��ֵ�����ڵ�
		s->next = L->next;                           
		L->next = s;                                 //���ڵ�s����ͷָ��֮��   L->nextָ��һ��λ�ã�������s��ָ��ָ��ԭ��L->nextָ���λ��
	}												//�ٽ�s�ĵ�ַ����L->next��ʵ�ֲ���
}
void CreateList_R(LinkList& L) {                    //����һ������β�巨��
	int n;
	LinkList s, r;									//����������ָ��
	L->next = NULL;                                 //����һ����ͷ���Ŀ�����
	r = L;                                          //βָ��rָ��ͷ�ڵ�
	cout << "������Ԫ�ظ���n��" << endl;
	cin >> n;
	cout << "β�巨����������..." << endl;
	while (n--)
	{
		s = new Lnode;								//����һ���µĽڵ�s		
		cin >> s->data;                             //�����ݷ����ַs��
		s->next = NULL;								//��sָ���
		r->next = s;                                //��βָ��ָ��s
		r = s;										//��rָ��s����r�ڵ��ƶ���s��λ�ñ�֤��һ����Ȼ��r���в�����
	}
}

bool GetElem_L(LinkList &L, int i, int& e) {     //ͨ��λ��Ѱ�������ڵ�����
	LinkList p;                                   //�½�һ��ָ��p
	int j = 1; 
	p = L->next;									//pָ��ͷ�ڵ�
	while (j < i && p) {						//ֻҪû�е�iλ���Ҵ���pָ�룬pָ�����				
		p = p->next;							
		j++;
	}
	if (!p || j > i)							//���pָ�벻���ڣ����ǳ���������Χ������false
		return false;
	e = p->data;                                //j=i��p���ں��ƣ�ָ��iλ�ã���iλ�õ�ֵ����e
	return true;
}
 
bool LocateElem_L(LinkList &L, int e) {              //ͨ��������λ��
	LinkList p;
	p=L->next;                                 //pָ��ָ������ͷ�ڵ㣻
	while (p && p->data != e)                 //����p��p������ķ�Χ�� pָ��ָ���ֵ��ΪҪѰ�ҵ�e����pָ�����
		p = p->next;
	if (!p)
	{
		return false;
	}
	return true;
}

bool ListInsert_L(LinkList& L, int i, int e) {    //����һ��ֵ
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
	cout << "1.��ʼ��\n";
	cout << "2.����������ǰ�巨��\n";
	cout << "3.����������β�巨��\n";
	cout << "4.ȡֵ\n";
	cout << "5.����\n";
	cout << "6.����\n";
	cout << "7.ɾ��\n";
	cout << "8.���\n";
	cout << "9.�˳�\n";
	choose = -1;
	while (choose != 0) {
		cout << "����������ѡ��";
		cin >> choose;
		switch (choose)
		{
		case 1:
			if (InitList_L(L))
				cout << "��ʼ��һ���յĵ�����\n";
			break;
		case 2:
			CreateList_H(L);
			cout << "ǰ�巨������������\n";
			Listprint_L(L);
			break;
		case 3:
			CreateList_R(L);
			cout << "β�巨����������\n";
			Listprint_L(L);
			break;
		case 4:
			cout << "������һ��λ��i����ȡֵ��";
			cin >> i;
			if (GetElem_L(L, i, e)) {
				cout << "���ҳɹ�\n";
				cout << "��" << i << "��Ԫ���ǣ�" << e << endl;
			}
			else
				cout << "����ʧ��\n\n";
			break;
		case 5:
			cout << "��������Ҫ����Ԫ��x��";
			cin >> x;
			if (LocateElem_L(L, x))
				cout << "���ҳɹ�\n";
			else
				cout << "����ʧ�ܣ�" << endl;
			break;
		case 6:
			cout << "����������λ�ú�Ԫ�أ��ÿո��������";
			cin >> i;
			cin >> x;
			if (ListInsert_L(L, i, x))
			{
				cout << "����ɹ�.\n\n";
			}
			else
			{
				cout << "����ʧ�ܣ�\n\n";
			}
			break;
		case 7:
			cout << "��������Ҫɾ����Ԫ��λ��:";
			cin >> i;
			if (ListDelete_L(L, i))
				cout << "ɾ���ɹ���\n";
			else
				cout << "ɾ��ʧ�ܣ�\n";
		case 8:
			Listprint_L(L);
			break;
		case 9:
			return 0;
		}
		
	}
	return 0;

}*/