* File Fuelp.inc

* This file is part of the Balmorel model and should be used with the gas addon,
* Fuel prices are updated according to World Energy Outlook 2004
* A transportation element to gas has be subtracted from DK and Swedish gas prices
* since this is repressented seperately in the gas addon
*------------------------------------------------------------------------------

* PARAMETER FUELPRICE contains fuel prices.
* Data source:
*  IEA World Energy Outlook
*  Energistyrrelsen: Foruds�tninger for samfunds�konomiske analyser


$ontext
* Units: EUR90/GJ
TABLE FUELPRICE(YYY,AAA,FFF)  'Fuel prices (Money/GJ)'

        DK_E_Urban.NUCLEAR        DK_E_Urban.ORIMULSION        DK_E_Urban.PEAT                DK_E_Urban.WOOD_WASTE        DK_E_Urban.COAL        DK_E_Urban.FUELOIl        DK_E_Urban.LIGHTOIl        DK_E_Urban.STRAW                DK_E_Urban.WOOD                DK_E_Urban.NAT_GAS        DK_E_Urban.WIND     DK_E_Urban.WATER        DK_E_Urban.SUN      DK_E_Urban.ELECTRIC        DK_E_Urban.MUNI_WASTE
2002         0.52                         1.46                         1.09                         0.57                         1.21                 2.83                         4.90                         3.56                         4.55                         2.6621634204                0                 0                         0                 0                         0
2003         0.52                         1.46                         1.09                         0.57                        1.20                 2.67                         4.62                         3.56                         4.55                         2.6846252354                0                 0                         0                 0                         0
2004         0.51                         1.43                        1.24                         0.57                         1.56                 3.12                         5.43                         3.56                         4.55                         3.1675542560                0                 0                         0                 0                         0
2005         0.60                         1.59                         1.47                         0.57                         1.72                 4.35                         7.64                         3.56                         4.55                         4.1895668346                0                 0                         0                 0                         0
2006         0.56                         1.47                         1.37                         0.57                         1.60                 3.89                         6.81                         3.56                         4.55                         3.6617141841                0                 0                         0                 0                         0
2007         0.50                         1.32                         1.21                         0.57                         1.43                 3.14                         5.46                         3.56                         4.55                         3.1450924411                0                 0                         0                 0                         0
2008         0.44                         1.16                         1.06                         0.57                         1.26                 2.41                         4.17                         3.56                         4.55                         2.650932513                0                 0                         0                 0                         0
2009         0.40                         1.06                         0.96                         0.57                         1.15                 2.02                         3.45                         3.56                         4.55                         2.1792343998                0                 0                         0                 0                         0
2010         0.40                         1.06                         0.96                         0.57                         1.15                 2.02                         3.45                         3.56                         4.55                         2.1792343998                0                 0                         0                 0                         0
2011         0.40                         1.06                         0.97                         0.57                         1.15                 2.04                         3.51                         3.56                         4.55                         2.2129271221                0                 0                         0                 0                         0
2012         0.40                         1.07                         0.98                         0.57                         1.16                 2.07                         3.57                         3.56                         4.55                         2.2466198445                0                 0                         0                 0                         0
2013         0.40                         1.07                         0.99                         0.57                         1.16                2.11                         3.61                         3.56                         4.55                         2.2803125669                0                 0                         0                 0                         0
2014         0.40                         1.08                         1.00                         0.57                         1.17                 2.13                         3.67                         3.56                         4.55                         2.3140052893                0                 0                         0                 0                         0
2015         0.40                         1.08                         1.01                         0.57                         1.17                 2.16                         3.72                         3.56                         4.55                         2.3476980116                0                 0                         0                 0                         0
2016         0.41                         1.09                         1.02                         0.57                         1.19                 2.19                         3.77                         3.56                         4.55                         2.3813907340                0                 0                         0                 0                         0
2017         0.40                         1.09                         1.03                         0.57                         1.19                 2.22                         3.82                         3.56                         4.55                         2.4150834564                0                 0                         0                 0                         0
2018         0.40                         1.10                         1.04                         0.57                         1.20                 2.25                         3.88                         3.56                         4.55                         2.4487761787                0                 0                         0                 0                         0
2019         0.40                         1.10                         1.05                         0.57                         1.20                 2.27                         3.93                         3.56                         4.55                         2.4824689011                0                 0                         0                 0                         0
2020         0.40                         1.11                         1.06                         0.57                         1.21                 2.31                         3.98                         3.56                         4.55                         2.5161616235                0                 0                         0                 0                         0
2021         0.40                         1.11                         1.06                         0.57                         1.21                 2.33                         4.04                         3.56                         4.55                         2.5498543459                0                 0                         0                 0                         0
2022         0.41                         1.12                         1.10                         0.57                         1.22                 2.36                         4.08                         3.56                         4.55                         2.5723161608                0                 0                         0                 0                         0
2023         0.40                         1.12                         1.07                         0.57                         1.22                 2.40                         4.14                         3.56                         4.55                         2.6060088831                0                 0                         0                 0                         0
2024         0.40                         1.13                         1.08                         0.57                         1.23                 2.42                         4.18                         3.56                         4.55                         2.6397016055                0                 0                         0                 0                         0
2025         0.40                         1.13                         1.08                         0.57                         1.23                 2.45                         4.24                         3.56                         4.55                         2.6733943279                0                 0                         0                 0                         0
2026         0.40                         1.14                         1.09                         0.57                         1.24                 2.48                         4.30                         3.56                         4.55                         2.7070870503                0                 0                         0                 0                         0
2027         0.40                         1.14                         1.08                         0.57                         1.24                 2.51                         4.34                         3.56                         4.55                         2.7407797726                0                 0                         0                 0                         0
2028         0.41                         1.15                         1.09                         0.57                         1.25                 2.54                         4.40                         3.56                         4.55                         2.7744724950                0                 0                         0                 0                         0
2029         0.40                         1.15                         1.09                         0.57                         1.25                 2.57                         4.45                         3.56                         4.55                         2.8081652714                0                 0                         0                 0                         0
2030         0.40                         1.16                         1.10                         0.57                         1.26                 2.60                         4.50                         3.56                         4.55                         2.8418579398                 0                 0                         0                 0                         0

