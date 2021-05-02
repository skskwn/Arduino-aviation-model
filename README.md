# Arduino-aviation-model

## 소개
Arduino를 통해 서보모터, led, 직류 전동기(모터), 블루투스 모듈을 통하여 날개, 프로펠러 제어, 외부 조명제어를 구현한 항공기 모형을 제작하였습니다.

## Library 정보

먼저 블루투스 모듈은 Mikal Hart의 NewSoftSerial 라이브러리를 기반한 [SoftwareSerial 라이브러리](https://www.arduino.cc/en/Reference/softwareSerial)를 사용하였습니다.

## 구성정보

- 블루투스 모듈을 통하여 스마트폰과 통신하며 전달받은 지정된 값을 입력받고 Arduino로 전송해주며 그 즉시 액추에이터를 제어합니다. 
- 서버모터는 블루투스 모듈를 통해 정해진 값이 들어오면 하드코딩된 값에 따라 서보모터에 각도를 제어합니다.
- led는 블루투스 모듈를 통해 정해진 값이 들어오면 외부 led를 제어합니다. (조명제어)
- 직류 전동기(모터)는 블루투스 모듈를 통해 정해진 값이 들어오면 빠르게 회전합니다.



## 사용방법

- 라이브러리에서 사용하는 헤더 파일을 소스 코드에 먼저 인클루딩되어있는지 확인해 주세요.
- SoftwareSerial 라이브러리는 Arduino기본 라이브러리에 포함되어있습니다. 만약 존재하지 않는다면 설치해주세요.
- 스마트폰 앱을 다운받아 블루투스 모듈과 연결해 주세요. ( 참고 - 앱은 [BlueTooth Serial Controller](https://play.google.com/store/apps/details?id=nextprototypes.BTSerialController&hl=ko&gl=US)를 사용하였습니다. )



## 문제

문제가 있으면 언제든지 Github Issues로 남겨주세요.
