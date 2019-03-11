#include "Tablero.h"


///
///crea el tabler con las coordenadas dadas
/// instancia las distintas gemas en default (sin color sin coordenadas)
///
Tablero::Tablero(float coord_init_x, float coord_init_y, float coord_end_x, float coord_end_y)
{
	//calculo en base a las coordenas del tablero y cantidad de gemas la posicion de cada
	for (int i = 0; i < ROWS_MAX; i++)
	{
		for (int j = 0; j < COLUMNS_MAX; j++)
		{
			//calculo de pos
			//float posX, posy;
			//matriz[i][j] = 9; // new Gema(posX, posy);
		}
	}
}

///
///
///
void Tablero::random_filling(void)
{
}


///
///
///
void Tablero::swap_position(float first_x_coord, float first_y_coord, float second_x_coord, float second_y_coord)
{
}


///
///
///
void Tablero::end_game()
{
}

///
//si se hace la clase coordenadas se puede incluir esta funcion en la misma
///
void Tablero::coordinates_to_pos(float first_x_coord, float first_y_coord, float second_x_coord, float second_y_coord, int * start_column, int * start_row, int * end_column, int * end_row)
{
}

///
///
///
void Tablero::scan_for_matches()
{
}

// pueden usarse atributos de la propia clase para evitar hacer tanto pasaje por valor o referencia
// y definirse las variables de posiscion de start y end pasa todo a (void)
bool Tablero::validate_swaping(void)
{
	return false;
}

///
///
///
bool Tablero::found_matches(void)
{
	return false;
}

///
///
///
void Tablero::refill(void)
{
}
