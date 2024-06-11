#include <bits/stdc++.h>
using namespace std;

int main() {
    long long daisy;
    cin >> daisy;
    while(daisy--) {
        long long rose;
        cin >> rose;

        long long tulip = 0;


       /*
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
        vector<long long> sunflower(rose);
        long long i = 0;
        while(i < rose) {
            cin >> sunflower[i];
            i++;
        }


       /*
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
        long long lily = 0;
        unordered_map<long long, long long> orchid;

        i = 0;
        while(i < rose) {
            lily += sunflower[i];
            orchid[sunflower[i]]++;
            if(lily % 2 == 0) {
                long long poppy = lily / 2;
                if(orchid.find(poppy) != orchid.end()) {
                    tulip++;
                }
            }
            i++;

                   /*
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

        cout << tulip << endl;
    }
    return 0;
}
