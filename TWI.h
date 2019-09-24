#ifndef TWI_H
#define TWI_H

class TWI{
  public:
  TWI(){
    
  }
  void begin(){
    
  }
  void begin(uint8_t){
    
  }
  void begin(int){
    
  }
 void setClock(){
    
  }
  void beginTransmission(uint8_t){
    
  }
  void beginTransmission(int){
    
  }
  uint8_t endTransmission(void){
    
  }
  uint8_t endTransmission(uint8_t){
    
  }
  uint8_t requestFrom(uint8_t, uint8_t){
    
  }
  uint8_t requestFrom(uint8_t, uint8_t, uint8_t){
    
  }
  uint8_t requestFrom(uint8_t, uint8_t, uint32_t, uint8_t, uint8_t){
    
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
  void end(){
    
  }
  inline size_t write(unsigned long n) { return write((uint8_t)n); }
  inline size_t write(long n) { return write((uint8_t)n); }
  inline size_t write(unsigned int n) { return write((uint8_t)n); }
  inline size_t write(int n) { return write((uint8_t)n); }
//    using Print::write;

  private:
  protected:
};
#endif
