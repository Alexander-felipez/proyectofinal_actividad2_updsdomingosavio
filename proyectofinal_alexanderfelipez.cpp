// Inclusi�n de bibliotecas est�ndar
#include <iostream>    // Para entrada y salida est�ndar
#include <cstdlib>     // Para funciones de conversi�n y generaci�n de n�meros aleatorios
#include <ctime>       // Para obtener la hora actual como semilla para la generaci�n de n�meros aleatorios
#include <iomanip>     // Biblioteca para manipulaci�n de formato
#include <algorithm>   // Para transformar a min�sculas

using namespace std;  // Espacio de nombres est�ndar

// Definici�n de las estructuras

// Estructura para representar un libro
struct Libro {
	string strTitulo;               // str: Indica que es una cadena de texto (string)
	string strAutor;                // str: Indica que es una cadena de texto (string)
	string strISBN;                 // str: Indica que es una cadena de texto (string)
	int numAnioPublicacion;         // num: Indica que es un n�mero entero (int)
	string strCondicion;            // str: Indica que es una cadena de texto (string)
	string strGenero;               // str: Indica que es una cadena de texto (string)
	string strIdioma;               // str: Indica que es una cadena de texto (string)
	string strRecomendacionEdad;    // str: Indica que es una cadena de texto (string)
};

// Estructura para representar un usuario
struct Usuario {
	int numIDUsuario;               // num: Indica que es un n�mero entero (int)
	string strNombre;               // str: Indica que es una cadena de texto (string)
	string strApellido;             // str: Indica que es una cadena de texto (string)
	string strCorreoElectronico;    // str: Indica que es una cadena de texto (string)
	string strGenero;               // str: Indica que es una cadena de texto (string)
};

// Estructura para representar un bibliotecario
struct Bibliotecario {
	int numIDEmpleado;              // num: Indica que es un n�mero entero (int)
	string strNombre;               // str: Indica que es una cadena de texto (string)
	string strApellido;             // str: Indica que es una cadena de texto (string)
	string strCorreoElectronico;    // str: Indica que es una cadena de texto (string)
	string strTurnoLaboral;         // str: Indica que es una cadena de texto (string)
};
// Funci�n para generar datos aleatorios para un libro
void generarDatos(Libro &libro) {
	const string titulos[] = {"Aprende C", "Aprende PHP", "Aprende Linux"};
	const string autores[] = {"Autor1", "Autor2", "Autor3"};
	const string condiciones[] = {"Nuevo", "Usado - Buen estado", "Coleccionista", "Como nuevo", "Usado - Regular estado"};
	const string generos[] = {"Misterio", "Ciencia ficci�n", "Romance", "Realismo m�gico", "Fantas�a"};
	const string idiomas[] = {"Ingl�s", "Espa�ol", "Franc�s", "Alem�n", "Italiano"};
	const string recomendacionesEdad[] = {"12+", "18+", "Todas las edades", "16+", "8+"};
	
	libro.strTitulo = titulos[rand() % 3]; // esto modifica para ver en const string titulos hay 3, si hay mas modifica esto tambien 
	libro.strAutor = autores[rand() % 3];
	libro.strISBN = to_string(rand() % 5 + 1);
	libro.numAnioPublicacion = rand() % 30 + 1990;
	libro.strCondicion = condiciones[rand() % 5];
	libro.strGenero = generos[rand() % 5];
	libro.strIdioma = idiomas[rand() % 5];
	libro.strRecomendacionEdad = recomendacionesEdad[rand() % 5];
}

// Funci�n para generar datos aleatorios para un usuario
void generarDatos(Usuario &usuario) {
	const string nombres[] = {"Juan", "Maria", "Carlos"};
	const string apellidos[] = {"Gonzalez", "Martinez", "Lopez"};
	const string genero[] = {"Masculino", "Femenino", "No binario"};
	
	usuario.strNombre = nombres[rand() % 3];
	usuario.strApellido = apellidos[rand() % 3];
	usuario.strCorreoElectronico = usuario.strNombre + usuario.strApellido + "@example.com";
	usuario.numIDUsuario = rand() % 5 + 1;
	usuario.strGenero = genero[rand() % 3]; // Se elige aleatoriamente entre Masculino, Femenino o No binario
}


