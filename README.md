# stm32g4-auto
![](./blob/board.png)

#### 폴더 설명
- firmware - CLI로 전체 테스트 가능한 프로젝트
- examples - 단위 테스트 가능한 프로젝트
- hardware - 회로도


#### 개발환경
- STM32CubeIDE 1.16.0 

#### MCU
- STM32G431CBU6(ARM Cortex-M4 170Mhz, 128Kbyes 플래시, 32KB 램)

#### 입력 전압
- 12V

#### FRAM
- 2Kbytes

#### USB
- Virtual COM Port

#### UART
- RS485
- RS232
- LIN
- LPUART

#### CAN
- FDCAN

#### 기타
- SW
- LED
- RTC

#### 외부 IO
- 11개
  
#### 보드 사이즈
- 83x49mm

#### 보드 기능 검증 
- [x] 전원 12V
- [x] 전원 5V
- [x] 전원 3.3V
- [x] FRAM
- [x] USB
- [x] RS485
- [x] RS232
- [x] LIN
- [x] FDCAN
- [x] Button
- [x] LED
- [x] RTC
- [x] LPUART(CLI)


### LIN 버스 사용시 주의 사항 
LIN 버스 사용시 UART2의 Tx and Rx Pins Swapping 을 활성화 해줘야합니다.
![](./blob/lin_eco.png)