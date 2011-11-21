#ifndef ENUMS_H
#define ENUMS_H

enum modes{
  FRIDGE_CONSTANT,
  BEER_CONSTANT,
  BEER_PROFILE
};

enum states{
  COOLING,
  HEATING,
  IDLE,
  STARTUP,
  DOOR_OPEN
};

enum beerMessages{
  BEER_SETTING_FROM_FRIDGE,
  BEER_SETTING_FROM_SERIAL,
  BEER_SETTING_FROM_PROFILE
};

enum fridgeMessages{
  FRIDGE_SETTING_FROM_FRIDGE,
  FRIDGE_SETTING_FROM_SERIAL,
  FRIDGE_DOOR_OPEN,
  FRIDGE_DOOR_CLOSED,
  POSPEAK,
  NEGPEAK,
  POSDRIFT,
  NEGDRIFT,
  ARDUINO_START
};

enum temperaturePositions{
  BEER_ACTUAL,
  BEER_SET,
  FRIDGE_ACTUAL,
  FRIDGE_SET,
  TEMP_MENU,
  TEMP_CONFIRM  
};

enum menuPages{
  MENU_TOP,
  MENU_PROFILE_SETTING,
  MENU_BEER_SETTING,
  MENU_FRIDGE_SETTING,
  MENU_PROFILE
};

#define EEPROM_MODE 0
#define EEPROM_BEER_SETTING 1
#define EEPROM_FRIDGE_SETTING 3
#define EEPROM_HEAT_ESTIMATOR 5
#define EEPROM_COOL_ESTIMATOR 9  

#endif
