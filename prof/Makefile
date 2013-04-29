
.SUFFIXES :

.SUFFIXES : .cdk90 .ftn .ftn90 .ptn .f .f90 .c .s .o

SHELL = /bin/sh

CPP = /lib/cpp

COMPILE = compile

DEFINE =  

FFLAGS =  

CFLAGS = -I$(ARMNLIB)/include

CPPFLAGS = -I$(ARMNLIB)/include

ASFLAGS =  

DOC =

LABASE = v003

MALIB =  malib.a

IGNORE_ERRORS = set -e

MAKE = $(IGNORE_ERRORS) ; make ARCH=$(ARCH)

AR = r.ar -arch $(BASE_ARCH)

.PRECIOUS: $(MALIB)
.DEFAULT:
	collectivisme_101 $@

default: make_menu


RCOMPIL = r.compile
RBUILD  = r.build
FCOMPF = -openmp  
CCOMPF =
COMPF = 
FC = $(RCOMPIL) -arch $(ARCH) -abi $(ABI)  -defines "=$(DEFINE)" -O $(OPTIL) -optf="$(FFLAGS)" -bindir $(LCLPO) $(COMPF) $(FCOMPF) -src
CC = $(RCOMPIL) -arch $(ARCH) -abi $(ABI)  -defines "=$(DEFINE)" -O $(OPTIL) -optc="$(CFLAGS)" -bindir $(LCLPO) $(COMPF) $(CCOMPF) -src
FTNC = $(RCOMPIL) -arch $(ARCH) -abi $(ABI)  -defines "=$(DEFINE)" -optf="$(FFLAGS) $(CPPFLAGS)" -P $(COMPF) $(FCOMPF) -src
PTNC = sed 's/^[[:blank:]].*PROGRAM /      SUBROUTINE /' | sed 's/^[[:blank:]].*program /      subroutine /'  > $*.f

.ptn.o:
	rm -f $*.f
	$(FC) $< 
	
.ptn.f:
	rm -f $*.f
	$(FTNC) $<

.ftn.o:
	rm -f $*.f
	$(FC) $<
.ftn.f:
	rm -f $*.f
	$(FTNC) $<
.f90.o:
	$(FC) $<
.f.o:
	$(FC) $<
.ftn90.o:
	rm -f $*.f90
	$(FC) $<
.cdk90.o:
	$(FC) $<
.cdk90.f90:
	rm -f $*.f90
	$(FTNC) $<
.ftn90.f90:
	rm -f $*.f90
	$(FTNC) $<

.c.o:
	$(CC) $<

.s.o:
	$(AS) -c $(CPPFLAGS) $(ASFLAGS) $<

% :: RCS/%,v
	collectivisme_101 $@

FTN90DECKS= \
         prof_bitptrn.ftn90       prof_close.ftn90       prof_find.ftn90       prof_getpos.ftn90 \
         prof_gvar.ftn90       prof_init.ftn90       prof_open.ftn90       prof_pvar.ftn90 \
         prof_rdrec.ftn90       prof_size.ftn90       prof_wrrec.ftn90

F90DECKS= \
         prof_bitptrn.f90       prof_close.f90       prof_find.f90       prof_getpos.f90 \
         prof_gvar.f90       prof_init.f90       prof_open.f90       prof_pvar.f90 \
         prof_rdrec.f90       prof_size.f90       prof_wrrec.f90

OBJECTS= \
         prof_bitptrn.o       prof_close.o       prof_find.o       prof_getpos.o \
         prof_gvar.o       prof_init.o       prof_open.o       prof_priv_int.o \
         prof_pvar.o       prof_rdrec.o       prof_shared.o       prof_size.o \
         prof_types.o       prof_wrrec.o

COMDECKS90= \
         prof_priv_int.cdk90       prof_shared.cdk90       prof_types.cdk90

HDECKS= \
         prof_f.h       prof_var_f.h



FICHIERS = $(FDECKS) $(CDECKS) $(ASDECKS) $(HDECKS) $(F90DECKS) $(COMDECKS90)

