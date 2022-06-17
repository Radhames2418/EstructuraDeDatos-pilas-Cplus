#include "Pila.h"

Pila::Pila() : _ultimo(NULL)
{
}

void Pila::Agregar(Elemento *elemento)
{
    if (_ultimo == NULL)
    {

        _ultimo = elemento;
    }
    else
    {
        elemento->SetSiguiente(_ultimo);
        _ultimo = elemento;
    }
}

Elemento *Pila::Extraer()
{
    if (_ultimo == NULL)
    {
        return NULL;
    }

    Elemento *temporal = _ultimo;
    _ultimo = _ultimo->GetSiguiente();
    return temporal;
}