// Funci�n para generar datos aleatorios para un bibliotecario
void generarDatos(Bibliotecario &bibliotecario) {
	const string nombres[] = {"alex", "ana", "roberto"};
	const string apellidos[] = {"vilar", "perez", "mejia"};
	const string turnos[] = {"Ma�ana", "Tarde", "Noche"};
	
	bibliotecario.strNombre = nombres[rand() % 3];
	bibliotecario.strApellido = apellidos[rand() % 3];
	bibliotecario.strCorreoElectronico = bibliotecario.strNombre + bibliotecario.strApellido + "@library.com";
	bibliotecario.numIDEmpleado = rand() % 100;
	bibliotecario.strTurnoLaboral = turnos[rand() % 3];
}

// Sobrecargas para impresi�n de datos

// Funci�n para imprimir datos de un libro
void imprimirDatos(const Libro &libro) {
	cout << "T�tulo: " << libro.strTitulo << endl;
	cout << "Autor: " << libro.strAutor << endl;
	cout << "ISBN: " << libro.strISBN << endl;
	cout << "A�o de publicaci�n: " << libro.numAnioPublicacion << endl;
	cout << "Condici�n: " << libro.strCondicion << endl;
	cout << "G�nero: " << libro.strGenero << endl;
	cout << "Idioma: " << libro.strIdioma << endl;
	cout << "Recomendaci�n de edad: " << libro.strRecomendacionEdad << endl;
	cout << endl;
}

// Funci�n para imprimir datos de un usuario
void imprimirDatos(const Usuario &usuario) {
	cout << "Nombre: " << usuario.strNombre << endl;
	cout << "Apellido: " << usuario.strApellido << endl;
	cout << "Correo electr�nico: " << usuario.strCorreoElectronico << endl;
	cout << "ID de usuario: " << usuario.numIDUsuario << endl;
	cout << "G�nero: " << usuario.strGenero << endl;
	cout << endl;
}

// Funci�n para imprimir datos de un bibliotecario
void imprimirDatos(const Bibliotecario &bibliotecario) {
	cout << "Nombre: " << bibliotecario.strNombre << endl;
	cout << "Apellido: " << bibliotecario.strApellido << endl;
	cout << "Correo electr�nico: " << bibliotecario.strCorreoElectronico << endl;
	cout << "ID de empleado: " << bibliotecario.numIDEmpleado << endl;
	cout << "Turno laboral: " << bibliotecario.strTurnoLaboral << endl;
	cout << endl;
}

// Funciones de b�squeda

// Funci�n para buscar un libro por t�tulo y listar los resultados

void buscarYListarLibrosPorTitulo(const Libro libros[], int size, const string &titulo, int index = 0, bool encontrado = false) {
	if (index < size) {
		string tituloLower = titulo;
		transform(tituloLower.begin(), tituloLower.end(), tituloLower.begin(), ::tolower); // Convertir a min�sculas
		string libroLower = libros[index].strTitulo;
		transform(libroLower.begin(), libroLower.end(), libroLower.begin(), ::tolower); // Convertir a min�sculas
		if (libroLower.find(tituloLower) != string::npos) {
			if (!encontrado) {
				// Imprimir encabezado solo en la primera llamada
				cout << setw(10) << left << "Libro" << setw(30) << left << "T�tulo" << setw(20) << left << "Autor"
					<< setw(10) << left << "ISBN" << setw(30) << left << "A�o de publicaci�n"
					<< setw(30) << left << "Condici�n" << setw(30) << left << "G�nero"
					<< setw(30) << left << "Idioma" << setw(30) << left << "Recomendaci�n de edad" << endl;
			}
			// Imprimir detalles del libro
			cout << setw(10) << left << index + 1 << setw(30) << left << libros[index].strTitulo
				<< setw(20) << left << libros[index].strAutor << setw(10) << left << libros[index].strISBN
				<< setw(30) << left << libros[index].numAnioPublicacion
				<< setw(30) << left << libros[index].strCondicion << setw(30) << left << libros[index].strGenero
				<< setw(30) << left << libros[index].strIdioma << setw(30) << left << libros[index].strRecomendacionEdad << endl;
			buscarYListarLibrosPorTitulo(libros, size, titulo, index + 1, true); // Continuar la b�squeda
		} else {
			buscarYListarLibrosPorTitulo(libros, size, titulo, index + 1, encontrado); // Continuar la b�squeda
		}
	} else {
		if (!encontrado) {
			cout << "No se encontraron libros con el t�tulo \"" << titulo << "\"." << endl;
		}
	}
}

