#include "Archivo.h"
int main() {
	CArchivo* archivo = new CArchivo;
	auto comparar = [](CUsuario* a, CUsuario* b)->bool {return a->getId() > b->getId(); };
	auto mostrar = [](CUsuario* a) {cout << a->toString() << endl; };
	ArbolAVL<CUsuario*>* arbol = new ArbolAVL<CUsuario*>(comparar, mostrar);
	archivo->cargarUsuarios(arbol);
	arbol->descendente();
	string nombre;
	string mail;
	ull id;
	CUsuario* tmp;
	auto criterioBusqueda = [](CUsuario* a, CUsuario* b) {return (a->getNombre() == b->getNombre() && a->getMail() == b->getMail()); };
	auto criterioBusquedaID = [](CUsuario* a, CUsuario* b) {return a->getId() == b->getId(); };
	do
	{
		cout << "Ingrese el id del usuario que desee buscar: ", cin >> id;
		tmp  = arbol->busquedaPorValor(new CUsuario(id, "-", "-", new CFecha(1, 2, 4)), criterioBusquedaID);
		if (tmp)
			cout << tmp-> getNombre()  << endl;
		else cout << "NO existe" << endl;
	} while (id!=-10);
	system("pause");
	return 0;
}