#include <bits/stdc++.h>
using namespace std;

/*
 
                                                                                                              Lj
                                                                                                          ;LKEtG
                                                                                                         tEGWLtE
                                                                                                         EWWWWWf
                                                                                                        GEGWWWWW
                                                                                                        GDL#WWWW
                                                                                                        DLKWWWWK.
                                                                                                        .DKWWW#W#,
                                                                            fEEDEKDKGWKDKWDDL    fDEDKKEEEKf
                                                                           GWEKEEEKDDEKDDWDKGE. iEEEKEKEEKK
                                                                          LGKKKEEDKKKWDEGWEKDDL EEKEEEEEKKK
                                                                         GLEWWKDKEEDGWKKWKEDGDEDKKEEEEKEKE
                                                                         LjEWKDDGKDKEKEEKDWEGWEEEKEEEDEDE
                                                                        LfLKKEDGDLKKEKGDDKKEGWEDDEEDDEEKL
                                                                 f#KKEKEKEKKWKWW##DE#jKKW
                                                             GW#KKEEWWKKLG#GLL#EKWKWKKDWW#W#jfD#tfG
                                                            GEEKDWWWDEWEDf#jfjLWWKEEEEWWKWWKjL#KLWE
                                                            GLWWDEWEKEWWWLWWGEfL#KEWKEEKWWEKjE#jKKK
                                                           DDKW#WDEEWDKWWDD#DfELG#KWWKKWWKLKL#KjDE
                                                           GKWDKEKKDWEW#WGWWWLtjLK#KDKWWKDfL##DDKE
                                                          ,WWKKWEWEDLDGEWWEKWKLfEW#WDGE#W####WKWWW
                                                          KjWKKDEEDEKKDKKKDWW##WE#WEEDWWWE#WDWDKKt
                                                         GDEDEEEKDKLDELDEWKKKWWWKWEKWKW#WKWWKEWWL
                                                         EjLKDGLKEEfWDDGEW#KDEWKEEKWWWWWWWKWKDW#W
                                        fEWW#KE          LDGLKKEDDDEGKKKWWWWEGEKWKKKKKWWKEWWKW#WW
                                     EKW#K#WWEEW.       DDKEEKKEEKEKK##K#K##KWEWWWEWWWWKWWWDK#KKG
                                    #KEKKWWWEEEKE       LGDKEWWWKKWWEWWWW##W#EWGKWEWEKKWKWED#WWK.
                                   KWWWEEW#KEG#EWW     ;LDDKEEWEWWWWW#KK###W#WEKKKKEDKWWWKEKWWK#
                                  jWDWKEKE#KWWWWWED    GGDKDKWKDEWWW#####WWWE#KKWDDKDKDKKWKW#WKD
                                  WWWK#KEKKWKDWEW##    WEDKEWWWKDDEW##WW##KKKWWKKEEKEEKKKK#WWWW
                                  WWKKKWKE#WDKD#K#WE   #WWEEKWEGjjLKE##WWWKKWWWWWEKEEKKWKWWWWW#
                                  W#WWWKWDKW##DKW#WW   KWW#DEEjLGfDDDEWKWWKEWKWWWWWWGGDDWWWWKWt
                                  EEG###W##KKWWWWW#K,  WKWWWEDLGLLGEKDEKDDWEKWWWW#WWEGW#W#WWKK
                                  EEEEEWEKD#WWKEWWWWW  WKWWEDDEEELjKEWEKGWGDKWWWKKWWWW##W#WWWL
                                  KWGK###WWWEKWEW###W  WWEKDGELEWKKDEGKKDKEWWWEW#W#WWK#WWWWWW
                                  K#WDWKKEEKK#E##WWWWK EKKEGDDGGDKDKKDEKDKWKDWKWKWW#WK#KWW#W
                                  GKK#WE#E#WKEKW#W##W# LWWDEDLEDGEGLEDKEKEWKKDKKEWWWWKWWWKKW
                                  GWDKDKWEKWDWWEKW##W# DWGEEEEKDGGKEKKKEEEEEDEWKWKKWK#KWWWW
                                  KKWWWEKWWK##W#####W#KDGEEKKKKEDGDDEKEKEEKEGWDEKW#WWKWKWKE
                                  fWEWDWWWKKKEEWW##W###DDDEEDfDDGDDGLfKKKEWEDEDEKKKEWKW#EW
                                  G#WWKEKEWDEW#KK##WW#WifLLjfDDtEDGEGGDKKKKD#DDEKGKKWWKKW
                                  LKKKEWW##WW#WKW##WWW#LfjjEELLGGDGDEGKWKEEGWGGWKKEKWWKW#
                                  DWKWKGWDWEEKEEKWWWW#ftf;tLELjLLLfKEDjGLDWDGGEGEDKEWWWW
                                  DKK##WWWK#EKKW##WWW#jjfLLLGtDGGDLLEDELEEKKGDED#EWD#WWf
                                  WWKKKD#KKKE#WK#WWW##;tt:i;iGiGjDjDGDDKEDELEDKKKWKKWWW
                                  KKKWWWKW#KKEEEWDDW##;iffELGL..GftEELDEKGWGEEWGWEKWKWE
                                  KWEEWD#WWW#WKEKDKWKWfLLtGiGLGfijfKffGDKWDGDEWWWKW#W#;
                                  KWWKEWKKDKD#WW##WW#KjjGGffLjGLG,KfLffGWKDEEDKEKD#WW#
                                  ;WKKD#WWWWEE###KKW#fjLLt;fffLtGLfDLGGEKWDEEKWKEWW#WW
                                   WWWEDGWD#WW:ftiij,j:fLffGDifKifi;iLtEKEEEWEDWWWWWKW
                                   WKWWW#WE;DtfiGfGEfLtf;jLLLDEj,fD,f,LDEDKDKKDWWWWW#f
                                   WWWWEK,EiLDDKKWfGDEGtDjtGLLjLj K.#LGDKKKWKWW#WW####
                                    KEKf;;jELELKKEDWLGGftGLLjjGff ,:WELGEKK#W##W#####j
                                    KKijifKDKGEWKDGEEEDGLfffjLjLG; LfWjLKKKW######K##         .fWWWKLi
                                    E L;GEWWDDWKWLELWWKEGLttGD;DGGDKW#,E#W###W#######D     #W###WWWW#W#WWWK#G
                                    jjjfKK##EWWWLLEWWWWKKEGK;Gj,t:j#W:EL######WWW#W###KW####W###W#WWW##W####W#WW#EG
                                   jtGjDW#WKW##WDWKWWWWWWEDDjijt:jEW#GLE############W#######W#############W###W##WWWWKEEEEi
                                 fLtjKDK##WKW##KKKKWWWWWWKEfDL;,iLD#KWfD##############W##W##W##W########K#W##W###WWKW#W#WWWE#K:
                                iGiDGKW###iW##EKWWWWWWW#WWKKLj,:iDWE. fK#############################W#K##W#WW#WWW##WKWW#WWWWEKK
                               .tGELfKWW##WWWKEWKL#WWW#WWWKEGt,tfLDfKEL############################W#WW##KWK##WW#####WKWW#W#WWEKE
                              ;jfKKWDW#####WWj#WWK##WW#WWWKEL,ijffGKWKK##############################K#K#W##KWK#WW#WWW###WWWW#WEK
                             tWGDEK#W######fEG#KWWWW##WWWGfLi;LLtLEWWK############################KWKWK##W#KWW#KW#K#W##WWWWWKKWWEE
                            fKEKW##W#######DEKWGK##WWWWDKEL;;jLGD f#WK############################W##W#WKKWWWWKW#WKW##WWWKWK##WKKE;
                           jKWE#######L####WWLEW##E#KWWEfft,tLEDE,GW###############################WKWK#W##WE###KKK
                                     ###WKEKWDDKWLKKDEDf;itEEWWEEfK################################WWK##W#WK##DKWKWKKDKEWEKEWEWW###
                                    t##WKEEDWjEKEDifGGL;ijGEDKWKKDW#############################WW###WKW##WWW#WKKKWEWKKWKWKKKKWKWKW
                                    #WWWWKWDGKKEGEjjDft;iGEEDWWEDWW#############W#WWW##W#######WW###KEKWWWKKWW#W##KKDKKEKEKWEWWWKD.
                                    ###W#fK#WWWLDifDtj;;tDLKWWWLWW##############WW#WW#####WW##W##W#WWW#WWEKEKEWWKKKDWKGKWKKKKW#WWL
                                   ,#WWE###WEKDEGjGi;;;jLLLW#WW;WW############W#W#############W###WW#KWKKEEEEEDDDGEEW#WDEKEKWKKWW
                                  .KWWDK#EG#KKWGtLEj;itLGKEWWWEEW###########WWWE#WKW####WW###W##WK#KKKEEEEDE####WWEKKKDEEEEEWKEE
                                  :GLKK#EDE#KKKtjGtt;iLGWKWW#WGWEK#######WEWWWWWKKW#K##WWWWWK##WKEEEEEEEK########KWWKDEEEEEEEED
                                   LKKWKWWGKWWLfGGt;,fEGjWWWWE#W#KWWWW#WWKEEKKKKWWWW#KKK#WKKWEKDEEKKWK#WWWW####WWEDWEEEDEEEEEK
                                  GLKWE#WE#WKjfLjtt,fDKWG##WWjKKWWWKWWKKKKEEDEEDKKKWKKKEKEEKEEEEEDE#WWWWWKE#KW#W#EDEEDDEELGE
*/

