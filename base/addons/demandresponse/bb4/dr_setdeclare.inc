
SET DR_TECHNOLOGIES       'Demand response technology'
/
DR_SHIFT_HH_WET
DR_SHIFT_HH_COOL
DR_SHIFT_HH_WATER
DR_SHIFT_HH_HEAT
DR_SHED_IND_FERRO
DR_SHED_IND_ALUMINIUM
DR_SHED_IND_SILICON
DR_SHED_IND_OTHER
DR_SHED_IND_MECHPULP
DR_SHIFT_IND_MECHPULP
DR_SHIFT_TERI_VENT
DR_SHIFT_TERI_COOL
DR_SHIFT_TERI_WATER
DR_SHIFT_TERI_HEAT
/ ;

SET DR_TECH(DR_TECHNOLOGIES)               'Demand response technology in the simulation'
/
DR_SHIFT_HH_WET
DR_SHIFT_HH_COOL
DR_SHIFT_HH_WATER
DR_SHIFT_HH_HEAT
DR_SHED_IND_FERRO
DR_SHED_IND_ALUMINIUM
DR_SHED_IND_SILICON
DR_SHED_IND_OTHER
DR_SHED_IND_MECHPULP
DR_SHIFT_IND_MECHPULP
DR_SHIFT_TERI_VENT
DR_SHIFT_TERI_COOL
DR_SHIFT_TERI_WATER
DR_SHIFT_TERI_HEAT
/ ;

SET DR_TECH_SHIFT(DR_TECH)'Shifting demand response technology'
SET DR_TECH_SHED(DR_TECH) 'Shedding demand response technology'

SET IADR(Y,AAA,DR_TECH)  'Set of areas and demand side management technologies in the simulation';
