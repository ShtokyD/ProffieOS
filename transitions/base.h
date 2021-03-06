#ifndef TRANSITIONS_BASE_H
#define TRANSITIONS_BASE_H

template<class MILLIS>
class TransitionBaseX {
public:
  bool done() { return (millis() - start_millis_) > len_; }
  void begin() {
    start_millis_ = millis();
    len_ = millis_.getInteger(0);
  }
protected:
  uint32_t start_millis_;
  int len_;
private:
  MILLIS millis_;
};

#endif
