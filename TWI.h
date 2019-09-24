#ifndef TWI_H
#define TWI_H

#include <stdlib.h>
#include <string.h>
#include <inttypes.h>
//#include <utility/twi.h>


//uint8_t rxBuffer[BUFFER_LENGTH]; //
uint8_t rxBufferIndex = 0; //
uint8_t rxBufferLength = 0; //

uint8_t txAddress = 0;
//uint8_t txBuffer[BUFFER_LENGTH];
uint8_t txBufferIndex = 0;
uint8_t txBufferLength = 0;

uint8_t transmitting = 0;
//void (TWI user_onRequest)(void);
//void (*TwoWire::user_onReceive)(int);

class TWI{
  public:
  TWI(){
    
  }
  void begin(){
    rxBufferIndex = 0;
    rxBufferLength = 0;
    txBufferIndex = 0;
    txBufferLength = 0;
  }
  void begin(uint8_t address){
//    twi_setAddress(address);
//  twi_attachSlaveTxEvent(onRequestService);
//  twi_attachSlaveRxEvent(onReceiveService);
  begin();

  }
  void begin(int address){
    begin((uint8_t)address);
  }
 void setClock(uint8_t clock){
//    twi_setFrequency(clock);
  }
  void beginTransmission(uint8_t address){
    beginTransmission((uint8_t)address);
  }
  void beginTransmission(int){
    
  }
  uint8_t endTransmission(void){
    
  }
  uint8_t endTransmission(uint8_t){
    
  }
  uint8_t requestFrom(uint8_t, uint8_t){
    
  }
  uint8_t requestFrom(uint8_t address, uint8_t quantity, uint8_t sendStop){
    return requestFrom((uint8_t)address, (uint8_t)quantity, (uint8_t)sendStop);
  }
  uint8_t requestFrom(uint8_t address, uint8_t quantity, uint32_t iaddress, uint8_t isize, uint8_t sendStop){

    
  }
  uint8_t requestFrom(int, int){
    
  }
   uint8_t requestFrom(int, int, int){
    
  }
  virtual size_t write(uint8_t){
    
  }
  virtual size_t write(const uint8_t *, size_t){
    
  }
  virtual int available(void){
    
  }
  virtual int read(void){
    
  }
  virtual int peek(void){
    
  }
  virtual void flush(void){
    
  }
  virtual void onReceive(void(*)(int)){
  
 }
 virtual void onRequest(void(*)(void)){
  
 }
  void end(void){
//   twi_disable();
  }
  inline size_t write(unsigned long n) { return write((uint8_t)n); }
  inline size_t write(long n) { return write((uint8_t)n); }
  inline size_t write(unsigned int n) { return write((uint8_t)n); }
  inline size_t write(int n) { return write((uint8_t)n); }
//    using Print::write;

  private:
static uint8_t rxBuffer[];
    static uint8_t rxBufferIndex;
    static uint8_t rxBufferLength;

    static uint8_t txAddress;
    static uint8_t txBuffer[];
    static uint8_t txBufferIndex;
    static uint8_t txBufferLength;

    static uint8_t transmitting;
    static void (*user_onRequest)(void);
    static void (*user_onReceive)(int);
    static void onRequestService(void);
    static void onReceiveService(uint8_t*, int);
  
  protected:
};
#endif