prof_bitptrn.f90: prof_bitptrn.ftn90 	prof_priv_int.o  \
	prof_types.o 
prof_close.f90: prof_close.ftn90 	prof_priv_int.o  \
	prof_shared.o  	prof_types.o 
prof_find.f90: prof_find.ftn90 	prof_shared.o  \
	prof_types.o 
prof_getpos.f90: prof_getpos.ftn90 	prof_shared.o  \
	prof_types.o 	prof_var_f.h 
prof_gvar.f90: prof_gvar.ftn90 	prof_priv_int.o  \
	prof_types.o 
prof_init.f90: prof_init.ftn90 	prof_shared.o  \
	prof_types.o 
prof_open.f90: prof_open.ftn90 	prof_shared.o  \
	prof_types.o 
prof_priv_int.f90: prof_priv_int.cdk90         	prof_types.o  
prof_pvar.f90: prof_pvar.ftn90 	prof_priv_int.o  \
	prof_types.o 
prof_rdrec.f90: prof_rdrec.ftn90 	prof_priv_int.o  \
	prof_shared.o  	prof_types.o 	prof_var_f.h 
prof_shared.f90: prof_shared.cdk90         	prof_types.o  
prof_size.f90: prof_size.ftn90 	prof_priv_int.o  \
	prof_types.o 
prof_types.f90: prof_types.cdk90              
prof_wrrec.f90: prof_wrrec.ftn90 	prof_priv_int.o  \
	prof_shared.o  	prof_types.o 


prof_bitptrn.o: prof_bitptrn.ftn90 	prof_priv_int.o  \
	prof_types.o 
prof_close.o: prof_close.ftn90 	prof_priv_int.o  \
	prof_shared.o  	prof_types.o 
prof_find.o: prof_find.ftn90 	prof_shared.o  \
	prof_types.o 
prof_getpos.o: prof_getpos.ftn90 	prof_shared.o  \
	prof_types.o 	prof_var_f.h 
prof_gvar.o: prof_gvar.ftn90 	prof_priv_int.o  \
	prof_types.o 
prof_init.o: prof_init.ftn90 	prof_shared.o  \
	prof_types.o 
prof_open.o: prof_open.ftn90 	prof_shared.o  \
	prof_types.o 
prof_priv_int.o: prof_priv_int.cdk90         	prof_types.o  
prof_pvar.o: prof_pvar.ftn90 	prof_priv_int.o  \
	prof_types.o 
prof_rdrec.o: prof_rdrec.ftn90 	prof_priv_int.o  \
	prof_shared.o  	prof_types.o 	prof_var_f.h 
prof_shared.o: prof_shared.cdk90         	prof_types.o  
prof_size.o: prof_size.ftn90 	prof_priv_int.o  \
	prof_types.o 
prof_types.o: prof_types.cdk90              
prof_wrrec.o: prof_wrrec.ftn90 	prof_priv_int.o  \
	prof_shared.o  	prof_types.o 


make_menu:
	$(MAKE)	"DEFINE=$(DEFINE)" "CPPFLAGS=$(CPPFLAGS)" \
        "CFLAGS=$(CFLAGS)" "FFLAGS=$(FFLAGS)" \
        "ASFLAGS=$(ASFLAGS)" "COMPILE=$(COMPILE)" "DOC=$(DOC)" `fait_le_menu2`

sortirtout:
	extrait_tout

#LISTE DES CIBLES DU FICHIER recettes

obj: $(OBJECTS) 
#Produire les fichiers objets (.o) pour tous les fichiers

full: $(FICHIERS)
#Inclure tous les fichiers .f dans le fichier $(COMPILE) et sortir le reste des fichiers
	-if [ "*.f" != "`echo *.f`" ] ; \
	then \
	cat *.f  > $(COMPILE) ;\
	fi ; \
	if [ "*.f90" != "`echo *.f90`" ] ; \
	then \
	cat *.f90  >> $(COMPILE)90.f90 ;\
	fi


