#include <iostream>

using namespace std;

//class person
//{
//public:
//	virtual void Buy()const//�麯��
//	{
//		cout << "ȫƱ" << endl;
//	}
//};
//
//class student :public person
//{
//public:
//	virtual void Buy()const
//	{
//		cout << "��Ʊ" << endl;
//	}
//};
//
//void func(const person* p)
//{
//	p->Buy();      //�����û����ָ�������
//}
//int main()
//{
//	person p;
//	func(&p);
//
//	student s;
//	func(&s);//ָ��Ķ�����s
//}
//int main()
//{
//	person p;	
//	student s;
//	p = s;
//	//������s���󸳸��������p�����´������
//	//��ָ���Ǹ��໹�ǻ�ȥ����������ȥ���麯��
//	func(&p);//ָ��Ķ�����s
//}
//class person
//{
//public:
//	virtual void Buy()const//�麯��
//	{
//		cout << "ȫƱ" << endl;
//	}
//	virtual ~person()//��������Ҫ����д
//	{
//		cout << "~person()" << endl;
//	}
//};
//
//class student :public person
//{
//public:
//	virtual void Buy()const
//	{
//		cout << "��Ʊ" << endl;
//	}
//	virtual ~student()//�������ǰ����Բ��ü�virtual
//	{
//		cout << "~student" << endl;
//		delete[] ptr;
//	}
//
//protected:
//	int* ptr = new int[10];
//};
//
////�����������Գ�Ϊ�麯��
////��������ǰ�����virtual�͹��ɺ�����д����Ϊ���������������ĳ���ͬ
////����destructor�ˣ�ΪʲôҪ��д�أ�
////��һ�ֳ�����
//int main()
//{
//	//person p;
//	//student s;
//
//	person* p = new person;
//	p->Buy();
//	delete p;
//
//	p = new student;
//	p->Buy();
//	delete p;//��ʱ�������д�������ʹ���������
//	//������������p��p��person���͵ģ����Ի��ǵ��õ���person�����������
//	//����͵��������ˣ�������Ҫ��������student ����pָ��Ķ���
//	//������������p->���� s��һ����̬���ã�������һ����ͨ���á�
//	return 0;
//}
//
//class car
//{
//public:
//	virtual void Drive() final //final���ε��麯��������д
//	{
//		 
//	}
//};
//
//class benz : public car
//{
//public:
//	//void Drive()��final���κ��޷��̳�
//		void Drive(int i)//
//	{
//		cout << "����" << endl;
//	}
//};
//class car
//{
//public:
//	virtual void Drive()  //final���ε��麯�����ܱ��̳�
//	{
//
//	}
//};
//
//class benz : public car
//{
//public:
//	//void Drive()��final���κ��޷��̳�
//	void Drive() override//�������������Ƿ������д�����û����д��ᱣ��
//	{
//		cout << "����" << endl;
//	}
//};

//���һ���޷����̳еķ�����
//1.������Ĺ���/����Ū��˽�У��޷������������
//2.ֱ���ڻ���ĺ������final

