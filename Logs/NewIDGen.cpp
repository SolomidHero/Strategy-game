#include "NewIDGen.h"

NewIDGen::NewIDGen() {}

int NewIDGen::current_id = 0;

NewIDGen& NewIDGen::get_instance() {
  static NewIDGen instance;
  return instance;
}

int NewIDGen::gen_id() {
  return ++current_id;
}