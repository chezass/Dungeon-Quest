#include "game.h"


#include <Windows.h>

using namespace DungeonQuestCLR;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew game);
    return 0;
}