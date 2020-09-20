#include <iostream>
#include <stdio.h>
#include "Windows.h"
#include <stdlib.h>
#include <cstdlib>
using namespace std;

int main();

void decision1()
{
	cout << "\nОсмотревшись, вы пришли к выводу, что скорее всего попали сюда в результате падения. Как вы поняли это?" << "\n" \
		<< "Прямо над вами сияла огромная дыра, конца которой не было видно..." << "\n" \
		<< "А еще прямо перед вами была огромная дверь, которая, кажется, закрыта и не одну сотню лет..." << "\n";

}

void decision2()
{
	cout << "\nВы похлопали себя по карманам: \"Ножик, кошелек и ключи...какого черта я вообще попёрся сюда с таким набором вещей?..\""  << "\n";
}

void decision3()
{
	cout << "\nПонимая, что вы скорее всего погибните, вы решили не покидать темницу и в скором времени умерли от жажды" << "\n";
	int answer;
	cout << "\nНачать заново?" << endl;
	cout << "1. Да" << endl;
	cout << "2. Нет (выход)" << endl;
	cout << "Ваш дух принимает решение: ";
	cin >> answer;
	if (answer == 1)
	{
		cout << "Богам нравится ваша целеустремленность. Вам дарован еще один шанс. Не упустите его." << "\n";
		main();
	}
	if (answer == 2)
	{
		cout << "Кажется, ваш земной путь завершен. Ваша душа обретет покой..." << "\n";
		system("pause");
		exit(0);
	}
}

void decision4()
{
	cout << "\nСтрах амнезии и одиночества еще никогда не был настолько сильным для вас. В панике вы начали кричать,"  << "\n" \
		<< "после чего упали безсознания...к сожалению, пол в темнице был каменный..." << "\n";
	int answer;
	cout << "\nНачать заново?" << endl;
	cout << "1. Да" << endl;
	cout << "2. Нет (выход)" << endl;
	cout << "Ваш дух принимает решение: ";
	cin >> answer;
	if (answer == 1)
	{
		cout << "Богам нравится ваша целеустремленность. Вам дарован еще один шанс. Не упустите его." << "\n";
		main();
	}
	if (answer == 2)
	{
		cout << "Кажется, ваш земной путь завершен. Ваша душа обретет покой..." << "\n";
		system("pause");
		exit(0);
	}
}

void hall2Choice2()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	cout << "Вы решились пройти сквозь второй проход в надежде, что в конце вас не будет поджидать очередной противник." << "\n" \
		<< "В конце прохода вы обнаружили маленькую комнату, больше похожую на отдельую кладовую. Повсюду были разбросаны всякие вещи: металлические чашки, ложки... " << "\n" \
		<< "Дальше лень писать, сорри." << "\n" \
		<< SetConsoleTextAttribute(hConsole, 14) << "<DEVELOPER>: ВЕТКА ИГРЫ НЕДОСТУПНА, Т.К. НАХОДИТСЯ В РАЗРАБОТКЕ." << endl;
	SetConsoleTextAttribute(hConsole, 15);
}




void chest1Open()
{
	int strRing, dexBoots, luckAmulet, pickUp;
	cout << "\nВы нашли сундук и решили открыть его." << endl;
	pickUp = rand() % 3 + 1;
	if (pickUp == 1)
	{
		cout << "Открыв сундук, вы нашли магическое кольцо силы! Ваш силовой навык увеличился на 5 единиц!" << endl;
		strRing = 1;
	}
	if (pickUp == 2)
	{
		cout << "Открыв сундук, вы нашли Сапоги-скороходы! Ваш навык ловкости увеличился на 10 единиц!" << endl;
		dexBoots = 1;
	}
	if (pickUp == 3)
	{
		cout << "Открыв сундук, вы нашли зачарованную заячью лапку! Ваша удача увеличилась на 10 единиц!" << endl;
		luckAmulet = 1;
	}
}