void buscarUsuarioPorNombreApellido(const Usuario usuarios[], int size, const string &nombreApellido, int index = 0, bool encontrado = false) {
	if (index < size) {
		string nombreCompleto = usuarios[index].strNombre + " " + usuarios[index].strApellido;
		transform(nombreCompleto.begin(), nombreCompleto.end(), nombreCompleto.begin(), ::tolower);
		string nombreApellidoLower = nombreApellido;
		transform(nombreApellidoLower.begin(), nombreApellidoLower.end(), nombreApellidoLower.begin(), ::tolower);
		if (nombreCompleto.find(nombreApellidoLower) != string::npos) {
			if (!encontrado) {
				cout << setw(10) << left << "Usuario" << setw(20) << left << "Nombre" << setw(20) << left << "Apellido"
					<< setw(30) << left << "Correo Electr�nico" << setw(20) << left << "ID de Usuario" << setw(30) << left << "G�nero" << endl;
			}
			cout << setw(10) << left << index + 1 << setw(20) << left << usuarios[index].strNombre
				<< setw(20) << left << usuarios[index].strApellido << setw(30) << left << usuarios[index].strCorreoElectronico
				<< setw(20) << left << usuarios[index].numIDUsuario << setw(30) << left << usuarios[index].strGenero << endl;
			buscarUsuarioPorNombreApellido(usuarios, size, nombreApellido, index + 1, true);
		} else {
			buscarUsuarioPorNombreApellido(usuarios, size, nombreApellido, index + 1, encontrado);
		}
	} else {
		if (!encontrado) {
			cout << "No se encontraron usuarios con el nombre o apellido \"" << nombreApellido << "\"." << endl;
		}
	}
}


void buscarBibliotecarioPorNombreApellido(const Bibliotecario bibliotecarios[], int size, const string &nombreApellido, int index = 0, bool encontrado = false) {
	if (index < size) {
		string nombreCompleto = bibliotecarios[index].strNombre + " " + bibliotecarios[index].strApellido;
		transform(nombreCompleto.begin(), nombreCompleto.end(), nombreCompleto.begin(), ::tolower);
		string nombreApellidoLower = nombreApellido;
		transform(nombreApellidoLower.begin(), nombreApellidoLower.end(), nombreApellidoLower.begin(), ::tolower);
		if (nombreCompleto.find(nombreApellidoLower) != string::npos) {
			if (!encontrado) {
				cout << setw(15) << left << "Bibliotecario" << setw(20) << left << "Nombre" << setw(20) << left << "Apellido"
					<< setw(30) << left << "Correo Electr�nico" << setw(20) << left << "ID de Empleado" << setw(30) << left << "Turno Laboral" << endl;
			}
			cout << setw(15) << left << index + 1 << setw(20) << left << bibliotecarios[index].strNombre
				<< setw(20) << left << bibliotecarios[index].strApellido << setw(30) << left << bibliotecarios[index].strCorreoElectronico
				<< setw(20) << left << bibliotecarios[index].numIDEmpleado << setw(30) << left << bibliotecarios[index].strTurnoLaboral << endl;
			buscarBibliotecarioPorNombreApellido(bibliotecarios, size, nombreApellido, index + 1, true);
		} else {
			buscarBibliotecarioPorNombreApellido(bibliotecarios, size, nombreApellido, index + 1, encontrado);
		}
	} else {
		if (!encontrado) {
			cout << "No se encontraron bibliotecarios con el nombre o apellido \"" << nombreApellido << "\"." << endl;
		}
	}
}

