* File agkndisceauations.inc.
* To be used with addon AGKNDISC to the Balmorel model.

Equations

   QAGKNDISC01(Y,AAA,G)       'At most one of the specified discrete capacity size investments is chosen (0/1)'
   QAGKNDISCCONT(Y,AAA,G)       'The invested capacity must be one of the specified sizes or zero (MW)'
   QAGKNDISC1(Y,AAA,G,S,T)
   QGEKNT(Y,AAA,G,S,T)
   QGHKNT(Y,AAA,G,S,T)
;

*$ONTEXT

* At most one of the specified discrete capacity size investments is chosen (Addon AGKNDISC)
QAGKNDISC01(Y,IAGKNDISCAG(IA,G))..
 SUM(AGKNDISCSIZESET$AGKNDISCDATA(G,AGKNDISCSIZESET,'AGKNDISCSIZE'), VGKNDISC(Y,IA,G,AGKNDISCSIZESET) )
=L=
1
;


QAGKNDISC1(Y,IAGKNDISCAG(IA,IGDISPATCH(IGE)),IS3,T)..

SUM(AGKNDISCSIZESET$AGKNDISCDATA(IGDISPATCH,AGKNDISCSIZESET,'AGKNDISCSIZE'),
   VGKNDISC(Y,IA,IGDISPATCH,AGKNDISCSIZESET)*AGKNDISCDATA(IGDISPATCH,AGKNDISCSIZESET,'AGKNDISCSIZE')*(1-IGKRATE(IA,IGDISPATCH,IS3,T))/(1$(not IGESTO(IGE)) + GDATA(IGE,'GDSTOHUNLD')$IGESTO(IGE))          )
  =G=
  VGE_T(Y,IA,IGDISPATCH,IS3,T)
;

QAGKNDISCCONT(Y,IAGKNDISCAG(IA,G))..

VGKN(Y,IA,G) =E= SUM(AGKNDISCSIZESET$AGKNDISCDATA(G,AGKNDISCSIZESET,'AGKNDISCSIZE'),  VGKNDISC(Y,IA,G,AGKNDISCSIZESET)*AGKNDISCDATA(G,AGKNDISCSIZESET,'AGKNDISCSIZE'));

*$OFFTEXT

*$ontext

QGEKNT(IY411,IAGKNDISCAG(IA,IGDISPATCH(IGE)),IS3,T)$
$ifi not %COMBTECH%==yes  1 ..
$ifi     %COMBTECH%==yes  (NOT IGCOMB2(IGE)) ..
* LARS20070814: Modified to account for investment in storage
  VGKN(IY411,IA,IGDISPATCH)*IGKRATE(IA,IGDISPATCH,IS3,T)/(1$(not IGESTO(IGE)) + GDATA(IGE,'GDSTOHUNLD')$IGESTO(IGE))
    =G=
  VGE_T(IY411,IA,IGDISPATCH,IS3,T)
$ifi %COMBTECH%==yes  * Add secondary generation if using combination technologies.
$ifi %COMBTECH%==yes    + SUM(IGCOMB2$GGCOMB(IGDISPATCH,IGCOMB2), VGE_T(IY411,IA,IGCOMB2,IS3,T))$IGCOMB1(IGDISPATCH)
;

QGHKNT(IY411,IAGKNDISCAG(IA,IGKH),IS3,T)..
* LARS20070814: Modified to account for investment in storage
* LARS20071015: Skulle denne i virkeligheden ogs? bruge IGDISPATCH for konsistens? For nuv?rende er alle varme teknologier dispatchable,
* men hvad med solvarme?
  VGKN(IY411,IA,IGKH)*IGKRATE(IA,IGKH,IS3,T)/(1$(not IGHSTO(IGKH)) + GDATA(IGKH,'GDSTOHUNLD')$IGHSTO(IGKH))
     =G=
  VGH_T(IY411,IA,IGKH,IS3,T)
;

*$offtext




