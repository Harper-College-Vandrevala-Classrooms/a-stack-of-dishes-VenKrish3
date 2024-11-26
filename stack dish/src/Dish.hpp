/*
 * Dish.hpp
 *
 *  Created on: Nov 19, 2024
 *      Author: Turbo
 */

#ifndef DISH_HPP_
#define DISH_HPP_
#include <string>
using namespace std;

class Dish {
  private:
    string description;

  public:
    Dish(string description) {
      this->description = description;
    }

    string get_description() {
      return this->description;
    }
};




#endif /* DISH_HPP_ */
