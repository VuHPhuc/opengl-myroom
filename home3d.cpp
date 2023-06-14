#include <glut.h>
#include "imageloader.h"
#include "texturemodel.h"
#include "model.h"
#include <math.h>

namespace h3d {
	Model name;
	GLuint _textureBricks, _texture4buctuong, _texturetrannha, _texturesannha, _texturecanhcua, _texturecuaso1, _textureban1, _textureban2, _texturechanban1, _texturechanban2,
		_texturechanghe1, _texturechanghe2, _texturetrucghe, _texturechongoi, _texturetualung, _texturetualung1, _texturetualung2, _textureketay, _texturetudo,_texturemattudo, 
		_texturetugiay, _texturemattugiay, _texturetuthap, _texturemattuthap, _texturedieuhoa, _texturematdieuhoa, _texturegiuong, _texturedem, _texturebedhead, _texturedaugiuong, 
		_texturegoi, _texturemanhinh1, _texturemanhinh2, _texturehinh1, _texturehinh2, _texturedoman1, _texturedoman2, _texturetaydo1, _texturetaydo2, _texturetrucdo1, _texturetrucdo2, 
		_texturepc2, _texturebanphimpc, _texturematbanphimpc, _texturechuotpc, _texturematchuotpc, _texturelaptop1,_texturelaptop2, _texturemanhinhlaptop, _texturebanphimlaptop, 
		_textureloa, _texturematloa, _texturetranh1, _texturetranh2, _texturetranh3, _texturetranh4, _texturetranh5;

	TextureModel tuong, trannha, sannha, canhcua, cuaso, ban1, ban2, chanban1, chanban2, changhe1, changhe2, trucghe, chongoi, tualung, tualung1, tualung2, ketay,tudo, mattudo, tugiay,
		mattugiay, tuthap, mattuthap, dieuhoa, matdieuhoa, giuong, dem, daugiuong, goi, manhinh1, manhinh2, hinh1, hinh2, doman1, doman2, taydo1, taydo2, trucdo1, trucdo2, pc1, pc2, 
		banphimpc, matbanphimpc, chuotpc, matchuotpc, laptop1, laptop2, manhinhlaptop, banphimlaptop, loa, matloa, tranh1, tranh2, tranh3, tranh4, tranh5;

	Vector3 tuong_t, trannha_t, sannha_t, canhcua_t, cuaso_t1, cuaso_t2, ban1_t, ban2_t, chanban1_t1, chanban1_t2, chanban2_t, changhe1_t, changhe2_t, trucghe_t, chongoi_t,tualung_t,
		tualung1_t, tualung2_t, ketay_t1, ketay_t2, tudo_t, mattudo_t, tugiay_t, mattugiay_t, tuthap_t, mattuthap_t, dieuhoa_t, matdieuhoa_t, giuong_t, dem_t, daugiuong_t, goi_t1, 
		goi_t2, manhinh1_t, manhinh2_t, hinh1_t, hinh2_t, doman1_t, doman2_t, taydo1_t, taydo2_t, trucdo1_t, trucdo2_t, pc1_t,	pc2_t, banphimpc_t, matbanphimpc_t, chuotpc_t, 
		matchuotpc_t, laptop1_t, laptop2_t, manhinhlaptop_t, banphimlaptop_t, loa_t1, loa_t2, matloa_t1, matloa_t2, tranh1_t, tranh2_t, tranh3_t, tranh4_t, tranh5_t;

	float lx = 0.0f, lz = 0.0f;
	float x = 0.0f, z = 0.0f;
	float angle = -1.5f;
	float speed = 0.1f;
	float heightAngle = 0;
	float height_view = -1;

	void draw(TextureModel* m, Vector3 t) {
		glPushMatrix();
		glTranslatef(t.x, t.y, t.z);
		m->draw();
		glPopMatrix();
	}

