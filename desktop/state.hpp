#pragma once
#include <memory>
#include <vector>


namespace desktop
{
  class State
  {
    public:
      ~State();
      static State * get();

      void init();

      int dummyvar;

    protected:
      State();
      static State * state;
  };
}
