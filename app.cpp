/*
Konsol Hesap Makinası Uygulaması
Author: Ilhami Tugral
Date: 10/10/19
*/

#include <iostream>
#include <cmath>

int main()
{
	bool status = true;
	double num1 = 0, num2 = 0;
	int operation = 0;

	while(status)
		{
			std::cout << "+---| Hesap Makinasi |----+" << std::endl;
			std::cout << "|                         |" << std::endl;
			std::cout << "| 1-) Toplama Islemi      |" << std::endl;
			std::cout << "| 2-) Cikarma Islemi      |" << std::endl;
			std::cout << "| 3-) Carpma Islemi       |" << std::endl;
			std::cout << "| 4-) Bolme Islemi        |" << std::endl;
			std::cout << "| 5-) Kalan Hesaplama     |" << std::endl;
			std::cout << "|                         |" << std::endl;
			std::cout << "| 0-) Cikis               |" << std::endl;
			std::cout << "+-------------------------+" << std::endl;
			std::cout << "\n" << std::endl;

			std::cout << "Islem Turunu Seciniz: ";
			std::cin >> operation;

			if(operation <= 5)
    			{
				std::cout << "Birinci Sayi: ";
				std::cin >> num1;
				std::cout << "Ikinci Sayi: ";
				std::cin >> num2;
				std::cout << std::endl;
			}else {
				std::cout << "Gecersiz islem turu" << std::endl;
			}

			switch(operation)
			{
				case 1:
					std::cout << num1 << " + " << num2 << " = " << num1 + num2 << std::endl;
					break;

				case 2:
					std::cout << num1 << " - " << num2 << " = " << num1 - num2 << std::endl;
					break;

				case 3:
					std::cout << num1 << " * " << num2 << " = " << num1 * num2 << std::endl;
					break;

				case 4:
					std::cout << num1 << " / " << num2 << " = " << num1 / num2 << std::endl;
					break;

				case 5:
					std::cout << num1 << " % " << num2 << " = " << std::fmod(num1, num2) << std::endl;
					break;

				case 0:
					status = false;
					std::cout << "\nHesap makinasindan cikiliyor..." << std::endl;
					break;
			}

			std::cout << "\n" << std::endl;

		}

	return 0;
}
