#include "imgui.h"
#include "desktop/app.hpp"


using namespace desktop;


const std::string App::title = "DesktopApp";


void App::draw()
{
  ImGui::Begin("Desktop App");
  {
    ImGui::Button("OK");
  }
  ImGui::End();
}
