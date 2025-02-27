#ifndef LAB23_935_NECHITA_DANIEL_IONUT_UI_H
#define LAB23_935_NECHITA_DANIEL_IONUT_UI_H

#include "../Service/service.h"

void option_2(Repository *country_list, UndoRedoRepository *undo_redo_repo);
void option_3(Repository *country_list, UndoRedoRepository *undo_redo_repo);
void option_4(Repository *country_list, UndoRedoRepository *undo_redo_repo);
void option_5(Repository *country_list);
void option_6(Repository *country_list);
void list_all_countries(Repository *country_list);
void undo(Repository *country_list, UndoRedoRepository *undo_redo_repo);
void redo(Repository *country_list, UndoRedoRepository *undo_redo_repo);
void print_menu();
void start();

#endif //LAB23_935_NECHITA_DANIEL_IONUT_UI_H
