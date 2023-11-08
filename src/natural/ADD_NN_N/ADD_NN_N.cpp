#include "ADD_NN_N.h"

Natural* ADD_NN_N::get(Natural* firstOperand, Natural* secondOperand){
	size_t n;
	size_t firstLen = firstOperand->len();
	size_t secondLen = secondOperand->len();
	Natural* biggerOperand = secondOperand;
	if(firstLen > secondLen){
		n = firstLen;
		biggerOperand = firstOperand;
	}else n = SecondLen;
	std::vector<uint8_t> answer(n); //вектор длины n из нулей
	uint8_t buff = 0; //buffer, в котором хранится текущая переменная
	int i = 0;
	while(i < firstLen && i < secondLen){
		buff += firstOperand->get(i) + secondOperand->get(i);
		answer[i] = buff%10;
		buff /= 10;
		i++;
	}
	while(i < n){
		buff = buff + biggerOperand->get(i);
		answer[i] = buff%10;
		buff /= 10;
		i++;
	}

	if(buff != 0) answer.push_back(buff);
	Natural* ans = new Natural{answer};
	return ans;

}
