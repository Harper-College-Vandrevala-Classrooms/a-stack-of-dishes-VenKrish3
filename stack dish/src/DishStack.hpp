/*
 * DishStack.hpp
 *
 *  Created on: Nov 20, 2024
 *      Author: Turbo
 */

#ifndef DISHSTACK_HPP_
#define DISHSTACK_HPP_
#include "Dish.hpp"
const int MAX_SIZE = 100;

class DishStack
{
private:
  Dish arr[MAX_SIZE];
  Dish *top;
  Dish *start;

public:
  DishStack()
  {
    top = arr;
    start = arr;
  }

  bool is_empty()
  {
    return (top == start);
  }

  bool is_full()
  {
    return (start + MAX_SIZE == top);
  }

  void push(Dish element)
  {
    if (!is_full())
    {
      *top = element;
      top++;
    }
  }

  Dish pop()
  {
    if (!is_empty())
    {
      top--;
      Dish poppedElement = *top;
      return poppedElement;
    }
    else
    {
      throw "Oh no!";
    }
  }

  Dish peek()
  {
    if (!is_empty())
    {
      top--;
      Dish poppedElement = *top;
      top++;
      return poppedElement;
    }
    else
    {
      throw "Oh no!";
    }
  }
};

#endif /* DISHSTACK_HPP_ */
