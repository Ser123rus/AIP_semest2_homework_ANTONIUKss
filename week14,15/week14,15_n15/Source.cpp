#include <iostream>
#include <random>

struct worker {
	int vozrast;
	int oklad;
	int spec;
		//0-инженер
		//1-слесарь
		//2-токарь
};

int main() {
	int k1 = 0, k2 = 0, k3 = 0, v1 = 0, v2 = 0, v3 = 0, o1 = 0, o2 = 0, o3 = 0, obshe = 0;
	worker workerzavod1[22], workerzavod2[12], workerzavod3[44];

	//-----------------------------------------------
	//заполнение масивов
	for (int i = 0; i < 22; i++) {
		workerzavod1[i].vozrast = rand() % 60 + 20;
		workerzavod1[i].oklad = rand() % 20000 + 30000;
		workerzavod1[i].spec = rand() % 3;
	}
	for (int i = 0; i < 12; i++) {
		workerzavod2[i].vozrast = rand() % 60 + 20;
		workerzavod2[i].oklad = rand() % 20000 + 30000;
		workerzavod2[i].spec = rand() % 3;
	}
	for (int i = 0; i < 44; i++) {
		workerzavod3[i].vozrast = rand() % 60 + 20;
		workerzavod3[i].oklad = rand() % 20000 + 30000;
		workerzavod3[i].spec = rand() % 3;
	}
	//--------------------------------------------



	//--------------------------------------------
	//подсчет средних окладов
	for (int i = 0; i < 22; i++) {
		o1 += workerzavod3[i].oklad;
	}
	for (int i = 0; i < 12; i++) {
		o2 += workerzavod3[i].oklad;
	}
	for (int i = 0; i < 44; i++) {
		o3 += workerzavod3[i].oklad;
	}
	o1 = o1 / 22;
	o2 = o2 / 12;
	o3 = o3 / 44;

	obshe = o1 + o2 + o3;
	obshe = obshe / 3;

	//----------------------------------------------



	//----------------------------------------------
	//определение где средний возраст выше 35
	for (int i = 0; i < 22; i++) {
			v1 += workerzavod3[i].vozrast;
	}
	for (int i = 0; i < 12; i++) {
			v2 += workerzavod3[i].vozrast;
	}
	for (int i = 0; i < 44; i++) {
			v3 += workerzavod3[i].vozrast;
	}
	v1 = v1 / 22;
	v2 = v2 / 12;
	v3 = v3 / 44;



	//-------------------------------------------------------------------




	//------------------------------------------------------------------
	//подсчет слесарей и токарей
	for (int i = 0; i < 22; i++) {
		if ((workerzavod1[i].spec == 1) || (workerzavod1[i].spec == 2))
			k1 += 1;
	}
	for (int i = 0; i < 12; i++) {
		if ((workerzavod1[i].spec == 1) || (workerzavod2[i].spec == 2))
			k2 += 1;
	}
	for (int i = 0; i < 44; i++) {
		if ((workerzavod1[i].spec == 1) || (workerzavod3[i].spec == 2))
			k3 += 1;
	}


	//-------------------------------------------------------------------


	//вывод завода1
	if (v1 > 35)
	std::cout << "ZAVOD 1 (sr.vozrast > 35) --- kolvo slesarey i tokarey - " << k1 << "  SR.OKLAD - " << o1 << "\n";
	else
	std::cout << "ZAVOD 1 --- kolvo slesarey i tokarey - " << k1 << "\n";
	if (o1 > obshe)
		std::cout << "OKLAD VISHE SREDNEGO!!!!" << "\n";

	for (int i = 0; i < 22; i++) {
		std::cout << "Vozrast - " << workerzavod1[i].vozrast << "   ";
		std::cout << "Oklad - " << workerzavod1[i].oklad << "   ";
		std::cout << "Spec - " << workerzavod1[i].spec << "   ";

		std::cout << "\n";
	}

	//вывод завода2
	if (v2 > 35)
	std::cout << "ZAVOD 2 (sr.vozrast > 35) --- kolvo slesarey i tokarey - " << k2 << "  SR.OKLAD - " << o2 << "\n";
	else
	std::cout << "ZAVOD 2 --- kolvo slesarey i tokarey - " << k2 << "\n";
	if (o2 > obshe)
		std::cout << "OKLAD VISHE SREDNEGO!!!!" << "\n";

	for (int i = 0; i < 12; i++) {
		std::cout << "Vozrast - " << workerzavod2[i].vozrast << "   ";
		std::cout << "Oklad - " << workerzavod2[i].oklad << "   ";
		std::cout << "Spec - " << workerzavod2[i].spec << "   ";

		std::cout << "\n";
	}

	//вывод завода3
	if (v3 > 35)
	std::cout << "ZAVOD 3 (sr.vozrast > 35) --- kolvo slesarey i tokarey - " << k3 << "  SR.OKLAD - " << o3 << "\n";
	else
	std::cout << "ZAVOD 3 --- kolvo slesarey i tokarey - " << k3 << "\n";
	if (o3 > obshe)
		std::cout << "OKLAD VISHE SREDNEGO!!!!" << "\n";

	for (int i = 0; i < 44; i++) {
		std::cout << "Vozrast - " << workerzavod3[i].vozrast << "   ";
		std::cout << "Oklad - " << workerzavod3[i].oklad << "   ";
		std::cout << "Spec - " << workerzavod3[i].spec << "   ";

		std::cout << "\n";
	}



	return 0;
}