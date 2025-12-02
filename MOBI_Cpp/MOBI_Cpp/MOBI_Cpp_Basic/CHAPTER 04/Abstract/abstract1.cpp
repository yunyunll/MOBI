// Interface
// 2개의 시스템간의 경계에서 상호작용이 이뤄질 수 있게 정해진 명확한 규칙(계약)
// EX_1) 사용하는 사람 입장에서 리모컨만 사용할줄 알면 TV 모델별 상세 사용법을 몰라도 된다
// EX_2) 장치 제조사는 USB Interface 규격에 맞춰 제품을 개발하면 어느 PC에서든 연결 가능
// 유지보수가 좋은 코드를 만들기 위해 사용
// Server의 코드가 변경되더라도 Clinet 코드를 따로 유지보수 하지 않아도 된다

// Abstract class
// pure virtual function을 가진 클래스
// - 순수가상함수를 가지고 있는 클래스는 직접 객체를 만들 숭 ㅓㅂㅅ다
// - 상속 전용 클래스

// 1. sony TV 객체를 만든 후 Interface로 Upcasting
// 2. Upcasting 이후 Interface가 가진 함수 호출
