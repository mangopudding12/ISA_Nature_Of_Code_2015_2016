#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup()
{

	// aanroepen van de constructor 
	aarde1 = Aarde(ofGetWidth()/2,ofGetHeight()/2); 
	aarde1.setup(); 

	
		duisterpoort[0] = Aarde(100,100); 
		duisterpoort[1] = Aarde(900,100); 
		duisterpoort[2] = Aarde(100,600); 
		duisterpoort[3] = Aarde(900,600); 

	for(int r = 0; r < poorten; r++)
	{
		duisterpoort[r].setup();
	}

	for(int a = 0; a < aantal; a++)
	{
		spook1[a] = Spook(ofRandom(2,6),ofRandom(300,600),ofRandom(300,600));
		spook1[a].setup(); 
	}

	aan = false;
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button)
{
	cout << "Pressed" << endl;

	if (aan == true)
	{
		aan = false; 
	} else if (aan == false)
	{
		aan =  true; 
	}

}

//--------------------------------------------------------------
void ofApp::update()
{

	if (aan == true)
	{
		for(int a = 0; a < aantal; a++)
		{
			aarde1.attractor(spook1[a].massa,spook1[a].location,1,0.0003);
			spook1[a].applyforce(aarde1.force_final);

			for(int r = 0; r < poorten; r++)
			{
				duisterpoort[r].attractor(spook1[a].massa,spook1[a].location,-1,0.00000003);
				spook1[a].applyforce(duisterpoort[r].force_final);
			}
		}
	}

	if (aan == false)
	{
		for(int a = 0; a < aantal; a++)
		{
			aarde1.attractor(spook1[a].massa,spook1[a].location,-1,0.0009);
			spook1[a].applyforce(aarde1.force_final);

			for(int r = 0; r < poorten; r++)
			{
				duisterpoort[r].attractor(spook1[a].massa,spook1[a].location,1,0.0003);
				spook1[a].applyforce(duisterpoort[r].force_final);
			}
		}
	}


	for(int a = 0; a < aantal; a++)
	{
		spook1[a].bounce(); 
		spook1[a].move(); 
	}
}

//--------------------------------------------------------------
void ofApp::draw()
{
	for(int a = 0; a < aantal; a++)
	{
		spook1[a].display(); 
		aarde1.display(); 
		
		for(int r = 0; r < poorten; r++)
		{
			duisterpoort[r].display();
		}
	}
}



