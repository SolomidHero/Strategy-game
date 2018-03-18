CPPFLAGS=-std=c++14 -g -pthread -I/sw/include/root 
LDFLAGS=-g

all: game

game: main.o Elf.o UnitInterface.o Healer.o WarriorElf.o Mage.o Archmage.o \
ElfCreator.o UnitCreator.o HealerCreator.o WarriorElfCreator.o MageCreator.o ArchmageCreator.o
	g++ $(LDFLAGS) -o game main.o Elf.o UnitInterface.o Healer.o WarriorElf.o Mage.o Archmage.o \
ElfCreator.o UnitCreator.o HealerCreator.o WarriorElfCreator.o MageCreator.o ArchmageCreator.o
	make clean

main.o: main.cpp
	g++ $(CPPFLAGS) -c main.cpp

# Units
UnitInterface.o: ./Units/UnitInterface.cpp ./Units/UnitInterface.h
	g++ $(CPPFLAGS) -c ./Units/UnitInterface.cpp

Elf.o: ./Units/Elf.cpp ./Units/Elf.h
	g++ $(CPPFLAGS) -c ./Units/Elf.cpp

WarriorElf.o: ./Units/WarriorElf.cpp ./Units/WarriorElf.h
	g++ $(CPPFLAGS) -c ./Units/WarriorElf.cpp

Healer.o: ./Units/Healer.cpp ./Units/Healer.h
	g++ $(CPPFLAGS) -c ./Units/Healer.cpp

Mage.o: ./Units/Mage.cpp ./Units/Mage.h
	g++ $(CPPFLAGS) -c ./Units/Mage.cpp

Archmage.o: ./Units/Archmage.cpp ./Units/Archmage.h
	g++ $(CPPFLAGS) -c ./Units/Archmage.cpp

# Creators
UnitCreator.o: ./Creators/UnitCreator.cpp ./Creators/UnitCreator.h ./Creators/UnitCreator.hpp
	g++ $(CPPFLAGS) -c ./Creators/UnitCreator.cpp

ElfCreator.o: ./Creators/ElfCreator.cpp ./Creators/ElfCreator.h
	g++ $(CPPFLAGS) -c ./Creators/ElfCreator.cpp

WarriorElfCreator.o: ./Creators/WarriorElfCreator.cpp ./Creators/WarriorElfCreator.h
	g++ $(CPPFLAGS) -c ./Creators/WarriorElfCreator.cpp

HealerCreator.o: ./Creators/HealerCreator.cpp ./Creators/HealerCreator.h
	g++ $(CPPFLAGS) -c ./Creators/HealerCreator.cpp

MageCreator.o: ./Creators/MageCreator.cpp ./Creators/MageCreator.h
	g++ $(CPPFLAGS) -c ./Creators/MageCreator.cpp

ArchmageCreator.o: ./Creators/ArchmageCreator.cpp ./Creators/ArchmageCreator.h
	g++ $(CPPFLAGS) -c ./Creators/ArchmageCreator.cpp

clean:
	$(RM) *.o *~