compil:
#Inclure tous les fichers affectes par les dernieres\nmodifications dans le fichier $COMPILE
	-rm $(COMPILE) $(COMPILE)90.f90
	-if [ "*.cdk" != "`echo *.cdk`" ] ; \
	then \
	for i in *.cdk; \
	do \
	if [ -w $$i ] ; \
	then fn=$${i%.cdk}; \
	$(MAKE) -f make_cdk $$fn.acdk; \
	fi; \
	done \
	fi; \
	if [ "*.h" != "`echo *.h`" ] ; \
	then \
	for i in *.h; \
	do \
	if [ -w $$i ]; \
	then fn=$${i%.h};\
	$(MAKE) -f make_cdk $$fn.ah; \
	fi; \
	done \
	fi; \
	if [ "*.cdk90" != "`echo *.cdk90`" ] ; \
	then \
	for i in *.cdk90; \
	do \
	if [ -w $$i ]; \
	then fn=$${i%.h};\
	$(MAKE) -f make_cdk $$fn.acdk90; \
	fi; \
	done \
	fi; \
	if [ "*.[fp]tn" != "`echo *.[fp]tn`" ] ; \
	then \
	for i in *.[fp]tn; \
	do \
	fn=$${i%.[fp]tn}; \
	$(MAKE) "DEFINE=$(DEFINE)" $$fn.f; \
	done \
	fi ; \
	if [ "*.cdk90" != "`echo *.cdk90`" ] ; \
	then \
	for i in *.cdk90; \
	do \
	fn=$${i%.cdk90}; \
	$(MAKE) "DEFINE=$(DEFINE)" $$fn.o; \
	done \
	fi ; \	
	if [ "*.ftn90" != "`echo *.ftn90`" ] ; \
	then \
	for i in *.ftn90; \
	do \
	fn=$${i%.ftn90}; \
	$(MAKE) "DEFINE=$(DEFINE)" $$fn.f90; \
	done \
	fi ; \
	if [ "*.f" != "`echo *.f`" ] ;\
	then \
	cat *.f >> $(COMPILE) ;\
	fi ; \
	if [ "*.f90" != "`echo *.f90`" ] ;\
	then \
	cat *.f90 >> $(COMPILE)90.f90 ;\
	fi

compexp: sortirtout
#Inclure tous les modules de l experience en cours dans\nle fichier $COMPILE
	-rm $(COMPILE) $(COMPILE)90.f90
	-if [ "*.cdk" != "`echo *.cdk`" ] ; \
	then \
	for i in *.cdk; \
	do \
	fn=$${i%.cdk}; \
	$(MAKE) -f make_cdk $$fn.acdk; \
	done \
	fi; \
	if [ "*.h" != "`echo *.h`" ] ; \
	then \
	for i in *.h; \
	do \
	fn=$${i%.h}; \
	$(MAKE) -f make_cdk $$fn.ah; \
	done \
	fi; \
	if [ "*.[fp]tn" != "`echo *.[fp]tn`" ] ; \
	then \
	for i in *.[fp]tn; \
	do \
	fn=$${i%.[fp]tn}; \
	$(MAKE) "DEFINE=$(DEFINE)" "FFLAGS=$(FFLAGS)" $$fn.f; \
	done \
	fi ; \
	if [ "*.cdk90" != "`echo *.cdk90`" ] ; \
	then \
	for i in *.cdk90; \
	do \
	fn=$${i%.cdk90}; \
	$(MAKE) "DEFINE=$(DEFINE)" "FFLAGS=$(FFLAGS)" $$fn.o; \
	$(MAKE) -f make_cdk $$fn.acdk90; \
	done \
	fi ; \	
	if [ "*.ftn90" != "`echo *.ftn90`" ] ; \
	then \
	for i in *.ftn90; \
	do \
	fn=$${i%.ftn90}; \
	$(MAKE) "DEFINE=$(DEFINE)" "FFLAGS=$(FFLAGS)" $$fn.f90; \
	done \
	fi ; \
	if [ "*.f" != "`echo *.f`" ] ;\
	then \
	cat *.f >> $(COMPILE) ;\
	fi ; \
	if [ "*.f90" != "`echo *.f90`" ] ;\
	then \
	cat *.f90 >> $(COMPILE)90.f90 ;\
	fi