+        FI_R_Urban.NAT_GAS        FI_R_Rural.NAT_GAS
2002        2.9874213836478         2.9874213836478
2003        3.00988319856244        3.00988319856244
2004        3.49281221922731        3.49281221922731
2005        4.51482479784367        4.51482479784367
2006        3.98697214734951        3.98697214734951
2007        3.47035040431267        3.47035040431267
2008        2.97619047619048        2.97619047619048
2009        2.50449236298293        2.50449236298293
2010        2.50449236298293        2.50449236298293
2011        2.5381850853549         2.5381850853549
2012        2.57187780772686        2.57187780772686
2013        2.60557053009883        2.60557053009883
2014        2.6392632524708         2.6392632524708
2015        2.67295597484277        2.67295597484277
2016        2.70664869721474        2.70664869721474
2017        2.7403414195867         2.7403414195867
2018        2.77403414195867        2.77403414195867
2019        2.80772686433064        2.80772686433064
2020        2.84141958670261        2.84141958670261
2021        2.87511230907457        2.87511230907457
2022        2.89757412398922        2.89757412398922
2023        2.93126684636119        2.93126684636119
2024        2.96495956873315        2.96495956873315
2025        2.99865229110512        2.99865229110512
2026        3.03234501347709        3.03234501347709
2027        3.06603773584906        3.06603773584906
2028        3.09973045822102        3.09973045822102
2029        3.13342318059299        3.13342318059299
2030        3.16711590296496        3.16711590296496

