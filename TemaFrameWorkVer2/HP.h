#pragma once
#include "UI.h"
class CHP :
	public CUI
{
public:
	CHP();
	~CHP();

	// CUI��(��) ���� ��ӵ�
	virtual void Initialize() override;
	virtual int Update() override;
	virtual void Late_Update() override;
	virtual void Render(HDC _hDC) override;
	virtual void Release() override;
	virtual void DiagramDraw(HDC _hDC, float _posX, float _posY, float _sizeX, float _sizeY) override;

};