void hall2Battle1()
{
	cout << "Вы решили пройти через первый тоннель. Как оказалось, он ведет в тупик. Вы хотели пойти обратно, но вас заметила " << "\n" \
		<< "странное существо, стоящее в тени. Немного позже вы поняли, что увидели самого настоящего скелета, да еще и с мечом!" << endl;
	int choice2 = 0;
	cout << "\n1.\"В бой!\"" << endl;
	cout << "2. Попробовать тихо уйти" << endl;
	cout << "Ваш выбор: ";
	cin >> choice2;
	if (choice2 == 1)
	{
		int strength = 5, dex = 5, luck = 5;
		int  enemyHealth = 100, playerHealth = 100;
		while (enemyHealth > 0)
		{
			int enemyHealchance = rand() % 2 + 0;
			int enemyHeal = rand() % 100 + 1;
			int block = rand() % 2 + 0;
			int action = 0;
			int heal = rand() % 15 + 1;
			int enemyDamage1 = rand() % 20 + 1;
			int enemyDamage2 = rand() % 30 + 1;
			int momentalDamage1 = rand() % 10 + 1;
			int momentalDamage2 = rand() % 20 + 1;
			int playerDamage1 = (momentalDamage1)+(momentalDamage1 / strength);
			int playerDamage2 = (momentalDamage2)+(momentalDamage2 / strength);
			cout << "\nВаше здоровье: " << playerHealth << "\n"
				<< "Здоровье врага: " << enemyHealth << endl;
			cout << "\nВаши навыки: " << "\n"
				<< "STR		" << strength << "\n"
				<< "DEX		" << dex << "\n"
				<< "LUCK		" << luck << "\n";
			cout << "1. Простой удар ножом" << endl;
			cout << "2. Сильный удар ножом" << endl;
			cout << "3. Лечение" << endl;
			cout << "4. Блок" << endl;
			cout << "Действие: ";
			cin >> action;
			if (action == 1)
			{
				cout << "Вы нанесли легкий удар ножом и нанесли " << playerDamage1 << " очков урона." << endl;
				enemyHealth = enemyHealth - playerDamage1;
				cout << "Скелет атакует в ответ. Удар мечом причинил вам " << enemyDamage1 << " очков урона." << endl;
				playerHealth = playerHealth - enemyDamage1;
				if (enemyHealchance == 1)
				{
					cout << "Скелет щелкает косточками, восстанавливая себе " << enemyHeal << " очков здоровья." <<  endl;
					if (enemyHeal == 100)
					{
						HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
						SetConsoleTextAttribute(hConsole, 11);
						cout << "\n<Dungeon Quest Guide>: \"Скелет только что восстановил себе 100 единиц здоровья! Будьте осторожны!\"" << endl;
						SetConsoleTextAttribute(hConsole, 15);						
					}
				}
			}
			if (action == 2)
			{
				cout << "\nВы с размаху бьете скелета рукояткой ножа по его черепушке, нанося " << playerDamage2 << " очков урона." << endl;
				enemyHealth = enemyHealth - playerDamage2;
				cout << "В ответ, скелет кусает вас за руку. Щелкая зубками, он нанес вас " << enemyDamage2 << " очков урона." << endl;
				playerHealth = playerHealth - enemyDamage2;
				if (enemyHealchance == 1)
				{
					cout << "Скелет щелкает косточками, восстанавливая себе " << enemyHeal << " очков здоровья." << endl;
					if (enemyHeal == 100)
					{
						HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
						SetConsoleTextAttribute(hConsole, 11);
						cout << "\n<Dungeon Quest Guide>: \"Скелет только что восстановил себе 100 единиц здоровья! Будьте осторожны!\"" << endl;
						SetConsoleTextAttribute(hConsole, 15);
					}
				}
			}
			if (action == 3)
			{
				cout << "\nВы делаете небольшую передышку, отойдя от скелета на расстояние. " << "\n" \
					<< "Вы успокоили дыхание, восстановив " << heal << " очков здоровья." << endl;
				playerHealth = playerHealth + heal;
				if (playerHealth > 100)
				{
					cout << "\nВаши силы превысили все границы. Часть сил высвободилась, нанося врагу 10 единиц урона." << "\n" \
						<< "Ваше здоровье восполнилось до максимума" << endl;
					enemyHealth = enemyHealth - 10;
					playerHealth = 100;
				}
				if (enemyHealchance == 1)
				{
					cout << "\nСкелет щелкает косточками, восстанавливая себе " << enemyHeal << " очков здоровья." << endl;
					if (enemyHeal == 100)
					{
						HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
						SetConsoleTextAttribute(hConsole, 11);
						cout << "\n<Dungeon Quest Guide>: \"Скелет только что восстановил себе 100 единиц здоровья! Будьте осторожны!\"" << endl;
						SetConsoleTextAttribute(hConsole, 15);
					}
				}
			}
			if (action == 4)
			{
				if (block == 1)
				{
					cout << "\nВы успешно заблокировали атаку врага. Вы воодушевились сражаться дальше, восстановив себе 5 единиц здоровья." << endl;
					playerHealth = playerHealth + 5;
				}
				if (block == 0)
				{
					cout << "\nВы пытались заблокировать атаку, но вам не хватило сил удержать удар. Вы теряете 5 единиц здороыья." << endl;
					playerHealth = playerHealth - 5;
				}
		
			}
			if (enemyHealth <= 0)
			{
				cout << "Вы победили!" << endl;
			}
			if (playerHealth <= 0)
			{
				cout << "\nУдаром меча скелет пополняет ряды армии нежити в виде очередного бойца....вас." << endl;
				int answer;
				cout << "\nНачать заново?" << endl;
				cout << "1. Да" << endl;
				cout << "2. Нет (выход)" << endl;
				cout << "Ваш дух принимает решение: ";
				cin >> answer;
				if (answer == 1)
				{
					cout << "Богам нравится ваша целеустремленность. Вам дарован еще один шанс. Не упустите его." << "\n";
					main();
				}
				if (answer == 2)
				{
					cout << "Кажется, ваш земной путь завершен. Ваша душа обретет покой..." << "\n";
					system("pause");
					exit(0);
				}
			}
		}

	}
	if (choice2 == 2)
	{
		cout << "Вы попытались тихонько уйти обратно, но, видимо, вы очень громко делали шаги. " << "\n" \
			<< "Напоследок вы задумались о том, как скелет, может что - то слышать..." << endl;
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hConsole, 10);
		cout << "\nДостижение разблокировано: \"Spooky scary skeleton\"" << endl;
		SetConsoleTextAttribute(hConsole, 15);
		int answer;
		cout << "\nНачать заново?" << endl;
		cout << "1. Да" << endl;
		cout << "2. Нет (выход)" << endl;
		cout << "Ваш дух принимает решение: ";
		cin >> answer;
		if (answer == 1)
		{
			cout << "Богам нравится ваша целеустремленность. Вам дарован еще один шанс. Не упустите его." << "\n";
			main();
		}
		if (answer == 2)
		{
			cout << "Кажется, ваш земной путь завершен. Ваша душа обретет покой..." << "\n";
			system("pause");
			exit(0);
		}
	}

}
	