//class B
//{
//	virtual void fun1()
//	{
//		cout << "fun1()" << endl;
//	}
//	virtual void fun2()
//	{
//		cout << "fun2()" << endl;
//	}
//
//	void fun3()
//	{
//		cout << "fun3()" << endl;
//	}
//
//protected:
//	char _b=1;
//};
//
//int main()
//{
//	B bb;
//	cout << sizeof(B) << endl;
//}
//class person
//{
//public:
//	virtual void Buy()const//�麯��
//	{
//		cout << "ȫƱ" << endl;
//	}
//};
//
//class student :public person
//{
//public:
//	virtual void Buy()const
//	{
//		cout << "��Ʊ" << endl;
//	}
//};
//
//void func(person& p)
//{
//	p.Buy();      //�����û����ָ�������
//}
//
//int main()
//{
//	person p;
//	func(p);//ָ��Ķ�����p
//
//	student s;
//	func(s);//ָ��Ķ�����s
//	//ԭ������ָ������������Ҷ�Ӧ�ĺ����ĵ�ַ
//}
//class A
//{
//public:
//    virtual void func(int val = 1) { std::cout << "A->" << val << std::endl; }
//};
//
//class B : public A
//{
//public:
//    void func(int val = 0) { std::cout << "B->" << val << std::endl; }
//    virtual void test() 
//    { 
//        func();//this����func()//�̳е��Ǹ�������
//    }
//};
//
//int main(int argc, char* argv[])
//{
//    B* p = new B;
//    p->test();
//    //��this����ȥ
//    return 0;
//}
// class A
//{
//public:
//    virtual void func(int val = 1) { std::cout << "A->" << val << std::endl; }
//    virtual void test()
//    {
//        func();//  �����this��A*   this����func()//�̳е��Ǹ�������
//        //�����̬������:�����ָ�������
//    }
// };
//
//class B : public A
//{
//public:
//    void func(int val = 0) { std::cout << "B->" << val << std::endl; }
//   
//};
//
//int main(int argc, char* argv[])
//{
//    B* p = new B;
//    p->test();
//    //��this����ȥ
//    //p��ָ��B��
//    return 0;
//}
//struct A
//{
//	int _a = 1;
//	//char _c;
//};
//int main()
//{
//	cout << sizeof(A) << endl;
//	return 0;
//}
//class person
//{
//public:
//	virtual void Buy()const//�麯��
//	{
//		cout << "ȫƱ" << endl;
//	}
//	virtual void Fun1()
//	{
//		cout << "person:fun1" << endl;
//	}
//	virtual void Fun2()
//	{
//		cout << "perosn:fun2" << endl;
//	}
////protected:
//	int _a;
//};
//
//class student :public person
//{
//public:
//	virtual void Buy()const
//	{
//		cout << "��Ʊ" << endl;
//	}
//	virtual void Fun1()
//	{
//		cout << "student:fun1" << endl;
//	}
//	virtual void Fun2()
//	{
//		cout << "student:fun2" << endl;
//	}
//protected:
//	int _b;
//};
//
//
//int main()
//{
//	person p;
//	student s;
// 	s._a = 10;
//	p = s;
//	//��ֵ��ȥ,���������ǲ��´����ȥ��,��Ȼ��ָ�������ʱ,�Ͳ�֪��ȥ�Ҹ������������
//	//ȥ���������ĺ�����
//}
////��ͨ�����ļ̳���ʵ�ּ̳�
////��̬�ļ̳��ǽӿڼ̳�
typedef void(*FUNC_PTR) ();

// ��ӡ����ָ������
// �����鿴���
// void PrintVFT(FUNC_PTR table[])
void PrintVFT(FUNC_PTR* table)
{
	for (size_t i = 0; table[i] != nullptr; i++)
	{
		printf("[%d]:%p->", i, table[i]);

		FUNC_PTR f = table[i];
		f();
	}
	printf("\n");
}
//int main()
//{
//	person p;
//
//	person* ptr = &p;
//	p.Buy();
//	//��̬��̬-->����ʱ��ȷ����ַ
//
//	ptr->Buy();
//	//��̬��̬,����ʱ--��ָ��Ķ����������Һ�����ַ
//	int vft1 = *((int*)&p);
//	PrintVFT((FUNC_PTR*)vft1);
//}
//
class Base1
{
public: 
	virtual void fun1()
	{
		cout << "base1:fun1()" << endl;
	}
	virtual void fun2()
	{
		cout << "base1:fun2()" << endl;
	}
protected:
	int _b;
};
class Base2
{
public:
	virtual void fun1()
	{
		cout << "base2:fun1()" << endl;
	}
	virtual void fun2()
	{
		cout << "base2:fun2()" << endl;
	}
protected:
	int _c;
};
class Derive :public Base1 ,public Base2
{
public:
	virtual void fun1()//��дfun1
	{
		cout << "Derive:fun1()" << endl;
	}
	virtual void fun3()//�麯��fun3
	{
		cout << "Derive:fun3()" << endl;
	}
protected:
	int _d;
};
//class Base
//{
//public:
//	virtual void fun1()
//	{
//		cout << "base:fun1()" << endl;
//	}
//	virtual void fun2()
//	{
//		cout << "base:fun2()" << endl;
//	}
//protected:
//	int _c;
//};
//class Derive :public Base
//{
//public:
//	virtual void fun1()//��дfun1
//	{
//		cout << "Derive:fun1()" << endl;
//	}
//	virtual void fun3()//�麯��fun3
//	{
//		cout << "Derive:fun3()" << endl;
//	}
//protected:
//	int _d;
//};
int main()
{
	Base1 b1;
	Base2 b2;
	Derive d;

}