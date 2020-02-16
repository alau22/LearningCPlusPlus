#pragma once

class UPC
{
public:
  UPC();
  void setValue(long long p_value);
  long long getValue();

private:
  long long m_value;
};