void hall2Decision()
{
	int hall2Choice;
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 11);
	cout << "\n<Dungeon Quest Guide>: \"Вы победили первого босса. Поздравляю!" << "\n" \
		<< "Продолжайте путь вперёд, вас ждёт еще много интересного!\"" << endl;
	SetConsoleTextAttribute(hConsole, 15);
	cout << "Обойдя тело монстра, вы подошли к следующей двери и открыли её. Вашему взгляду предстал полукруглый зал с 4 проходами." << "\n" \
		<< "Вы внимательно оглядели зал и решаете что делать: " << endl;
	do
	{
		cout << "1. Пойти в проход №1" << endl;
		cout << "2. Пойти в проход №2" << endl;
		cout << "3. Пойти в проход №3" << endl;
		cout << "4. Пойти в проход №4" << endl;
		cout << "Итак, ваш выбор: ";
		cin >> hall2Choice;
		switch (hall2Choice)
		{
		case 1:
			hall2Battle1();
			break;
		case 2:
			hall2Choice2();
			break;
		case 3:
			chest1Open();
			break;
		case 4:
			SetConsoleTextAttribute(hConsole, 14);
			cout << "\n<DEVELOPER>: ВЕТКА ИГРЫ НЕДОСТУПНА, Т.К. НАХОДИТСЯ В РАЗРАБОТКЕ." << endl;
			SetConsoleTextAttribute(hConsole, 15);
			break;
		default:
			cout << "Подумай еще раз и нажми верную клавишу." << endl;
		}
	} while (hall2Choice != 500);		
}

