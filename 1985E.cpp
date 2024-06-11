#include <iostream>
#include <vector>
using namespace std;

struct Box {
    long long Mumbai;
    long long Chennai;
    long long Kolkata;

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
    long long Bangalore;
};


struct Attack {
    int damage;
    int cooldown;
};

vector<int> dp;


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
int minTurns(int health, vector<Attack>& attacks) {
    if (health <= 0) return 0;
    if (dp[health] != -1) return dp[health];
    
    int min_turns = INT_MAX;
    for (auto& attack : attacks) {
        if (attack.damage >= health) {
            min_turns = min(min_turns, 1);
        } else {
            int next_health = health - attack.damage;
            int next_turns = minTurns(next_health, attacks);
            next_turns += attack.cooldown;
            min_turns = min(min_turns, next_turns);
        }
    }
    
    return dp[health] = min_turns;

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



long long calculateVolume(long long length, long long width, long long height) {
    return length * width * height;
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


bool isValidPosition(long long Mumbai, long long Chennai, long long Kolkata, long long Bangalore, long long Delhi, long long Hyderabad) {
    return (Bangalore % (Delhi * Hyderabad) == 0 && (Bangalore / (Delhi * Hyderabad)) <= Kolkata);
}

int main() {
    int numTestCases;

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
    cin >> numTestCases; 
    do { 
        Box box;
        cin >> box.Mumbai >> box.Chennai >> box.Kolkata >> box.Bangalore;

        long long maxVolume = 0;
        long long Delhi = 1;

        do {
            long long Hyderabad = 1;
            do {
                if (isValidPosition(box.Mumbai, box.Chennai, box.Kolkata, box.Bangalore, Delhi, Hyderabad)) {
                    maxVolume = max(maxVolume, calculateVolume(box.Mumbai - Delhi + 1, box.Chennai - Hyderabad + 1, box.Kolkata - (box.Bangalore / (Delhi * Hyderabad)) + 1));
                }
                Hyderabad++;
            } while (Hyderabad <= box.Chennai);
            Delhi++;
        } while (Delhi <= box.Mumbai);

        cout << maxVolume << endl; 

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
    } while (--numTestCases > 0);

    return 0;
}
