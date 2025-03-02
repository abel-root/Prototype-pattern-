# Présentation 
   L'objectif de ce projet est de présenter comment il est possible d'implémenter le design pattern Prototype.

## Design pattern prototype
   Ce design pattern a la particularité de pouvoir créer ou cloner un nouvel objet à partir d'un objet déjà existant de même type.

1. Objectiif :

    - Il permet de contrôler le nombre d'objets créés dans un programme. 
    - Le système est indépendant de la création, de la composition et de la présentation d'un objet. 
    - Il peut être associé au design pattern Abstract factory.

2. Structure simple
```
  __________________                  ____________________
 |      Sensor       |       prototype|      Client       |
 |__________________|  <-----------  | _________________ |
 | clone() : type    |                |    Operator()     |
 |__________________|                |___________________|
           ^
           |
           | 
   __________________
  | ConcretProduct   |
  |__________________|     
  |  clone() : type   |
  |__________________|
```
