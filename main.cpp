//�����X���C�h���Q�l�ɁA�������E�̃|���t�H�[�Y���𖼑O�ɂ��Ă�������

#include <stdio.h>

class �e�N���X
{
public:
	virtual void Voice() {
		printf("���ɂ܂�?n");
	};
};

class �q��A : public �e�N���X
{
public:
	void Voice() {
		printf("�q��A����\n");
	};
};

class �q��B : public �e�N���X
{
public:
	void Voice() {
		printf("�q��B����\n");
	};
};

int main(void) {

	�e�N���X* �z��[2] = { new �q��A,new �q��B };
	�e�N���X* animal[2] = { new �q��A,new �q��B };

	animal[0]->Voice();
	animal[1]->Voice();

	delete �z��[0];
	delete �z��[1];

	return 0;
}

