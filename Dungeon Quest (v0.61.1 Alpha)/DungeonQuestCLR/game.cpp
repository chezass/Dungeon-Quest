#include "game.h"
#include "gameStart.h"
#include "level1.h"
#include <stdio.h>
#include <Windows.h>

using namespace DungeonQuestCLR;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{

    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew game);
    return 0;
}