void hallBossBattle()
{
	cout << "\nОткрыв дверь, вы внезапно поняли, что находитесь в начале огромной комнаты." << "\n" \
		<< "Дверь в следующее помещение была в паре десятков метров от вас." << "\n" \
		<< "Было только одно \"но\" " << "\n" \
		<< "...перед вами стоял огромный монстр, природу которого вы не можете определить." << "\n" \
		<< "Хуже всего то, что он заметил вас." << endl;
	cout << "\nБой неизбежен." << endl;
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 11);
	cout << "\n<Dungeon Quest Guide>: \"В этом бою вам придется научиться пользоваться вашими умениями." << "\n" \
		<< "На данный момент в игре сущетсвует 3 умения: сила (STR), удача (LUCK) и ловкость (DEX)." << "\n" \
		<< "Эти три параметра влияют на тот урон, который вы наносите, который получаете, и на шанс нанести критичиский удар." << "\n" \
		<< "Рассчёт навыка СИЛА идёт по формуле: \"Моментальный урон/Уровень умения = Добавка к урону\"" << "\n" \
		<< "Система остальных навыков пока находится в разработке и имеет чисто косметический характер." << "\n" \
		<< "Ваши навыки будут автоматически повышаться при битве с боссами и нахождении особых предметов, раскиданных по всему подземелью." << "\n" \
		<< "Навыки на этот бой начнутся с 5 очков. Удачи!\"" << "\n";
	SetConsoleTextAttribute(hConsole, 15);
	int strength = 5, dex = 5, luck = 5;
	int playerHealth = 100, bossHealth = 200;
	while (bossHealth > 0)
	{
		int bossAction = 0;
		int heal = rand() % 15 + 1;
		int bossDamage1 = rand() % 20 + 1;
		int bossDamage2 = rand() % 30 + 1;
		int momentalDamage1 = rand() % 10 + 1;
		int momentalDamage2 = rand() % 20 + 1;
		int playerDamage1 = (momentalDamage1)+(momentalDamage1 / strength);
		int playerDamage2 = (momentalDamage2)+(momentalDamage2 / strength);
		cout << "\nВаше здоровье: " << playerHealth << "\n"
			<< "Здоровье босса: " << bossHealth << endl;
		cout << "\nВаши навыки: " << "\n"
			<< "STR		" << strength << "\n"
			<< "DEX		" << dex << "\n"
			<< "LUCK		" << luck << "\n";
		cout << "1. Простой удар ножом" << endl;
		cout << "2. Сильный удар ножом" << endl;
		cout << "3. Лечение" << endl;
		cout << "4. Уворот" << endl;
		cout << "5. Блок" << endl;
		cout << "Действие: ";
		cin >> bossAction;
		if (bossAction == 1)
		{
			cout << "\nС разбегу вы наносите удар монстру, нанося " << playerDamage1 << " урона." << endl;
			bossHealth = bossHealth - playerDamage1;
			cout << "Монстр атакует в ответ! Вы едва успели отскочить от его огромных когтей, но он всё равно зацепил вас, " << "\n" \
				<< "нанеся " << bossDamage1 << " очков урона." << endl;
			playerHealth = playerHealth - bossDamage1;
		}
		if (bossAction == 2)
		{
			cout << "\nВы вкладываете все свои силы в удар! Ярость захлестывает вас, нанося врагу " << playerDamage2 << " урона." << endl;
			bossHealth = bossHealth - playerDamage2;
			cout << "Монстр замахивается для мощного удара, осторожней! Из последних сил, вы делаете перекат, но волна от удара врага всё-равно наносит " << bossDamage2 << " очков урона." << endl;
			playerHealth = playerHealth - bossDamage2;
		}
		if (bossAction == 3)
		{
			cout << "\nВы делаете небольшую передышку, отпрыгнув от босса на расстояние. " << "\n" \
				<< "Вы успокоили дыхание, восстановив " << heal << " очков здоровья." << endl;
			playerHealth = playerHealth + heal;
			if (playerHealth > 100)
			{
				cout << "Ваши силы превысили все границы. Часть сил высвободилась, нанося боссу 10 единиц урона." << "\n" \
					<< "Ваше здоровье восполнилось до максимума" << endl;
				bossHealth = bossHealth - 10;
				playerHealth = 100;
			}
		}
		if (bossAction == 4)
		{
			cout << "\nПерекат влево, перекат вправо - вы уворачиваетесь от размашистых атак врага." << "\n" \
				<< "От усталости здоровье босса падает на 5 единиц" << endl;
			bossHealth = bossHealth - 5;
		}
		if (bossAction == 5)
		{
			cout << "Вы пытались заблокировать ножичком удар огромной лапой... На что вы рассчитывали?.." << endl;
			cout << "Игра окончена." << endl;
			int answer;
			cout << "\nНачать заново?" << endl;
			cout << "1. Да" << endl;
			cout << "2. Нет (выход)" << endl;
			cout << "Ваш дух принимает решение: ";
			cin >> answer;
			if (answer == 1)
			{
				cout << "Богам нравится ваша целеустремленность. Вам дарован еще один шанс. Не упустите его." << "\n";
				main();
			}
			if (answer == 2)
			{
				cout << "Кажется, ваш земной путь завершен. Ваша душа обретет покой..." << "\n";
				system("pause");
				exit(0);
			}
		}
		if (playerHealth <= 0)
		{
			int answer;
			cout << "В ходе длинного боя вы не смогли вовремя отскочить от удара врага. К сожалению, удар был смертельный." << endl;
			cout << "Игра окончена." << endl;
			cout << "Начать заново?" << endl;
			cout << "1. Да" << endl;
			cout << "2. Нет (выход)" << endl;
			cout << "Ваш дух принимает решение: ";
			cin >> answer;
			if (answer == 1)
			{
				cout << "Богам нравится ваша целеустремленность. Вам дарован еще один шанс. Не упустите его." << "\n";
				main();
			}
			if (answer == 2)
			{
				cout << "Кажется, ваш земной путь завершен. Ваша душа обретет покой..." << "\n";
				system("pause");
				exit(0);
			}
		}
		if (bossAction == 1199)
		{
			HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(hConsole, 10);
			cout << "\nДостижение разблокировано: "; SetConsoleTextAttribute(hConsole, 12); cout << "\"Сосунок\"(вы использовали чит-код)" << endl;
			SetConsoleTextAttribute(hConsole, 15);
			bossHealth = 0;
		}
		if (bossHealth <= 0)
		{
			cout << "Вы нанесли последний удар огромному монстру после чего он упал замертво!" << "\n" \
				<< "\"*тяжелый вздох*...как два пальца в розетку...\"" << endl;
			HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(hConsole, 10);
			cout << "\nДостижение разблокировано: \"Боевое крещение\"" << endl;
			SetConsoleTextAttribute(hConsole, 15);
			cout << "Вы победили!" << endl;
			hall2Decision();
		}
	}
		
}

