#pragma once



class GameDialogFactory {
public:
	enum DialogType
	{
		STANDARD,
		HOLIDAY
	};

	static IGameDialog* GetGameDialog(DialogType dialogType);
};
