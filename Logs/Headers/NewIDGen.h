#pragma once

class NewIDGen {
public:
  NewIDGen(NewIDGen const&);
  NewIDGen& operator=(NewIDGen const&);

  static NewIDGen& get_instance();
  int gen_id();
private:
  NewIDGen();
  static int current_id;
};