// Funci�n para listar libros en formato de tabla
void listarLibros(const Libro libros[], int size) {
	// Usar std::setw para establecer el ancho de las columnas
	cout << setw(10) << left << "Libro " << setw(30) << left << "T�tulo" << setw(20) << left << "Autor"
		<< setw(10) << left << "ISBN" << setw(30) << left << "A�o de publicaci�n"
		<< setw(30) << left << "Condici�n" << setw(30) << left << "G�nero"
		<< setw(30) << left << "Idioma" << setw(30) << left << "Recomendaci�n de edad" << endl;
	
	// Imprimir datos de libros
	for (int i = 0; i < size; ++i) {
		cout << setw(10) << left << i + 1 << setw(30) << left << libros[i].strTitulo
			<< setw(20) << left << libros[i].strAutor << setw(10) << left << i + 1
			<< setw(30) << left << libros[i].numAnioPublicacion
			<< setw(30) << left << libros[i].strCondicion << setw(30) << left << libros[i].strGenero
			<< setw(30) << left << libros[i].strIdioma << setw(30) << left << libros[i].strRecomendacionEdad << endl;
	}
}


// Funci�n para listar usuarios en formato de tabla
void listarUsuarios(const Usuario usuarios[], int size) {
	// Usar std::setw para establecer el ancho de las columnas
	cout << setw(10) << left << "Usuario" << setw(20) << left << "Nombre" << setw(20) << left << "Apellido"
		<< setw(30) << left << "Correo Electr�nico" << setw(20) << left << "ID de Usuario" << setw(30) << left << "G�nero" << endl;
	
	// Imprimir datos de usuarios
	for (int i = 0; i < size; ++i) {
		cout << setw(10) << left << i + 1 << setw(20) << left << usuarios[i].strNombre
			<< setw(20) << left << usuarios[i].strApellido << setw(30) << left << usuarios[i].strCorreoElectronico
			<< setw(20) << left << i+1 << setw(30) << left << usuarios[i].strGenero << endl;
	}
}

// Funci�n para listar bibliotecarios en formato de tabla
void listarBibliotecarios(const Bibliotecario bibliotecarios[], int size) {
	// Usar std::setw para establecer el ancho de las columnas
	cout << setw(15) << left << "Bibliotecario" << setw(20) << left << "Nombre" << setw(20) << left << "Apellido"
		<< setw(30) << left << "Correo Electr�nico" << setw(20) << left << "ID de Empleado" << setw(30) << left << "Turno Laboral" << endl;
	
	// Imprimir datos de bibliotecarios
	for (int i = 0; i < size; ++i) {
		cout << setw(15) << left << i + 1 << setw(20) << left << bibliotecarios[i].strNombre
			<< setw(20) << left << bibliotecarios[i].strApellido << setw(30) << left << bibliotecarios[i].strCorreoElectronico
			<< setw(20) << left << bibliotecarios[i].numIDEmpleado << setw(30) << left << bibliotecarios[i].strTurnoLaboral << endl;
	}
}

