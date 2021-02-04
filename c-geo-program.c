#include<stdio.h>

struct GeoObject {
	enum {CIR = 0, REC,TRG } gCode;
	union {
		struct Cir {double x,y,r;} c;
		struct Rec {double x,y,w,h;} r;
		struct Trg {double x,y,b,h; } t;
	};

};
typedef void (*DrawFunc) (struct GeoObject);
void drawCir(struct GeoObject go) {
	printf("Circle : (%lf, %lf, %lf)\n",go.c.x,go.c.y,go.c.r) ;}

void drawRec(struct GeoObject go)
{
	printf("Rect: (%lf,%lf,%lf,%lf)\n",go.r.x,go.r.y,go.r.w,go.r.h);
}
void drawTrg(struct GeoObject go)
{
	printf("Triag: (%lf,%lf,%lf,%lf)\n",go.t.x,go.t.y,go.t.b,go.t.h);
}

DrawFunc DrawArr[] = { //array of func. ptrs
	drawCir, drawRec, drawTrg };

int main() {
	struct GeoObject go;
	go.gCode=CIR;
	go.c.x = 2.3; go.c.y = 3.6;
	go.c.r = 1.2;
	DrawArr[go.gCode](go); //call by ptr

	go.gCode = REC;
	go.r.x = 4.5; go.r.y = 1.9;
	go.r.w = 4.2; go.r.h = 3.8;
	DrawArr[go.gCode](go); //call by ptr

	go.gCode= TRG;
	go.t.x = 3.1; go.t.y = 2.8;
	go.t.b = 4.4; go.t.h = 2.7;
	DrawArr[go.gCode](go); //call by ptr

	return 0;
}