void hall1Ending()
{
	int choice3 = 0;
	cout << "\nВы дошли до конца коридора и остановились перед очередной дверью. Вы начали чувствовать тревогу..." << endl;
	cout << "Заходим?" << endl;
	cout << "\n1.\"Других путей всё-равно нет, будь что будет\"" << endl;
	cout << "2. Испугаться и остаться в коридоре." << endl;
	cout << "Ваш выбор: ";
	cin >> choice3;
	if (choice3 == 1)
	{
		hallBossBattle();
	}
	if (choice3 != 1)
	{
		cout << "Поддавшись страху, вы навсегда застряли в подземелье" << endl;
		cout << "Игра окончена." << endl;
		int answer;
		cout << "\nНачать заново?" << endl;
		cout << "1. Да" << endl;
		cout << "2. Нет (выход)" << endl;
		cout << "Ваш дух принимает решение: ";
		cin >> answer;
		if (answer == 1)
		{
			cout << "Богам нравится ваша целеустремленность. Вам дарован еще один шанс. Не упустите его." << "\n";
			main();
		}
		if (answer == 2)
		{
			cout << "Кажется, ваш земной путь завершен. Ваша душа обретет покой..." << "\n";
			exit(0);
		}
	}

}

void turnLeft()
{
	int choice1 = 0;
	cout << "\nТолько вы успели зайти в комнату, как тут же застыли на месте: перед собой вы увидели гуманоидное существо с кожей зеленого цвета." << "\n" \
		<< "Ваши знания фэнтези дали вам понять, что видите гоблина." << "\n" \
		<< "Кажется, он тоже вас заметил. Что будем делать?" << endl;
	cout << "\n1.\"Пора показать этой зелёнке, кто тут хозяин\"(бой)" << endl;
	cout << "2. Попробовать тихо уйти" << endl;
	cout << "3. Притвориться мертвым" << endl;
	cin >> choice1;
	if (choice1 == 2)
	{
		cout << "Вы попытались тихонько уйти обратно, но, видимо, ваш скилл скрытности был не прокачен и гоблин напал на вас." << "\n" \
			<< "Он нанёс вам раны несовместимые с жизнью..." << endl;
		int answer;
		cout << "\nНачать заново?" << endl;
		cout << "1. Да" << endl;
		cout << "2. Нет (выход)" << endl;
		cout << "Ваш дух принимает решение: ";
		cin >> answer;
		if (answer == 1)
		{
			cout << "Богам нравится ваша целеустремленность. Вам дарован еще один шанс. Не упустите его." << "\n";
			main();
		}
		if (answer == 2)
		{
			cout << "Кажется, ваш земной путь завершен. Ваша душа обретет покой..." << "\n";
			system("pause");
			exit(0);
		}
	}
	if (choice1 == 3)
	{
		cout << "Быть может вы смогли бы стать хорошим актёром...Но гоблин не оценил вашего актёрского мастерства и, пользуясь фразой Станиславского" << "\n" \
			<< "\"НЕ ВЕРЮ!\", он разорвал вас на куски...How dramatic..." << endl;
		int answer;
		cout << "\nНачать заново?" << endl;
		cout << "1. Да" << endl;
		cout << "2. Нет (выход)" << endl;
		cout << "Ваш дух принимает решение: ";
		cin >> answer;
		if (answer == 1)
		{
			cout << "Богам нравится ваша целеустремленность. Вам дарован еще один шанс. Не упустите его." << "\n";
			main();
		}
		if (answer == 2)
		{
			cout << "Кажется, ваш земной путь завершен. Ваша душа обретет покой..." << "\n";
			system("pause");
			exit(0);
		}
	}
	if (choice1 == 1)
	{
		int  enemyHealth = 100, playerHealth = 100;
		while (enemyHealth > 0)
		{
			int action = 0;
			int damage1 = rand() % 10 + 1;
			int damage2 = rand() % 20 + 1;
			int playerDamage1 = rand() % 10 + 1;
			int playerDamage2 = rand() % 20 + 1;
			cout << "\nВаше здоровье: " << playerHealth << "\n"
				<< "Здоровье врага: " << enemyHealth << endl;
			cout << "1. Ударить кулаком" << endl;
			cout << "2. Ударить ногой" << endl;
			cout << "3. Назвать гоблина лохом" << endl;
			cout << "4. Достать ножик" << endl;
			cin >> action;
			if (action == 1)
			{
				cout << "Вы ударили кулаком и нанесли " << damage1 << " очков урона." << endl;
				enemyHealth = enemyHealth - damage1;
				cout << "Гоблин атакует в ответ. Удар когтями причинил вам " << playerDamage1 << " очков урона." << endl;
				playerHealth = playerHealth - playerDamage1;
			}
			if (action == 2)
			{
				cout << "Вы пнули врага ногой и нанесли " << damage2 << " очков урона." << endl;
				enemyHealth = enemyHealth - damage2;
				cout << "Разозлившись, гоблин кусает вас, нанося " << playerDamage2 << " очков урона." << endl;
			}
			if (action == 3)
			{
				cout << "Вы обозвали гоблина лошком. У того от обиды потекли слёзы. Вы нанесли 25 очков урона." << endl;
				enemyHealth = enemyHealth - 25;
				cout << "Гоблин пытается ударить вас, но он морально сломлен и поэтому промахивается. Вы получаете 0 очков урона." << endl;
			}
			if (action == 4)
			{
				cout << "Вы достали ножик и тут же вонзили его в гоблина, нанеся критический урон." << endl;
				cout << "Гоблин опешил от такой наглости и умер." << endl;
				enemyHealth = enemyHealth - 100;
				HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(hConsole, 10);
				cout << "Достижение разблокировано: \"Сила Кавказа\"" << endl;
				SetConsoleTextAttribute(hConsole, 15);
			}
		}
		if (enemyHealth <= 0)
		{
			cout << "Вы победили!" << endl;
		}

	}
}

