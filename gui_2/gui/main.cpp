#include "imgui\imgui.h"
#include "imgui\imgui_impl_win32.h"
#include "imgui\imgui_impl_dx9.h"
#include "funcs.h"
#include <d3d9.h>
#include <tchar.h>

void main_tabs()
{
    if (ImGui::Begin("win"))
    {
        if (ImGui::BeginTabBar("tabs"))
        {
            if (ImGui::BeginTabItem("File"))
            {
                // Code
                ImGui::EndTabItem();
            }
            if (ImGui::BeginTabItem("zaza"))
            {
                ImGui::Begin("My zaza menu");
                int count = 0;
                for (int i = 0; i < 25; i++)
                {   
                    count++;
                    ImGui::Text("Hello %d", count);
                }
                ImGui::EndTabItem();
            }
        }
    }
}