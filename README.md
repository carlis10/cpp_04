# CPP04 - Subtype Polymorphism & Abstract Classes

## 📌 Descripción

Este módulo profundiza en el uso de **polimorfismo en tiempo de ejecución** y clases abstractas en C++.

El objetivo principal es entender cómo diseñar jerarquías de clases flexibles utilizando **herencia**, **funciones virtuales** y **destructores virtuales**.

El proyecto está dividido en tres ejercicios:

- **ex00:** Polymorphism básico (Animal / WrongAnimal)
- **ex01:** Deep Copy y gestión de memoria (Dog / Cat + Brain)
- **ex02:** Clases abstractas (Animal se vuelve abstracta)

---

## 🧠 Conceptos aprendidos

- Polimorfismo de subtipos
- Funciones virtuales
- Clases abstractas
- Destructores virtuales
- Deep copy vs shallow copy
- Gestión de memoria dinámica
- Principio de sustitución de Liskov

---

## 📁 Estructura del proyecto

```text
CPP04/
├── ex00/
│   ├── Animal.hpp
│   ├── Animal.cpp
│   ├── Dog.hpp
│   ├── Cat.hpp
│   ├── WrongAnimal.hpp
│   ├── WrongCat.hpp
│   ├── main.cpp
│   └── Makefile
│
├── ex01/
│   ├── Animal.hpp
│   ├── Dog.hpp
│   ├── Cat.hpp
│   ├── Brain.hpp
│   ├── Brain.cpp
│   ├── main.cpp
│   └── Makefile
│
├── ex02/
    ├── Animal.hpp
    ├── Dog.hpp
    ├── Cat.hpp
    ├── main.cpp
    └── Makefile

```

---

# 🐾 ex00 - Polymorphism

## 🎯 Objetivo

Entender el comportamiento del polimorfismo en C++ usando clases base y derivadas.

### Ejemplo

```cpp
Animal* a = new Dog();
Animal* b = new Cat();

a->makeSound(); // Woof
b->makeSound(); // Meow
```

### ❌ Wrong example

```cpp
WrongAnimal* wa = new WrongCat();
wa->makeSound(); // No funciona correctamente (sin virtual)
```

---

## 🧠 Conceptos clave

- Funciones virtuales
- Binding dinámico vs estático
- Importancia de `virtual`

---

# 🧠 ex01 - Deep Copy

## 🎯 Objetivo

Gestionar correctamente memoria dinámica dentro de una clase (`Brain`).

Cada `Dog` y `Cat` contiene un objeto `Brain`.

### ⚠️ Problema

Evitar copias superficiales:

```cpp
Dog a;
Dog b = a; // debe hacer deep copy
```

---

## 🧠 Conceptos clave

- Constructor de copia
- Operador de asignación
- Deep copy vs shallow copy
- Memoria dinámica con `new` / `delete`

---

# 🧱 ex02 - Abstract Classes

## 🎯 Objetivo

Convertir `Animal` en una clase abstracta.

```cpp
class Animal {
public:
    virtual void makeSound() const = 0;
};
```

### Resultado

- No se pueden instanciar `Animal`
- Solo clases derivadas concretas

---

## 🧠 Conceptos clave

- Métodos virtuales puros
- Clases abstractas
- Diseño orientado a interfaces

---

## 🧠 Conceptos clave

- Factory pattern
- Inventario dinámico
- Polimorfismo avanzado

---

## ⚙️ Compilación

```bash
cd ex00 && make
cd ex01 && make
cd ex02 && make
```

---

## 🚀 Ejecución

### ex00
```bash
./animal
```
### ex01
```bash
./brain
```
### ex02
```bash
./abstract
```
---

## 🧪 Compilación obligatoria

```bash
c++ -Wall -Wextra -Werror -std=c++98
```

---

## 📚 Lecciones importantes

- El `virtual` es obligatorio para polimorfismo correcto
- Siempre usar destructores virtuales en clases base
- Deep copy evita bugs graves de memoria
- Interfaces permiten diseño flexible y escalable
- C++98 requiere control manual de memoria

---

## 🧾 Autor
Carlos Raveglia Cuesta
Proyecto realizado como parte del currículo de la escuela.