	void maketuong() {

		tuong.clear();
		tuong.setTextureFromBMP("data/tuong.bmp");

		tuong.addVertex(point3( -3, -1.5, -2.5)); //0
		tuong.addVertex(point3(  3, -1.5, -2.5)); //1
		tuong.addVertex(point3( -3,    1, -2.5)); //2
		tuong.addVertex(point3(  3,    1, -2.5)); //3

		tuong.addVertex(point3( -3, -1.5,  2.5)); //4
		tuong.addVertex(point3(  3, -1.5,  2.5)); //5
		tuong.addVertex(point3( -3,    1,  2.5)); //6
		tuong.addVertex(point3(  3,    1,  2.5)); //7

		tuong.addQuad(quadIndex(2, 3, 1, 0, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		tuong.addQuad(quadIndex(6, 7, 5, 4, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		tuong.addQuad(quadIndex(2, 6, 4, 0, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		tuong.addQuad(quadIndex(3, 7, 5, 1, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		//tuong.addQuad(quadIndex(2, 3, 7, 6, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		//tuong.addQuad(quadIndex(0, 1, 5, 4, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));

		tuong_t = point3( 0, 0, 0);
	}
	void maketrannha() {

		trannha.clear();
		trannha.setTextureFromBMP("data/trannha.bmp");

		trannha.addVertex(point3( -3, -1.5, -2.5)); //0
		trannha.addVertex(point3(  3, -1.5, -2.5)); //1
		trannha.addVertex(point3( -3,    1, -2.5)); //2
		trannha.addVertex(point3(  3,    1, -2.5)); //3

		trannha.addVertex(point3( -3, -1.5,  2.5)); //4
		trannha.addVertex(point3(  3, -1.5,  2.5)); //5
		trannha.addVertex(point3( -3,    1,  2.5)); //6
		trannha.addVertex(point3(  3,    1,  2.5)); //7

		trannha.addQuad(quadIndex(2, 3, 7, 6, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));

		trannha_t = point3(0, 0, 0);
	}
	void makesannha() {

		sannha.clear();
		sannha.setTextureFromBMP("data/sannha.bmp");

		sannha.addVertex(point3( -3, -1.5, -2.5)); //0
		sannha.addVertex(point3(  3, -1.5, -2.5)); //1
		sannha.addVertex(point3( -3,    1, -2.5)); //2
		sannha.addVertex(point3(  3,    1, -2.5)); //3

		sannha.addVertex(point3( -3, -1.5,  2.5)); //4
		sannha.addVertex(point3(  3, -1.5,  2.5)); //5
		sannha.addVertex(point3( -3,    1,  2.5)); //6
		sannha.addVertex(point3(  3,    1,  2.5)); //7

		sannha.addQuad(quadIndex(0, 1, 5, 4, texCoord2(0, 10), texCoord2(10, 10), texCoord2(10, 0), texCoord2(0, 0)));

		sannha_t = point3(0, 0, 0);
	}

	void makecanhcua() {

		canhcua.clear();
		canhcua.setTextureFromBMP("data/canhcua.bmp");

		canhcua.addVertex(point3( 0, -1.49, 0)); //0
		canhcua.addVertex(point3( 1, -1.49, 0)); //1
		canhcua.addVertex(point3( 1, -1.49, 1)); //2
		canhcua.addVertex(point3( 0, -1.49, 1)); //3

		canhcua.addVertex(point3( 0, 0.2, 0)); //4
		canhcua.addVertex(point3( 1, 0.2, 0)); //5
		canhcua.addVertex(point3( 1, 0.2, 1)); //6
		canhcua.addVertex(point3( 0, 0.2, 1)); //7

		canhcua.addQuad(quadIndex(7, 4, 0, 3, 
		texCoord2(0, 1), texCoord2(1, 1), 
		texCoord2(1, 0), texCoord2(0, 0)));

		canhcua_t = point3(-2.9999, 0.0001, 0.8);
	}
	void makecuaso() {

		cuaso.clear();
		cuaso.setTextureFromBMP("data/cuaso.bmp");

		cuaso.addVertex(point3(   0, -1.5,   0)); //0
		cuaso.addVertex(point3( 1.1, -1.5,   0)); //1
		cuaso.addVertex(point3( 1.1, -1.5, 0.5)); //2
		cuaso.addVertex(point3(   0, -1.5, 0.5)); //3

		cuaso.addVertex(point3(   0, -0.6,   0)); //4
		cuaso.addVertex(point3( 1.1, -0.6,   0)); //5
		cuaso.addVertex(point3( 1.1, -0.6, 0.5)); //6
		cuaso.addVertex(point3(   0, -0.6, 0.5)); //7

		//cuaso.addQuad(quadIndex(4, 5, 1, 0, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		//cuaso.addQuad(quadIndex(5, 6, 2, 1, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		cuaso.addQuad(quadIndex(6, 7, 3, 2, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		//cuaso.addQuad(quadIndex(7, 4, 0, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		//cuaso.addQuad(quadIndex(4, 5, 6, 7, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		//cuaso.addQuad(quadIndex(0, 1, 2, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));

		cuaso_t1 = point3(-1.65, 0.8, -2.9999);
		cuaso_t2 = point3(-1.55, 0.8, 1.9999);
	}

	void makeban1() {

		ban1.clear();
		ban1.setTextureFromBMP("data/go.bmp");
		   
		ban1.addVertex(point3(   0, -1.45,   0)); //0
		ban1.addVertex(point3( 1.2, -1.45,   0)); //1
		ban1.addVertex(point3( 1.2, -1.45, 0.7)); //2
		ban1.addVertex(point3(   0, -1.45, 0.7)); //3
		   
		ban1.addVertex(point3(   0, -1.4,   0)); //4
		ban1.addVertex(point3( 1.2, -1.4,   0)); //5
		ban1.addVertex(point3( 1.2, -1.4, 0.7)); //6
		ban1.addVertex(point3(   0, -1.4, 0.7)); //7
		   
		ban1.addQuad(quadIndex(4, 5, 1, 0, texCoord2(0, 4), texCoord2(4, 4), texCoord2(4, 0), texCoord2(0, 0)));
		ban1.addQuad(quadIndex(5, 6, 2, 1, texCoord2(0, 4), texCoord2(4, 4), texCoord2(4, 0), texCoord2(0, 0)));
		ban1.addQuad(quadIndex(6, 7, 3, 2, texCoord2(0, 4), texCoord2(4, 4), texCoord2(4, 0), texCoord2(0, 0)));
		ban1.addQuad(quadIndex(7, 4, 0, 3, texCoord2(0, 4), texCoord2(4, 4), texCoord2(4, 0), texCoord2(0, 0)));
		ban1.addQuad(quadIndex(4, 5, 6, 7, texCoord2(0, 4), texCoord2(4, 4), texCoord2(4, 0), texCoord2(0, 0)));
		ban1.addQuad(quadIndex(0, 1, 2, 3, texCoord2(0, 4), texCoord2(4, 4), texCoord2(4, 0), texCoord2(0, 0)));
		   
		ban1_t = point3(-2.9999, 0.5, -2.4999);
	}
	void makeban2() {

		ban2.clear();
		ban2.setTextureFromBMP("data/go.bmp");
		   
		ban2.addVertex(point3(   0, -1.45, 0)); //0
		ban2.addVertex(point3( 0.7, -1.45, 0)); //1
		ban2.addVertex(point3( 0.7, -1.45, 2)); //2
		ban2.addVertex(point3(   0, -1.45, 2)); //3
		   
		ban2.addVertex(point3(   0, -1.4, 0)); //4
		ban2.addVertex(point3( 0.7, -1.4, 0)); //5
		ban2.addVertex(point3( 0.7, -1.4, 2)); //6
		ban2.addVertex(point3(   0, -1.4, 2)); //7
		   
		ban2.addQuad(quadIndex(4, 5, 1, 0, texCoord2(0, 4), texCoord2(4, 4), texCoord2(4, 0), texCoord2(0, 0)));
		ban2.addQuad(quadIndex(5, 6, 2, 1, texCoord2(0, 4), texCoord2(4, 4), texCoord2(4, 0), texCoord2(0, 0)));
		ban2.addQuad(quadIndex(6, 7, 3, 2, texCoord2(0, 4), texCoord2(4, 4), texCoord2(4, 0), texCoord2(0, 0)));
		ban2.addQuad(quadIndex(7, 4, 0, 3, texCoord2(0, 4), texCoord2(4, 4), texCoord2(4, 0), texCoord2(0, 0)));
		ban2.addQuad(quadIndex(5, 6, 7, 4, texCoord2(0, 6), texCoord2(6, 6), texCoord2(6, 0), texCoord2(0, 0)));
		ban2.addQuad(quadIndex(0, 1, 2, 3, texCoord2(0, 4), texCoord2(4, 4), texCoord2(4, 0), texCoord2(0, 0)));
		   
		ban2_t = point3(-2.9999, 0.5, -1.8);
	}

	void makechanban1() {

		chanban1.clear();
		chanban1.setTextureFromBMP("data/den.bmp");

		chanban1.addVertex(point3(   0, -1.45,    0)); //0
		chanban1.addVertex(point3( 0.5, -1.45,    0)); //1
		chanban1.addVertex(point3( 0.5, -1.45, 0.05)); //2
		chanban1.addVertex(point3(   0, -1.45, 0.05)); //3

		chanban1.addVertex(point3(   0, -1.4,    0)); //4
		chanban1.addVertex(point3( 0.5, -1.4,    0)); //5
		chanban1.addVertex(point3( 0.5, -1.4, 0.05)); //6
		chanban1.addVertex(point3(   0, -1.4, 0.05)); //7

		chanban1.addQuad(quadIndex(4, 5, 1, 0, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		chanban1.addQuad(quadIndex(5, 6, 2, 1, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		chanban1.addQuad(quadIndex(6, 7, 3, 2, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		chanban1.addQuad(quadIndex(7, 4, 0, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		chanban1.addQuad(quadIndex(4, 5, 6, 7, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		chanban1.addQuad(quadIndex(0, 1, 2, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));

		chanban1_t1 = point3(-2.9999, 0.45, -1.8);
		chanban1_t2 = point3(-2.9999, 0.45, 0.15);

	}
	void makechanban2() {

		chanban2.clear();
		chanban2.setTextureFromBMP("data/den.bmp");

		chanban2.addVertex(point3(    0, -1.45,   0)); //0
		chanban2.addVertex(point3( 0.05, -1.45,   0)); //1
		chanban2.addVertex(point3( 0.05, -1.45, 0.5)); //2
		chanban2.addVertex(point3(    0, -1.45, 0.5)); //3

		chanban2.addVertex(point3(    0, -1.4,   0)); //4
		chanban2.addVertex(point3( 0.05, -1.4,   0)); //5
		chanban2.addVertex(point3( 0.05, -1.4, 0.5)); //6
		chanban2.addVertex(point3(    0, -1.4, 0.5)); //7

		chanban2.addQuad(quadIndex(4, 5, 1, 0, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		chanban2.addQuad(quadIndex(5, 6, 2, 1, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		chanban2.addQuad(quadIndex(6, 7, 3, 2, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		chanban2.addQuad(quadIndex(7, 4, 0, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		chanban2.addQuad(quadIndex(4, 5, 6, 7, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		chanban2.addQuad(quadIndex(0, 1, 2, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));

		chanban2_t = point3(-1.85, 0.45, -2.4999);
	}

	void makechanghe1() {

		changhe1.clear();
		changhe1.setTextureFromBMP("data/den.bmp");
			   
		changhe1.addVertex(point3( -0.2, -1.5, -0.01)); //0
		changhe1.addVertex(point3(  0.2, -1.5, -0.01)); //1
		changhe1.addVertex(point3(  0.2, -1.5,  0.01)); //2
		changhe1.addVertex(point3( -0.2, -1.5,  0.01)); //3
			   
		changhe1.addVertex(point3( -0.2, -1.48, -0.01)); //4
		changhe1.addVertex(point3(  0.2, -1.48, -0.01)); //5
		changhe1.addVertex(point3(  0.2, -1.48,  0.01)); //6
		changhe1.addVertex(point3( -0.2, -1.48,  0.01)); //7
			   
		changhe1.addQuad(quadIndex(4, 5, 1, 0, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		changhe1.addQuad(quadIndex(5, 6, 2, 1, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		changhe1.addQuad(quadIndex(6, 7, 3, 2, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		changhe1.addQuad(quadIndex(7, 4, 0, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		changhe1.addQuad(quadIndex(4, 5, 6, 7, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		changhe1.addQuad(quadIndex(0, 1, 2, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
			   
		changhe1_t = point3(-2, 0, -1);
	}
	void makechanghe2() {

		changhe2.clear();
		changhe2.setTextureFromBMP("data/den.bmp");
			   
		changhe2.addVertex(point3( -0.01, -1.5, -0.2)); //0
		changhe2.addVertex(point3( -0.01, -1.5,  0.2)); //1
		changhe2.addVertex(point3(  0.01, -1.5,  0.2)); //2
		changhe2.addVertex(point3(  0.01, -1.5, -0.2)); //3
			   
		changhe2.addVertex(point3( -0.01, -1.48, -0.2)); //4
		changhe2.addVertex(point3( -0.01, -1.48,  0.2)); //5
		changhe2.addVertex(point3(  0.01, -1.48,  0.2)); //6
		changhe2.addVertex(point3(  0.01, -1.48, -0.2)); //7
			   
		changhe2.addQuad(quadIndex(4, 5, 1, 0, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		changhe2.addQuad(quadIndex(5, 6, 2, 1, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		changhe2.addQuad(quadIndex(6, 7, 3, 2, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		changhe2.addQuad(quadIndex(7, 4, 0, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		changhe2.addQuad(quadIndex(4, 5, 6, 7, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		changhe2.addQuad(quadIndex(0, 1, 2, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
			   
		changhe2_t = point3(-2, 0, -1);
	}

	void maketrucghe() {

		trucghe.clear();
		trucghe.setTextureFromBMP("data/den.bmp");

		trucghe.addVertex(point3( -0.02, -1.5, -0.02)); //0
		trucghe.addVertex(point3( -0.02, -1.5,  0.02)); //1
		trucghe.addVertex(point3(  0.02, -1.5,  0.02)); //2
		trucghe.addVertex(point3(  0.02, -1.5, -0.02)); //3

		trucghe.addVertex(point3( -0.02, -1.1, -0.02)); //4
		trucghe.addVertex(point3( -0.02, -1.1,  0.02)); //5
		trucghe.addVertex(point3(  0.02, -1.1,  0.02)); //6
		trucghe.addVertex(point3(  0.02, -1.1, -0.02)); //7

		trucghe.addQuad(quadIndex(4, 5, 1, 0, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		trucghe.addQuad(quadIndex(5, 6, 2, 1, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		trucghe.addQuad(quadIndex(6, 7, 3, 2, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		trucghe.addQuad(quadIndex(7, 4, 0, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		trucghe.addQuad(quadIndex(4, 5, 6, 7, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		trucghe.addQuad(quadIndex(0, 1, 2, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));

		trucghe_t = point3(-2, 0, -1);
	}
	void makechongoi() {

		chongoi.clear();
		chongoi.setTextureFromBMP("data/den.bmp");

		chongoi.addVertex(point3( -0.15, -1.1, -0.15)); //0
		chongoi.addVertex(point3( -0.15, -1.1,  0.15)); //1
		chongoi.addVertex(point3(  0.15, -1.1,  0.15)); //2
		chongoi.addVertex(point3(  0.15, -1.1, -0.15)); //3

		chongoi.addVertex(point3( -0.15, -1.05, -0.15)); //4
		chongoi.addVertex(point3( -0.15, -1.05,  0.15)); //5
		chongoi.addVertex(point3(  0.15, -1.05,  0.15)); //6
		chongoi.addVertex(point3(  0.15, -1.05, -0.15)); //7

		chongoi.addQuad(quadIndex(4, 5, 1, 0, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		chongoi.addQuad(quadIndex(5, 6, 2, 1, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		chongoi.addQuad(quadIndex(6, 7, 3, 2, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		chongoi.addQuad(quadIndex(7, 4, 0, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		chongoi.addQuad(quadIndex(4, 5, 6, 7, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		chongoi.addQuad(quadIndex(0, 1, 2, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));

		chongoi_t = point3(-2, 0, -1);
	}
	void maketualung() {

		tualung.clear();
		tualung.setTextureFromBMP("data/den.bmp");

		tualung.addVertex(point3( 0.125, -1.05, -0.15)); //0
		tualung.addVertex(point3(  0.15, -1.05, -0.15)); //1
		tualung.addVertex(point3(  0.15, -1.05,  0.15)); //2
		tualung.addVertex(point3( 0.125, -1.05,  0.15)); //3

		tualung.addVertex(point3( 0.175, -0.55, -0.15)); //4
		tualung.addVertex(point3(   0.2, -0.55, -0.15)); //5
		tualung.addVertex(point3(   0.2, -0.55,  0.15)); //6
		tualung.addVertex(point3( 0.175, -0.55,  0.15)); //7

		tualung.addQuad(quadIndex(4, 5, 1, 0, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		//tualung.addQuad(quadIndex(5, 6, 2, 1, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		tualung.addQuad(quadIndex(6, 7, 3, 2, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		//tualung.addQuad(quadIndex(7, 4, 0, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		tualung.addQuad(quadIndex(4, 5, 6, 7, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		tualung.addQuad(quadIndex(0, 1, 2, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));

		tualung_t = point3(-2, 0, -1);
	}

	void maketualung1() {

		tualung1.clear();
		tualung1.setTextureFromBMP("data/tualung.bmp");
	
		tualung1.addVertex(point3( 0.125, -1.05, -0.15)); //0
		tualung1.addVertex(point3(  0.15, -1.05, -0.15)); //1
		tualung1.addVertex(point3(  0.15, -1.05,  0.15)); //2
		tualung1.addVertex(point3( 0.125, -1.05,  0.15)); //3
	
		tualung1.addVertex(point3( 0.175, -0.55, -0.15)); //4
		tualung1.addVertex(point3(   0.2, -0.55, -0.15)); //5
		tualung1.addVertex(point3(   0.2, -0.55,  0.15)); //6
		tualung1.addVertex(point3( 0.175, -0.55,  0.15)); //7

		//tualung1.addQuad(quadIndex(4, 5, 1, 0, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		tualung1.addQuad(quadIndex(6, 5, 1, 2, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		//tualung1.addQuad(quadIndex(6, 7, 3, 2, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		//tualung1.addQuad(quadIndex(7, 4, 0, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		//tualung1.addQuad(quadIndex(4, 5, 6, 7, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		//tualung1.addQuad(quadIndex(0, 1, 2, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));

		tualung1_t = point3(-2, 0, -1);
	}
	void maketualung2() {

		tualung2.clear();
		tualung2.setTextureFromBMP("data/den.bmp");
	
		tualung2.addVertex(point3( 0.125, -1.05, -0.15)); //0
		tualung2.addVertex(point3(  0.15, -1.05, -0.15)); //1
		tualung2.addVertex(point3(  0.15, -1.05,  0.15)); //2
		tualung2.addVertex(point3( 0.125, -1.05,  0.15)); //3
		
		tualung2.addVertex(point3( 0.175, -0.55, -0.15)); //4
		tualung2.addVertex(point3(   0.2, -0.55, -0.15)); //5
		tualung2.addVertex(point3(   0.2, -0.55,  0.15)); //6
		tualung2.addVertex(point3( 0.175, -0.55,  0.15)); //7

		//tualung2.addQuad(quadIndex(4, 5, 1, 0, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		//tualung2.addQuad(quadIndex(5, 6, 2, 1, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		//tualung2.addQuad(quadIndex(6, 7, 3, 2, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		tualung2.addQuad(quadIndex(4, 7, 3, 0, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		//tualung2.addQuad(quadIndex(4, 5, 6, 7, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		//tualung2.addQuad(quadIndex(0, 1, 2, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));

		tualung2_t = point3(-2, 0, -1);
	}

	void makeketay() {

		ketay.clear();
		ketay.setTextureFromBMP("data/ghi.bmp");

		ketay.addVertex(point3( -0.025, -0.85, -0.175)); //0
		ketay.addVertex(point3(   0.17, -0.85, -0.175)); //1
		ketay.addVertex(point3(   0.17, -0.85,  -0.15)); //2
		ketay.addVertex(point3( -0.025, -0.85,  -0.15)); //3

		ketay.addVertex(point3( -0.05, -0.825, -0.175)); //4
		ketay.addVertex(point3(  0.17, -0.825, -0.175)); //5
		ketay.addVertex(point3(  0.17, -0.825,  -0.15)); //6
		ketay.addVertex(point3( -0.05, -0.825,  -0.15)); //7

		ketay.addQuad(quadIndex(4, 5, 1, 0, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		ketay.addQuad(quadIndex(5, 6, 2, 1, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		ketay.addQuad(quadIndex(6, 7, 3, 2, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		ketay.addQuad(quadIndex(7, 4, 0, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		ketay.addQuad(quadIndex(4, 5, 6, 7, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		ketay.addQuad(quadIndex(0, 1, 2, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));

		ketay_t1 = point3(-2, 0, -1);
		ketay_t2 = point3(-2, 0, -0.675);
	}

	void maketudo() {

		tudo.clear();
		tudo.setTextureFromBMP("data/tudo.bmp");

		tudo.addVertex(point3( 0, -1.5,   0)); //0
		tudo.addVertex(point3( 3, -1.5,   0)); //1
		tudo.addVertex(point3( 3, -1.5, 0.5)); //2
		tudo.addVertex(point3( 0, -1.5, 0.5)); //3

		tudo.addVertex(point3( 0, 0.5,   0)); //4
		tudo.addVertex(point3( 3, 0.5,   0)); //5
		tudo.addVertex(point3( 3, 0.5, 0.5)); //6
		tudo.addVertex(point3( 0, 0.5, 0.5)); //7

		//tudo.addQuad(quadIndex(4, 5, 1, 0, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		tudo.addQuad(quadIndex(5, 6, 2, 1, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		tudo.addQuad(quadIndex(6, 7, 3, 2, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		tudo.addQuad(quadIndex(7, 4, 0, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		tudo.addQuad(quadIndex(4, 5, 6, 7, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		tudo.addQuad(quadIndex(0, 1, 2, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));

		tudo_t = point3( -0.0001, 0.0001, 1.9999);
	}
	void makemattudo() {

		mattudo.clear();
		mattudo.setTextureFromBMP("data/mattu1.bmp");

		mattudo.addVertex(point3( 0, -1.5,   0)); //0
		mattudo.addVertex(point3( 3, -1.5,   0)); //1
		mattudo.addVertex(point3( 3, -1.5, 0.5)); //2
		mattudo.addVertex(point3( 0, -1.5, 0.5)); //3

		mattudo.addVertex(point3( 0, 0.5,   0)); //4
		mattudo.addVertex(point3( 3, 0.5,   0)); //5
		mattudo.addVertex(point3( 3, 0.5, 0.5)); //6
		mattudo.addVertex(point3( 0, 0.5, 0.5)); //7

		mattudo.addQuad(quadIndex(4, 5, 1, 0, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));

		mattudo_t = point3( -0.0001, 0.0001, 1.9999);
	}

	void maketugiay() {

		tugiay.clear();
		tugiay.setTextureFromBMP("data/go.bmp");

		tugiay.addVertex(point3( 0, -1.5,   0)); //0
		tugiay.addVertex(point3( 1, -1.5,   0)); //1
		tugiay.addVertex(point3( 1, -1.5, 0.3)); //2
		tugiay.addVertex(point3( 0, -1.5, 0.3)); //3

		tugiay.addVertex(point3( 0, -0.7,   0)); //4
		tugiay.addVertex(point3( 1, -0.7,   0)); //5
		tugiay.addVertex(point3( 1, -0.7, 0.3)); //6
		tugiay.addVertex(point3( 0, -0.7, 0.3)); //7

		//tugiay.addQuad(quadIndex(4, 5, 1, 0, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		tugiay.addQuad(quadIndex(6, 2, 1, 5, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		tugiay.addQuad(quadIndex(6, 7, 3, 2, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		tugiay.addQuad(quadIndex(7, 4, 0, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		tugiay.addQuad(quadIndex(4, 5, 6, 7, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		tugiay.addQuad(quadIndex(0, 1, 2, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));

		tugiay_t = point3( -2.9999, 0.0001, 2.1999);
	}
	void makemattugiay() {

		mattugiay.clear();
		mattugiay.setTextureFromBMP("data/tugiay.bmp");

		mattugiay.addVertex(point3( 0, -1.5,   0)); //0
		mattugiay.addVertex(point3( 1, -1.5,   0)); //1
		mattugiay.addVertex(point3( 1, -1.5, 0.3)); //2
		mattugiay.addVertex(point3( 0, -1.5, 0.3)); //3

		mattugiay.addVertex(point3( 0, -0.7,   0)); //4
		mattugiay.addVertex(point3( 1, -0.7,   0)); //5
		mattugiay.addVertex(point3( 1, -0.7, 0.3)); //6
		mattugiay.addVertex(point3( 0, -0.7, 0.3)); //7

		mattugiay.addQuad(quadIndex(5, 4, 0, 1, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		//mattugiay.addQuad(quadIndex(5, 6, 2, 1, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		//mattugiay.addQuad(quadIndex(6, 7, 3, 2, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		//mattugiay.addQuad(quadIndex(7, 4, 0, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		//mattugiay.addQuad(quadIndex(4, 5, 6, 7, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		//mattugiay.addQuad(quadIndex(0, 1, 2, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));

		mattugiay_t = point3( -2.9999, 0.0001, 2.1999);
	}

	void maketuthap() {

		tuthap.clear();
		tuthap.setTextureFromBMP("data/go.bmp");

		tuthap.addVertex(point3(   0, -1.5, 0)); //0
		tuthap.addVertex(point3( 0.4, -1.5, 0)); //1
		tuthap.addVertex(point3( 0.4, -1.5, 1)); //2
		tuthap.addVertex(point3(   0, -1.5, 1)); //3

		tuthap.addVertex(point3(   0, -0.9, 0)); //4
		tuthap.addVertex(point3( 0.4, -0.9, 0)); //5
		tuthap.addVertex(point3( 0.4, -0.9, 1)); //6
		tuthap.addVertex(point3(   0, -0.9, 1)); //7

		tuthap.addQuad(quadIndex(5, 1, 4, 0, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		tuthap.addQuad(quadIndex(5, 6, 2, 1, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		tuthap.addQuad(quadIndex(7, 3, 2, 6, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		//tuthap.addQuad(quadIndex(7, 4, 0, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		tuthap.addQuad(quadIndex(5, 6, 7, 4, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		tuthap.addQuad(quadIndex(0, 1, 2, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));

		tuthap_t = point3( 2.5999, 0.0001, 0.1);
	}
	void makemattuthap() {

		mattuthap.clear();
		mattuthap.setTextureFromBMP("data/tuthap.bmp");

		mattuthap.addVertex(point3(   0, -1.5, 0)); //0
		mattuthap.addVertex(point3( 0.4, -1.5, 0)); //1
		mattuthap.addVertex(point3( 0.4, -1.5, 1)); //2
		mattuthap.addVertex(point3(   0, -1.5, 1)); //3

		mattuthap.addVertex(point3(   0, -0.9, 0)); //4
		mattuthap.addVertex(point3( 0.4, -0.9, 0)); //5
		mattuthap.addVertex(point3( 0.4, -0.9, 1)); //6
		mattuthap.addVertex(point3(   0, -0.9, 1)); //7

		//mattuthap.addQuad(quadIndex(4, 5, 1, 0, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		//mattuthap.addQuad(quadIndex(5, 6, 2, 1, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		//mattuthap.addQuad(quadIndex(6, 7, 3, 2, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		mattuthap.addQuad(quadIndex(4, 7, 3, 0, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		//mattuthap.addQuad(quadIndex(4, 5, 6, 7, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		//mattuthap.addQuad(quadIndex(0, 1, 2, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));

		mattuthap_t = point3( 2.5999, 0.0001, 0.1);

	}

	void makedieuhoa() {

		dieuhoa.clear();
		dieuhoa.setTextureFromBMP("data/dh.bmp");

		dieuhoa.addVertex(point3( 0, -1.5,   0)); //0
		dieuhoa.addVertex(point3( 1, -1.5,   0)); //1
		dieuhoa.addVertex(point3( 1, -1.5, 0.2)); //2
		dieuhoa.addVertex(point3( 0, -1.5, 0.2)); //3

		dieuhoa.addVertex(point3( 0, -1.25,   0)); //4
		dieuhoa.addVertex(point3( 1, -1.25,   0)); //5
		dieuhoa.addVertex(point3( 1, -1.25, 0.2)); //6
		dieuhoa.addVertex(point3( 0, -1.25, 0.2)); //7

		dieuhoa.addQuad(quadIndex(4, 5, 1, 0, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		dieuhoa.addQuad(quadIndex(5, 6, 2, 1, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		//dieuhoa.addQuad(quadIndex(6, 7, 3, 2, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		dieuhoa.addQuad(quadIndex(7, 4, 0, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		dieuhoa.addQuad(quadIndex(4, 5, 6, 7, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		dieuhoa.addQuad(quadIndex(0, 1, 2, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));

		dieuhoa_t = point3( 0.7, 1.9, -2.4999);
	}
	void makematdieuhoa() {

		matdieuhoa.clear();
		matdieuhoa.setTextureFromBMP("data/dieuhoa.bmp");

		matdieuhoa.addVertex(point3( 0, -1.5,   0)); //0
		matdieuhoa.addVertex(point3( 1, -1.5,   0)); //1
		matdieuhoa.addVertex(point3( 1, -1.5, 0.2)); //2
		matdieuhoa.addVertex(point3( 0, -1.5, 0.2)); //3

		matdieuhoa.addVertex(point3( 0, -1.25,   0)); //4
		matdieuhoa.addVertex(point3( 1, -1.25,   0)); //5
		matdieuhoa.addVertex(point3( 1, -1.25, 0.2)); //6
		matdieuhoa.addVertex(point3( 0, -1.25, 0.2)); //7

		//matdieuhoa.addQuad(quadIndex(4, 5, 1, 0, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		//matdieuhoa.addQuad(quadIndex(5, 6, 2, 1, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		matdieuhoa.addQuad(quadIndex(6, 7, 3, 2, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		//matdieuhoa.addQuad(quadIndex(7, 4, 0, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		//matdieuhoa.addQuad(quadIndex(4, 5, 6, 7, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		//matdieuhoa.addQuad(quadIndex(0, 1, 2, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));

		matdieuhoa_t = point3( 0.7, 1.9, -2.4999);

	}

	void makegiuong() {

		giuong.clear();
		giuong.setTextureFromBMP("data/go.bmp");

		giuong.addVertex(point3(   0, -1.5,   0)); //0
		giuong.addVertex(point3( 3.2, -1.5,   0)); //1
		giuong.addVertex(point3( 3.2, -1.5, -2.5)); //2
		giuong.addVertex(point3(   0, -1.5, -2.5)); //3

		giuong.addVertex(point3(   0, -1.1,   0)); //4
		giuong.addVertex(point3( 3.2, -1.1,   0)); //5
		giuong.addVertex(point3( 3.2, -1.1, -2.5)); //6
		giuong.addVertex(point3(   0, -1.1, -2.5)); //7

		giuong.addQuad(quadIndex(4, 5, 1, 0, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		giuong.addQuad(quadIndex(5, 6, 2, 1, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		giuong.addQuad(quadIndex(6, 7, 3, 2, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		giuong.addQuad(quadIndex(7, 4, 0, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		giuong.addQuad(quadIndex(4, 5, 6, 7, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		giuong.addQuad(quadIndex(0, 1, 2, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));

		giuong_t = point3( -0.3999, 0, 0.001);
	}
	void makedem() {

		dem.clear();
		dem.setTextureFromBMP("data/ghi.bmp");

		dem.addVertex(point3(   0, -1.5,    0)); //0
		dem.addVertex(point3( 3.2, -1.5,    0)); //1
		dem.addVertex(point3( 3.2, -1.5, -2.5)); //2
		dem.addVertex(point3(   0, -1.5, -2.5)); //3

		dem.addVertex(point3(   0, -1.4,    0)); //4
		dem.addVertex(point3( 3.2, -1.4,    0)); //5
		dem.addVertex(point3( 3.2, -1.4, -2.5)); //6
		dem.addVertex(point3(   0, -1.4, -2.5)); //7

		dem.addQuad(quadIndex(4, 5, 1, 0, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		dem.addQuad(quadIndex(5, 6, 2, 1, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		dem.addQuad(quadIndex(6, 7, 3, 2, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		dem.addQuad(quadIndex(7, 4, 0, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		dem.addQuad(quadIndex(5, 6, 7, 4, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		dem.addQuad(quadIndex(0, 1, 2, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));

		dem_t = point3( -0.3999, 0.4, 0.001);
	}
	void makedaugiuong() {

		daugiuong.clear();
		daugiuong.setTextureFromBMP("data/go.bmp");

		daugiuong.addVertex(point3(   0, -1.5,    0)); //0
		daugiuong.addVertex(point3( 0.2, -1.5,    0)); //1
		daugiuong.addVertex(point3( 0.2, -1.5, -2.5)); //2
		daugiuong.addVertex(point3(   0, -1.5, -2.5)); //3

		daugiuong.addVertex(point3(   0, -0.5,    0)); //4
		daugiuong.addVertex(point3( 0.2, -0.5,    0)); //5
		daugiuong.addVertex(point3( 0.2, -0.5, -2.5)); //6
		daugiuong.addVertex(point3(   0, -0.5, -2.5)); //7

		daugiuong.addQuad(quadIndex(5, 1, 0, 4, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		daugiuong.addQuad(quadIndex(5, 6, 2, 1, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		daugiuong.addQuad(quadIndex(6, 7, 3, 2, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		daugiuong.addQuad(quadIndex(0, 3, 7, 4, texCoord2(0, 8), texCoord2(8, 8), texCoord2(8, 0), texCoord2(0, 0)));
		daugiuong.addQuad(quadIndex(4, 5, 6, 7, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		daugiuong.addQuad(quadIndex(0, 1, 2, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));

		daugiuong_t = point3( 2.7999, 0.001, 0.001);
	}
	void makegoi() {

		goi.clear();
		goi.setTextureFromBMP("data/goi.bmp");

		goi.addVertex(point3( 0.1, -1.5,   0)); //0
		goi.addVertex(point3( 0.6, -1.4,   0)); //1
		goi.addVertex(point3( 0.6, -1.4, 0.7)); //2
		goi.addVertex(point3( 0.1, -1.5, 0.7)); //3

		goi.addVertex(point3(   0, -1.35,   0)); //4
		goi.addVertex(point3( 0.5, -1.25,   0)); //5
		goi.addVertex(point3( 0.5, -1.25, 0.7)); //6
		goi.addVertex(point3(   0, -1.35, 0.7)); //7

		goi.addQuad(quadIndex(4, 5, 1, 0, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		goi.addQuad(quadIndex(5, 6, 2, 1, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		goi.addQuad(quadIndex(6, 7, 3, 2, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		goi.addQuad(quadIndex(7, 4, 0, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		goi.addQuad(quadIndex(4, 5, 6, 7, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		goi.addQuad(quadIndex(0, 1, 2, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));

		goi_t1 = point3(2.2, 0.5, -1.1);
		goi_t2 = point3(2.2, 0.5, -2.2);
	}

	void makemanhinh1() {

		manhinh1.clear();
		manhinh1.setTextureFromBMP("data/den.bmp");
			   
		manhinh1.addVertex(point3(    0, -1.5,   0)); //0
		manhinh1.addVertex(point3( 0.02, -1.5,   0)); //1
		manhinh1.addVertex(point3( 0.02, -1.5, 0.7)); //2
		manhinh1.addVertex(point3(    0, -1.5, 0.7)); //3
			   
		manhinh1.addVertex(point3(    0, -1.1,   0)); //4
		manhinh1.addVertex(point3( 0.02, -1.1,   0)); //5
		manhinh1.addVertex(point3( 0.02, -1.1, 0.7)); //6
		manhinh1.addVertex(point3(    0, -1.1, 0.7)); //7
			   
		manhinh1.addQuad(quadIndex(4, 5, 1, 0, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		manhinh1.addQuad(quadIndex(5, 6, 2, 1, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		manhinh1.addQuad(quadIndex(6, 7, 3, 2, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		manhinh1.addQuad(quadIndex(7, 4, 0, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		manhinh1.addQuad(quadIndex(4, 5, 6, 7, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		manhinh1.addQuad(quadIndex(0, 1, 2, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
			   
		manhinh1_t = point3(-2.8, 0.7, -1.35);

	}
	void makemanhinh2() {

		manhinh2.clear();
		manhinh2.setTextureFromBMP("data/den.bmp");
			   
		manhinh2.addVertex(point3(    0, -1.5,   0)); //0
		manhinh2.addVertex(point3( 0.02, -1.5,   0)); //1
		manhinh2.addVertex(point3( 0.08, -1.5, 0.4)); //2
		manhinh2.addVertex(point3( 0.06, -1.5, 0.4)); //3
			   
		manhinh2.addVertex(point3(    0, -1,   0)); //4
		manhinh2.addVertex(point3( 0.02, -1,   0)); //5
		manhinh2.addVertex(point3( 0.08, -1, 0.4)); //6
		manhinh2.addVertex(point3( 0.06, -1, 0.4)); //7
			   
		manhinh2.addQuad(quadIndex(4, 5, 1, 0, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		manhinh2.addQuad(quadIndex(5, 6, 2, 1, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		manhinh2.addQuad(quadIndex(6, 7, 3, 2, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		manhinh2.addQuad(quadIndex(7, 4, 0, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		manhinh2.addQuad(quadIndex(4, 5, 6, 7, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		manhinh2.addQuad(quadIndex(0, 1, 2, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
			   
		manhinh2_t = point3( -2.8, 0.7, -0.63);
	}
	void makehinh1() {

		hinh1.clear();
		hinh1.setTextureFromBMP("data/manhinh1.bmp");
			
		hinh1.addVertex(point3(    0, -1.5,    0)); //0
		hinh1.addVertex(point3( 0.02, -1.5,    0)); //1
		hinh1.addVertex(point3( 0.02, -1.5, 0.68)); //2
		hinh1.addVertex(point3(    0, -1.5, 0.68)); //3
			
		hinh1.addVertex(point3(    0, -1.12,    0)); //4
		hinh1.addVertex(point3( 0.02, -1.12,    0)); //5
		hinh1.addVertex(point3( 0.02, -1.12, 0.68)); //6
		hinh1.addVertex(point3(    0, -1.12, 0.68)); //7

		//hinh1.addQuad(quadIndex(4, 5, 1, 0, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		hinh1.addQuad(quadIndex(6, 5, 1, 2, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		//hinh1.addQuad(quadIndex(6, 7, 3, 2, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		//hinh1.addQuad(quadIndex(7, 4, 0, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		//hinh1.addQuad(quadIndex(4, 5, 6, 7, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		//hinh1.addQuad(quadIndex(0, 1, 2, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));

		hinh1_t = point3(-2.7999, 0.71, -1.34);
	}
	void makehinh2() {

		hinh2.clear();
		hinh2.setTextureFromBMP("data/hinh2.bmp");
			
		hinh2.addVertex(point3(    0, -1.5,    0)); //0
		hinh2.addVertex(point3( 0.02, -1.5,    0)); //1
		hinh2.addVertex(point3( 0.08, -1.5, 0.38)); //2
		hinh2.addVertex(point3( 0.06, -1.5, 0.38)); //3
			
		hinh2.addVertex(point3(    0, -1.02,    0)); //4
		hinh2.addVertex(point3( 0.02, -1.02,    0)); //5
		hinh2.addVertex(point3( 0.08, -1.02, 0.38)); //6
		hinh2.addVertex(point3( 0.06, -1.02, 0.38)); //7

		//hinh2.addQuad(quadIndex(4, 5, 1, 0, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		hinh2.addQuad(quadIndex(6, 5, 1, 2, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		//hinh2.addQuad(quadIndex(6, 7, 3, 2, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		//hinh2.addQuad(quadIndex(7, 4, 0, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		//hinh2.addQuad(quadIndex(4, 5, 6, 7, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		//hinh2.addQuad(quadIndex(0, 1, 2, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));

		hinh2_t = point3( -2.795, 0.71, -0.62);
	}

	void makedoman1() {

		doman1.clear();
		doman1.setTextureFromBMP("data/den.bmp");
			 
		doman1.addVertex(point3(    0, -1.5,   0)); //0
		doman1.addVertex(point3( 0.02, -1.5,   0)); //1
		doman1.addVertex(point3( 0.02, -1.5, 0.2)); //2
		doman1.addVertex(point3(    0, -1.5, 0.2)); //3
			 
		doman1.addVertex(point3(    0, -1.35,   0)); //4
		doman1.addVertex(point3( 0.02, -1.35,   0)); //5
		doman1.addVertex(point3( 0.02, -1.35, 0.2)); //6
		doman1.addVertex(point3(    0, -1.35, 0.2)); //7
			 
		doman1.addQuad(quadIndex(4, 5, 1, 0, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		doman1.addQuad(quadIndex(5, 6, 2, 1, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		doman1.addQuad(quadIndex(6, 7, 3, 2, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		doman1.addQuad(quadIndex(7, 4, 0, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		doman1.addQuad(quadIndex(4, 5, 6, 7, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		doman1.addQuad(quadIndex(0, 1, 2, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
			 
		doman1_t = point3( -2.82, 0.84, -1.1);
	}
	void makedoman2() {

		doman2.clear();
		doman2.setTextureFromBMP("data/den.bmp");
			 
		doman2.addVertex(point3(    0, -1.5,   0)); //0
		doman2.addVertex(point3( 0.02, -1.5,   0)); //1
		doman2.addVertex(point3( 0.05, -1.5, 0.2)); //2
		doman2.addVertex(point3( 0.03, -1.5, 0.2)); //3
			 
		doman2.addVertex(point3(    0, -1.35,   0)); //4
		doman2.addVertex(point3( 0.02, -1.35,   0)); //5
		doman2.addVertex(point3( 0.05, -1.35, 0.2)); //6
		doman2.addVertex(point3( 0.03, -1.35, 0.2)); //7
			 
		doman2.addQuad(quadIndex(4, 5, 1, 0, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		doman2.addQuad(quadIndex(5, 6, 2, 1, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		doman2.addQuad(quadIndex(6, 7, 3, 2, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		doman2.addQuad(quadIndex(7, 4, 0, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		doman2.addQuad(quadIndex(4, 5, 6, 7, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		doman2.addQuad(quadIndex(0, 1, 2, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
			 
		doman2_t = point3( -2.806, 0.84, -0.535);
	}

	void maketaydo1() {

		taydo1.clear();
		taydo1.setTextureFromBMP("data/den.bmp");

		taydo1.addVertex(point3(    0, -1.5,    0)); //0
		taydo1.addVertex(point3( 0.18, -1.5,    0)); //1
		taydo1.addVertex(point3( 0.18, -1.5, 0.06)); //2
		taydo1.addVertex(point3(    0, -1.5, 0.06)); //3

		taydo1.addVertex(point3(    0, -1.44,    0)); //4
		taydo1.addVertex(point3( 0.18, -1.44,    0)); //5
		taydo1.addVertex(point3( 0.18, -1.44, 0.06)); //6
		taydo1.addVertex(point3(    0, -1.44, 0.06)); //7

		taydo1.addQuad(quadIndex(4, 5, 1, 0, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		taydo1.addQuad(quadIndex(5, 6, 2, 1, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		taydo1.addQuad(quadIndex(6, 7, 3, 2, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		taydo1.addQuad(quadIndex(7, 4, 0, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		taydo1.addQuad(quadIndex(4, 5, 6, 7, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		taydo1.addQuad(quadIndex(0, 1, 2, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));

		taydo1_t = point3( -2.9999, 0.885, -1.02);
	}
	void maketaydo2() {

		taydo2.clear();
		taydo2.setTextureFromBMP("data/den.bmp");

		taydo2.addVertex(point3(     0, -1.5,    0)); //0
		taydo2.addVertex(point3( 0.205, -1.5,    0)); //1
		taydo2.addVertex(point3( 0.215, -1.5, 0.06)); //2
		taydo2.addVertex(point3(     0, -1.5, 0.06)); //3

		taydo2.addVertex(point3(     0, -1.44,    0)); //4
		taydo2.addVertex(point3( 0.205, -1.44,    0)); //5
		taydo2.addVertex(point3( 0.215, -1.44, 0.06)); //6
		taydo2.addVertex(point3(     0, -1.44, 0.06)); //7

		taydo2.addQuad(quadIndex(4, 5, 1, 0, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		taydo2.addQuad(quadIndex(5, 6, 2, 1, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		taydo2.addQuad(quadIndex(6, 7, 3, 2, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		taydo2.addQuad(quadIndex(7, 4, 0, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		taydo2.addQuad(quadIndex(4, 5, 6, 7, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		taydo2.addQuad(quadIndex(0, 1, 2, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));

		taydo2_t = point3( -2.9999, 0.885, -0.45);
	}

	void maketrucdo1() {

		trucdo1.clear();
		trucdo1.setTextureFromBMP("data/den.bmp");
			  
		trucdo1.addVertex(point3(    0, -1.5,   0)); //0
		trucdo1.addVertex(point3( 0.06, -1.5,   0)); //1
		trucdo1.addVertex(point3( 0.06, -1.5, 0.6)); //2
		trucdo1.addVertex(point3(    0, -1.5, 0.6)); //3
			  
		trucdo1.addVertex(point3(    0, -1.44,   0)); //4
		trucdo1.addVertex(point3( 0.06, -1.44,   0)); //5
		trucdo1.addVertex(point3( 0.06, -1.44, 0.6)); //6
		trucdo1.addVertex(point3(    0, -1.44, 0.6)); //7
			  
		trucdo1.addQuad(quadIndex(4, 5, 1, 0, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		trucdo1.addQuad(quadIndex(5, 6, 2, 1, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		trucdo1.addQuad(quadIndex(6, 7, 3, 2, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		trucdo1.addQuad(quadIndex(7, 4, 0, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		trucdo1.addQuad(quadIndex(4, 5, 6, 7, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		trucdo1.addQuad(quadIndex(0, 1, 2, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
			  
		trucdo1_t = point3( -2.9999, 0.885, -1.015);
	}
	void maketrucdo2() {

		trucdo2.clear();
		trucdo2.setTextureFromBMP("data/den.bmp");
			  
		trucdo2.addVertex(point3(    0, -1.5,    0)); //0
		trucdo2.addVertex(point3( 0.06, -1.5,    0)); //1
		trucdo2.addVertex(point3( 0.06, -1.5, 0.06)); //2
		trucdo2.addVertex(point3(    0, -1.5, 0.06)); //3
			  
		trucdo2.addVertex(point3(    0, -1.1,    0)); //4
		trucdo2.addVertex(point3( 0.06, -1.1,    0)); //5
		trucdo2.addVertex(point3( 0.06, -1.1, 0.06)); //6
		trucdo2.addVertex(point3(    0, -1.1, 0.06)); //7
			  
		trucdo2.addQuad(quadIndex(4, 5, 1, 0, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		trucdo2.addQuad(quadIndex(5, 6, 2, 1, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		trucdo2.addQuad(quadIndex(6, 7, 3, 2, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		trucdo2.addQuad(quadIndex(7, 4, 0, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		trucdo2.addQuad(quadIndex(4, 5, 6, 7, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		trucdo2.addQuad(quadIndex(0, 1, 2, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
			  
		trucdo2_t = point3( -2.9999, 0.6, -0.735);
	}

	void makepc1() {

		pc1.clear();
		pc1.setTextureFromBMP("data/ghi.bmp");

		pc1.addVertex(point3(    0, -1.5,    0)); //0
		pc1.addVertex(point3( 0.25, -1.5,    0)); //1
		pc1.addVertex(point3( 0.25, -1.5, 0.45)); //2
		pc1.addVertex(point3(    0, -1.5, 0.45)); //3

		pc1.addVertex(point3(    0, -1.1,    0)); //4
		pc1.addVertex(point3( 0.25, -1.1,    0)); //5
		pc1.addVertex(point3( 0.25, -1.1, 0.45)); //6
		pc1.addVertex(point3(    0, -1.1, 0.45)); //7

		pc1.addQuad(quadIndex(4, 5, 1, 0, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		//pc1.addQuad(quadIndex(5, 6, 2, 1, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		pc1.addQuad(quadIndex(6, 7, 3, 2, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		pc1.addQuad(quadIndex(7, 4, 0, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		pc1.addQuad(quadIndex(4, 5, 6, 7, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		pc1.addQuad(quadIndex(0, 1, 2, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));

		pc1_t = point3(-2.9999, 0.6, -1.9);
	}
	void makepc2() {

		pc2.clear();
		pc2.setTextureFromBMP("data/pc.bmp");

		pc2.addVertex(point3(    0, -1.5,    0)); //0
		pc2.addVertex(point3( 0.25, -1.5,    0)); //1
		pc2.addVertex(point3( 0.25, -1.5, 0.45)); //2
		pc2.addVertex(point3(    0, -1.5, 0.45)); //3

		pc2.addVertex(point3(    0, -1.1,    0)); //4
		pc2.addVertex(point3( 0.25, -1.1,    0)); //5
		pc2.addVertex(point3( 0.25, -1.1, 0.45)); //6
		pc2.addVertex(point3(    0, -1.1, 0.45)); //7

		//pc2.addQuad(quadIndex(4, 5, 1, 0, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		pc2.addQuad(quadIndex(6, 5, 1, 2, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		//pc2.addQuad(quadIndex(6, 7, 3, 2, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		//pc2.addQuad(quadIndex(7, 4, 0, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		//pc2.addQuad(quadIndex(4, 5, 6, 7, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		//pc2.addQuad(quadIndex(0, 1, 2, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));

		pc2_t = point3( -2.9999, 0.6, -1.9);
	}

	void makebanphimpc() {

		banphimpc.clear();
		banphimpc.setTextureFromBMP("data/den.bmp");

		banphimpc.addVertex(point3(   0, -1.5,   0)); //0
		banphimpc.addVertex(point3( 0.2, -1.5,   0)); //1
		banphimpc.addVertex(point3( 0.2, -1.5, 0.4)); //2
		banphimpc.addVertex(point3(   0, -1.5, 0.4)); //3

		banphimpc.addVertex(point3(   0, -1.48,   0)); //4
		banphimpc.addVertex(point3( 0.2, -1.48,   0)); //5
		banphimpc.addVertex(point3( 0.2, -1.48, 0.4)); //6
		banphimpc.addVertex(point3(   0, -1.48, 0.4)); //7

		banphimpc.addQuad(quadIndex(4, 5, 1, 0, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		banphimpc.addQuad(quadIndex(5, 6, 2, 1, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		banphimpc.addQuad(quadIndex(6, 7, 3, 2, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		banphimpc.addQuad(quadIndex(7, 4, 0, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		//banphimpc.addQuad(quadIndex(4, 5, 6, 7, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		banphimpc.addQuad(quadIndex(0, 1, 2, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));

		banphimpc_t = point3( -2.55, 0.6, -1.1);
	}
	void makematbanphimpc() {

		matbanphimpc.clear();
		matbanphimpc.setTextureFromBMP("data/banphimpc1.bmp");

		matbanphimpc.addVertex(point3(   0, -1.5,   0)); //0
		matbanphimpc.addVertex(point3( 0.2, -1.5,   0)); //1
		matbanphimpc.addVertex(point3( 0.2, -1.5, 0.4)); //2
		matbanphimpc.addVertex(point3(   0, -1.5, 0.4)); //3

		matbanphimpc.addVertex(point3(   0, -1.48,   0)); //4
		matbanphimpc.addVertex(point3( 0.2, -1.48,   0)); //5
		matbanphimpc.addVertex(point3( 0.2, -1.48, 0.4)); //6
		matbanphimpc.addVertex(point3(   0, -1.48, 0.4)); //7

		//matbanphimpc.addQuad(quadIndex(4, 5, 1, 0, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		//matbanphimpc.addQuad(quadIndex(5, 6, 2, 1, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		//matbanphimpc.addQuad(quadIndex(6, 7, 3, 2, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		//matbanphimpc.addQuad(quadIndex(7, 4, 0, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		matbanphimpc.addQuad(quadIndex(7, 4, 5, 6, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		//matbanphimpc.addQuad(quadIndex(0, 1, 2, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));

		matbanphimpc_t = point3( -2.55, 0.6, -1.1);
	}

	void makechuotpc() {

		chuotpc.clear();
		chuotpc.setTextureFromBMP("data/den.bmp");

		chuotpc.addVertex(point3(    0, -1.5,    0)); //0
		chuotpc.addVertex(point3( 0.08, -1.5,    0)); //1
		chuotpc.addVertex(point3( 0.08, -1.5, 0.05)); //2
		chuotpc.addVertex(point3(    0, -1.5, 0.05)); //3

		chuotpc.addVertex(point3(    0, -1.48,    0)); //4
		chuotpc.addVertex(point3( 0.08, -1.48,    0)); //5
		chuotpc.addVertex(point3( 0.08, -1.48, 0.05)); //6
		chuotpc.addVertex(point3(    0, -1.48, 0.05)); //7

		chuotpc.addQuad(quadIndex(4, 5, 1, 0, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		chuotpc.addQuad(quadIndex(5, 6, 2, 1, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		chuotpc.addQuad(quadIndex(6, 7, 3, 2, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		chuotpc.addQuad(quadIndex(7, 4, 0, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		//chuotpc.addQuad(quadIndex(4, 5, 6, 7, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		chuotpc.addQuad(quadIndex(0, 1, 2, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));

		chuotpc_t = point3( -2.45, 0.6, -1.25);
	}
	void makematchuotpc() {

		matchuotpc.clear();
		matchuotpc.setTextureFromBMP("data/chuotpc.bmp");

		matchuotpc.addVertex(point3(    0, -1.5,    0)); //0
		matchuotpc.addVertex(point3( 0.08, -1.5,    0)); //1
		matchuotpc.addVertex(point3( 0.08, -1.5, 0.05)); //2
		matchuotpc.addVertex(point3(    0, -1.5, 0.05)); //3

		matchuotpc.addVertex(point3(    0, -1.48,    0)); //4
		matchuotpc.addVertex(point3( 0.08, -1.48,    0)); //5
		matchuotpc.addVertex(point3( 0.08, -1.48, 0.05)); //6
		matchuotpc.addVertex(point3(    0, -1.48, 0.05)); //7

		//matchuotpc.addQuad(quadIndex(4, 5, 1, 0, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		//matchuotpc.addQuad(quadIndex(5, 6, 2, 1, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		//matchuotpc.addQuad(quadIndex(6, 7, 3, 2, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		//matchuotpc.addQuad(quadIndex(7, 4, 0, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		matchuotpc.addQuad(quadIndex(7, 4, 5, 6, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		//matchuotpc.addQuad(quadIndex(0, 1, 2, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));

		matchuotpc_t = point3( -2.45, 0.6, -1.25);
	}

	void makelaptop1() {

		laptop1.clear();
		laptop1.setTextureFromBMP("data/den.bmp");

		laptop1.addVertex(point3(   0, -1.5, 0.02)); //0
		laptop1.addVertex(point3( 0.4, -1.5, 0.02)); //1
		laptop1.addVertex(point3( 0.4, -1.5,  0.3)); //2
		laptop1.addVertex(point3(   0, -1.5,  0.3)); //3

		laptop1.addVertex(point3(   0, -1.49, 0.02)); //4
		laptop1.addVertex(point3( 0.4, -1.49, 0.02)); //5
		laptop1.addVertex(point3( 0.4, -1.49,  0.3)); //6
		laptop1.addVertex(point3(   0, -1.49,  0.3)); //7

		laptop1.addQuad(quadIndex(4, 5, 1, 0, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		laptop1.addQuad(quadIndex(5, 6, 2, 1, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		laptop1.addQuad(quadIndex(6, 7, 3, 2, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		laptop1.addQuad(quadIndex(7, 4, 0, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		laptop1.addQuad(quadIndex(4, 5, 6, 7, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		laptop1.addQuad(quadIndex(0, 1, 2, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));

		laptop1_t = point3( -2.4, 0.6, -2.1);
	}
	void makelaptop2() {

		laptop2.clear();
		laptop2.setTextureFromBMP("data/den.bmp");

		laptop2.addVertex(point3(   0,  -1.5, 0.02)); //0
		laptop2.addVertex(point3( 0.4,  -1.5, 0.02)); //1
		laptop2.addVertex(point3( 0.4, -1.49, 0.02)); //2
		laptop2.addVertex(point3(   0, -1.49, 0.02)); //3

		laptop2.addVertex(point3(   0, -1.24,  -0.15)); //4
		laptop2.addVertex(point3( 0.4, -1.24,  -0.15)); //5
		laptop2.addVertex(point3( 0.4, -1.24, -0.146)); //6
		laptop2.addVertex(point3(   0, -1.24, -0.146)); //7

		laptop2.addQuad(quadIndex(4, 5, 1, 0, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		laptop2.addQuad(quadIndex(5, 6, 2, 1, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		laptop2.addQuad(quadIndex(6, 7, 3, 2, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		laptop2.addQuad(quadIndex(7, 4, 0, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		laptop2.addQuad(quadIndex(4, 5, 6, 7, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		laptop2.addQuad(quadIndex(0, 1, 2, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));

		laptop2_t = point3( -2.4, 0.6, -2.1);
	}

	void makemanhinhlaptop() {

		manhinhlaptop.clear();
		manhinhlaptop.setTextureFromBMP("data/laptop.bmp");

		manhinhlaptop.addVertex(point3(   0,  -1.5, 0.02)); //0
		manhinhlaptop.addVertex(point3( 0.4,  -1.5, 0.02)); //1
		manhinhlaptop.addVertex(point3( 0.4, -1.49, 0.02)); //2
		manhinhlaptop.addVertex(point3(   0, -1.49, 0.02)); //3

		manhinhlaptop.addVertex(point3(   0, -1.24,  -0.15)); //4
		manhinhlaptop.addVertex(point3( 0.4, -1.24,  -0.15)); //5
		manhinhlaptop.addVertex(point3( 0.4, -1.24, -0.146)); //6
		manhinhlaptop.addVertex(point3(   0, -1.24, -0.146)); //7

		//manhinhlaptop.addQuad(quadIndex(4, 5, 1, 0, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		//manhinhlaptop.addQuad(quadIndex(5, 6, 2, 1, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		manhinhlaptop.addQuad(quadIndex(7, 6, 2, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		//manhinhlaptop.addQuad(quadIndex(7, 4, 0, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		//manhinhlaptop.addQuad(quadIndex(4, 5, 6, 7, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		//manhinhlaptop.addQuad(quadIndex(0, 1, 2, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));

		manhinhlaptop_t = point3( -2.4, 0.6, -2.0999);
	}
	void makebanphimlaptop() {

		banphimlaptop.clear();
		banphimlaptop.setTextureFromBMP("data/banphimlaptop.bmp");

		banphimlaptop.addVertex(point3(    0, -1.5, 0.02)); //0
		banphimlaptop.addVertex(point3( 0.38, -1.5, 0.02)); //1
		banphimlaptop.addVertex(point3( 0.38, -1.5, 0.28)); //2
		banphimlaptop.addVertex(point3(    0, -1.5, 0.28)); //3

		banphimlaptop.addVertex(point3(    0, -1.49, 0.02)); //4
		banphimlaptop.addVertex(point3( 0.38, -1.49, 0.02)); //5
		banphimlaptop.addVertex(point3( 0.38, -1.49, 0.28)); //6
		banphimlaptop.addVertex(point3(    0, -1.49, 0.28)); //7

		//banphimlaptop.addQuad(quadIndex(4, 5, 1, 0, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		//banphimlaptop.addQuad(quadIndex(5, 6, 2, 1, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		//banphimlaptop.addQuad(quadIndex(6, 7, 3, 2, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		//banphimlaptop.addQuad(quadIndex(7, 4, 0, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		banphimlaptop.addQuad(quadIndex(4, 5, 6, 7, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		//banphimlaptop.addQuad(quadIndex(0, 1, 2, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));

		banphimlaptop_t = point3( -2.39, 0.6001, -2.09);
	}

	void makeloa() {

		loa.clear();
		loa.setTextureFromBMP("data/den.bmp");

		loa.addVertex(point3(   0, -1.5,   0)); //0
		loa.addVertex(point3( 0.1, -1.5,   0)); //1
		loa.addVertex(point3( 0.1, -1.5, 0.1)); //2
		loa.addVertex(point3(   0, -1.5, 0.1)); //3

		loa.addVertex(point3(   0, -1.3,   0)); //4
		loa.addVertex(point3( 0.1, -1.3,   0)); //5
		loa.addVertex(point3( 0.1, -1.3, 0.1)); //6
		loa.addVertex(point3(   0, -1.3, 0.1)); //7

		loa.addQuad(quadIndex(4, 5, 1, 0, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		//loa.addQuad(quadIndex(5, 6, 2, 1, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		loa.addQuad(quadIndex(6, 7, 3, 2, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		loa.addQuad(quadIndex(7, 4, 0, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		loa.addQuad(quadIndex(4, 5, 6, 7, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		loa.addQuad(quadIndex(0, 1, 2, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));

		loa_t1 = point3( -2.9999, 0.6, -2.15);
		loa_t2 = point3( -2.9999, 0.6, -0.1);
	}
	void makematloa() {

		matloa.clear();
		matloa.setTextureFromBMP("data/loa.bmp");

		matloa.addVertex(point3(   0, -1.5,   0)); //0
		matloa.addVertex(point3( 0.1, -1.5,   0)); //1
		matloa.addVertex(point3( 0.1, -1.5, 0.1)); //2
		matloa.addVertex(point3(   0, -1.5, 0.1)); //3

		matloa.addVertex(point3(   0, -1.3,   0)); //4
		matloa.addVertex(point3( 0.1, -1.3,   0)); //5
		matloa.addVertex(point3( 0.1, -1.3, 0.1)); //6
		matloa.addVertex(point3(   0, -1.3, 0.1)); //7

		//matloa.addQuad(quadIndex(4, 5, 1, 0, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		matloa.addQuad(quadIndex(5, 6, 2, 1, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		//matloa.addQuad(quadIndex(6, 7, 3, 2, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		//matloa.addQuad(quadIndex(7, 4, 0, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		//matloa.addQuad(quadIndex(4, 5, 6, 7, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		//matloa.addQuad(quadIndex(0, 1, 2, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));

		matloa_t1 = point3( -2.9999, 0.6, -2.15);
		matloa_t2 = point3( -2.9999, 0.6, -0.1);
	}

	void maketranh1() {

		tranh1.clear();
		tranh1.setTextureFromBMP("data/goi1.bmp");

		tranh1.addVertex(point3(   0, -1.5,   0)); //0
		tranh1.addVertex(point3( 0.5, -1.5,   0)); //1
		tranh1.addVertex(point3( 0.5, -1.5, 0.3)); //2
		tranh1.addVertex(point3(   0, -1.5, 0.3)); //3

		tranh1.addVertex(point3(   0, -1,   0)); //4
		tranh1.addVertex(point3( 0.5, -1,   0)); //5
		tranh1.addVertex(point3( 0.5, -1, 0.3)); //6
		tranh1.addVertex(point3(   0, -1, 0.3)); //7

		//tranh1.addQuad(quadIndex(4, 5, 1, 0, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		//tranh1.addQuad(quadIndex(5, 6, 2, 1, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		//tranh1.addQuad(quadIndex(6, 7, 3, 2, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		tranh1.addQuad(quadIndex(7, 4, 0, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		//tranh1.addQuad(quadIndex(4, 5, 6, 7, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		//tranh1.addQuad(quadIndex(0, 1, 2, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));

		tranh1_t = point3( -2.9999, 1.22, -1.46);
		//tranh1_t2 = point3( -2.9999, 1.22, -0.84);
	}
	void maketranh2() {

		tranh2.clear();
		tranh2.setTextureFromBMP("data/goi1.bmp");

		tranh2.addVertex(point3(   0, -1.5,   0)); //0
		tranh2.addVertex(point3( 0.5, -1.5,   0)); //1
		tranh2.addVertex(point3( 0.5, -1.5, 0.3)); //2
		tranh2.addVertex(point3(   0, -1.5, 0.3)); //3

		tranh2.addVertex(point3(   0, -1.1,   0)); //4
		tranh2.addVertex(point3( 0.5, -1.1,   0)); //5
		tranh2.addVertex(point3( 0.5, -1.1, 0.3)); //6
		tranh2.addVertex(point3(   0, -1.1, 0.3)); //7

		//tranh2.addQuad(quadIndex(4, 5, 1, 0, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		//tranh2.addQuad(quadIndex(5, 6, 2, 1, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		//tranh2.addQuad(quadIndex(6, 7, 3, 2, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		tranh2.addQuad(quadIndex(7, 4, 0, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		//tranh2.addQuad(quadIndex(4, 5, 6, 7, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		//tranh2.addQuad(quadIndex(0, 1, 2, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));

		tranh2_t = point3( -2.9999, 1.27, -1.77);
		//tranh2_t2 = point3( -2.9999, 1.27, -0.53);
	}
	void maketranh3() {

		tranh3.clear();
		tranh3.setTextureFromBMP("data/goi1.bmp");

		tranh3.addVertex(point3(   0, -1.5,   0)); //0
		tranh3.addVertex(point3( 0.5, -1.5,   0)); //1
		tranh3.addVertex(point3( 0.5, -1.5, 0.3)); //2
		tranh3.addVertex(point3(   0, -1.5, 0.3)); //3

		tranh3.addVertex(point3(   0, -0.9,   0)); //4
		tranh3.addVertex(point3( 0.5, -0.9,   0)); //5
		tranh3.addVertex(point3( 0.5, -0.9, 0.3)); //6
		tranh3.addVertex(point3(   0, -0.9, 0.3)); //7

		//tranh3.addQuad(quadIndex(4, 5, 1, 0, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		//tranh3.addQuad(quadIndex(5, 6, 2, 1, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		//tranh3.addQuad(quadIndex(6, 7, 3, 2, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		tranh3.addQuad(quadIndex(7, 4, 0, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		//tranh3.addQuad(quadIndex(4, 5, 6, 7, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		//tranh3.addQuad(quadIndex(0, 1, 2, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));

		tranh3_t = point3( -2.9999, 1.17, -1.15);
	}
	void maketranh4() {

		tranh4.clear();
		tranh4.setTextureFromBMP("data/goi1.bmp");
			 
		tranh4.addVertex(point3(0, -1.5, 0)); //0
		tranh4.addVertex(point3(0.5, -1.5, 0)); //1
		tranh4.addVertex(point3(0.5, -1.5, 0.3)); //2
		tranh4.addVertex(point3(0, -1.5, 0.3)); //3
			 
		tranh4.addVertex(point3(0, -1.1, 0)); //4
		tranh4.addVertex(point3(0.5, -1.1, 0)); //5
		tranh4.addVertex(point3(0.5, -1.1, 0.3)); //6
		tranh4.addVertex(point3(0, -1.1, 0.3)); //7

		//tranh4.addQuad(quadIndex(4, 5, 1, 0, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		//tranh4.addQuad(quadIndex(5, 6, 2, 1, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		//tranh4.addQuad(quadIndex(6, 7, 3, 2, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		tranh4.addQuad(quadIndex(7, 4, 0, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		//tranh4.addQuad(quadIndex(4, 5, 6, 7, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		//tranh4.addQuad(quadIndex(0, 1, 2, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));

		tranh4_t = point3(-2.9999, 1.27, -1.77);
		//tranh2_t2 = point3(-2.9999, 1.27, -0.53);
	}
	void maketranh5() {

		tranh5.clear();
		tranh5.setTextureFromBMP("data/goi1.bmp");
			 
		tranh5.addVertex(point3(0, -1.5, 0)); //0
		tranh5.addVertex(point3(0.5, -1.5, 0)); //1
		tranh5.addVertex(point3(0.5, -1.5, 0.3)); //2
		tranh5.addVertex(point3(0, -1.5, 0.3)); //3
			 
		tranh5.addVertex(point3(0, -1, 0)); //4
		tranh5.addVertex(point3(0.5, -1, 0)); //5
		tranh5.addVertex(point3(0.5, -1, 0.3)); //6
		tranh5.addVertex(point3(0, -1, 0.3)); //7

		//tranh5.addQuad(quadIndex(4, 5, 1, 0, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		//tranh5.addQuad(quadIndex(5, 6, 2, 1, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		//tranh5.addQuad(quadIndex(6, 7, 3, 2, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		tranh5.addQuad(quadIndex(7, 4, 0, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		//tranh5.addQuad(quadIndex(4, 5, 6, 7, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));
		//tranh5.addQuad(quadIndex(0, 1, 2, 3, texCoord2(0, 1), texCoord2(1, 1), texCoord2(1, 0), texCoord2(0, 0)));

		tranh5_t = point3(-2.9999, 1.22, -1.46);
		//tranh5_t2 = point3(-2.9999, 1.22, -0.84);
	}


	void resize(int width, int height) {
		if (height == 0) height = 1;
		const float ar = (float)width / (float)height;
		glViewport(0, 0, width, height);
		glMatrixMode(GL_PROJECTION);
		glLoadIdentity();
		//glFrustum(-ar, ar, -1.0, 1.0, 2.0, 100.0);
		gluPerspective(45.0f, ar, 0.1f, 1000.0f);
		glMatrixMode(GL_MODELVIEW);
		glLoadIdentity();
	}
	void renderScene(void) {

		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		glLoadIdentity();

		gluLookAt(x, -0.5f, z,
			x + lx, height_view, z + lz,
			0.0f, 1.0f, 0.0f);

		glEnable(GL_TEXTURE_2D);

		draw(&tuong, tuong_t);
		draw(&trannha, trannha_t);
		/*for (int x1 = -5; x1 < 5; x1++) {
			for (int z1 = -5; z1 < 5; z1++) {
				Vector3 sannha_t;
				sannha_t.x = x1;
				sannha_t.z = z1;
				sannha_t.y = 0;

				draw(&sannha, sannha_t);
			}
		}*/
		draw(&sannha, sannha_t);

		draw(&canhcua, canhcua_t);
		draw(&cuaso, cuaso_t1);
		draw(&cuaso, cuaso_t2);

		draw(&ban1, ban1_t);
		draw(&ban2, ban2_t);
		draw(&chanban1, chanban1_t1);
		draw(&chanban1, chanban1_t2);
		draw(&chanban2, chanban2_t);

		draw(&changhe1, changhe1_t);
		draw(&changhe2, changhe2_t);
		draw(&trucghe, trucghe_t);
		draw(&chongoi, chongoi_t);
		draw(&tualung, tualung_t);
		draw(&tualung1, tualung1_t);
		draw(&tualung2, tualung2_t);
		draw(&ketay, ketay_t1);
		draw(&ketay, ketay_t2);

		draw(&tudo, tudo_t);
		draw(&mattudo, mattudo_t);

		draw(&tugiay, tugiay_t);
		draw(&mattugiay, mattugiay_t);

		draw(&tuthap, tuthap_t);
		draw(&mattuthap, mattuthap_t);

		draw(&dieuhoa, dieuhoa_t);
		draw(&matdieuhoa, matdieuhoa_t);

		draw(&giuong, giuong_t);
		draw(&dem, dem_t);
		draw(&daugiuong, daugiuong_t);
		draw(&goi, goi_t1);
		draw(&goi, goi_t2);

		draw(&manhinh1, manhinh1_t);
		draw(&manhinh2, manhinh2_t);
		draw(&hinh1, hinh1_t);
		draw(&hinh2, hinh2_t);

		draw(&doman1, doman1_t);
		draw(&doman2, doman2_t);
		draw(&taydo1, taydo1_t);
		draw(&taydo2, taydo2_t);
		draw(&trucdo1, trucdo1_t);
		draw(&trucdo2, trucdo2_t);

		draw(&pc1, pc1_t);
		draw(&pc2, pc2_t);

		draw(&banphimpc, banphimpc_t);
		draw(&matbanphimpc, matbanphimpc_t);
		draw(&matchuotpc, matchuotpc_t);
		draw(&chuotpc, chuotpc_t);

		draw(&laptop1, laptop1_t);
		draw(&laptop2, laptop2_t);
		draw(&manhinhlaptop, manhinhlaptop_t);
		draw(&banphimlaptop, banphimlaptop_t);

		draw(&loa, loa_t1);
		draw(&loa, loa_t2);
		draw(&matloa, matloa_t1);
		draw(&matloa, matloa_t2);

		draw(&tranh1, tranh1_t);
		draw(&tranh2, tranh2_t);
		draw(&tranh3, tranh3_t);
		draw(&tranh4, tranh4_t);
		draw(&tranh5, tranh5_t);

		glutSwapBuffers();
		glFlush();
	}
	void processKeys(unsigned char key, int xx, int yy) {
		switch (key) {
		case '>':
			speed += 0.1;
			break;
		case '<':
			speed -= 0.1;
			break;
		case 'w':
			if (heightAngle < PI / 2) {
				heightAngle += 0.1;
				height_view = sin(heightAngle) - 1;
			}
			break;
		case 's':
			if (heightAngle > (-PI / 2)) {
				heightAngle -= 0.1;
				height_view = sin(heightAngle) - 1;
			}
			break;
		case 'a':
			angle -= 0.02f;
			lx = cos(angle);
			lz = sin(angle);
			break;
		case 'd':
			angle += 0.02f;
			lx = cos(angle);
			lz = sin(angle);
			break;
		default:
			break;
		}
		glutPostRedisplay();
	}
	void processSpecialKeys(int key, int xx, int yy) {

		float fraction = speed;

		switch (key) {
		case GLUT_KEY_LEFT:
			x += lz * fraction;
			z -= lx * fraction;
			break;
		case GLUT_KEY_RIGHT:
			x -= lz * fraction;
			z += lx * fraction;
			break;
		case GLUT_KEY_UP:
			x += lx * fraction;
			z += lz * fraction;
			break;
		case GLUT_KEY_DOWN:
			x -= lx * fraction;
			z -= lz * fraction;
			break;
		}glutPostRedisplay();
	}

	void init() {
		glClearColor(0.0, 0.0, 0.0, 1.0);
		glMatrixMode(GL_PROJECTION);
		glLoadIdentity();

		lx = cos(angle);
		lz = sin(angle);

		maketuong();
		maketrannha();
		makesannha();

		makecanhcua();
		makecuaso();

		makeban1();
		makeban2();
		makechanban1();
		makechanban2();

		makechanghe1();
		makechanghe2();
		maketrucghe();
		makechongoi();
		maketualung();
		maketualung1();
		maketualung2();
		makeketay();

		maketudo();
		makemattudo();

		maketugiay();
		makemattugiay();

		maketuthap();
		makemattuthap();

		makedieuhoa();
		makematdieuhoa();

		makegiuong();
		makedem();
		makedaugiuong();
		makegoi();

		makemanhinh1();
		makemanhinh2();
		makehinh1();
		makehinh2();

		makedoman1();
		makedoman2();
		maketaydo1();
		maketaydo2();
		maketrucdo1();
		maketrucdo2();

		makepc1();
		makepc2();
		makebanphimpc();
		makematbanphimpc();
		makechuotpc();
		makematchuotpc();

		makelaptop1();
		makelaptop2();
		makemanhinhlaptop();
		makebanphimlaptop();

		makeloa();
		makematloa();

		//maketranh1();
		//maketranh2();
		//maketranh3();
		//maketranh4();
		//maketranh5();
	}
}

int home3d(int argc, char** argv) {

	glutInit(&argc, argv);
	glutInitDisplayMode(/*GLUT_DOUBLE | GLUT_RGBA | */GLUT_DEPTH);
	glutInitWindowPosition(50, 50);
	glutInitWindowSize(600, 600);
	glutCreateWindow("opengl");
	glEnable(GL_DEPTH_TEST);

	glutReshapeFunc(h3d::resize);
	glutKeyboardFunc(h3d::processKeys);
	glutSpecialFunc(h3d::processSpecialKeys);
	glutDisplayFunc(h3d::renderScene);
	h3d::init();

	glutMainLoop();
	return 0;
}