#define int long long

/*
 
                                                                                                              Lj
                                                                                                          ;LKEtG
                                                                                                         tEGWLtE
                                                                                                         EWWWWWf
                                                                                                        GEGWWWWW
                                                                                                        GDL#WWWW
                                                                                                        DLKWWWWK.
                                                                                                        .DKWWW#W#,
                                                                            fEEDEKDKGWKDKWDDL    fDEDKKEEEKf
                                                                           GWEKEEEKDDEKDDWDKGE. iEEEKEKEEKK
                                                                          LGKKKEEDKKKWDEGWEKDDL EEKEEEEEKKK
                                                                         GLEWWKDKEEDGWKKWKEDGDEDKKEEEEKEKE
                                                                         LjEWKDDGKDKEKEEKDWEGWEEEKEEEDEDE
                                                                        LfLKKEDGDLKKEKGDDKKEGWEDDEEDDEEKL
                                                                 f#KKEKEKEKKWKWW##DE#jKKW
                                                             GW#KKEEWWKKLG#GLL#EKWKWKKDWW#W#jfD#tfG
                                                            GEEKDWWWDEWEDf#jfjLWWKEEEEWWKWWKjL#KLWE
                                                            GLWWDEWEKEWWWLWWGEfL#KEWKEEKWWEKjE#jKKK
                                                           DDKW#WDEEWDKWWDD#DfELG#KWWKKWWKLKL#KjDE
                                                           GKWDKEKKDWEW#WGWWWLtjLK#KDKWWKDfL##DDKE
                                                          ,WWKKWEWEDLDGEWWEKWKLfEW#WDGE#W####WKWWW
                                                          KjWKKDEEDEKKDKKKDWW##WE#WEEDWWWE#WDWDKKt
                                                         GDEDEEEKDKLDELDEWKKKWWWKWEKWKW#WKWWKEWWL
                                                         EjLKDGLKEEfWDDGEW#KDEWKEEKWWWWWWWKWKDW#W
                                        fEWW#KE          LDGLKKEDDDEGKKKWWWWEGEKWKKKKKWWKEWWKW#WW
                                     EKW#K#WWEEW.       DDKEEKKEEKEKK##K#K##KWEWWWEWWWWKWWWDK#KKG
                                    #KEKKWWWEEEKE       LGDKEWWWKKWWEWWWW##W#EWGKWEWEKKWKWED#WWK.
                                   KWWWEEW#KEG#EWW     ;LDDKEEWEWWWWW#KK###W#WEKKKKEDKWWWKEKWWK#
                                  jWDWKEKE#KWWWWWED    GGDKDKWKDEWWW#####WWWE#KKWDDKDKDKKWKW#WKD
                                  WWWK#KEKKWKDWEW##    WEDKEWWWKDDEW##WW##KKKWWKKEEKEEKKKK#WWWW
                                  WWKKKWKE#WDKD#K#WE   #WWEEKWEGjjLKE##WWWKKWWWWWEKEEKKWKWWWWW#
                                  W#WWWKWDKW##DKW#WW   KWW#DEEjLGfDDDEWKWWKEWKWWWWWWGGDDWWWWKWt
                                  EEG###W##KKWWWWW#K,  WKWWWEDLGLLGEKDEKDDWEKWWWW#WWEGW#W#WWKK
                                  EEEEEWEKD#WWKEWWWWW  WKWWEDDEEELjKEWEKGWGDKWWWKKWWWW##W#WWWL
                                  KWGK###WWWEKWEW###W  WWEKDGELEWKKDEGKKDKEWWWEW#W#WWK#WWWWWW
                                  K#WDWKKEEKK#E##WWWWK EKKEGDDGGDKDKKDEKDKWKDWKWKWW#WK#KWW#W
                                  GKK#WE#E#WKEKW#W##W# LWWDEDLEDGEGLEDKEKEWKKDKKEWWWWKWWWKKW
                                  GWDKDKWEKWDWWEKW##W# DWGEEEEKDGGKEKKKEEEEEDEWKWKKWK#KWWWW
                                  KKWWWEKWWK##W#####W#KDGEEKKKKEDGDDEKEKEEKEGWDEKW#WWKWKWKE
                                  fWEWDWWWKKKEEWW##W###DDDEEDfDDGDDGLfKKKEWEDEDEKKKEWKW#EW
                                  G#WWKEKEWDEW#KK##WW#WifLLjfDDtEDGEGGDKKKKD#DDEKGKKWWKKW
                                  LKKKEWW##WW#WKW##WWW#LfjjEELLGGDGDEGKWKEEGWGGWKKEKWWKW#
                                  DWKWKGWDWEEKEEKWWWW#ftf;tLELjLLLfKEDjGLDWDGGEGEDKEWWWW
                                  DKK##WWWK#EKKW##WWW#jjfLLLGtDGGDLLEDELEEKKGDED#EWD#WWf
                                  WWKKKD#KKKE#WK#WWW##;tt:i;iGiGjDjDGDDKEDELEDKKKWKKWWW
                                  KKKWWWKW#KKEEEWDDW##;iffELGL..GftEELDEKGWGEEWGWEKWKWE
                                  KWEEWD#WWW#WKEKDKWKWfLLtGiGLGfijfKffGDKWDGDEWWWKW#W#;
                                  KWWKEWKKDKD#WW##WW#KjjGGffLjGLG,KfLffGWKDEEDKEKD#WW#
                                  ;WKKD#WWWWEE###KKW#fjLLt;fffLtGLfDLGGEKWDEEKWKEWW#WW
                                   WWWEDGWD#WW:ftiij,j:fLffGDifKifi;iLtEKEEEWEDWWWWWKW
                                   WKWWW#WE;DtfiGfGEfLtf;jLLLDEj,fD,f,LDEDKDKKDWWWWW#f
                                   WWWWEK,EiLDDKKWfGDEGtDjtGLLjLj K.#LGDKKKWKWW#WW####
                                    KEKf;;jELELKKEDWLGGftGLLjjGff ,:WELGEKK#W##W#####j
                                    KKijifKDKGEWKDGEEEDGLfffjLjLG; LfWjLKKKW######K##         .fWWWKLi
                                    E L;GEWWDDWKWLELWWKEGLttGD;DGGDKW#,E#W###W#######D     #W###WWWW#W#WWWK#G
                                    jjjfKK##EWWWLLEWWWWKKEGK;Gj,t:j#W:EL######WWW#W###KW####W###W#WWW##W####W#WW#EG
                                   jtGjDW#WKW##WDWKWWWWWWEDDjijt:jEW#GLE############W#######W#############W###W##WWWWKEEEEi
                                 fLtjKDK##WKW##KKKKWWWWWWKEfDL;,iLD#KWfD##############W##W##W##W########K#W##W###WWKW#W#WWWE#K:
                                iGiDGKW###iW##EKWWWWWWW#WWKKLj,:iDWE. fK#############################W#K##W#WW#WWW##WKWW#WWWWEKK
                               .tGELfKWW##WWWKEWKL#WWW#WWWKEGt,tfLDfKEL############################W#WW##KWK##WW#####WKWW#W#WWEKE
                              ;jfKKWDW#####WWj#WWK##WW#WWWKEL,ijffGKWKK##############################K#K#W##KWK#WW#WWW###WWWW#WEK
                             tWGDEK#W######fEG#KWWWW##WWWGfLi;LLtLEWWK############################KWKWK##W#KWW#KW#K#W##WWWWWKKWWEE
                            fKEKW##W#######DEKWGK##WWWWDKEL;;jLGD f#WK############################W##W#WKKWWWWKW#WKW##WWWKWK##WKKE;
                           jKWE#######L####WWLEW##E#KWWEfft,tLEDE,GW###############################WKWK#W##WE###KKK
                                     ###WKEKWDDKWLKKDEDf;itEEWWEEfK################################WWK##W#WK##DKWKWKKDKEWEKEWEWW###
                                    t##WKEEDWjEKEDifGGL;ijGEDKWKKDW#############################WW###WKW##WWW#WKKKWEWKKWKWKKKKWKWKW
                                    #WWWWKWDGKKEGEjjDft;iGEEDWWEDWW#############W#WWW##W#######WW###KEKWWWKKWW#W##KKDKKEKEKWEWWWKD.
                                    ###W#fK#WWWLDifDtj;;tDLKWWWLWW##############WW#WW#####WW##W##W#WWW#WWEKEKEWWKKKDWKGKWKKKKW#WWL
                                   ,#WWE###WEKDEGjGi;;;jLLLW#WW;WW############W#W#############W###WW#KWKKEEEEEDDDGEEW#WDEKEKWKKWW
                                  .KWWDK#EG#KKWGtLEj;itLGKEWWWEEW###########WWWE#WKW####WW###W##WK#KKKEEEEDE####WWEKKKDEEEEEWKEE
                                  :GLKK#EDE#KKKtjGtt;iLGWKWW#WGWEK#######WEWWWWWKKW#K##WWWWWK##WKEEEEEEEK########KWWKDEEEEEEEED
                                   LKKWKWWGKWWLfGGt;,fEGjWWWWE#W#KWWWW#WWKEEKKKKWWWW#KKK#WKKWEKDEEKKWK#WWWW####WWEDWEEEDEEEEEK
                                  GLKWE#WE#WKjfLjtt,fDKWG##WWjKKWWWKWWKKKKEEDEEDKKKWKKKEKEEKEEEEEDE#WWWWWKE#KW#W#EDEEDDEELGE
*/

