#pragma once

enum SCENE { TITLE, STAGE, CLEAR };

class IScene {
protected:
	// �V�[���ԍ����Ǘ�����ϐ�
	static int sceneNo;

public:
	// �p����Ŏ��������֐�
	// ���ۃN���X�Ȃ̂ŏ������z�N���X�Ƃ���
	virtual void Initialize() = 0;

	virtual void Update() = 0;

	virtual void Draw() = 0;

	// ���z�f�X�g���N�^
	virtual ~IScene();

	// �V�[���ԍ��̃Q�b�^�[
	int GetSceneNo() { return sceneNo; }
};