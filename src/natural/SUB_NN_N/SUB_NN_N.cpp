#include "SUB_NN_N.h"
Natural* SUB_NN_N::get(Natural* firstOperand, Natural* secondOperand){
	size_t n;
	Natural* ans;
	int tmp =COM_NN_D.get(firstOperand, secondOperand);
	if(tmp == 0){
		std::string_view t = "0";
		ans = new Natural(t);
		return ans;
	}else if(tmp == 1){
		throw "in SUB natural, first operand is less than second opoerand";
	}else{
		lenFirst = firstOperand->len();
		lenSecond = secondOperand->len();
		std::vector<uint8_t> answer(n);
		int8_t buff = 0;
		for(int i = 0; i < m; i++){
			buff = firstOperand->get(i) - secondOperand->get(i);
			if(buff < 0){
				buff+=10;
				firstOperand->set(i+1), firstOperand->get(i+1) - 1);
			}
			answer[i] = buff%10;
			buff/=10;
		}
		for(int i = m; i < n; i++){
			answer[i] = firstOperand->get(i);
		}
		ans = new Natural(answer);
		return ans;

	}
}