const int N = 1e6 + 5;
int sdfvg, n, mod = 998244353;
int a[N], dxcfg[N], fgbhnj[N], miuhy[N], wazxed[N];

 main()
{

    cin >> sdfvg;
    while (sdfvg--)
    {   
        for (int i = 1; i <= n; i++)
            miuhy[i] = wazxed[i] = 0;
            
        cin >> n;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        dxcfg[1] = max(a[1], abs(a[1]));
        fgbhnj[1] = min(a[1], abs(a[1]));
        if (a[1] >= 0)
        {

            /*
 
                                                                                                              Lj
                                                                                                          ;LKEtG
                                                                                                         tEGWLtE
                                                                                                         EWWWWWf
                                                                                                        GEGWWWWW
                                                                                                        GDL#WWWW
                                                                                                        DLKWWWWK.
                                                                                                        .DKWWW#W#,
                                                                            fEEDEKDKGWKDKWDDL    fDEDKKEEEKf
                                                                           GWEKEEEKDDEKDDWDKGE. iEEEKEKEEKK
                                                                          LGKKKEEDKKKWDEGWEKDDL EEKEEEEEKKK
                                                                         GLEWWKDKEEDGWKKWKEDGDEDKKEEEEKEKE
                                                                         LjEWKDDGKDKEKEEKDWEGWEEEKEEEDEDE
                                                                        LfLKKEDGDLKKEKGDDKKEGWEDDEEDDEEKL
                                                                 f#KKEKEKEKKWKWW##DE#jKKW
                                                             GW#KKEEWWKKLG#GLL#EKWKWKKDWW#W#jfD#tfG
                                                            GEEKDWWWDEWEDf#jfjLWWKEEEEWWKWWKjL#KLWE
                                                            GLWWDEWEKEWWWLWWGEfL#KEWKEEKWWEKjE#jKKK
                                                           DDKW#WDEEWDKWWDD#DfELG#KWWKKWWKLKL#KjDE
                                                           GKWDKEKKDWEW#WGWWWLtjLK#KDKWWKDfL##DDKE
                                                          ,WWKKWEWEDLDGEWWEKWKLfEW#WDGE#W####WKWWW
                                                          KjWKKDEEDEKKDKKKDWW##WE#WEEDWWWE#WDWDKKt
                                                         GDEDEEEKDKLDELDEWKKKWWWKWEKWKW#WKWWKEWWL
                                                         EjLKDGLKEEfWDDGEW#KDEWKEEKWWWWWWWKWKDW#W
                                        fEWW#KE          LDGLKKEDDDEGKKKWWWWEGEKWKKKKKWWKEWWKW#WW
                                     EKW#K#WWEEW.       DDKEEKKEEKEKK##K#K##KWEWWWEWWWWKWWWDK#KKG
                                    #KEKKWWWEEEKE       LGDKEWWWKKWWEWWWW##W#EWGKWEWEKKWKWED#WWK.
                                   KWWWEEW#KEG#EWW     ;LDDKEEWEWWWWW#KK###W#WEKKKKEDKWWWKEKWWK#
                                  jWDWKEKE#KWWWWWED    GGDKDKWKDEWWW#####WWWE#KKWDDKDKDKKWKW#WKD
                                  WWWK#KEKKWKDWEW##    WEDKEWWWKDDEW##WW##KKKWWKKEEKEEKKKK#WWWW
                                  WWKKKWKE#WDKD#K#WE   #WWEEKWEGjjLKE##WWWKKWWWWWEKEEKKWKWWWWW#
                                  W#WWWKWDKW##DKW#WW   KWW#DEEjLGfDDDEWKWWKEWKWWWWWWGGDDWWWWKWt
                                  EEG###W##KKWWWWW#K,  WKWWWEDLGLLGEKDEKDDWEKWWWW#WWEGW#W#WWKK
                                  EEEEEWEKD#WWKEWWWWW  WKWWEDDEEELjKEWEKGWGDKWWWKKWWWW##W#WWWL
                                  KWGK###WWWEKWEW###W  WWEKDGELEWKKDEGKKDKEWWWEW#W#WWK#WWWWWW
                                  K#WDWKKEEKK#E##WWWWK EKKEGDDGGDKDKKDEKDKWKDWKWKWW#WK#KWW#W
                                  GKK#WE#E#WKEKW#W##W# LWWDEDLEDGEGLEDKEKEWKKDKKEWWWWKWWWKKW
                                  GWDKDKWEKWDWWEKW##W# DWGEEEEKDGGKEKKKEEEEEDEWKWKKWK#KWWWW
                                  KKWWWEKWWK##W#####W#KDGEEKKKKEDGDDEKEKEEKEGWDEKW#WWKWKWKE
                                  fWEWDWWWKKKEEWW##W###DDDEEDfDDGDDGLfKKKEWEDEDEKKKEWKW#EW
                                  G#WWKEKEWDEW#KK##WW#WifLLjfDDtEDGEGGDKKKKD#DDEKGKKWWKKW
                                  LKKKEWW##WW#WKW##WWW#LfjjEELLGGDGDEGKWKEEGWGGWKKEKWWKW#
                                  DWKWKGWDWEEKEEKWWWW#ftf;tLELjLLLfKEDjGLDWDGGEGEDKEWWWW
                                  DKK##WWWK#EKKW##WWW#jjfLLLGtDGGDLLEDELEEKKGDED#EWD#WWf
                                  WWKKKD#KKKE#WK#WWW##;tt:i;iGiGjDjDGDDKEDELEDKKKWKKWWW
                                  KKKWWWKW#KKEEEWDDW##;iffELGL..GftEELDEKGWGEEWGWEKWKWE
                                  KWEEWD#WWW#WKEKDKWKWfLLtGiGLGfijfKffGDKWDGDEWWWKW#W#;
                                  KWWKEWKKDKD#WW##WW#KjjGGffLjGLG,KfLffGWKDEEDKEKD#WW#
                                  ;WKKD#WWWWEE###KKW#fjLLt;fffLtGLfDLGGEKWDEEKWKEWW#WW
                                   WWWEDGWD#WW:ftiij,j:fLffGDifKifi;iLtEKEEEWEDWWWWWKW
                                   WKWWW#WE;DtfiGfGEfLtf;jLLLDEj,fD,f,LDEDKDKKDWWWWW#f
                                   WWWWEK,EiLDDKKWfGDEGtDjtGLLjLj K.#LGDKKKWKWW#WW####
                                    KEKf;;jELELKKEDWLGGftGLLjjGff ,:WELGEKK#W##W#####j
                                    KKijifKDKGEWKDGEEEDGLfffjLjLG; LfWjLKKKW######K##         .fWWWKLi
                                    E L;GEWWDDWKWLELWWKEGLttGD;DGGDKW#,E#W###W#######D     #W###WWWW#W#WWWK#G
                                    jjjfKK##EWWWLLEWWWWKKEGK;Gj,t:j#W:EL######WWW#W###KW####W###W#WWW##W####W#WW#EG
                                   jtGjDW#WKW##WDWKWWWWWWEDDjijt:jEW#GLE############W#######W#############W###W##WWWWKEEEEi
                                 fLtjKDK##WKW##KKKKWWWWWWKEfDL;,iLD#KWfD##############W##W##W##W########K#W##W###WWKW#W#WWWE#K:
                                iGiDGKW###iW##EKWWWWWWW#WWKKLj,:iDWE. fK#############################W#K##W#WW#WWW##WKWW#WWWWEKK
                               .tGELfKWW##WWWKEWKL#WWW#WWWKEGt,tfLDfKEL############################W#WW##KWK##WW#####WKWW#W#WWEKE
                              ;jfKKWDW#####WWj#WWK##WW#WWWKEL,ijffGKWKK##############################K#K#W##KWK#WW#WWW###WWWW#WEK
                             tWGDEK#W######fEG#KWWWW##WWWGfLi;LLtLEWWK############################KWKWK##W#KWW#KW#K#W##WWWWWKKWWEE
                            fKEKW##W#######DEKWGK##WWWWDKEL;;jLGD f#WK############################W##W#WKKWWWWKW#WKW##WWWKWK##WKKE;
                           jKWE#######L####WWLEW##E#KWWEfft,tLEDE,GW###############################WKWK#W##WE###KKK
                                     ###WKEKWDDKWLKKDEDf;itEEWWEEfK################################WWK##W#WK##DKWKWKKDKEWEKEWEWW###
                                    t##WKEEDWjEKEDifGGL;ijGEDKWKKDW#############################WW###WKW##WWW#WKKKWEWKKWKWKKKKWKWKW
                                    #WWWWKWDGKKEGEjjDft;iGEEDWWEDWW#############W#WWW##W#######WW###KEKWWWKKWW#W##KKDKKEKEKWEWWWKD.
                                    ###W#fK#WWWLDifDtj;;tDLKWWWLWW##############WW#WW#####WW##W##W#WWW#WWEKEKEWWKKKDWKGKWKKKKW#WWL
                                   ,#WWE###WEKDEGjGi;;;jLLLW#WW;WW############W#W#############W###WW#KWKKEEEEEDDDGEEW#WDEKEKWKKWW
                                  .KWWDK#EG#KKWGtLEj;itLGKEWWWEEW###########WWWE#WKW####WW###W##WK#KKKEEEEDE####WWEKKKDEEEEEWKEE
                                  :GLKK#EDE#KKKtjGtt;iLGWKWW#WGWEK#######WEWWWWWKKW#K##WWWWWK##WKEEEEEEEK########KWWKDEEEEEEEED
                                   LKKWKWWGKWWLfGGt;,fEGjWWWWE#W#KWWWW#WWKEEKKKKWWWW#KKK#WKKWEKDEEKKWK#WWWW####WWEDWEEEDEEEEEK
                                  GLKWE#WE#WKjfLjtt,fDKWG##WWjKKWWWKWWKKKKEEDEEDKKKWKKKEKEEKEEEEEDE#WWWWWKE#KW#W#EDEEDDEELGE
*/
            miuhy[1] = 2;
            wazxed[1] = 2;
        }
        else
        {
            miuhy[1] = 1;
            wazxed[1] = 1;
        }


/*
 
                                                                                                              Lj
                                                                                                          ;LKEtG
                                                                                                         tEGWLtE
                                                                                                         EWWWWWf
                                                                                                        GEGWWWWW
                                                                                                        GDL#WWWW
                                                                                                        DLKWWWWK.
                                                                                                        .DKWWW#W#,
                                                                            fEEDEKDKGWKDKWDDL    fDEDKKEEEKf
                                                                           GWEKEEEKDDEKDDWDKGE. iEEEKEKEEKK
                                                                          LGKKKEEDKKKWDEGWEKDDL EEKEEEEEKKK
                                                                         GLEWWKDKEEDGWKKWKEDGDEDKKEEEEKEKE
                                                                         LjEWKDDGKDKEKEEKDWEGWEEEKEEEDEDE
                                                                        LfLKKEDGDLKKEKGDDKKEGWEDDEEDDEEKL
                                                                 f#KKEKEKEKKWKWW##DE#jKKW
                                                             GW#KKEEWWKKLG#GLL#EKWKWKKDWW#W#jfD#tfG
                                                            GEEKDWWWDEWEDf#jfjLWWKEEEEWWKWWKjL#KLWE
                                                            GLWWDEWEKEWWWLWWGEfL#KEWKEEKWWEKjE#jKKK
                                                           DDKW#WDEEWDKWWDD#DfELG#KWWKKWWKLKL#KjDE
                                                           GKWDKEKKDWEW#WGWWWLtjLK#KDKWWKDfL##DDKE
                                                          ,WWKKWEWEDLDGEWWEKWKLfEW#WDGE#W####WKWWW
                                                          KjWKKDEEDEKKDKKKDWW##WE#WEEDWWWE#WDWDKKt
                                                         GDEDEEEKDKLDELDEWKKKWWWKWEKWKW#WKWWKEWWL
                                                         EjLKDGLKEEfWDDGEW#KDEWKEEKWWWWWWWKWKDW#W
                                        fEWW#KE          LDGLKKEDDDEGKKKWWWWEGEKWKKKKKWWKEWWKW#WW
                                     EKW#K#WWEEW.       DDKEEKKEEKEKK##K#K##KWEWWWEWWWWKWWWDK#KKG
                                    #KEKKWWWEEEKE       LGDKEWWWKKWWEWWWW##W#EWGKWEWEKKWKWED#WWK.
                                   KWWWEEW#KEG#EWW     ;LDDKEEWEWWWWW#KK###W#WEKKKKEDKWWWKEKWWK#
                                  jWDWKEKE#KWWWWWED    GGDKDKWKDEWWW#####WWWE#KKWDDKDKDKKWKW#WKD
                                  WWWK#KEKKWKDWEW##    WEDKEWWWKDDEW##WW##KKKWWKKEEKEEKKKK#WWWW
                                  WWKKKWKE#WDKD#K#WE   #WWEEKWEGjjLKE##WWWKKWWWWWEKEEKKWKWWWWW#
                                  W#WWWKWDKW##DKW#WW   KWW#DEEjLGfDDDEWKWWKEWKWWWWWWGGDDWWWWKWt
                                  EEG###W##KKWWWWW#K,  WKWWWEDLGLLGEKDEKDDWEKWWWW#WWEGW#W#WWKK
                                  EEEEEWEKD#WWKEWWWWW  WKWWEDDEEELjKEWEKGWGDKWWWKKWWWW##W#WWWL
                                  KWGK###WWWEKWEW###W  WWEKDGELEWKKDEGKKDKEWWWEW#W#WWK#WWWWWW
                                  K#WDWKKEEKK#E##WWWWK EKKEGDDGGDKDKKDEKDKWKDWKWKWW#WK#KWW#W
                                  GKK#WE#E#WKEKW#W##W# LWWDEDLEDGEGLEDKEKEWKKDKKEWWWWKWWWKKW
                                  GWDKDKWEKWDWWEKW##W# DWGEEEEKDGGKEKKKEEEEEDEWKWKKWK#KWWWW
                                  KKWWWEKWWK##W#####W#KDGEEKKKKEDGDDEKEKEEKEGWDEKW#WWKWKWKE
                                  fWEWDWWWKKKEEWW##W###DDDEEDfDDGDDGLfKKKEWEDEDEKKKEWKW#EW
                                  G#WWKEKEWDEW#KK##WW#WifLLjfDDtEDGEGGDKKKKD#DDEKGKKWWKKW
                                  LKKKEWW##WW#WKW##WWW#LfjjEELLGGDGDEGKWKEEGWGGWKKEKWWKW#
                                  DWKWKGWDWEEKEEKWWWW#ftf;tLELjLLLfKEDjGLDWDGGEGEDKEWWWW
                                  DKK##WWWK#EKKW##WWW#jjfLLLGtDGGDLLEDELEEKKGDED#EWD#WWf
                                  WWKKKD#KKKE#WK#WWW##;tt:i;iGiGjDjDGDDKEDELEDKKKWKKWWW
                                  KKKWWWKW#KKEEEWDDW##;iffELGL..GftEELDEKGWGEEWGWEKWKWE
                                  KWEEWD#WWW#WKEKDKWKWfLLtGiGLGfijfKffGDKWDGDEWWWKW#W#;
                                  KWWKEWKKDKD#WW##WW#KjjGGffLjGLG,KfLffGWKDEEDKEKD#WW#
                                  ;WKKD#WWWWEE###KKW#fjLLt;fffLtGLfDLGGEKWDEEKWKEWW#WW
                                   WWWEDGWD#WW:ftiij,j:fLffGDifKifi;iLtEKEEEWEDWWWWWKW
                                   WKWWW#WE;DtfiGfGEfLtf;jLLLDEj,fD,f,LDEDKDKKDWWWWW#f
                                   WWWWEK,EiLDDKKWfGDEGtDjtGLLjLj K.#LGDKKKWKWW#WW####
                                    KEKf;;jELELKKEDWLGGftGLLjjGff ,:WELGEKK#W##W#####j
                                    KKijifKDKGEWKDGEEEDGLfffjLjLG; LfWjLKKKW######K##         .fWWWKLi
                                    E L;GEWWDDWKWLELWWKEGLttGD;DGGDKW#,E#W###W#######D     #W###WWWW#W#WWWK#G
                                    jjjfKK##EWWWLLEWWWWKKEGK;Gj,t:j#W:EL######WWW#W###KW####W###W#WWW##W####W#WW#EG
                                   jtGjDW#WKW##WDWKWWWWWWEDDjijt:jEW#GLE############W#######W#############W###W##WWWWKEEEEi
                                 fLtjKDK##WKW##KKKKWWWWWWKEfDL;,iLD#KWfD##############W##W##W##W########K#W##W###WWKW#W#WWWE#K:
                                iGiDGKW###iW##EKWWWWWWW#WWKKLj,:iDWE. fK#############################W#K##W#WW#WWW##WKWW#WWWWEKK
                               .tGELfKWW##WWWKEWKL#WWW#WWWKEGt,tfLDfKEL############################W#WW##KWK##WW#####WKWW#W#WWEKE
                              ;jfKKWDW#####WWj#WWK##WW#WWWKEL,ijffGKWKK##############################K#K#W##KWK#WW#WWW###WWWW#WEK
                             tWGDEK#W######fEG#KWWWW##WWWGfLi;LLtLEWWK############################KWKWK##W#KWW#KW#K#W##WWWWWKKWWEE
                            fKEKW##W#######DEKWGK##WWWWDKEL;;jLGD f#WK############################W##W#WKKWWWWKW#WKW##WWWKWK##WKKE;
                           jKWE#######L####WWLEW##E#KWWEfft,tLEDE,GW###############################WKWK#W##WE###KKK
                                     ###WKEKWDDKWLKKDEDf;itEEWWEEfK################################WWK##W#WK##DKWKWKKDKEWEKEWEWW###
                                    t##WKEEDWjEKEDifGGL;ijGEDKWKKDW#############################WW###WKW##WWW#WKKKWEWKKWKWKKKKWKWKW
                                    #WWWWKWDGKKEGEjjDft;iGEEDWWEDWW#############W#WWW##W#######WW###KEKWWWKKWW#W##KKDKKEKEKWEWWWKD.
                                    ###W#fK#WWWLDifDtj;;tDLKWWWLWW##############WW#WW#####WW##W##W#WWW#WWEKEKEWWKKKDWKGKWKKKKW#WWL
                                   ,#WWE###WEKDEGjGi;;;jLLLW#WW;WW############W#W#############W###WW#KWKKEEEEEDDDGEEW#WDEKEKWKKWW
                                  .KWWDK#EG#KKWGtLEj;itLGKEWWWEEW###########WWWE#WKW####WW###W##WK#KKKEEEEDE####WWEKKKDEEEEEWKEE
                                  :GLKK#EDE#KKKtjGtt;iLGWKWW#WGWEK#######WEWWWWWKKW#K##WWWWWK##WKEEEEEEEK########KWWKDEEEEEEEED
                                   LKKWKWWGKWWLfGGt;,fEGjWWWWE#W#KWWWW#WWKEEKKKKWWWW#KKK#WKKWEKDEEKKWK#WWWW####WWEDWEEEDEEEEEK
                                  GLKWE#WE#WKjfLjtt,fDKWG##WWjKKWWWKWWKKKKEEDEEDKKKWKKKEKEEKEEEEEDE#WWWWWKE#KW#W#EDEEDDEELGE
*/
        for (int i = 2; i <= n; i++)
        {
            dxcfg[i] = max({dxcfg[i - 1] + a[i],
                         abs(dxcfg[i - 1] + a[i]),
                         fgbhnj[i - 1] + a[i],
                         abs(fgbhnj[i - 1] + a[i])});

            if (dxcfg[i] == dxcfg[i - 1] + a[i])
                miuhy[i] = (miuhy[i] + miuhy[i - 1]) % mod;

            if (dxcfg[i] == abs(dxcfg[i - 1] + a[i]))
                miuhy[i] = (miuhy[i] + miuhy[i - 1]) % mod;

            if (dxcfg[i - 1] != fgbhnj[i - 1])
            {
                if (dxcfg[i] == fgbhnj[i - 1] + a[i])
                    miuhy[i] = (miuhy[i] + wazxed[i - 1]) % mod;

                if (dxcfg[i] == abs(fgbhnj[i - 1] + a[i]))
                    miuhy[i] = (miuhy[i] + wazxed[i - 1]) % mod;
            }

            /*
 
                                                                                                              Lj
                                                                                                          ;LKEtG
                                                                                                         tEGWLtE
                                                                                                         EWWWWWf
                                                                                                        GEGWWWWW
                                                                                                        GDL#WWWW
                                                                                                        DLKWWWWK.
                                                                                                        .DKWWW#W#,
                                                                            fEEDEKDKGWKDKWDDL    fDEDKKEEEKf
                                                                           GWEKEEEKDDEKDDWDKGE. iEEEKEKEEKK
                                                                          LGKKKEEDKKKWDEGWEKDDL EEKEEEEEKKK
                                                                         GLEWWKDKEEDGWKKWKEDGDEDKKEEEEKEKE
                                                                         LjEWKDDGKDKEKEEKDWEGWEEEKEEEDEDE
                                                                        LfLKKEDGDLKKEKGDDKKEGWEDDEEDDEEKL
                                                                 f#KKEKEKEKKWKWW##DE#jKKW
                                                             GW#KKEEWWKKLG#GLL#EKWKWKKDWW#W#jfD#tfG
                                                            GEEKDWWWDEWEDf#jfjLWWKEEEEWWKWWKjL#KLWE
                                                            GLWWDEWEKEWWWLWWGEfL#KEWKEEKWWEKjE#jKKK
                                                           DDKW#WDEEWDKWWDD#DfELG#KWWKKWWKLKL#KjDE
                                                           GKWDKEKKDWEW#WGWWWLtjLK#KDKWWKDfL##DDKE
                                                          ,WWKKWEWEDLDGEWWEKWKLfEW#WDGE#W####WKWWW
                                                          KjWKKDEEDEKKDKKKDWW##WE#WEEDWWWE#WDWDKKt
                                                         GDEDEEEKDKLDELDEWKKKWWWKWEKWKW#WKWWKEWWL
                                                         EjLKDGLKEEfWDDGEW#KDEWKEEKWWWWWWWKWKDW#W
                                        fEWW#KE          LDGLKKEDDDEGKKKWWWWEGEKWKKKKKWWKEWWKW#WW
                                     EKW#K#WWEEW.       DDKEEKKEEKEKK##K#K##KWEWWWEWWWWKWWWDK#KKG
                                    #KEKKWWWEEEKE       LGDKEWWWKKWWEWWWW##W#EWGKWEWEKKWKWED#WWK.
                                   KWWWEEW#KEG#EWW     ;LDDKEEWEWWWWW#KK###W#WEKKKKEDKWWWKEKWWK#
                                  jWDWKEKE#KWWWWWED    GGDKDKWKDEWWW#####WWWE#KKWDDKDKDKKWKW#WKD
                                  WWWK#KEKKWKDWEW##    WEDKEWWWKDDEW##WW##KKKWWKKEEKEEKKKK#WWWW
                                  WWKKKWKE#WDKD#K#WE   #WWEEKWEGjjLKE##WWWKKWWWWWEKEEKKWKWWWWW#
                                  W#WWWKWDKW##DKW#WW   KWW#DEEjLGfDDDEWKWWKEWKWWWWWWGGDDWWWWKWt
                                  EEG###W##KKWWWWW#K,  WKWWWEDLGLLGEKDEKDDWEKWWWW#WWEGW#W#WWKK
                                  EEEEEWEKD#WWKEWWWWW  WKWWEDDEEELjKEWEKGWGDKWWWKKWWWW##W#WWWL
                                  KWGK###WWWEKWEW###W  WWEKDGELEWKKDEGKKDKEWWWEW#W#WWK#WWWWWW
                                  K#WDWKKEEKK#E##WWWWK EKKEGDDGGDKDKKDEKDKWKDWKWKWW#WK#KWW#W
                                  GKK#WE#E#WKEKW#W##W# LWWDEDLEDGEGLEDKEKEWKKDKKEWWWWKWWWKKW
                                  GWDKDKWEKWDWWEKW##W# DWGEEEEKDGGKEKKKEEEEEDEWKWKKWK#KWWWW
                                  KKWWWEKWWK##W#####W#KDGEEKKKKEDGDDEKEKEEKEGWDEKW#WWKWKWKE
                                  fWEWDWWWKKKEEWW##W###DDDEEDfDDGDDGLfKKKEWEDEDEKKKEWKW#EW
                                  G#WWKEKEWDEW#KK##WW#WifLLjfDDtEDGEGGDKKKKD#DDEKGKKWWKKW
                                  LKKKEWW##WW#WKW##WWW#LfjjEELLGGDGDEGKWKEEGWGGWKKEKWWKW#
                                  DWKWKGWDWEEKEEKWWWW#ftf;tLELjLLLfKEDjGLDWDGGEGEDKEWWWW
                                  DKK##WWWK#EKKW##WWW#jjfLLLGtDGGDLLEDELEEKKGDED#EWD#WWf
                                  WWKKKD#KKKE#WK#WWW##;tt:i;iGiGjDjDGDDKEDELEDKKKWKKWWW
                                  KKKWWWKW#KKEEEWDDW##;iffELGL..GftEELDEKGWGEEWGWEKWKWE
                                  KWEEWD#WWW#WKEKDKWKWfLLtGiGLGfijfKffGDKWDGDEWWWKW#W#;
                                  KWWKEWKKDKD#WW##WW#KjjGGffLjGLG,KfLffGWKDEEDKEKD#WW#
                                  ;WKKD#WWWWEE###KKW#fjLLt;fffLtGLfDLGGEKWDEEKWKEWW#WW
                                   WWWEDGWD#WW:ftiij,j:fLffGDifKifi;iLtEKEEEWEDWWWWWKW
                                   WKWWW#WE;DtfiGfGEfLtf;jLLLDEj,fD,f,LDEDKDKKDWWWWW#f
                                   WWWWEK,EiLDDKKWfGDEGtDjtGLLjLj K.#LGDKKKWKWW#WW####
                                    KEKf;;jELELKKEDWLGGftGLLjjGff ,:WELGEKK#W##W#####j
                                    KKijifKDKGEWKDGEEEDGLfffjLjLG; LfWjLKKKW######K##         .fWWWKLi
                                    E L;GEWWDDWKWLELWWKEGLttGD;DGGDKW#,E#W###W#######D     #W###WWWW#W#WWWK#G
                                    jjjfKK##EWWWLLEWWWWKKEGK;Gj,t:j#W:EL######WWW#W###KW####W###W#WWW##W####W#WW#EG
                                   jtGjDW#WKW##WDWKWWWWWWEDDjijt:jEW#GLE############W#######W#############W###W##WWWWKEEEEi
                                 fLtjKDK##WKW##KKKKWWWWWWKEfDL;,iLD#KWfD##############W##W##W##W########K#W##W###WWKW#W#WWWE#K:
                                iGiDGKW###iW##EKWWWWWWW#WWKKLj,:iDWE. fK#############################W#K##W#WW#WWW##WKWW#WWWWEKK
                               .tGELfKWW##WWWKEWKL#WWW#WWWKEGt,tfLDfKEL############################W#WW##KWK##WW#####WKWW#W#WWEKE
                              ;jfKKWDW#####WWj#WWK##WW#WWWKEL,ijffGKWKK##############################K#K#W##KWK#WW#WWW###WWWW#WEK
                             tWGDEK#W######fEG#KWWWW##WWWGfLi;LLtLEWWK############################KWKWK##W#KWW#KW#K#W##WWWWWKKWWEE
                            fKEKW##W#######DEKWGK##WWWWDKEL;;jLGD f#WK############################W##W#WKKWWWWKW#WKW##WWWKWK##WKKE;
                           jKWE#######L####WWLEW##E#KWWEfft,tLEDE,GW###############################WKWK#W##WE###KKK
                                     ###WKEKWDDKWLKKDEDf;itEEWWEEfK################################WWK##W#WK##DKWKWKKDKEWEKEWEWW###
                                    t##WKEEDWjEKEDifGGL;ijGEDKWKKDW#############################WW###WKW##WWW#WKKKWEWKKWKWKKKKWKWKW
                                    #WWWWKWDGKKEGEjjDft;iGEEDWWEDWW#############W#WWW##W#######WW###KEKWWWKKWW#W##KKDKKEKEKWEWWWKD.
                                    ###W#fK#WWWLDifDtj;;tDLKWWWLWW##############WW#WW#####WW##W##W#WWW#WWEKEKEWWKKKDWKGKWKKKKW#WWL
                                   ,#WWE###WEKDEGjGi;;;jLLLW#WW;WW############W#W#############W###WW#KWKKEEEEEDDDGEEW#WDEKEKWKKWW
                                  .KWWDK#EG#KKWGtLEj;itLGKEWWWEEW###########WWWE#WKW####WW###W##WK#KKKEEEEDE####WWEKKKDEEEEEWKEE
                                  :GLKK#EDE#KKKtjGtt;iLGWKWW#WGWEK#######WEWWWWWKKW#K##WWWWWK##WKEEEEEEEK########KWWKDEEEEEEEED
                                   LKKWKWWGKWWLfGGt;,fEGjWWWWE#W#KWWWW#WWKEEKKKKWWWW#KKK#WKKWEKDEEKKWK#WWWW####WWEDWEEEDEEEEEK
                                  GLKWE#WE#WKjfLjtt,fDKWG##WWjKKWWWKWWKKKKEEDEEDKKKWKKKEKEEKEEEEEDE#WWWWWKE#KW#W#EDEEDDEELGE
*/

int dcfvg=678;
            fgbhnj[i] = min({dxcfg[i - 1] + a[i],
                         abs(dxcfg[i - 1] + a[i]),
                         fgbhnj[i - 1] + a[i],
                         abs(fgbhnj[i - 1] + a[i])});

            if (fgbhnj[i] == dxcfg[i - 1] + a[i])
                wazxed[i] = (wazxed[i] + miuhy[i - 1]) % mod;


/*
 
                                                                                                              Lj
                                                                                                          ;LKEtG
                                                                                                         tEGWLtE
                                                                                                         EWWWWWf
                                                                                                        GEGWWWWW
                                                                                                        GDL#WWWW
                                                                                                        DLKWWWWK.
                                                                 
                                                                 int zswdxfc=678                                       .DKWWW#W#,
                                                                            fEEDEKDKGWKDKWDDL    fDEDKKEEEKf
                                                                           GWEKEEEKDDEKDDWDKGE. iEEEKEKEEKK
                                                                          LGKKKEEDKKKWDEGWEKDDL EEKEEEEEKKK
                                                                         GLEWWKDKEEDGWKKWKEDGDEDKKEEEEKEKE
                                                                         LjEWKDDGKDKEKEEKDWEGWEEEKEEEDEDE
                                                                        LfLKKEDGDLKKEKGDDKKEGWEDDEEDDEEKL
                                                                 f#KKEKEKEKKWKWW##DE#jKKW
                                                             GW#KKEEWWKKLG#GLL#EKWKWKKDWW#W#jfD#tfG
                                                            GEEKDWWWDEWEDf#jfjLWWKEEEEWWKWWKjL#KLWE
                                                            GLWWDEWEKEWWWLWWGEfL#KEWKEEKWWEKjE#jKKK
                                                           DDKW#WDEEWDKWWDD#DfELG#KWWKKWWKLKL#KjDE
                                                           GKWDKEKKDWEW#WGWWWLtjLK#KDKWWKDfL##DDKE
                                                          ,WWKKWEWEDLDGEWWEKWKLfEW#WDGE#W####WKWWW
                                                          KjWKKDEEDEKKDKKKDWW##WE#WEEDWWWE#WDWDKKt
                                                         GDEDEEEKDKLDELDEWKKKWWWKWEKWKW#WKWWKEWWL
                                                         EjLKDGLKEEfWDDGEW#KDEWKEEKWWWWWWWKWKDW#W
                                        fEWW#KE          LDGLKKEDDDEGKKKWWWWEGEKWKKKKKWWKEWWKW#WW
                                     EKW#K#WWEEW.       DDKEEKKEEKEKK##K#K##KWEWWWEWWWWKWWWDK#KKG
                                    #KEKKWWWEEEKE       LGDKEWWWKKWWEWWWW##W#EWGKWEWEKKWKWED#WWK.
                                   KWWWEEW#KEG#EWW     ;LDDKEEWEWWWWW#KK###W#WEKKKKEDKWWWKEKWWK#
                                  jWDWKEKE#KWWWWWED    GGDKDKWKDEWWW#####WWWE#KKWDDKDKDKKWKW#WKD
                                  WWWK#KEKKWKDWEW##    WEDKEWWWKDDEW##WW##KKKWWKKEEKEEKKKK#WWWW
                                  WWKKKWKE#WDKD#K#WE   #WWEEKWEGjjLKE##WWWKKWWWWWEKEEKKWKWWWWW#
                                  W#WWWKWDKW##DKW#WW   KWW#DEEjLGfDDDEWKWWKEWKWWWWWWGGDDWWWWKWt
                                  EEG###W##KKWWWWW#K,  WKWWWEDLGLLGEKDEKDDWEKWWWW#WWEGW#W#WWKK
                                  EEEEEWEKD#WWKEWWWWW  WKWWEDDEEELjKEWEKGWGDKWWWKKWWWW##W#WWWL
                                  KWGK###WWWEKWEW###W  WWEKDGELEWKKDEGKKDKEWWWEW#W#WWK#WWWWWW
                                  K#WDWKKEEKK#E##WWWWK EKKEGDDGGDKDKKDEKDKWKDWKWKWW#WK#KWW#W
                                  GKK#WE#E#WKEKW#W##W# LWWDEDLEDGEGLEDKEKEWKKDKKEWWWWKWWWKKW
                                  GWDKDKWEKWDWWEKW##W# DWGEEEEKDGGKEKKKEEEEEDEWKWKKWK#KWWWW
                                  KKWWWEKWWK##W#####W#KDGEEKKKKEDGDDEKEKEEKEGWDEKW#WWKWKWKE
                                  fWEWDWWWKKKEEWW##W###DDDEEDfDDGDDGLfKKKEWEDEDEKKKEWKW#EW
                                  G#WWKEKEWDEW#KK##WW#WifLLjfDDtEDGEGGDKKKKD#DDEKGKKWWKKW
                                  LKKKEWW##WW#WKW##WWW#LfjjEELLGGDGDEGKWKEEGWGGWKKEKWWKW#
                                  DWKWKGWDWEEKEEKWWWW#ftf;tLELjLLLfKEDjGLDWDGGEGEDKEWWWW
                                  DKK##WWWK#EKKW##WWW#jjfLLLGtDGGDLLEDELEEKKGDED#EWD#WWf
                                  WWKKKD#KKKE#WK#WWW##;tt:i;iGiGjDjDGDDKEDELEDKKKWKKWWW
                                  KKKWWWKW#KKEEEWDDW##;iffELGL..GftEELDEKGWGEEWGWEKWKWE
                                  KWEEWD#WWW#WKEKDKWKWfLLtGiGLGfijfKffGDKWDGDEWWWKW#W#;
                                  KWWKEWKKDKD#WW##WW#KjjGGffLjGLG,KfLffGWKDEEDKEKD#WW#
                                  ;WKKD#WWWWEE###KKW#fjLLt;fffLtGLfDLGGEKWDEEKWKEWW#WW
                                   WWWEDGWD#WW:ftiij,j:fLffGDifKifi;iLtEKEEEWEDWWWWWKW
                                   WKWWW#WE;DtfiGfGEfLtf;jLLLDEj,fD,f,LDEDKDKKDWWWWW#f
                                   WWWWEK,EiLDDKKWfGDEGtDjtGLLjLj K.#LGDKKKWKWW#WW####
                                    KEKf;;jELELKKEDWLGGftGLLjjGff ,:WELGEKK#W##W#####j
                                    KKijifKDKGEWKDGEEEDGLfffjLjLG; LfWjLKKKW######K##         .fWWWKLi
                                    E L;GEWWDDWKWLELWWKEGLttGD;DGGDKW#,E#W###W#######D     #W###WWWW#W#WWWK#G
                                    jjjfKK##EWWWLLEWWWWKKEGK;Gj,t:j#W:EL######WWW#W###KW####W###W#WWW##W####W#WW#EG
                                   jtGjDW#WKW##WDWKWWWWWWEDDjijt:jEW#GLE############W#######W#############W###W##WWWWKEEEEi
                                 fLtjKDK##WKW##KKKKWWWWWWKEfDL;,iLD#KWfD##############W##W##W##W########K#W##W###WWKW#W#WWWE#K:
                                iGiDGKW###iW##EKWWWWWWW#WWKKLj,:iDWE. fK#############################W#K##W#WW#WWW##WKWW#WWWWEKK
                               .tGELfKWW##WWWKEWKL#WWW#WWWKEGt,tfLDfKEL############################W#WW##KWK##WW#####WKWW#W#WWEKE
                              ;jfKKWDW#####WWj#WWK##WW#WWWKEL,ijffGKWKK##############################K#K#W##KWK#WW#WWW###WWWW#WEK
                             tWGDEK#W######fEG#KWWWW##WWWGfLi;LLtLEWWK############################KWKWK##W#KWW#KW#K#W##WWWWWKKWWEE
                            fKEKW##W#######DEKWGK##WWWWDKEL;;jLGD f#WK############################W##W#WKKWWWWKW#WKW##WWWKWK##WKKE;
                           jKWE#######L####WWLEW##E#KWWEfft,tLEDE,GW###############################WKWK#W##WE###KKK
                                     ###WKEKWDDKWLKKDEDf;itEEWWEEfK################################WWK##W#WK##DKWKWKKDKEWEKEWEWW###
                                    t##WKEEDWjEKEDifGGL;ijGEDKWKKDW#############################WW###WKW##WWW#WKKKWEWKKWKWKKKKWKWKW
                                    #WWWWKWDGKKEGEjjDft;iGEEDWWEDWW#############W#WWW##W#######WW###KEKWWWKKWW#W##KKDKKEKEKWEWWWKD.
                                    ###W#fK#WWWLDifDtj;;tDLKWWWLWW##############WW#WW#####WW##W##W#WWW#WWEKEKEWWKKKDWKGKWKKKKW#WWL
                                   ,#WWE###WEKDEGjGi;;;jLLLW#WW;WW############W#W#############W###WW#KWKKEEEEEDDDGEEW#WDEKEKWKKWW
                                  .KWWDK#EG#KKWGtLEj;itLGKEWWWEEW###########WWWE#WKW####WW###W##WK#KKKEEEEDE####WWEKKKDEEEEEWKEE
                                  :GLKK#EDE#KKKtjGtt;iLGWKWW#WGWEK#######WEWWWWWKKW#K##WWWWWK##WKEEEEEEEK########KWWKDEEEEEEEED
                                   LKKWKWWGKWWLfGGt;,fEGjWWWWE#W#KWWWW#WWKEEKKKKWWWW#KKK#WKKWEKDEEKKWK#WWWW####WWEDWEEEDEEEEEK
                                  GLKWE#WE#WKjfLjtt,fDKWG##WWjKKWWWKWWKKKKEEDEEDKKKWKKKEKEEKEEEEEDE#WWWWWKE#KW#W#EDEEDDEELGE
*/
            if (fgbhnj[i] == abs(dxcfg[i - 1] + a[i]))
                wazxed[i] = (wazxed[i] + miuhy[i - 1]) % mod;

            if (dxcfg[i - 1] != fgbhnj[i - 1])
            {
                if (fgbhnj[i] == fgbhnj[i - 1] + a[i])
                int sxdcf=678;
                    wazxed[i] = (wazxed[i] + wazxed[i - 1]) % mod;

                if (fgbhnj[i] == abs(fgbhnj[i - 1] + a[i]))
                    wazxed[i] = (wazxed[i] + wazxed[i - 1]) % mod;
            }

            int swdecfvg=4567;
        }
        cout << miuhy[n] <<endl;
        
    }

    /*
 
                                                                                                              Lj
                                                                                                          ;LKEtG
                                                                                                         tEGWLtE
                                                                                                         EWWWWWf
                                                                                                        GEGWWWWW
                                                                                                        GDL#WWWW
                                                                                                        DLKWWWWK.
                                                                                                        .DKWWW#W#,
                                                                            fEEDEKDKGWKDKWDDL    fDEDKKEEEKf
                                                                           GWEKEEEKDDEKDDWDKGE. iEEEKEKEEKK
                                                                          LGKKKEEDKKKWDEGWEKDDL EEKEEEEEKKK
                                                                         GLEWWKDKEEDGWKKWKEDGDEDKKEEEEKEKE
                                                                         LjEWKDDGKDKEKEEKDWEGWEEEKEEEDEDE
                                                                        LfLKKEDGDLKKEKGDDKKEGWEDDEEDDEEKL
                                                                 f#KKEKEKEKKWKWW##DE#jKKW
                                                             GW#KKEEWWKKLG#GLL#EKWKWKKDWW#W#jfD#tfG
                                                            GEEKDWWWDEWEDf#jfjLWWKEEEEWWKWWKjL#KLWE
                                                            GLWWDEWEKEWWWLWWGEfL#KEWKEEKWWEKjE#jKKK
                                                           DDKW#WDEEWDKWWDD#DfELG#KWWKKWWKLKL#KjDE
                                                           GKWDKEKKDWEW#WGWWWLtjLK#KDKWWKDfL##DDKE
                                                          ,WWKKWEWEDLDGEWWEKWKLfEW#WDGE#W####WKWWW
                                                          KjWKKDEEDEKKDKKKDWW##WE#WEEDWWWE#WDWDKKt
                                                         GDEDEEEKDKLDELDEWKKKWWWKWEKWKW#WKWWKEWWL
                                                         EjLKDGLKEEfWDDGEW#KDEWKEEKWWWWWWWKWKDW#W
                                        fEWW#KE          LDGLKKEDDDEGKKKWWWWEGEKWKKKKKWWKEWWKW#WW
                                     EKW#K#WWEEW.       DDKEEKKEEKEKK##K#K##KWEWWWEWWWWKWWWDK#KKG
                                    #KEKKWWWEEEKE       LGDKEWWWKKWWEWWWW##W#EWGKWEWEKKWKWED#WWK.
                                   KWWWEEW#KEG#EWW     ;LDDKEEWEWWWWW#KK###W#WEKKKKEDKWWWKEKWWK#
                                  jWDWKEKE#KWWWWWED    GGDKDKWKDEWWW#####WWWE#KKWDDKDKDKKWKW#WKD
                                  WWWK#KEKKWKDWEW##    WEDKEWWWKDDEW##WW##KKKWWKKEEKEEKKKK#WWWW
                                  WWKKKWKE#WDKD#K#WE   #WWEEKWEGjjLKE##WWWKKWWWWWEKEEKKWKWWWWW#
                                  W#WWWKWDKW##DKW#WW   KWW#DEEjLGfDDDEWKWWKEWKWWWWWWGGDDWWWWKWt
                                  EEG###W##KKWWWWW#K,  WKWWWEDLGLLGEKDEKDDWEKWWWW#WWEGW#W#WWKK
                                  EEEEEWEKD#WWKEWWWWW  WKWWEDDEEELjKEWEKGWGDKWWWKKWWWW##W#WWWL
                                  KWGK###WWWEKWEW###W  WWEKDGELEWKKDEGKKDKEWWWEW#W#WWK#WWWWWW
                                  K#WDWKKEEKK#E##WWWWK EKKEGDDGGDKDKKDEKDKWKDWKWKWW#WK#KWW#W
                                  GKK#WE#E#WKEKW#W##W# LWWDEDLEDGEGLEDKEKEWKKDKKEWWWWKWWWKKW
                                  GWDKDKWEKWDWWEKW##W# DWGEEEEKDGGKEKKKEEEEEDEWKWKKWK#KWWWW
                                  KKWWWEKWWK##W#####W#KDGEEKKKKEDGDDEKEKEEKEGWDEKW#WWKWKWKE
                                  fWEWDWWWKKKEEWW##W###DDDEEDfDDGDDGLfKKKEWEDEDEKKKEWKW#EW
                                  G#WWKEKEWDEW#KK##WW#WifLLjfDDtEDGEGGDKKKKD#DDEKGKKWWKKW
                                  LKKKEWW##WW#WKW##WWW#LfjjEELLGGDGDEGKWKEEGWGGWKKEKWWKW#
                                  DWKWKGWDWEEKEEKWWWW#ftf;tLELjLLLfKEDjGLDWDGGEGEDKEWWWW
                                  DKK##WWWK#EKKW##WWW#jjfLLLGtDGGDLLEDELEEKKGDED#EWD#WWf
                                  WWKKKD#KKKE#WK#WWW##;tt:i;iGiGjDjDGDDKEDELEDKKKWKKWWW
                                  KKKWWWKW#KKEEEWDDW##;iffELGL..GftEELDEKGWGEEWGWEKWKWE
                                  KWEEWD#WWW#WKEKDKWKWfLLtGiGLGfijfKffGDKWDGDEWWWKW#W#;
                                  KWWKEWKKDKD#WW##WW#KjjGGffLjGLG,KfLffGWKDEEDKEKD#WW#
                                  ;WKKD#WWWWEE###KKW#fjLLt;fffLtGLfDLGGEKWDEEKWKEWW#WW
                                   WWWEDGWD#WW:ftiij,j:fLffGDifKifi;iLtEKEEEWEDWWWWWKW
                                   WKWWW#WE;DtfiGfGEfLtf;jLLLDEj,fD,f,LDEDKDKKDWWWWW#f
                                   WWWWEK,EiLDDKKWfGDEGtDjtGLLjLj K.#LGDKKKWKWW#WW####
                                    KEKf;;jELELKKEDWLGGftGLLjjGff ,:WELGEKK#W##W#####j
                                    KKijifKDKGEWKDGEEEDGLfffjLjLG; LfWjLKKKW######K##         .fWWWKLi
                                    E L;GEWWDDWKWLELWWKEGLttGD;DGGDKW#,E#W###W#######D     #W###WWWW#W#WWWK#G
                                    jjjfKK##EWWWLLEWWWWKKEGK;Gj,t:j#W:EL######WWW#W###KW####W###W#WWW##W####W#WW#EG
                                   jtGjDW#WKW##WDWKWWWWWWEDDjijt:jEW#GLE############W#######W#############W###W##WWWWKEEEEi
                                 fLtjKDK##WKW##KKKKWWWWWWKEfDL;,iLD#KWfD##############W##W##W##W########K#W##W###WWKW#W#WWWE#K:
                                iGiDGKW###iW##EKWWWWWWW#WWKKLj,:iDWE. fK#############################W#K##W#WW#WWW##WKWW#WWWWEKK
                               .tGELfKWW##WWWKEWKL#WWW#WWWKEGt,tfLDfKEL############################W#WW##KWK##WW#####WKWW#W#WWEKE
                              ;jfKKWDW#####WWj#WWK##WW#WWWKEL,ijffGKWKK##############################K#K#W##KWK#WW#WWW###WWWW#WEK
                             tWGDEK#W######fEG#KWWWW##WWWGfLi;LLtLEWWK############################KWKWK##W#KWW#KW#K#W##WWWWWKKWWEE
                            fKEKW##W#######DEKWGK##WWWWDKEL;;jLGD f#WK############################W##W#WKKWWWWKW#WKW##WWWKWK##WKKE;
                           jKWE#######L####WWLEW##E#KWWEfft,tLEDE,GW###############################WKWK#W##WE###KKK
                                     ###WKEKWDDKWLKKDEDf;itEEWWEEfK################################WWK##W#WK##DKWKWKKDKEWEKEWEWW###
                                    t##WKEEDWjEKEDifGGL;ijGEDKWKKDW#############################WW###WKW##WWW#WKKKWEWKKWKWKKKKWKWKW
                                    #WWWWKWDGKKEGEjjDft;iGEEDWWEDWW#############W#WWW##W#######WW###KEKWWWKKWW#W##KKDKKEKEKWEWWWKD.
                                    ###W#fK#WWWLDifDtj;;tDLKWWWLWW##############WW#WW#####WW##W##W#WWW#WWEKEKEWWKKKDWKGKWKKKKW#WWL
                                   ,#WWE###WEKDEGjGi;;;jLLLW#WW;WW############W#W#############W###WW#KWKKEEEEEDDDGEEW#WDEKEKWKKWW
                                  .KWWDK#EG#KKWGtLEj;itLGKEWWWEEW###########WWWE#WKW####WW###W##WK#KKKEEEEDE####WWEKKKDEEEEEWKEE
                                  :GLKK#EDE#KKKtjGtt;iLGWKWW#WGWEK#######WEWWWWWKKW#K##WWWWWK##WKEEEEEEEK########KWWKDEEEEEEEED
                                   LKKWKWWGKWWLfGGt;,fEGjWWWWE#W#KWWWW#WWKEEKKKKWWWW#KKK#WKKWEKDEEKKWK#WWWW####WWEDWEEEDEEEEEK
                                  GLKWE#WE#WKjfLjtt,fDKWG##WWjKKWWWKWWKKKKEEDEEDKKKWKKKEKEEKEEEEEDE#WWWWWKE#KW#W#EDEEDDEELGE
*/
}