objloc:
#Produire les objets (.o) de tous les fichiers affectes\npar les dernieres modifications
	-if [ "*.cdk" != "`echo *.cdk`" ] ; \
	then \
	for i in *.cdk; \
	do \
	if [ -w $$i ] ; \
	then fn=$${i%.cdk}; \
	$(MAKE) -f make_cdk $$fn.acdk; \
	fi; \
	done \
	fi; \
	if [ "*.cdk90" != "`echo *.cdk90`" ] ; \
	then \
	for i in *.cdk90; \
	do \
	if [ -w $$i ] ; \
	then fn=$${i%.cdk90};\
	$(MAKE) -f make_cdk $$fn.acdk90; \
	fi; \
	done; \
	for i in *.cdk90; \
	do \
	fn=$${i%.cdk90};\
	$(MAKE) "DEFINE=$(DEFINE)" "FFLAGS=$(FFLAGS)" $$fn.o; \
	done \
	fi; \
	if [ "*.h" != "`echo *.h`" ] ; \
	then \
	for i in *.h; \
	do \
	if [ -w $$i ] ; \
	then fn=$${i%.h}; \
	$(MAKE) -f make_cdk $$fn.ah; \
	fi; \
	done \
	fi; \
	if [ "*.[fcs]" != "`echo *.[fcs]`" ] ; \
	then \
	for i in *.[fcs]; \
	do \
	fn=$${i%.[fcs]}; \
	$(MAKE) "FFLAGS=$(FFLAGS)" "CFLAGS=$(CFLAGS)" "ASFLAGS=$(ASFLAGS)" $$fn.o; \
	done \
	fi; \
	if [ "*.f90" != "`echo *.f90`" ] ; \
	then \
	for i in *.f90; \
	do \
	fn=$${i%.f90}; \
	$(MAKE) "FFLAGS=$(FFLAGS)" "CFLAGS=$(CFLAGS)" "ASFLAGS=$(ASFLAGS)" $$fn.o; \
	done \
	fi; \
	if [ "*.[fp]tn" != "`echo *.[fp]tn`" ] ; \
	then \
	for i in *.[fp]tn; \
	do \
	fn=$${i%.[fp]tn}; \
	$(MAKE) "DEFINE=$(DEFINE)" "FFLAGS=$(FFLAGS)" $$fn.o; \
	done \
	fi ; \
	if [ "*.ftn90" != "`echo *.ftn90`" ] ; \
	then \
	for i in *.ftn90; \
	do \
	fn=$${i%.ftn90}; \
	$(MAKE) "DEFINE=$(DEFINE)" "FFLAGS=$(FFLAGS)" $$fn.o; \
	done \
	fi


