#include "desktop/state.hpp"


using namespace desktop;


State * State::state = nullptr;


State::State()
  : dummyvar{42}
{}


State::~State()
{}


State * State::get()
{
  if (state) { return state; }
  state = new State();
  return state;
}


void State::init()
{}
