#include <iostream>
#include <algorithm>

using namespace std;

string getUniqueCoin(string coins){
    
   std::sort(coins.begin(), coins.end());
   coins.erase(std::unique(coins.begin(), coins.end()), coins.end());
   return coins;
}

int fewestCoin(string coins){
    
    string unique_coins = getUniqueCoin(coins);
    string new_string {} ;
    bool found_in_window {false}; 
    
    int window_size = unique_coins.length();
    cout<<"Unique "<< window_size <<endl;
    while(true){
        //cout<<"length:: "<< coins.length()- window_size+1 <<endl;
        for(unsigned int i {0}; i < coins.length()- window_size+1; i++){
            bool all_letter {true};
            string sub_str = coins.substr(i, window_size);
            //cout<<"sub_str "<< sub_str <<endl;
            for(const auto &coin : unique_coins){
                //cout<<"sub_str "<< sub_str <<endl;
                if(sub_str.find(coin) != string::npos)
                     continue;
                else
                    all_letter = false;
            }
            
            if(all_letter == true){
                new_string = sub_str;
                found_in_window = true;
                break;
            }
        }

        if (found_in_window == true)
            break;
        else
            window_size+=1;
    }
    
    return new_string.length(); 
   
}

int main()
{
	//int a = fewestCoin("asdfkjeghfalawefhaef");
    //int a = fewestCoin("abcd");
    int a = fewestCoin("rfkqyuqfjkxyqvnrtysfrzrmzlygfveulqfpdbhlqdqrrcrwdnxeuoqqeklaitgdphcspijthbsfyfvladzpbfudkklrwqaozmixrpifeffeclhbvfukbyeqfqojwtwosileeztxwjlkngbqqmbxqcqptkhhqrqdwfcayssyoqcjomwufbdfxudzhiftakczvhsybloetswcrfhpxprbsshsjxdfilebxwbctoayaxzfbjbkrxirimqpzwmshlpjhtazhbuxhwadlptoyeziwkmgsovqzgdixrpddzplcrwnqwqecyjyibfjykmjfqwltvzkqtpvolphckcyufdqmlglimklfzktgygdttnhcvpfdfbrpzlkvshwywshtdgmbqbkkxcvgumonmwvytbytnuqhmfjaqtgngcwkuzyamnerphfmwevhwlezohyeehbrcewjxvceziftiqtntfsrptugtiznorvonzjfeacgamayapwlmbzitzszhzkosvnknberbltlkggdgpljfisyltmmfvhybljvkypcflsaqevcijcyrgmqirzniaxakholawoydvchveigttxwpukzjfhxbrtspfttotafsngqvoijxuvqbztvaalsehzxbshnrvbykjqlrzzfmlvyoshiktodnsjjpqplciklzqrxloqxrudygjtyzleizmeainxslwhhjwslqendjvxjyghrveuvphknqtsdtwxcktmwwwsdthzmlmbhjkmouhpbqurqfxgqlojmwsomowsjvpvhznbsilhhdkbdxqgrgedpzchrgefeukmcowoeznwhpiiduxdnnlbnmyjyssbsococdzcuunkrfduvouaghhcyvmlkzaajpfpyljtyjjpyntsefxiswjutenuycpbcnmhfuqmmidmvknyxmywegmtunodvuzygvguxtrdsdfzfssmeluodjgdgzfmrazvndtaurdkugsbdpawxitivdubbqeonycaegxfjkklrfkraoheucsvpiteqrswgkaaaohxxzhqjtkqaqhkwberbpmglbjipnujywogwczlkyrdejaqufowbigrsnjniegvdvotugocedktcbbufnxorixibbdfrzuqsyrfqghoyqevcuanuujszitaoaowsxyglafbwzddoznrvjqeyqignpitruijvyllsibobjltusrypanvybsfrxtlfmpdidtyozoolzslgdgowijatklvjzscizrkupmsoxftumyxifyunxucubvkfctkqlroqgzjvjwzizppvsomflvioemycnphfjtbnwedtubynsbirepgcxfgsfomhvpmymkdohettyycsibbeaxniwjkfvabnrllkmaglythkglauzgkeulyrpaeurdvexqlwgakdtbihmfrjijanxkhrqdllecyhbsuxnlftmjcnyybwsjmajbwtuhkkiovytgaufpjlxiwbnzhybsxfmumbhkjqmdabmyulbrglwstjkoxbczkjhvhsgzvwiixxaobhfsopqnebmflcooetjizolqrmsxphqdgzdmqhoggvrvjqrpmxbhkkfgzzxjegsyovdrmwcjavpmshojzxaxnbiztkfomzdhujdmcyxdqteqjalgqgsomonvbreqqzzpwqlihdnvudvlznfhbaokxvcelykfhxbldylqqewdnjzrlbskqgfvnqlfvobeyolyyovviwhxfpbuiujlolnjldgvwxljboaypaotdzjxxrschmwrveliumzpnoieipogwilaswntywuegdgyethsrznlzrffmwdgxaigmxpyvyaqgaultodtlgzcyvfiykmkllfbzxqyhvizqmamjzlvvgoifltzywueypmabinmyappzaecvmxirqsmzcuiddymnlfuskiheknevxtehxtbthqkjvtfzddlgchxczohpyewfmufzazyxtqxcuwbrxpfymuvfvsyxrrcfuusicczaqhlswbzievijhrvdudvmaravupityzffecdksuxteeitxtgwdfuydrtbfypbnkcypqodxrrwikfuxwjhtujrliuaifppzvkmxyspwvpfyfpkvgthqqrmajxispjncxgviyuqavayvsvznmhskodmidajwlkfrimprrhenguipdghstyopbvuiqcoplvwduwmjpblqoafnxwgqtvwztjekxwnbcuggliiehimvoymyjasinwspsqiukflhyfacamqrbqrypstsxhplrrmbeddvphnegtuxxtalsyxezjwtlwmxvrjtxytykkckuvbhhlovgcxjxhhivxnutkxvhadiaysulvknmcanhsyxlivarjdkgfcfpotnvlcibpxkidmwexpugwoxjicdkvstltienwqngiutnuqbzicontzlybgvumnwehjxoswnprlhvsuzvgyeettenngipfvrflpprjjalchhhcmhxkupciulccqssaqgdttpldmzdzveslyjadswtsbhgkddeouxbldsxzmfvhtonlampljgzyvemxhnlcrldtfthulkxhflcoupgeikrlaksuyfqvnvtnqspyjbxrnphouoyhvlswvoibuvbhhjcdflvlxrgorfbjrofokggafxmdqhqatsfezchpicyuawpovmmyzwforhkoatppybfofhdzsbiyjldsklgznfnqydisnyxzfpoftcjuprwygsnxkikqlimalfgxnuohrnhgqpublurhztntgmimcozuufzphdyiucrmmmjqtceykwnnbqorghzyzzukjqsjbmpfmdtrgvwvyeikgjdnmlxkxwldnmizapzuhsbssaxjutkbkoljyodlipofvnkqkktwtjlvgmkgjwlectlagylwdvomtuypjbtvitkqnnvtdxwrclpspcngrdrlsvyxfeohtupjvmyctacnifdnoryahqghzhoqprgkymyphiuvdvgjppfdgpouzjwbqkhqoyefmugjvewhxusqfzwuweifnsbijkeepyxrysojacqthkcijbzpmqfbmnrhybaibmzonzqlnmdjsvofgjftyfehikljfrfgznuaytvaegmaaljhrxtodjqxogwaxrssjxgvnkawzaqswwofedxjflugpktauixpzdckodknlbvxrsrjeobuvvqythyvzxbcgrlbgchwcperpbaxqbujxcxcklrrklkbnwlrwyuygzmgbyyhgapxwdbycdunhtedgvsrhchoxqwrssuhesetvejonqwhkwezjvjggmsqqyrxtjkcalswqqhvyimheopjzdkmouegzbphmgoxqwlbdlcumdgixjbcqvztzdjqmadthtdmvaqcagsyqggcfiifcoktjpjxcjyiwchyicqibxdgkqtgqiwpdklhumzwljmgdmicmunnnpdbamofynykqvsijsnfkpfyptlmqpoyjmeqvhcrvgmqmqopusqktdthpvztfzxrnqbsqtipqonxtsnasonzvxbpipyhhbtopsuqomfjrdyislifqgbndakaqbbwnkxnwpzeoohlxuhrtbfnqorfguvomeepxoffghmatidzfpfnwbfujdonlvyvwcwcchvsasdylbrrxfcztzqopdihybrhodjnmoqkijywkoncvrjozdphbfaalexgtpdtkzvsebevsopjvciwljfkrcumyacqdapwczenvmabkapuoudipbozezeygljfftvycbvazmzbndlfvlsqiaixdtbhqvlzdmffjfbfsvthrfmkoxbhokcvethucgqyvopafyttrhesvlbgihetenaiqyufxffdwqvruhvuzxukffmudygjavemzdccamymhppwofwgjkykmqfbuujzxhlnckmmcuflzandlltowjpwsaljtfapfvrmezbsjxsswiwjscisoqlhahzaplclkwlrgcdqbcdwbwafgadgtcpgowefkaqjuffuguqepwnfhbnbuinlicpdxfesoxcfqclfnrhgsxkhxgxrcorfygjxpiqmwtqjwbhghmlocnfkglorkkvxznlzdhucvayrzfazefobxutitrfkrlrstkcbtikklmhmggklsbphcejuylhxnraoenhdpzngyodiqlchxyycxzrrbhfwohfvxkrzolrglgnvcpjesdzygyoifoygphqqevqjugiuahmvrxgaujnyclcjqxevhyfnlohavrjlbyyvhghxhywekedhvwytysljsqminajfipdsprglnpxfqwuvcibpynkxgxsupmbntqrlwyampdgunigxldhlhqdyjcfhuqjfymrbafmyocttyjmnhlfnrtzddlazixtlxyvmvfbiguhsfuqoerhymsnoprkbdlchswocbbwwdvastaiamnepwkyaqmpliruphedkxjqzgpexlwulswtvotlgotlncpvnrrzerzdygeraoozbttnyyifkindeouuagqgztvqdolfrzrlzddjzcshvdgkhxkdxflwxmejkkszylbhoaacicwqiizickgcdxstpzkskjwdqegrearjrncmmkdelekbesuhquepjrnrzbllldgdmyrpglrhllwnqozfudjpchowhwevbqvjjezsmhylnjpktbspxnktxkmcfxwiaqqbhqjwufmwresfsfaokeaaadziobioqmtsvjgzkgkhbzpaeuexyudhrioicyqsjmngrwqpoherwuvdgeruffmlgphwbxzovyewtfazfpmvfvyguqditjlxnoixsyghyfrdngjfblyveibcapetpmeaidrtpnwwiifhpfgsptkvhhwkzvtvlhhbipjxurgqbtldimsarncplkeweoirjenakyprzzphewoprwyvfpjyglzrmhfqpdubheeqtgrmbxlcmnbtaqakgimuapsbuxzokhwnykughmwrlkjsvtdlzwpbhcsbvjnomutffmjggrmyilgschgwrrztnmvndmuahvnlwpwtglvbtkegzjstpiwllpgnlpcnezqscxkelindfvurtxsezrwzvzechocnvfaimxrqnyiqlybugjsblhzfravznkbtgcpqwovwpxzgxgodlhmixisfzdknoxzasscewgzvqkxuqrsqxsfwdwneyqisozqjfgrvhfsfeuspujvqhydwveadosqafyxbmzgrotyffqblolplosqnfcwxiuwkldpuenodlvotbqiizudxqjvfnkyicjcywjkfvukvveqhjrxdcigwbjdftdyelydzyummmtzuvfmaicednymxoaiuhigfkfavgeemcgofnaefganqoniqebfibigljbceulicojzjfrceigxprunjncymbrljfqmwciqtyncafzjyagimmzuejrttefhdwqcizyiurxvfbwrjxffzbjexshvwrxwrmhrbdxjwipsdfhtknfaswfrvxqdkhbwwefbvqsghhhutdgethcwupzrtsbhbjnbqwpccoaonxwvkhowbzhaoscgykzbiltlwqqatyeczzceuuwgvjxzonhkkfjcbwsezdmifdegsyjtswselknxweimxlnzohgtqthlftjblnphtdwwvsscbhjmruuqscwjpynxbkoomwdecqkrtbxgzgcxhppcjnqtcfqttkkolzcfikwblxkimijeglxsvcrkcqjjwcwuhvzydmegubqavlqffhrzzrhiwxrgftittdxcaybczncsyjlzlxyyklcppoxcgnexmaajzuhabdhaccuualacylsmtkewbprsmoncggqvrvsqqoffmwkplsgbrpurgioajuppvqluhbdetzdzwwzaelmopafumtqugecywglucmugwqiizveswrjevfzdnxlbkakrpzcejvxzeoybbtfdsvewjsivwswzjhudtpqsfclzcmukotirrxxtzksmxnjumofzhhowyftzfzbotrokaxaryxlkmueolqkrdxmzhoqnzvudeowcjloesfmqgvxwfyhnpbepbvbgjtbvqpoeugoqynkbfivmfewjjscjreixyqssxzsydgllfzmobnurxkwcypctjkabigwqtldwhjouaswtovdtkrlonzgeyddkqwuhnimzffxviyvsktqrfafqujhdepvczzhiyjlkxmeplnrvxgshdykehkefpkvepcxhozpjxtreynyliguhuxudbnhmfojordxzmmklgohcmmbukzshyrmooliaobbnlapadutnbetocxylceyxywdsjegdfcrsblbxhjsgcuoxmqftytngzdcmsrfyjjumcbxoleldazwzwtdjoyuqeqjfxazjarqgfmsfxyfqbeoktcctnfqrsjchxpqiltaqzawhguusgenjcfxriyfikpgdvwhbyumthkiktbecjwalsxqjyajrkcvysicisabtbrdeumbvtviihjwxdczpdnrrgmemxydgxlrjzucxyidwcdvdpvjlagwmgcngnpxjkximsogvyhnchlimsxcjwtrijtizpezjlcqekojrrjzvtvhnqvieqmdiedzqswrsnfmnneltcutqfcqyrrwmnwtelvsqrruwfjwrhjcrtbcytnyqmqxceuohpiffaqnrmoybqjjgdyotpmxttqftypfexlvdtgxqafiqbqjlnpbflkgaynkddbzllecdctccvslpdcurkxfoimnwdfvnyqkzlheruxrmiiygnzfovnrwcoqsgoameiunvzemmxtklistlxuynrwsjaxzwmhktdayzzoxbbemejgosgcynfapykbc");
     cout<<"bab "<< a <<endl;
   
	return 0;
}