objexp: sortirtout
#Produire les fichiers objets de tous les modules de\nl experience en cours
	-if [ "*.cdk" != "`echo *.cdk`" ] ; \
	then \
	for i in *.cdk; \
	do \
	fn=$${i%.cdk}; \
	$(MAKE) -f make_cdk $$fn.acdk; \
	done \
	fi; \
	if [ "*.cdk90" != "`echo *.cdk90`" ] ; \
	then \
	for i in *.cdk90; \
	do \
	fn=$${i%.cdk90}; \
	$(MAKE) "FFLAGS=$(FFLAGS)" "DEFINE=$(DEFINE)"  $$fn.o; \
	$(MAKE) -f make_cdk $$fn.acdk90; \
	done \
	fi;\
	if [ "*.h" != "`echo *.h`" ] ; \
	then \
	for i in *.h; \
	do \
	fn=$${i%.h}; \
	$(MAKE) -f make_cdk $$fn.ah; \
	done \
	fi; \
	if [ "*.[fcs]" != "`echo *.[fcs]`" ] ; \
	then \
	for i in *.[fcs]; \
	do \
	fn=$${i%.[fcs]}; \
	$(MAKE) "FFLAGS=$(FFLAGS)" "CFLAGS=$(CFLAGS)" "ASFLAGS=$(ASFLAGS)" "CPPFLAGS=$(CPPFLAGS)" $$fn.o; \
	done \
	fi; \
	if [ "*.f90" != "`echo *.f90`" ] ; \
	then \
	for i in *.f90; \
	do \
	fn=$${i%.f90}; \
	$(MAKE) "FFLAGS=$(FFLAGS)" "CFLAGS=$(CFLAGS)" "ASFLAGS=$(ASFLAGS)" "CPPFLAGS=$(CPPFLAGS)" $$fn.o; \
	done \
	fi; \
	if [ "*.[fp]tn" != "`echo *.[fp]tn`" ] ; \
	then \
	for i in *.[fp]tn; \
	do \
	fn=$${i%.[fp]tn}; \
	$(MAKE) "FFLAGS=$(FFLAGS)" "DEFINE=$(DEFINE)"  $$fn.o; \
	done \
	fi ; \
	if [ "*.ftn90" != "`echo *.ftn90`" ] ; \
	then \
	for i in *.ftn90; \
	do \
	fn=$${i%.ftn90}; \
	$(MAKE) "FFLAGS=$(FFLAGS)" "DEFINE=$(DEFINE)"  $$fn.o; \
	done \
	fi



qcompil:
#Inclure uniquement les fichiers .f .f90 modifies dans le fichier $(COMPILE)
	-rm $(COMPILE) $(COMPILE)90.f90
	-if [ "*.[fp]tn" != "`echo *.[fp]tn`" ] ;\
	then \
	for i in *.[fp]tn; \
	do \
	fn=$${i%.[fp]tn}; \
	$(MAKE) "DEFINE=$(DEFINE)" $$fn.f; \
	done \
	fi ;\
	if [ "*.f" != "`echo *.f`" ] ;\
	then \
	cat *.f > $(COMPILE) ;\
	fi ; \
	if [ "*.cdk90" != "`echo *.cdk90`" ] ;\
	then \
	for i in *.cdk90; \
	do \
	fn=$${i%.cdk90}; \
	$(MAKE) "DEFINE=$(DEFINE)" $$fn.o; \
	done \
	fi ;\
	if [ "*.f90" != "`echo *.f90`" ] ;\
	then \
	cat *.f90 >> $(COMPILE)90.f90 ;\
	fi ; \
	if [ "*.ftn90" != "`echo *.ftn90`" ] ;\
	then \
	for i in *.ftn90; \
	do \
	fn=$${i%.ftn90}; \
	$(MAKE) "DEFINE=$(DEFINE)" $$fn.f90; \
	done \
	fi ;\
	if [ "*.f90" != "`echo *.f90`" ] ;\
	then \
	cat *.f90 >> $(COMPILE)90.f90 ;\
	fi

qobj:
#Compiler uniquement les fichiers  modifies.
	-if [ "*.[fcs]" != "`echo *.[fcs]`" ] ;\
	then \
	for i in *.[fcs]; \
	do \
	fn=$${i%.[fcs]}; \
	$(MAKE) "FFLAGS=$(FFLAGS)" "CFLAGS=$(CFLAGS)" "ASFLAGS=$(ASFLAGS)" $$fn.o; \
	done \
	fi ;\
	if [ "*.[fp]tn" != "`echo *.[fp]tn`" ] ;\
	then \
	for i in *.[fp]tn; \
	do \
	fn=$${i%.[fp]tn}; \
	$(MAKE) "DEFINE=$(DEFINE)" $$fn.o; \
	done \
	fi ; \
	if [ "*.cdk90" != "`echo *.cdk90`" ] ;\
	then \
	for i in *.cdk90; \
	do \
	fn=$${i%.cdk90}; \
	$(MAKE) "FFLAGS=$(FFLAGS)" "CFLAGS=$(CFLAGS)" "ASFLAGS=$(ASFLAGS)" $$fn.o; \
	done \
	fi ;\
	if [ "*.f90" != "`echo *.f90`" ] ;\
	then \
	for i in *.f90; \
	do \
	fn=$${i%.f90}; \
	$(MAKE) "FFLAGS=$(FFLAGS)" "CFLAGS=$(CFLAGS)" "ASFLAGS=$(ASFLAGS)" $$fn.o; \
	done \
	fi ;\
	if [ "*.ftn90" != "`echo *.ftn90`" ] ;\
	then \
	for i in *.ftn90; \
	do \
	fn=$${i%.ftn90}; \
	$(MAKE) "DEFINE=$(DEFINE)" $$fn.o; \
	done \
	fi