void turnRight()
{
	int choice2 = 0;
	cout << "\nВы открыли дверь и увидели перед собой сундук." << endl;
	cout << "Открываем его?" << endl;
	cout << "1. Да." << endl;
	cout << "2. Нет, идём обратно." << endl;
	cin >> choice2;
	if (choice2 == 1)
	{
		cout << "Вы нашли клочок бумаги. Похоже, это карта ближайших коридоров и команат" << endl;
	}
	else cout << "Вы вышли обратно в коридор. Куда пойдете?" << endl;
	return;
}

void hallDecision()
{
	int hallChoice;
	cout << "Вы вышли в коридор и медленно дошли до двух дверей, находящихся по бокам от вас. Куда пойдете?" << endl;
	cout << "Ну, была ни была?" << endl;
	do
	{
		cout << "1. Пойду налево" << endl;
		cout << "2. Пойду направо" << endl;
		cout << "3. Пойду прямо до конца коридора" << endl;
		cout << "Итак, ваш выбор: ";
		cin >> hallChoice;
		switch (hallChoice)
		{
		case 1:
			turnLeft();
			break;
		case 2:
			turnRight();
			break;
		case 3:
			hall1Ending();
			break;
		default:
			cout << "Подумай еще раз и нажми верную клавишу." << endl;
		}
	} while (hallChoice != 500);
}

