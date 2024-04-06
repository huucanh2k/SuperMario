#include "PlantRed.h"

void CPlantRed::Render()
{
	CAnimations* animations = CAnimations::GetInstance();
	animations->Get(ID_ANI_PLANT_RED)->Render(x, y);
	//RenderBoundingBox();
}

void CPlantRed::GetBoundingBox(float& l, float& t, float& r, float& b)
{
	l = x - PLANT_RED_BBOX_WIDTH / 2;
	t = y - PLANT_RED_BBOX_HEIGHT / 2;
	r = l + PLANT_RED_BBOX_WIDTH;
	b = t + PLANT_RED_BBOX_HEIGHT;
}