+           NO_N_Rural.NAT_GAS      NO_S_Rural.NAT_GAS      NO_M_Rural.NAT_GAS
2002        2.68913991164904        2.68913991164904        2.68913991164904
2003        2.70926298509004        2.70926298509004        2.70926298509004
2004        3.14353099730458        3.14353099730458        3.14353099730458
2005        4.06433458724564        4.06433458724564        4.06433458724564
2006        3.58843498769875        3.58843498769875        3.58843498769875
2007        3.12303751356881        3.12303751356881        3.12303751356881
2008        2.67833314270464        2.67833314270464        2.67833314270464
2009        2.25384260687975        2.25384260687975        2.25384260687975
2010        2.25384260687975        2.25384260687975        2.25384260687975
2011        2.28396623216872        2.28396623216872        2.28396623216872
2012        2.31409052163769        2.31409052163769        2.31409052163769
2013        2.34521298478651        2.34521298478651        2.34521298478651
2014        2.37523729478686        2.37523729478686        2.37523729478686
2015        2.40536194535535        2.40536194535535        2.40536194535535
2016        2.43548719470478        2.43548719470478        2.43548719470478
2017        2.466604817413          2.466604817413          2.466604817413
2018        2.49672976504027        2.49672976504027        2.49672976504027
2019        2.52675631131094        2.52675631131094        2.52675631131094
2020        2.55787041375975        2.55787041375975        2.55787041375975
2021        2.58799574011757        2.58799574011757        2.58799574011757
2022        2.60801302420032        2.60801302420032        2.60801302420032
2023        2.63902277803879        2.63902277803879        2.63902277803879
2024        2.66826777569281        2.66826777569281        2.66826777569281
2025        2.69839584838846        2.69839584838846        2.69839584838846
2026        2.7285243629644         2.7285243629644         2.7285243629644
2027        2.75962912698317        2.75962912698317        2.75962912698317
2028        2.78965990593594        2.78965990593594        2.78965990593594
2029        2.8197886564553         2.8197886564553         2.8197886564553
2030        2.84991781252976        2.84991781252976        2.8499178125297

+           SE_N_Rural.NAT_GAS      SE_M_Rural.NAT_GAS      SE_S_Rural.NAT_GAS      SE_M_Urban.NAT_GAS
2002        2.95932331325086        2.95932331325086        2.95932331325086        2.95932331325086
2003        2.98412386963915        2.98412386963915        2.98412386963915        2.98412386963915
2004        3.51571389875435        3.51571389875435        3.51571389875435        3.51571389875435
2005        4.64092000441868        4.64092000441868        4.64092000441868        4.64092000441868
2006        4.06073031544654        4.06073031544654        4.06073031544654        4.06073031544654
2007        3.48989450109786        3.48989450109786        3.48989450109786        3.48989450109786
2008        2.94647683794668        2.94647683794668        2.94647683794668        2.94647683794668
2009        2.427759977666          2.427759977666          2.427759977666          2.427759977666
2010        2.427759977666          2.427759977666          2.427759977666          2.427759977666
2011        2.46502353451866        2.46502353451866        2.46502353451866        2.46502353451866
2012        2.50228637589287        2.50228637589287        2.50228637589287        2.50228637589287
2013        2.53954853301547        2.53954853301547        2.53954853301547        2.53954853301547
2014        2.57690966775905        2.57690966775905        2.57690966775905        2.57690966775905
2015        2.6141704619345         2.6141704619345         2.6141704619345         2.6141704619345
2016        2.65043739175204        2.65043739175204        2.65043739175204        2.65043739175204
2017        2.68769847936471        2.68769847936471        2.68769847936471        2.68769847936471
2018        2.72495897648137        2.72495897648137        2.72495897648137        2.72495897648137
2019        2.76231787495464        2.76231787495464        2.76231787495464        2.76231787495464
2020        2.79957719346211        2.79957719346211        2.79957719346211        2.79957719346211
2021        2.83683599051202        2.83683599051202        2.83683599051202        2.83683599051202
2022        2.86173724443255        2.86173724443255        2.86173724443255        2.86173724443255
2023        2.89811205708091        2.89811205708091        2.89811205708091        2.89811205708091
2024        2.93429263854268        2.93429263854268        2.93429263854268        2.93429263854268
2025        2.97155115741072        2.97155115741072        2.97155115741072        2.97155115741072
2026        3.00880920631912        3.00880920631912        3.00880920631912        3.00880920631912
2027        3.04606680231925        3.04606680231925        3.04606680231925        3.04606680231925
2028        3.08342146811042        3.08342146811042        3.08342146811042        3.08342146811042
2029        3.12067816233499        3.12067816233499        3.12067816233499        3.12067816233499
2030        3.15696145072706        3.15696145072706        3.15696145072706        3.15696145072706
;


