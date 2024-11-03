namespace SALES
{
	const int QUARTERS = 4;
	struct Sales
	{
		double sales[QUARTERS];
		double average;
		double max;
		double min;
	};

	// 비대화식 버전:
	// 4 또는 n 중에서 더 적은 개수의 항목을 
	// 배열 ar로부터 s의 sales 멤버로 복사한다
	// 입력된 항목들에 대해 평균값, 최대값, 최소값을 계산하여 저장한다
	// sales의 나머지 원소들은(있을 경우에) 0으로 설정한다
	void setSales(Sales & s, const double ar[], int n);

	// 대화식 버전:
	// 1,2,3,4 분기별 판매액 자료를 대화식으로 획득하여
	// s의 sales 멤버에 저장한다
	// 평균값, 최대값, 최소값을 계산하여 저장한다
	void setSales(Sales & s);

	// s 구조체에 들어 있는 모든 정보를 출력한다
	void showSales(const Sales & s);
}