genlib: $(OBJECTS)
#Creer une programmatheque ayant pour nom $MALIB et incluant TOUS les fichiers objets
	$(AR) rv $(MALIB) $(OBJECTS)

majlib: objloc
#Mise a jour de la programmatheque $MALIB a partir de tous les fichers .o affectes par les dernieres modifications
	$(AR) rv $(MALIB) *.o

qmajlib: qobj
#Mise a jour de la programmatheque $MALIB a partir de tous les fichers .o presents dans le repertoire courant
	$(AR) rv $(MALIB) *.o

libexp: sortirtout objexp
#Mettre tous les objets de l experience en cours dans la programmatheque $MALIB
	$(AR) rv $(MALIB) *.o


clean:
#Faire le grand menage. On enleve tous les fichiers sources inutiles et les .o 
	-if [ "*.[chfs]" != "`echo *.[chfs]`" ] ; \
	then 	for i in *.[chfs]; \
	do \
	if (r.ucanrm $$i)  ; \
	then rm -f $$i; \
	fi; \
	done \
	fi; \
	if [ "*.cdk" != "`echo *.cdk`" ] ; \
	then 	for i in *.cdk; \
	do \
	if (r.ucanrm  $$i) ; \
	then rm -f $$i; \
	fi; \
	done \
	fi; \
	if [ "*.txt" != "`echo *.txt`" ] ; \
	then 	for i in *.txt; \
	do \
	if (r.ucanrm  $$i) ; \
	then rm -f $$i; \
	fi; \
	done \
	fi; \
	if [ "*.*_sh" != "`echo *.*_sh`" ] ; \
	then \
	for i in *.*_sh; \
	do \
	if (r.ucanrm  $$i) ; \
	then rm -f $$i; \
	fi; \
	done \
	fi; \
	if [ "*.[fp]tn" != "`echo *.[fp]tn`" ] ; \
	then \
	for i in *.[fp]tn; \
	do \
	if (r.ucanrm $$i) ; \
	then rm -f $$i; \
	fi; \
	done \
	fi ; \
	rm *.o
	-if [ "*.f90" != "`echo *.f90`" ] ; \
	then \
	for i in *.f90; \
	do \
	if (r.ucanrm $$i)  ; \
	then rm -f $$i; \
	fi; \
	done \
	fi; \
	if [ "*.cdk90" != "`echo *.cdk90`" ] ; \
	then \
	for i in *.cdk90; \
	do \
	if (r.ucanrm  $$i) ; \
	then rm -f $$i; \
	fi; \
	done \
	fi ; \
	if [ "*.ftn90" != "`echo *.ftn90`" ] ; \
	then \
	for i in *.ftn90; \
	do \
	if (r.ucanrm $$i) ; \
	then rm -f $$i; \
	fi; \
	done \
	fi
	rm *.o *.mod

qclean:
#Faire un petit menage. On enleve tous les .o et les .f produits a partir de .ftn/.ptn
	-if [ "*.[fp]tn" != "`echo *.[fp]tn`" ] ; \
	then \
	for i in *.[fp]tn ; \
	do \
	fn=$${i%.[fp]tn}; \
	rm -f $$fn.f; \
	done \
	fi ; \
	if [ "*.ftn90" != "`echo *.ftn90`" ] ; \
	then \
	for i in *.ftn90 ; \
	do \
	fn=$${i%.ftn90};\
	rm -f $$fn.f90; \
	done \
	fi 
	rm *.o

#Descriptions des recettes personnelles
 
#include mes_recettes
