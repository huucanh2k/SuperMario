#pragma once

#include "GameObject.h"
#include "Animation.h"
#include "Animations.h"

#define ID_ANI_PLANT_RED 301
#define PLANT_RED_WIDTH 16
#define PLANT_RED_BBOX_WIDTH 16
#define PLANT_RED_BBOX_HEIGHT 16

class CPlantRed : public CGameObject {
public:
	CPlantRed(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt) {}
	void GetBoundingBox(float& l, float& t, float& r, float& b);
};