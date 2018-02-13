name ?= ledRGB
prefix ?= $(HOME)/arduino/librarie

path_install = $(prefix)/$(name)

all: check install

install:
	mkdir $(path_install)
	cp ./ledRGB.cpp $(path_install)
	cp ./ledRGB.h $(path_install)

check:
	@test -d $(prefix) \
	      && echo "Arduino installed" \
	      || echo "Please install Arduino"

desinstall:
	rm $(path_install)/ledRGB.cpp
	rm $(path_install)/ledRGB.h
	rmdir $(path_install)
