//説明スライドを参考に、現実世界のポリフォーズムを名前にしてください

#include <stdio.h>

class 親クラス
{
public:
	virtual void Voice() {
		printf("あにまる?n");
	};
};

class 子供A : public 親クラス
{
public:
	void Voice() {
		printf("子供Aっす\n");
	};
};

class 子供B : public 親クラス
{
public:
	void Voice() {
		printf("子供Bっす\n");
	};
};

int main(void) {

	親クラス* 配列名[2] = { new 子供A,new 子供B };
	親クラス* animal[2] = { new 子供A,new 子供B };

	animal[0]->Voice();
	animal[1]->Voice();

	delete 配列名[0];
	delete 配列名[1];

	return 0;
}

