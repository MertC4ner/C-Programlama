#include <stdio.h>

enum Seviyeler {
	DUSUK,
	ORTA,
	YUKSEK,
};

int main(){
	// numaralandýrýlmýs tipte bir degisken tanimla
	// ve deger ata
	enum Seviyeler OdaSicakligi = ORTA;
	// deger belirtmedigimiz surece 0,1,2.. diye degerler alýr
	// DUSUK = 0, ORTA = 1, YUKSEK = 2
	
	
	// numaralandýrýlmýs tipteki degiskeni yazdir
	printf("%d", OdaSicakligi);
	
	return 0;
}
