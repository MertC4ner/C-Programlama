#include <stdio.h>

enum Seviyeler {
	DUSUK,
	ORTA,
	YUKSEK,
};

int main(){
	// numaraland�r�lm�s tipte bir degisken tanimla
	// ve deger ata
	enum Seviyeler OdaSicakligi = ORTA;
	// deger belirtmedigimiz surece 0,1,2.. diye degerler al�r
	// DUSUK = 0, ORTA = 1, YUKSEK = 2
	
	
	// numaraland�r�lm�s tipteki degiskeni yazdir
	printf("%d", OdaSicakligi);
	
	return 0;
}