void roomExamine()
{
	int examine;
	cout << "Здесь нельзя оставаться..." << endl;
	do
	{
		cout << "1. Попробовать зацепиться за уступ в потолке и полезть наверх." << endl;
		cout << "2. Подойти к двери." << endl;
		cout << "Ваш выбор: ";
		cin >> examine;
		switch (examine)
		{
		case 1:
			cout << "\nВы подпрыгнули и смогли пролезть пару метров вверх, после чего сорвались прямо на каменный пол " << "\n" \
				<< "...эта темница стала вашой могилой..." << endl;
			int answer;
			cout << "\nНачать заново?" << endl;
			cout << "1. Да" << endl;
			cout << "2. Нет (выход)" << endl;
			cout << "Ваш дух принимает решение: ";
			cin >> answer;
			if (answer == 1)
			{
				cout << "Богам нравится ваша целеустремленность. Вам дарован еще один шанс. Не упустите его." << "\n";
				main();
			}
			if (answer == 2)
			{
				cout << "Кажется, ваш земной путь завершен. Ваша душа обретет покой..." << "\n";
				system("pause");
				exit(0);
			}
			break;
		case 2:
			cout << "\nК вашему удивлению, дверь оказалась открытой. Потоптавшись у порога, Вы решаетесь открыть её и вашему взгляду" << "\n" \
				<< "предстает темный коридор с еще одной дверью в конце и где-то в середине по обе стороны..." << endl;
			hallDecision();
			break;
		default:
			cout << "Подумай еще раз и нажми верную клавишу." << endl;
		}
	} while (examine != 1);
	if (examine == 1)
	{
		cout << "Игра окончена." << endl;
		system("pause");
		exit(0);
	}
}

int main()
{	
	setlocale(LC_ALL, "Russian");
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 12);
	cout << "\n						DUNGEON QUEST v0.51 (alpha)"; SetConsoleTextAttribute(hConsole, 14); cout << "\n												       \"TDRK Team\" 2020 " << "\n";
	SetConsoleTextAttribute(hConsole, 13);
	cout << "PATCH LIST v0.51 (19.06.2020 23:03): " << "\n" \
		<< "1. Введено 5 достижений, одно из которых секретное; " << "\n" \
		<< "2. Добавлен чит-код; " << "\n" \
		<< "3. Система лута из сундуков почти готова; " << "\n" \
		<< "4. Враги научились лечиться. Молитесь, чтобы враг случайно не восстановил себе здоровье полностью); " << "\n" \
		<< "5. Добавлено меню повторной игры после смерти игрока. " << endl;
	SetConsoleTextAttribute(hConsole, 15);
	int decisions;
	cout << "\nВы очнулись на полу сырой темницы. Вы не помните ни как сюда попали, ни толком кто вы такой." << "\n" \
		<< "Лишь несвязанные мысли с трудом всплывают в вашем помутненом разуме. " << "\n" \
		<< "Вы по-немногу приходите в себя, находясь в сумраке. Вы решаете, что надо что-то делать:" << "\n";

	do
	{
		cout << "1. Осмотреться." << endl;
		cout << "2. Полазать по карманам." << endl;
		cout << "3. Бездействовать." << endl;
		cout << "4. \"О, БОЖЕ, ГДЕ Я?!\"" << endl;
		cout << "Ваш выбор: ";
		cin >> decisions;
		switch (decisions)
		{
		case 1:
			decision1();
			roomExamine();
			break;
		case 2:
			decision2();
			break;
		case 3:
			decision3();
			break;
		case 4:
			decision4();
			break;
		default:
			cout << "Подумай еще раз и нажми верную клавишу." << endl;
		}
	} while ((decisions != 3) & (decisions != 4));
	if (decisions == 3)
	{
		cout << "Игра окончена." << endl;
		system("pause");
	}
	if (decisions == 4)
	{
		cout << "Игра окончена." << endl;
		system("pause");
	}

}