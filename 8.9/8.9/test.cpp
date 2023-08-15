#include <iostream>

using namespace std;

//class person
//{
//public:
//	virtual void Buy()const//虚函数
//	{
//		cout << "全票" << endl;
//	}
//};
//
//class student :public person
//{
//public:
//	virtual void Buy()const
//	{
//		cout << "半票" << endl;
//	}
//};
//
//void func(const person* p)
//{
//	p->Buy();      //必须用基类的指针或引用
//}
//int main()
//{
//	person p;
//	func(&p);
//
//	student s;
//	func(&s);//指向的对象是s
//}
//int main()
//{
//	person p;	
//	student s;
//	p = s;
//	//将子类s对象赋给父类对象p，不会拷贝虚表的
//	//当指向是父类还是会去父类的虚表里去找虚函数
//	func(&p);//指向的对象是s
//}
//class person
//{
//public:
//	virtual void Buy()const//虚函数
//	{
//		cout << "全票" << endl;
//	}
//	virtual ~person()//析构函数要求重写
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
//		cout << "半票" << endl;
//	}
//	virtual ~student()//派生类的前面可以不用加virtual
//	{
//		cout << "~student" << endl;
//		delete[] ptr;
//	}
//
//protected:
//	int* ptr = new int[10];
//};
//
////析构函数可以成为虚函数
////析构函数前面加上virtual就构成函数重写，因为所有析构函数都改成相同
////名字destructor了，为什么要重写呢？
////有一种场景：
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
//	delete p;//这时如果不重写析构函就存在问题了
//	//这里析构的是p，p是person类型的，所以还是调用的是person类的析构函数
//	//这里就调用两次了，我们想要析构的是student ，是p指向的对象
//	//这里我们期望p->析构 s是一个多态调用，而不是一个普通调用。
//	return 0;
//}
//
//class car
//{
//public:
//	virtual void Drive() final //final修饰的虚函数不能重写
//	{
//		 
//	}
//};
//
//class benz : public car
//{
//public:
//	//void Drive()被final修饰后无法继承
//		void Drive(int i)//
//	{
//		cout << "舒适" << endl;
//	}
//};
//class car
//{
//public:
//	virtual void Drive()  //final修饰的虚函数不能被继承
//	{
//
//	}
//};
//
//class benz : public car
//{
//public:
//	//void Drive()被final修饰后无法继承
//	void Drive() override//帮助派生类检查是否完成重写，如果没有重写则会保存
//	{
//		cout << "舒适" << endl;
//	}
//};

//设计一个无法被继承的方法：
//1.将基类的构造/析构弄成私有，无法被派生类访问
//2.直接在基类的后面加上final

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
//	virtual void Buy()const//虚函数
//	{
//		cout << "全票" << endl;
//	}
//};
//
//class student :public person
//{
//public:
//	virtual void Buy()const
//	{
//		cout << "半票" << endl;
//	}
//};
//
//void func(person& p)
//{
//	p.Buy();      //必须用基类的指针或引用
//}
//
//int main()
//{
//	person p;
//	func(p);//指向的对象是p
//
//	student s;
//	func(s);//指向的对象是s
//	//原理：就是指向对象的虚表里找对应的函数的地址
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
//        func();//this调用func()//继承的是父类的外壳
//    }
//};
//
//int main(int argc, char* argv[])
//{
//    B* p = new B;
//    p->test();
//    //将this传过去
//    return 0;
//}
// class A
//{
//public:
//    virtual void func(int val = 1) { std::cout << "A->" << val << std::endl; }
//    virtual void test()
//    {
//        func();//  这里的this是A*   this调用func()//继承的是父类的外壳
//        //满足多态的条件:基类的指针或引用
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
//    //将this传过去
//    //p是指向B的
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
//	virtual void Buy()const//虚函数
//	{
//		cout << "全票" << endl;
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
//		cout << "半票" << endl;
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
//	//赋值过去,子类的虚表是不会拷贝过去的,不然当指向父类对象时,就不知道去找父类对象的虚表还是
//	//去找子类虚表的函数了
//}
////普通函数的继承是实现继承
////多态的继承是接口继承
typedef void(*FUNC_PTR) ();

// 打印函数指针数组
// 用来查看虚表
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
//	//静态多态-->编译时就确定地址
//
//	ptr->Buy();
//	//动态多态,运行时--到指向的对象的虚表里找函数地址
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
	virtual void fun1()//重写fun1
	{
		cout << "Derive:fun1()" << endl;
	}
	virtual void fun3()//虚函数fun3
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
//	virtual void fun1()//重写fun1
//	{
//		cout << "Derive:fun1()" << endl;
//	}
//	virtual void fun3()//虚函数fun3
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