* Unless other values are assigned in the TABLE FUELPRICE above,
* the values for  'DK_E_Urban'  are used for all A:

FUELPRICE(YYY,IA,FFF)$(FUELPRICE(YYY,IA,FFF) EQ 0)=FUELPRICE(YYY,'DK_E_Urban',FFF);
$offtext

$ifi %GAS%==yes FUELPRICE(Y,IA,'NAT_GAS')$(ICA('Denmark',IA)) = FUELPRICE(Y,IA,'NAT_GAS')-2.91/(1.398*7.43);


$ifi %FREEGAS%==yes FUELPRICE(YYY,IA,'NAT_GAS')$((ICA('Denmark',IA) or ICA('Sweden',IA))
$ifi %FREEGAS%==yes                                           and (not sameas('Nybro',IA))
$ifi %FREEGAS%==yes                                           and (not sameas('Ellund',IA))
$ifi %FREEGAS%==yes                                           and (not sameas('Oeresund',IA)))
$ifi %FREEGAS%==yes                                           =0;

PARAMETER GEXT_COST(YYY,SOURCE) 'Average Extraction Cost EURO/MWh',
          GEX_PRICE(YYY,SOURCE,S) 'Export Price Money/MWh';

GEXT_COST(YYY,'Nybro')=FUELPRICE(YYY,'Nybro','NAT_GAS')*%NG_PROD_FRAC%;
GEXT_COST(YYY,'Oeresund')=FUELPRICE(YYY,'Oeresund','NAT_GAS')*%NG_PROD_FRAC%;

GEX_PRICE(YYY,SOURCE,S)(IFUELP_Y('Nybro','NAT_GAS')*(1+WSF(S))+%NG_EXP_ADD%;

$ontext
TABLE GEXT_COST(YYY,SOURCE) 'Average Extraction Cost EURO97/MWh'

          Nybro    Oeresund
2003      3.00     3.00
2004      3.00     3.00
2005      3.00     3.00
2006      3.00     3.00
2007      3.00     3.00
2008      3.00     3.00
2009      3.00     3.00
2010      3.00     3.00
2011      3.00     3.00
2012      3.00     3.00
2013      3.00     3.00
2014      3.00     3.00
2015      3.00     3.00
2016      3.00     3.00
2017      3.00     3.00
2018      3.00     3.00
2019      3.00     3.00
2020      3.00     3.00
2021      3.00     3.00
2022      3.00     3.00
2023      3.00     3.00
2024      3.00     3.00
2025      3.00     3.00

          Nybro    Oeresund
2003      0.65     0.65
2004      0.65     0.65
2005      0.65     0.65
2006      0.65     0.65
2007      0.65     0.65
2008      0.65     0.65
2009      0.65     0.65
2010      0.65     0.65
2011      0.65     0.65
2012      0.65     0.65
2013      0.65     0.65
2014      0.65     0.65
2015      0.65     0.65
2016      0.65     0.65
2017      0.65     0.65
2018      0.65     0.65
2019      0.65     0.65
2020      0.65     0.65
2021      0.65     0.65
2022      0.65     0.65
2023      0.65     0.65
2024      0.65     0.65
2025      0.65     0.65
;
$offtext