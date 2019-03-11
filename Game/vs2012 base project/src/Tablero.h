#pragma once

#include "Gema.h"

#define ROWS_MAX 8
#define COLUMNS_MAX 8

class Tablero
{
	Gema matriz[COLUMNS_MAX][ROWS_MAX];
	int start_column;
	int start_row;
	int end_column; 
	int end_row;
	//Se podria hacer una clase coordenada para simplificar datos y procesos en los mismos
	float coord_init_x;
	float coord_init_y; 
	float coord_end_x; 
	float coord_end_y;
	bool GamePaused;
	bool GameStarted;

public:
	Tablero(float coord_init_x, float coord_init_y, float coord_end_x, float coord_end_y);
	~Tablero();
	void random_filling(void);
	void swap_position(float first_x_coord, float first_y_coord, float second_x_coord, float second_y_coord);
	void pause_game() { this->GamePaused = true; }
	void end_game();

private:
	void coordinates_to_pos(float , float , float , float ,int* , int* , int* , int* );
	void scan_for_matches();
	bool validate_swaping(void); // int start_column, int start_row, int end_column, int end_row);
	bool found_matches(void); //(int start_column, int start_row, int end_column, int end_row);
	void refill(void);


};