// Funci�n principal
int main() {
	// Inicializar la semilla para la generaci�n de n�meros aleatorios
	srand(time(0));
	
	// N�mero de libros, usuarios y bibliotecarios
	const int numLibros = 3;
	const int numUsuarios = 3;
	const int numBibliotecarios = 3;
	
	// Arreglos para almacenar libros, usuarios y bibliotecarios
	Libro libros[numLibros];
	Usuario usuarios[numUsuarios];
	Bibliotecario bibliotecarios[numBibliotecarios];
	
	// Variable para almacenar la opci�n del men� principal
	int opcion;
	
	// Men� principal
	do {
		// Mostrar opciones del men� principal
		cout << "Menu Principal" << endl;
		cout << "1) Llenado de datos" << endl;
		cout << "2) Listados" << endl;
		cout << "3) B�squedas" << endl;
		cout << "0) Salir" << endl;
		cout << "Seleccione su opci�n: ";
		cin >> opcion;
		
		// Procesar la opci�n seleccionada
		switch (opcion) {
		case 1:
			// Llenado de datos aleatorios para libros, usuarios y bibliotecarios
			for (int i = 0; i < numLibros; ++i) {
				generarDatos(libros[i]);
			}
			for (int i = 0; i < numUsuarios; ++i) {
				generarDatos(usuarios[i]);
			}
			for (int i = 0; i < numBibliotecarios; ++i) {
				generarDatos(bibliotecarios[i]);
			}
			cout << "Datos llenados exitosamente." << endl;
			break;
		case 2:
			// Men� de listados
			char opcionListados;
			do {
				// Mostrar opciones del men� de listados
				cout << "Submenu Listados" << endl;
				cout << "A) Listado de Libros" << endl;
				cout << "B) Listado Usuarios" << endl;
				cout << "C) Listado Bibliotecarios" << endl;
				cout << "X) Salir" << endl;
				cout << "Seleccione su opci�n: ";
				cin >> opcionListados;
				
				opcionListados = toupper(opcionListados); // Convertir la entrada a may�sculas
				
				// Procesar la opci�n de listados
				switch (opcionListados) {
				case 'A':
					// Listado de libros
					listarLibros(libros, numLibros);
					break;
				case 'B':
					// Listado de usuarios
					listarUsuarios(usuarios, numUsuarios);
					break;
				case 'C':
					// Listado de bibliotecarios
					listarBibliotecarios(bibliotecarios, numBibliotecarios);
					break;
				case 'X':
					break;
				default:
					// Opci�n no v�lida
					cout << "Opci�n no v�lida. Intente de nuevo." << endl;
				}
			} while (opcionListados != 'X');
			break;
			
		case 3:
			// Men� de b�squedas
			char opcionBusquedas;
			do {
				// Mostrar opciones del men� de b�squedas
				cout << "Submenu B�squedas" << endl;
				cout << "A) B�squeda de Libro (T�tulo)" << endl;
				cout << "B) Listado B�squeda de Usuario (Nombre y Apellido)" << endl;
				cout << "C) B�squeda de Bibliotecario (Nombre y Apellido)" << endl;
				cout << "X) Salir" << endl;
				cout << "Seleccione su opci�n: ";
				cin >> opcionBusquedas;
				
				opcionBusquedas = toupper(opcionBusquedas); // Convertir la entrada a may�sculas
				
				// Procesar la opci�n de b�squedas
				switch (opcionBusquedas) {
				case 'A':
				{
					string titulo;
					cout << "Ingrese el t�tulo del libro a buscar: ";
					cin.ignore();
					getline(cin, titulo);
					buscarYListarLibrosPorTitulo(libros, numLibros, titulo);
					break;
				}
				break;
				case 'B':
				{
					string nombreApellido;
					cout << "Ingrese el nombre y apellido del usuario a buscar: ";
					cin.ignore();
					getline(cin, nombreApellido);
					buscarUsuarioPorNombreApellido(usuarios, numUsuarios, nombreApellido);
					break;
				}
				case 'C':
				{
					string nombreApellido;
					cout << "Ingrese el nombre y apellido del bibliotecario a buscar: ";
					cin.ignore();
					getline(cin, nombreApellido);
					buscarBibliotecarioPorNombreApellido(bibliotecarios, numBibliotecarios, nombreApellido);
					break;
				}
				
				case 'X':
					break;
				default:
					// Opci�n no v�lida
					cout << "Opci�n no v�lida. Intente de nuevo." << endl;
				}
			} while (opcionBusquedas != 'X');
			break;
			
		case 0:
			// Salir del programa
			cout << "Saliendo del programa." << endl;
			
		default:
			// Opci�n no v�lida
			cout << "Opci�n no v�lida. Intente de nuevo." << endl;
		}
	} while (opcion != 0) ;
	
	return 0;
}
