#ifndef H_LANG_RU
#define H_LANG_RU

/*** ACHTUNG! THIS FILE MUST BE ANSI! ***/

// Thanks: ElikaStudio

#include "glyph_ru.h"

const char *STR_RU[] = { ""
// help
    , "��������..."
    , "������� H ��� ������"
    , helpText
    , "%s@@@"
      "���{���� %d@@"
      "��������� %d@@"
      "�������� %d �� %d@@"
      "����� %s"
    , "���������� ����..."
    , "���������� ���������!"
    , "������ ����������!"
    , "��"
    , "���"
    , "����"
    , "���"
    , "����"
    , "����������"
    , "�������"
    , "������~����{� �����"
    , "VR"
    , "������"
    , "�������"
    , "�������"
    , STR_LANGUAGES
    , "���������"
    , "��{����� 1"
    , "��{����� 2"
    , "��{����� 3"
    , "��{����� 4"
    , "�� �����"
    , "����� 1"
    , "����� 2"
    , "������� ����� �������"
    , "%s - �������"
    , "%s - �����"
// inventory pages
    , "�����"
    , "���������"
    , "��������"
// save game page
    , "��������� ����?"
    , "������� �������"
// inventory option
    , "����"
    , "�����"
    , "������"
    , "����������"
    , "������� ����"
    , "�������"
    , "����"
    , "����������"
    , "�����"
// passport menu
    , "��������� ����"
    , "����� ����"
    , "�������������"
    , "����� � ����"
    , "��{��� �� ����"
    , "����� ������"
// detail options
    , "������{��� �������"
    , "����������"
    , "���������"
    , "����"
    , "����"
    , "VSync"
    , "������"
    , "������� ��������"
// sound options
    , "������{��� �����"
    , "������������"
    , "��������"
    , "����"
// controls options
    , "������{��� ����������"
    , "����������"
    , "��{�����"
    , "��������"
    , "��������� ����"
    , "������������� ����"
    // controls
    , "�����", "������", "���", "�����", "������", "���", "��{������", "������", "��������", "��������", "������", "�������", "���������", "Start"
    , STR_KEYS
// inventory items
    , "����������"
    , "����������"
    , "���������"
    , "��������"
    , "�������"
    , "���"
    , "���{��� ����������"
    , "������� ���������"
    , "���{��� ��������"
    , "���{��� ���"
    , "��������� �������"
    , "������� �������"
    , "��������{� ������"
    , "�����"
// keys
    , "����"
    , "���������{� ����"
    , "�����{� ����"
    , "������{� ����"
    , "���������{� ����"
    , "���� �������"
    , "���� �������"
    , "���� �������"
    , "���� ����"
    , "���������{� ����"
// puzzles
    , "�������"
    , "������{� ����"
    , "������{� ������"
    , "��������"
    , "��������������"
    , "����"
    , "���� ����"
    , "������ �������"
    , "�������{�"
    , "���� ��������"
// TR1 subtitles
    /* CAFE */ ,
    "[43500]��� �� ������ ������� �������,@����� �������� �� ���� ������ �� ��������?"
    "[47500]������ �������, ��, �������, �� �� ������ ����."
    "[50500]��� �, �������, ������ ��� �� � ����{� ��� �����������..."
    "[54500]� ���?"
    "[55000]���... ���� ������ ����� �� Natla Technologies."
    "[59000]�� ������... ��������� ����� � ���!@����� �������, ����������� ��������."
    "[64500]���{��� ��, ������!"
    "[66000]���."
    "[68000]������� �� ���, ����."
    "[70500]��������� � ����� ������ ��~�� ����?"
    "[73500]��������, � ������� �� ����������� ��������."
    "[76000]����� ���� ��� ����� ����������."
    "[78000]����. ���������� ������ ��������, �������� ���������,@������ ��~���, �������� ���������, ����� �����..."
    "[87500]� ��~� ��� ��� ������: ��������{� �������� � ���������{� ����{�,"
    "[92500]���������{� � �������� ���������"
    "[96000]�� �� ��� � �����."
    "[98000]�� ����� �� ����������� ������.@� ���� �� ��� ������ �� ������?"
    /* LIFT */ ,
    "[49000]�� ����������� � ��������� ������� ���������,@� ����� �������� ������ ����."
    "[53500]����� ���� ������� ����� �����,@��� ��� ����� ��������~�� ��������� ���� ��������"
    "[59000]- ������ �� ��~�� ����������� ���������{�@����������� ���������� ���������"
    "[64000]� ������ � ��� ����� ��� ����� ������."
    "[67000]������, ������~������ ����� ����� ����������� �� ��� �����,"
    "[72000]� ������� ��������� �������� ����.@����, ������������� ������ ���������!"
    "[79000]��� ������ ������ �� ����� �����������{�,@������� ��� ������ �� ����-���������."
    "[85000]������ ���� � ������ � ����{� � ������ ����������.@��� � ������� ���������."
    "[92000]"
    "[93500]����... �� �� � ����{���."
    /* CANYON */ ,
    "[13500]������ �������{� ���������..."
    "[16500]�������!"
    "[17000]���� �����{�!"
    "[20000]�������� ������� �� � ���, ��?"
    "[22500]� �����-�� ������."
    "[24000]����, ���� ���������� ���������� ��������."
    "[27000]���� �������� ��, ��� �� � ���� ������!"
    "[30000]������ � ��������..."
    "[32000]"
    "[42000]��� �, ����� �~�!"
    "[45000]�{�!"
    "[48000]"
    "[50500]������!"
    "[53000]"
    "[62500]�����."
    "[65000]"
    "[136000]��� ���, �~��� ������, ����?"
    "[138000]���?"
    "[138500]��� ����..."
    "[140500]�� ������ �����, ������ ����."
    "[142500]����� �� ��� ����?"
    "[145000]�����, ���� ����� ��������� ��������.@� ������� ������, �� ��~���?"
    "[152000]"
    "[158000]��������."
    "[160000]��� � ���."
    "[161500]�� ������?"
    /* PRISON */ ,
    "[00001]�� �� ������ ����� �������!"
    "[01500]�� ����� ���� ����� ���������, �� ���� ������������."
    "[06500]�� �������� ��������������� ������ � �� ��, ��� �������� ���."
    "[11500]�� �� ������, �..."
    "[12500]��������� ������ ��������, ��,@��� ��������� ����� ������� � �������� ���."
    "[19500]�� ��������� � ��������, � ��� ������ ����{� �� ����� �������"
    "[24000]����� ������ �� ����{� ��������,"
    "[27000]����� ������������ �~� ������������� ����,@���� ����� ��������� ���������{�."
    "[33000]���������? ���������� �� ����!"
    "[35500]����� �� ��� �� �������� �������� ���� ����� �����������������."
    "[40000]����������!"
    "[41500]����{��� �������� � ����."
    "[44000]�������!"
    "[45000]�� ������������ ���������� �����@��� ����� ��������� ����{�"
    "[49500]��� �����-�� ������� ������."
    "[51000]��� ��������. ����� ���������!"
    "[54000]������ ��� ����� ����..."
    "[56000]� ��. �� ������� ���� � �����,"
    "[60000]����� � ���~�� ����, �����, ������"
    "[65000]� ���~�� ������� ������ �������� ������."
    "[70000]�������{� ���� ����������� ���������, �����!"
    "[73000]�� ���� ������ ��������, ��� � ���@��������{� ��������� - ���������!"
    /* 22 */ ,
    "[04500]� ������������!"
    "[06000]� ����, ������ �� ������������� ��������?"
    "[09500]�������� � ������, �����������{� ����� ����������."
    "[13500]��������� ������� ���� �������� ��������������� ������."
    "[17500]������� ��� ������� � �����."
    "[20500]���� ������� ����� ����!"
    "[22500]���-�� ����� �������� �� ���������?"
    "[24500]����� ��� ���...@��� �������� ������� � �������� �� ����� � �������!"
    "[30000]��������� ��������� ������ ���� ������������ ��������,"
    "[34000]�������� ��������� � ����� ������� ���������..."
    "[37000]��~� ������ ���� ���� �� ���."
    "[39000]� �� ���!"
    "[40000]��������� ���������� ����� 15 ������."
    "[43000]������� ������ ������������ �����!"
    "[45000]�� ������ ����� ��� ����� ��� ��������?"
    "[47500]�����!"
    "[50000]������..."
    "[54000]����..."
    "[55500]������... ���... ���..."
    "[60000]����..."
    /* 23 */ ,
    "[00001]����, �� ��������� �������� ���� ���������"
    "[03000]�� �������, ��� � ��������� �����."
    "[05500]������?"
    "[06500]����... ������ � ����, ����� �� �� ���!"
    "[09000]�������"
    "[10000]��, ���� � ���� ����{� ����� ������!"
    "[13500]������ ����� ���? � ������ ���� ��� ����� �..."
    "[17000]���{�! �� ������� �� ���������?"
    "[19500]�~��� ��... ����� ���� �..."
    "[22000]������, �-������."
    "[24000]�� ������, ��� ��� �����, ��� ������?"
    "[26500]���� ����� ������ ��� ����� ����� ������."
    "[29500]� ��� �� ��?"
    "[30500]��! ���� �� ��� �� ��������."
    "[34000]�������, ��� ����� ���� ���������?"
    "[37000]� �� ���� ���� �������� ��� ������ ��������� �����."
    "[42500]����� ������ �� ���� � ���� �����."
    "[46000]"
    "[51000]�������. ������."
    /* 24 */ , ""
    /* 25 */ ,
    "[03500]����� �������� �������"
    "[06000]���� �� ���� ���������{� ���������..."
    "[10000]������{�, ���� ����� ��������� ����������, ��������� ������� �����..."
    "[16000]� ���� ������ ������ ������."
    "[19000]�� ���� ��������� � ��� ������ ��� � �� ������ ����������."
    "[26000]�� ���� ��� ������, �������."
    /* 26 */ , "����� ���������� �� ��� ����{�.@� ������� ��������� ���������."
    /* 27 */ , "��������{��� �������,@����� ���� � ����������� �������."
    /* 28 */ , "������. ������ ������� ����������.@������� ������� ������."
    /* 29 */ , "������ ����� ������� ������ � ������ ������� ���� �� �������.@� ������ � ����� �� ����������{�."
    /* 30 */ , "��� ������{� ����.@����� �������� �� ����������,@����� ����{� ����� ��������� � ���������,@�� �������� ��~� �� �������."
    /* 31 */ , "����{����� � ����� �, ��������� �������� ������� ����~��,@������{��� ������� ��{������,@����� � ������ �� ����."
    /* 32 */ , "������ ��� ��� ������{� ���, ��@� ���������� ��� ��� ������{� ����������{�.@��� �������?@��� �, ������� ���� ���������{�."
    /* 33 */ , "� �� ������ ����� ����� ������.@������ ��������� ��������� ����{��� � ����-������.@������� ������� ������ � ����{����� � ����{� �����."
    /* 34 */ , "� ������{� �������{� ������ � ������ �����,@���� ���� �� ������ �����������.@����{���, �������{���."
    /* 35 */ , "���� �� ������ �����������,@������� � ������� ������� ��������,@����� ������� ������� ������� �����������."
    /* 36 */ , "���� � �� ���� ���������� ����-����,@� ���� ���������� �� ���{� � ��������� �� �������.@����� � ���� � ����{� �����{� �� ��� ��� ���� � �� �����������.@����� ������� ������ � ����� �� ������� ����~��.@����� � ������� � �������, ������� � ������� ������� ��{������."
    /* 37 */ , "������� ������� ����~�� � � ������ ������."
    /* 38 */ , "���� ������ ������ �� ����� ����,@�� � ��� ������� ������� ����� ������."
    /* 39 */ , "����� � ���� � ����{� �����{�, ���� � �� �����������.@����� ����{��� �� ��� ������� ������� �����,@����� ���� ��� ����� ��� �������.@������� ������� ����~�� � ����� ������� � ������� ������� ������.@� ������� ������ � �� �� �������."
    /* 40 */ , "���, � ������ ������{� ����.@�����{��� ��� � ������ ������ � �������, � �����, ���� � � �������,@������� ������� ��{������, ����� � ���������� �� �����."
    /* 41 */ , "�������!"
    /* 42 */ , "��������� ���� ���������.@������� ������� ����~��, � ����� ������� ������� ��{������."
    /* 43 */ , "��� ���� �� �������, ������ ������� ����{�.@������� ������� ������ � � ����{��� �� ����� �� ��������� �����.@����� ������� ����~��."
    /* 44 */ , "�������!@���� ����� ������� ������{� � ��� ������ � ���� ����� ������������,@� ���� ���������� ���������."
    /* 45 */ , "������� ������� ����� � � �������� �����.@����� �� ������� � ������� ������� ��{������,@����� � �� �����, � �������� �� ���{�."
    /* 46 */ , "����� ��������� �������."
    /* 47 */ , "� ������ ���������."
    /* 48 */ , "������� ������ � ������� �������� ��~� �����������@��� �������� ��� ����{�."
    /* 49 */ , "��! �!@��������{��� ������� ����~��, ������ � �����@��� ����������� �� ����������� ����.@������� ������, ����� �������,@��� ������� � ���� � ������� ��{������,@����� ��{��� �� ����."
    /* 50 */ , "������. � ������ ���� ����������� � ����� ������."
    /* 51 */ , "����� �����!"
    /* 52 */ , "������ �������."
    /* 53 */ , "� ���� ��~� ��~� ���� � ������ ����� ����.@� ��� ����������� �������� ����.@��������, ����������� ���� � ������!"
    /* 54 */ , "��� ������ �� ���� � ���� �������� ���� �� ����������, ����."
    /* 55 */ , "������� ������ ��� ������� ������, ��...@�������, ���~� ������� ��~� ���������."
    /* 56 */ , "�� � ���� ���������? �� � ���� ���������?! ��� ������ ������, ������ �� � ���� ���������!"
// TR1 levels
    , "������� ����"
    , "������"
    , "����� ����������"
    , "���������� ������"
    , "�������� ���������"
    , "��������� ��. ���������"
    , "������{�"
    , "������ ������"
    , "��������"
    , "�������� ��������"
    , "���� �����"
    , "������� �����"
    , "��������� ������"
    , "�������� �����"
    , "���������"
    , "������� ��������"
    , "����������� � ������"
    , "���� �����"
    , "�������� ���������"
    , "���{�"
// TR2 levels
    , "Lara's Home"
    , "The Great Wall"
    , "Venice"
    , "Bartoli's Hideout"
    , "Opera House"
    , "Offshore Rig"
    , "Diving Area"
    , "40 Fathoms"
    , "Wreck of the Maria Doria"
    , "Living Quarters"
    , "The Deck"
    , "Tibetan Foothills"
    , "Barkhang Monastery"
    , "Catacombs of the Talion"
    , "Ice Palace"
    , "Temple of Xian"
    , "Floating Islands"
    , "The Dragon's Lair"
    , "Home Sweet Home"
// TR3 levels
    , "Lara's House"
    , "Jungle"
    , "Temple Ruins"
    , "The River Ganges"
    , "Caves Of Kaliya"
    , "Coastal Village"
    , "Crash Site"
    , "Madubu Gorge"
    , "Temple Of Puna"
    , "Thames Wharf"
    , "Aldwych"
    , "Lud's Gate"
    , "City"
    , "Nevada Desert"
    , "High Security Compound"
    , "Area 51"
    , "Antarctica"
    , "RX-Tech Mines"
    , "Lost City Of Tinnos"
    , "Meteorite Cavern"
    , "All Hallows"
};

inline bool isCyrillic(char c) {
    return (c >= '�' && c <= '�') || (c >= '�' && c <= '�');
}

inline char remapCyrillic(char c) {
    if (!isCyrillic(c)) {
        return c;
    }

    switch (c) {
        case '�' : return 'a';
        case '�' : return 'e';
        case '�' : return 'e';
        case '�' : return 'u';
        case '�' : return 'u';
        case '�' : return 'o';
        case '�' : return 'p';
        case '�' : return 'c';
        case '�' : return 'y';
        case '�' : return 'x';
        case '�' : return 'A';
        case '�' : return 'B';
        case '�' : return 'E';
        case '�' : return 'E';
        case '�' : return 'K';
        case '�' : return 'M';
        case '�' : return 'H';
        case '�' : return 'O';
        case '�' : return 'P';
        case '�' : return 'C';
        case '�' : return 'T';
        case '�' : return 'X';
    }
    return c;
}

#endif
