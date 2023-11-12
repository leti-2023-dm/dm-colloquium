#include "SUB_NN_N.h"
Natural* SUB_NN_N::get(Natural* firstOperand, Natural* secondOperand) const{
	size_t n;
	Natural* ans;
	COM_NN_D opr;
	int tmp = opr.get(firstOperand, secondOperand)->get(0);
	if(tmp == 0){
		std::string_view t = "0";
		ans = new Natural(t);
		return ans;
	}else if(tmp == 1){
		throw "";
	}

	size_t lenFirst = firstOperand->len();
	size_t lenSecond = secondOperand->len();
	std::vector<uint8_t> answer(lenFirst);
	int8_t buff = 0;
	int8_t add = 0; //used in case when substration is less than zero
	for(int i = 0; i < lenSecond; i++){
			//firstOperand->set(i+1), firstOperand->get(i+1) - 1);
		buff = firstOperand->get(i) - secondOperand->get(i) - add;
		if(buff < 0){
			buff+=10;
			add = 1;
		}else add = 0;
		answer[i] = buff;
		buff = add;
	}
	for(int i = lenSecond; i < lenFirst; i++){
		buff = firstOperand->get(i) - add;
		if(buff < 0){
			buff+=10;
			add = 1;
		}else add = 0;
		answer[i] = buff;
		buff = add;
	}
	ans = new Natural(answer);
	return ans;

}

