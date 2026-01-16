# Greeting Program

Un programa simple en C++ que solicita el nombre del usuario y muestra un mensaje de bienvenida personalizado.

## Descripción

Este es un proyecto básico de C++ diseñado para demostrar los conceptos fundamentales de:
- Entrada y salida estándar
- Manejo de strings
- Interacción básica con el usuario

## Requisitos

- Compilador de C++ compatible con C++11 o superior (g++, clang++, MSVC)
- Sistema operativo: Windows, Linux o macOS

## Instalación

1. Clona este repositorio:
```bash
git clone https://github.com/tu-usuario/greeting-program.git
cd greeting-program
```

2. Compila el programa:
```bash
g++ -o greeting main.cpp
```

## Uso

Ejecuta el programa compilado:

**En Linux/macOS:**
```bash
./greeting
```

**En Windows:**
```bash
greeting.exe
```

El programa te pedirá que ingreses tu nombre y luego mostrará un mensaje de bienvenida.

### Ejemplo de ejecución:
```
Enter your name: Bob
Hello, Bob! Welcome!
```

## Código fuente
```cpp
#include <iostream>
#include <string>

int main() {
    // Prompt the user to enter their name
    std::cout << "Enter your name: ";
    
    // Read the user's name
    std::string name;
    std::getline(std::cin, name);
    
    // Print the greeting message
    std::cout << "Hello, " << name << "! Welcome!" << std::endl;
    
    return 0;
}
```

## Estructura del proyecto
```
greeting-program/
│
├── main.cpp          # Archivo principal del programa
├── README.md         # Este archivo
└── .gitignore        # Archivos a ignorar por Git
```

## Contribuciones

Las contribuciones son bienvenidas. Si deseas mejorar este proyecto:

1. Haz un fork del repositorio
2. Crea una rama para tu feature (`git checkout -b feature/mejora`)
3. Commit tus cambios (`git commit -am 'Agrega nueva funcionalidad'`)
4. Push a la rama (`git push origin feature/mejora`)
5. Abre un Pull Request

## Licencia

Este proyecto está bajo la Licencia MIT. Consulta el archivo `LICENSE` para más detalles.

## Autor

Tu Nombre - [@tu-usuario](https://github.com/tu-usuario)

## Agradecimientos

- Proyecto educativo para aprender los fundamentos de C++
- Ideal para principiantes en programación
