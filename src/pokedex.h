/*
	This File Contains all the Pokemon Information 
	Internatinal Pokedex WIP (Generation 1 - Generarion 2)
  All Legendary Pokemon have a ✯ befor there name!
  WIP BETA build 2.0.0 R1
  Includes MissNo
	001      ...    251
	Bulbasaur		Celebi

*/

//Pokemon Number (note: Latest Pokemon Number +1)
#define NUM_POKEMON 252
  //Pokemon Type
  // \n\n<Name>\n\n<Type1>\n[Type2]
  //Include \n at the end even if there is no second type!
static char * poke_names[] = {
" 001      \n\nBulbasaur\n\nGrass\nPoison",
" 002      \n\nIvysaur\n\nGrass\nPoison",
" 003      \n\nVenusaur\n\nGrass\nPoison",
" 004      \n\nCharmander\n\nFire\n",
" 005      \n\nCharmeleon\n\nFire\n",
" 006      \n\nCharizard\n\nFire\nFlying",
" 007      \n\nSquirtle\n\nWater\n",
" 008      \n\nWartortle\n\nWater\n",
" 009      \n\nBlastoise\n\nWater\n",
" 010      \n\nCaterpie\n\nBug\n",
" 011      \n\nMetapod\n\nBug\n",
" 012      \n\nButterfree\n\nBug\nFlying",
" 013      \n\nWeedle\n\nBug\nPoison",
" 014      \n\nKakuna\n\nBug\nPoison",
" 015      \n\nBeedrill\n\nBug\nPoison",
" 016      \n\nPidgey\n\nNormal\nFlying",
" 017      \n\nPidgeotto\n\nNormal\nFlying",
" 018      \n\nPidgeot\n\nNormal\nFlying",
" 019      \n\nRattata\n\nNormal\n",
" 020      \n\nRaticate\n\nNormal\n",
" 021      \n\nSpearow\n\nNormal\nFlying",
" 022      \n\nFearow\n\nNormal\nFlying",
" 023      \n\nEkans\n\nPoison\n",
" 024      \n\nArbok\n\nPoison\n",
" 025      \n\nPikachu\n\nElectric\n",
" 026      \n\nRaichu\n\nElectric\n",
" 027      \n\nSandshrew\n\nGround\n",
" 028      \n\nSandslash\n\nGround\n",
" 029      \n\nNidoran w\n\nPoison\n",
" 030      \n\nNidorina\n\nPoison\n",
" 031      \n\nNidoqueen\n\nPoison\nGround",
" 032      \n\nNidoran m\n\nPoison\n",
" 033      \n\nNidorino\n\nPoison\n",
" 034      \n\nNidoking\n\nPoison\nGround",
" 035      \n\nClefairy\n\nFairy\n",
" 036      \n\nClefable\n\nFairy\n",
" 037      \n\nVulpix\n\nFire\n",
" 038      \n\nNinetales\n\nFire\n",
" 039      \n\nJigglypuff\n\nFairy\n",
" 040      \n\nWigglytuff\n\nFairy\n",
" 041      \n\nZubat\n\nPoison\nFlying",
" 042      \n\nGolbat\n\nPoison\nFlying",
" 043      \n\nOddish\n\nGrass\nPoison",
" 044      \n\nGloom\n\nGrass\nPoison",
" 045      \n\nVileplume\n\nGrass\nPoison",
" 046      \n\nParas\n\nBug\nGrass",
" 047      \n\nParasect\n\nBug\nGrass",
" 048      \n\nVenonat\n\nBug\nPoison",
" 049      \n\nVenomoth\n\nBug\nPoison",
" 050      \n\nDiglett\n\nGround\n",
" 051      \n\nDugtrio\n\nGround\n",
" 052      \n\nMeowth\n\nNormal\n",
" 053      \n\nPersian\n\nNormal\n",
" 054      \n\nPsyduck\n\nWater\n",
" 055      \n\nGolduck\n\nWater\n",
" 056      \n\nMankey\n\nFighting\n",
" 057      \n\nPrimeape\n\nFighting\n",
" 058      \n\nGrowlithe\n\nFire\n",
" 059      \n\nArcanine\n\nFire\n",
" 060      \n\nPoliwag\n\nWater\n",
" 061      \n\nPoliwhirl\n\nWater\n",
" 062      \n\nPoliwrath\n\nWater\nFighting",
" 063      \n\nAbra\n\nPsychic\n",
" 064      \n\nKadabra\n\nPsychic\n",
" 065      \n\nAlakazam\n\nPsychic\n",
" 066      \n\nMachop\n\nFighting\n",
" 067      \n\nMachoke\n\nFighting\n",
" 068      \n\nMachamp\n\nFighting\n",
" 069      \n\nBellsprout\n\nGrass\nPoison",
" 070      \n\nWeepinbell\n\nGrass\nPoison",
" 071      \n\nVictreebel\n\nGrass\nPoison",
" 072      \n\nTentacool\n\nWater\nPoison",
" 073      \n\nTentacruel\n\nWater\nPoison",
" 074      \n\nGeodude\n\nRock\nGround",
" 075      \n\nGraveler\n\nRock\nGround",
" 076      \n\nGolem\n\nRock\nGround",
" 077      \n\nPonyta\n\nFire\n",
" 078      \n\nRapidash\n\nFire\n",
" 079      \n\nSlowpoke\n\nWater\nPsychic",
" 080      \n\nSlowbro\n\nWater\nPsychic",
" 081      \n\nMagnemite\n\nElectric\nSteel",
" 082      \n\nMagneton\n\nElectric\nSteel",
" 083      \n\nFarfetch'd\n\nNormal\nFlying",
" 084      \n\nDoduo\n\nNormal\nFlying",
" 085      \n\nDodrio\n\nNormal\nFlying",
" 086      \n\nSeel\n\nWater\n",
" 087      \n\nDewgong\n\nWater\nIce",
" 088      \n\nGrimer\n\nPoison\n",
" 089      \n\nMuk\n\nPoison\n",
" 090      \n\nShellder\n\nWater\n",
" 091      \n\nCloyster\n\nWater\nIce",
" 092      \n\nGastly\n\nGhost\nPoison",
" 093      \n\nHaunter\n\nGhost\nPoison",
" 094      \n\nGengar\n\nGhost\nPoison",
" 095      \n\nOnix\n\nRock\nGround",
" 096      \n\nDrowzee\n\nPsychic\n",
" 097      \n\nHypno\n\nPsychic\n",
" 098      \n\nKrabby\n\nWater\n",
" 099      \n\nKingler\n\nWater\n",
" 100      \n\nVoltorb\n\nElectric\n",
" 101      \n\nElectrode\n\nElectric\n",
" 102      \n\nExeggcute\n\nGrass\nPsychic",
" 103      \n\nExeggutor\n\nGrass\nPsychic",
" 104      \n\nCubone\n\nGround\n",
" 105      \n\nMarowak\n\nGround\n",
" 106      \n\nHitmonlee\n\nFighting\n",
" 107      \n\nHitmonchan\n\nFighting\n",
" 108      \n\nLickitung\n\nNormal\n",
" 109      \n\nKoffing\n\nPoison\n",
" 110      \n\nWeezing\n\nPoison\n",
" 111      \n\nRhyhorn\n\nGround\nRock",
" 112      \n\nRhydon\n\nGround\nRock",
" 113      \n\nChansey\n\nNormal\n",
" 114      \n\nTangela\n\nGrass\n",
" 115      \n\nKangaskhan\n\nNormal\n",
" 116      \n\nHorsea\n\nWater\n",
" 117      \n\nSeadra\n\nWater\n",
" 118      \n\nGoldeen\n\nWater\n",
" 119      \n\nSeaking\n\nWater\n",
" 120      \n\nStaryu\n\nWater\n",
" 121      \n\nStarmie\n\nWater\nPsychic",
" 122      \n\nMr. Mime\n\nPsychic\nFairy",
" 123      \n\nScyther\n\nBug\nFlying",
" 124      \n\nJynx\n\nIce\nPsychic",
" 125      \n\nElectabuzz\n\nElectric\n",
" 126      \n\nMagmar\n\nFire\n",
" 127      \n\nPinsir\n\nBug\n",
" 128      \n\nTauros\n\nNormal\n",
" 129      \n\nMagikarp\n\nWater\n",
" 130      \n\nGyarados\n\nWater\nFlying",
" 131      \n\nLapras\n\nWater\nIce",
" 132      \n\nDitto\n\nNormal\n",
" 133      \n\nEevee\n\nNormal\n",
" 134      \n\nVaporeon\n\nWater\n",
" 135      \n\nJolteon\n\nElectric\n",
" 136      \n\nFlareon\n\nFire\n",
" 137      \n\nPorygon\n\nNormal\n",
" 138      \n\nOmanyte\n\nRock\nWater",
" 139      \n\nOmastar\n\nRock\nWater",
" 140      \n\nKabuto\n\nRock\nWater",
" 141      \n\nKabutops\n\nRock\nWater",
" 142      \n\nAerodactyl\n\nRock\nFlying",
" 143      \n\nSnorlax\n\nNormal\n",
" 144      \n\n+Articuno\n\nIce\nFlying",
" 145      \n\n+Zapdos\n\nElectric\nFlying",
" 146      \n\n+Moltres\n\nFire\nFlying",
" 147      \n\nDratini\n\nDragon\n",
" 148      \n\nDragonair\n\nDragon\n",
" 149      \n\nDragonite\n\nDragon\nFlying",
" 150      \n\n+Mewtwo\n\nPsychic\n",
" 151      \n\n+Mew\n\nPsychic\n",
" ?&0      \n\nMissingNo\n\n?????\n",
" 152      \n\nChikorita\n\nGrass\n",
" 153      \n\nBayleef\n\nGrass\n",
" 154      \n\nMeganium\n\nGrass\n",
" 155      \n\nCyndaquil\n\nFire\n",
" 156      \n\nQuilava\n\nFire\n",
" 157      \n\nTyphlosion\n\nFire\n",
" 158      \n\nTotodile\n\nWater\n",
" 159      \n\nCroconaw\n\nWater\n",
" 160      \n\nFeraligatr\n\nWater\n",
" 161      \n\nSentret\n\nNormal\n",
" 162      \n\nFurret\n\nNormal\n",
" 163      \n\nHoothoot\n\nNormal\nFlying",
" 164      \n\nNoctowl\n\nNormal\nFlying",
" 165      \n\nLedyba\n\nBug\nFlying",
" 166      \n\nLedian\n\nBug\nFlying",
" 167      \n\nSpinarak\n\nBug\nPoison",
" 168      \n\nAriados\n\nBug\nPoison",
" 169      \n\nCrobat\n\nPoison\nFlying",
" 170      \n\nChinchou\n\nWater\nEletric",
" 171      \n\nLanturn\n\nWater\nElectric",
" 172      \n\nPichu\n\nEletric\n",
" 173      \n\nCleffa\n\nFairy\n",
" 174      \n\nIgglybuff\n\nNormal\nFairy",
" 175      \n\nTogepi\n\nFairy\n",
" 176      \n\nTogetic\n\nFairy\nFlying",  
" 177      \n\nNatu\n\nPsychic\nFlying",
" 178      \n\nXatu\n\nPsychic\nFlying",
" 179      \n\nMareep\n\nElectric\n",
" 180      \n\nFlaaffy\n\nElectric\n", 
" 181      \n\nAmpharos\n\nElectric\n",
" 182      \n\nBellossom\n\nGrass\n",
" 183      \n\nMarill\n\nWater\nFairy",  
" 184      \n\nAzumarill\n\nWater\nFairy",
" 185      \n\nSudowoodo\n\nRock\n", 
" 186      \n\nPolitoed\n\nWater\n",
" 187      \n\nHoppip\n\nGrass\nFlying",
" 188      \n\nSkiploom\n\nGrass\nFlying",
" 189      \n\nJumpluff\n\nGrass\nFlying",
" 190      \n\nAipom\n\nNormal\n",
" 191      \n\nSunkern\n\nGrass\n",
" 192      \n\nSunflora\n\nGrass\n",
" 193      \n\nYanma\n\nBug\nFlying",
" 194      \n\nWooper\n\nWater\nGround",
" 195      \n\nQuagsire\n\nWater\nGround",
" 196      \n\nEspeon\n\nPsychic\n",
" 197      \n\nUmbreon\n\nDark\n", 
" 198      \n\nMurkrow\n\nDark\nFlying",
" 199      \n\nSlowking\n\nWater\nPsychic",
" 200      \n\nMisdreavus\n\nGhost\n", 
" 201      \n\nUnknown\n\nPsychic\n", 
" 202      \n\nWobbuffet\n\nPsychic\n",
" 203      \n\nGirafarig\n\nNormal\nPsychic",
" 204      \n\nPineco\n\nBug\n",
" 205      \n\nForretress\n\nBug\nSteel",
" 206      \n\nDunsparce\n\nNormal\n",
" 207      \n\nGligar\n\nGround\nFlying",
" 208      \n\nSteelix\n\nSteel\nGround",
" 209      \n\nSnubbull\n\nFairy\n",
" 210      \n\nGranbull\n\nFairy\n",
" 211      \n\nQwilfish\n\nWater\nPoison",
" 212      \n\nScizor\n\nBug\nSteel",
" 213      \n\nShuckle\n\nBug\nRock",
" 214      \n\nHeracross\n\nBug\nFighting",
" 215      \n\nSneasel\n\nDark\nIce",
" 216      \n\nTeddiursa\n\nNormal\n",
" 217      \n\nUrsaring\n\nNormal\n",
" 218      \n\nSlugma\n\nFire\n",
" 219      \n\nMagcargo\n\nFire\nRock",
" 220      \n\nSwinub\n\nIce\nGround",
" 221      \n\nPiloswine\n\nIce\nGround",
" 222      \n\nCorsola\n\nWater\nRock",
" 223      \n\nRemoraid\n\nWater\n",
" 224      \n\nOctillery\n\nWater\n",
" 225      \n\nDelibird\n\nIce\nFlying",
" 226      \n\nMantine\n\nWater\nFlying",
" 227      \n\nSkarmory\n\nSteel\nFlying",
" 228      \n\nHoundour\n\nDark\nFire",
" 229      \n\nHoundoom\n\nDark\nFire",
" 230      \n\nKingdra\n\nWater\nDragon",
" 231      \n\nPhanpy\n\nGround\n",
" 232      \n\nDonphan\n\nGround\n",
" 233      \n\nPorygon2\n\nNormal\n",
" 234      \n\nStantler\n\nNormal\n",
" 235      \n\nSmeargle\n\nNormal\n",
" 236      \n\nTyrogue\n\nFighting\n",
" 237      \n\nHitmontop\n\nFighting\n",
" 238      \n\nSmoochum\n\nIce\nPsychic",
" 239      \n\nElekid\n\nElectric\n",
" 240      \n\nMagby\n\nFire\n",
" 241      \n\nMiltank\n\nNorml\n",
" 242      \n\nBlissey\n\nNormal\n",
" 243      \n\n+Raikou\n\nElectric\n",
" 244      \n\n+Entei\n\nFire\n",
" 245      \n\n+Suicune\n\nWater\n",
" 246      \n\nLarvitar\n\nRock\nGround",
" 247      \n\nPupitar\n\nRock\nGround",
" 248      \n\nTyranitar\n\nRock\nDark",
" 249      \n\n+Lugia\n\nPsychic\nFlying",
" 250      \n\n+Ho-oh\n\nFire\nFlying",
" 251      \n\n+Celebi\n\nPsychic\nGrass",
NULL};
//Pokemon States hight (M) Weight (kg)
// \n\n<Name>\n\n<Hight>  m\n<Weight> kg
static char * poke_info[] = {
" 001      \n\nBulbasaur\n\n0.7  m\n6.9 kg",
" 002      \n\nIvysaur\n\n1.0  m\n13.0 kg",
" 003      \n\nVenusaur\n\n2.0  m\n100.0 kg",
" 004      \n\nCharmander\n\n0.6  m\n8.5 kg",
" 005      \n\nCharmeleon\n\n1.1  m\n19.0 kg",
" 006      \n\nCharizard\n\n1.7  m\n90.5 kg",
" 007      \n\nSquirtle\n\n0.5  m\n9.0 kg",
" 008      \n\nWartortle\n\n1.0  m\n22.5 kg",
" 009      \n\nBlastoise\n\n1.6  m\n85.5 kg",
" 010      \n\nCaterpie\n\n0.3  m\n2.9 kg",
" 011      \n\nMetapod\n\n0.7  m\n9.9 kg",
" 012      \n\nButterfree\n\n1.1  m\n32.0 kg",
" 013      \n\nWeedle\n\n0.3  m\n3.2 kg",
" 014      \n\nKakuna\n\n0.6  m\n10.0 kg",
" 015      \n\nBeedrill\n\n1.0  m\n29.5 kg",
" 016      \n\nPidgey\n\n0.3  m\n1.8 kg",
" 017      \n\nPidgeotto\n\n1.1  m\n30.0 kg",
" 018      \n\nPidgeot\n\n1.5  m\n39.5 kg",
" 019      \n\nRattata\n\n0.3  m\n3.5 kg",
" 020      \n\nRaticate\n\n0.7  m\n18.5 kg",
" 021      \n\nSpearow\n\n0.3  m\n2.0 kg",
" 022      \n\nFearow\n\n1.2  m\n38.0 kg",
" 023      \n\nEkans\n\n2.0  m\n6.9 kg",
" 024      \n\nArbok\n\n3.5  m\n65.0 kg",
" 025      \n\nPikachu\n\n0.4  m\n6.0 kg",
" 026      \n\nRaichu\n\n0.8  m\n30.0 kg",
" 027      \n\nSandshrew\n\n0.6  m\n12.0 kg",
" 028      \n\nSandslash\n\n1.0  m\n29.5 kg",
" 029      \n\nNidoran?\n\n0.4  m\n7.0 kg",
" 030      \n\nNidorina\n\n0.8  m\n20.0 kg",
" 031      \n\nNidoqueen\n\n1.3  m\n60.0 kg",
" 032      \n\nNidoran?\n\n0.5  m\n9.0 kg",
" 033      \n\nNidorino\n\n0.9  m\n19.5 kg",
" 034      \n\nNidoking\n\n1.4  m\n62.0 kg",
" 035      \n\nClefairy\n\n0.6  m\n7.5 kg",
" 036      \n\nClefable\n\n1.3  m\n40.0 kg",
" 037      \n\nVulpix\n\n0.6  m\n9.9 kg",
" 038      \n\nNinetales\n\n1.1  m\n19.9 kg",
" 039      \n\nJigglypuff\n\n0.5  m\n5.5 kg",
" 040      \n\nWigglytuff\n\n1.0  m\n12.0 kg",
" 041      \n\nZubat\n\n0.8  m\n7.5 kg",
" 042      \n\nGolbat\n\n1.6  m\n55.0 kg",
" 043      \n\nOddish\n\n0.5  m\n5.4 kg",
" 044      \n\nGloom\n\n0.8  m\n8.6 kg",
" 045      \n\nVileplume\n\n1.2  m\n18.6 kg",
" 046      \n\nParas\n\n0.3  m\n5.4 kg",
" 047      \n\nParasect\n\n1.0  m\n29.5 kg",
" 048      \n\nVenonat\n\n1.0  m\n30.0 kg",
" 049      \n\nVenomoth\n\n1.5  m\n12.5 kg",
" 050      \n\nDiglett\n\n0.2  m\n0.8 kg",
" 051      \n\nDugtrio\n\n0.7  m\n33.3 kg",
" 052      \n\nMeowth\n\n0.4  m\n4.2 kg",
" 053      \n\nPersian\n\n1.0  m\n32.0 kg",
" 054      \n\nPsyduck\n\n0.8  m\n19.6 kg",
" 055      \n\nGolduck\n\n1.7  m\n76.6 kg",
" 056      \n\nMankey\n\n0.5  m\n28.0 kg",
" 057      \n\nPrimeape\n\n1.0  m\n32.0 kg",
" 058      \n\nGrowlithe\n\n0.7  m\n19.0 kg",
" 059      \n\nArcanine\n\n1.9  m\n155.0 kg",
" 060      \n\nPoliwag\n\n0.6  m\n12.4 kg",
" 061      \n\nPoliwhirl\n\n1.0  m\n20.0 kg",
" 062      \n\nPoliwrath\n\n1.3  m\n54.0 kg",
" 063      \n\nAbra\n\n0.9  m\n19.5 kg",
" 064      \n\nKadabra\n\n1.3  m\n56.5 kg",
" 065      \n\nAlakazam\n\n1.5  m\n48.0 kg",
" 066      \n\nMachop\n\n0.8  m\n19.5 kg",
" 067      \n\nMachoke\n\n1.5  m\n70.5 kg",
" 068      \n\nMachamp\n\n1.6  m\n130.0 kg",
" 069      \n\nBellsprout\n\n0.7  m\n4.0 kg",
" 070      \n\nWeepinbell\n\n1.0  m\n6.4 kg",
" 071      \n\nVictreebel\n\n1.7  m\n15.5 kg",
" 072      \n\nTentacool\n\n0.9  m\n45.5 kg",
" 073      \n\nTentacruel\n\n1.6  m\n55.0 kg",
" 074      \n\nGeodude\n\n0.4  m\n20.0 kg",
" 075      \n\nGraveler\n\n1.0  m\n105.0 kg",
" 076      \n\nGolem\n\n1.4  m\n300.0 kg",
" 077      \n\nPonyta\n\n1.0  m\n30.0 kg",
" 078      \n\nRapidash\n\n1.7  m\n95.0 kg",
" 079      \n\nSlowpoke\n\n1.2  m\n36.0 kg",
" 080      \n\nSlowbro\n\n1.6  m\n78.5 kg",
" 081      \n\nMagnemite\n\n0.3  m\n6.0 kg",
" 082      \n\nMagneton\n\n1.0  m\n60.0 kg",
" 083      \n\nFarfetch'd\n\n0.8  m\n15.0 kg",
" 084      \n\nDoduo\n\n1.4  m\n39.2 kg",
" 085      \n\nDodrio\n\n1.8  m\n85.2 kg",
" 086      \n\nSeel\n\n1.1  m\n90.0 kg",
" 087      \n\nDewgong\n\n1.7  m\n120.0 kg",
" 088      \n\nGrimer\n\n0.9  m\n30.0 kg",
" 089      \n\nMuk\n\n1.2  m\n30.0 kg",
" 090      \n\nShellder\n\n0.3  m\n4.0 kg",
" 091      \n\nCloyster\n\n1.5  m\n132.5 kg",
" 092      \n\nGastly\n\n1.3  m\n0.1 kg",
" 093      \n\nHaunter\n\n1.6  m\n0.1 kg",
" 094      \n\nGengar\n\n1.5  m\n40.5 kg",
" 095      \n\nOnix\n\n8.8  m\n210.0 kg",
" 096      \n\nDrowzee\n\n1.0  m\n32.4 kg",
" 097      \n\nHypno\n\n1.6  m\n75.6 kg",
" 098      \n\nKrabby\n\n0.4  m\n6.5 kg",
" 099      \n\nKingler\n\n1.3  m\n60.0 kg",
" 100      \n\nVoltorb\n\n0.5  m\n10.4 kg",
" 101      \n\nElectrode\n\n1.2  m\n66.6 kg",
" 102      \n\nExeggcute\n\n0.4  m\n2.5 kg",
" 103      \n\nExeggutor\n\n2.0  m\n120.0 kg",
" 104      \n\nCubone\n\n0.4  m\n6.5 kg",
" 105      \n\nMarowak\n\n1.0  m\n45.0 kg",
" 106      \n\nHitmonlee\n\n1.5  m\n49.8 kg",
" 107      \n\nHitmonchan\n\n1.4  m\n50.2 kg",
" 108      \n\nLickitung\n\n1.2  m\n65.5 kg",
" 109      \n\nKoffing\n\n0.6  m\n1.0 kg",
" 110      \n\nWeezing\n\n1.2  m\n9.5 kg",
" 111      \n\nRhyhorn\n\n1.0  m\n115.0 kg",
" 112      \n\nRhydon\n\n1.9  m\n120.0 kg",
" 113      \n\nChansey\n\n1.1  m\n34.6 kg",
" 114      \n\nTangela\n\n1.0  m\n35.0 kg",
" 115      \n\nKangaskhan\n\n2.2  m\n80.0 kg",
" 116      \n\nHorsea\n\n0.4  m\n8.0 kg",
" 117      \n\nSeadra\n\n1.2  m\n25.0 kg",
" 118      \n\nGoldeen\n\n0.6  m\n15.0 kg",
" 119      \n\nSeaking\n\n1.3  m\n39.0 kg",
" 120      \n\nStaryu\n\n0.8  m\n34.5 kg",
" 121      \n\nStarmie\n\n1.1  m\n80.0 kg",
" 122      \n\nMr.Mime\n\n1.3  m\n54.5 kg",
" 123      \n\nScyther\n\n1.5  m\n56.0 kg",
" 124      \n\nJynx\n\n1.4  m\n40.6 kg",
" 125      \n\nElectabuzz\n\n1.1  m\n30.0 kg",
" 126      \n\nMagmar\n\n1.3  m\n44.5 kg",
" 127      \n\nPinsir\n\n1.5  m\n55.0 kg",
" 128      \n\nTauros\n\n1.4  m\n88.4 kg",
" 129      \n\nMagikarp\n\n0.9  m\n10.0 kg",
" 130      \n\nGyarados\n\n6.5  m\n235.0 kg",
" 131      \n\nLapras\n\n2.5  m\n220.0 kg",
" 132      \n\nDitto\n\n0.3  m\n4.0 kg",
" 133      \n\nEevee\n\n0.3  m\n6.5 kg",
" 134      \n\nVaporeon\n\n1.0  m\n29.0 kg",
" 135      \n\nJolteon\n\n0.8  m\n24.5 kg",
" 136      \n\nFlareon\n\n0.9  m\n25.0 kg",
" 137      \n\nPorygon\n\n0.8  m\n36.5 kg",
" 138      \n\nOmanyte\n\n0.4  m\n7.5 kg",
" 139      \n\nOmastar\n\n1.0  m\n35.0 kg",
" 140      \n\nKabuto\n\n0.5  m\n11.5 kg",
" 141      \n\nKabutops\n\n1.3  m\n40.5 kg",
" 142      \n\nAerodactyl\n\n1.8  m\n59.0 kg",
" 143      \n\nSnorlax\n\n2.1  m\n460.0 kg",
" 144      \n\n+Articuno\n\n1.7  m\n55.4 kg",
" 145      \n\n+Zapdos\n\n1.6  m\n52.6 kg",
" 146      \n\n+Moltres\n\n2.0  m\n60.0 kg",
" 147      \n\nDratini\n\n1.8  m\n3.3 kg",
" 148      \n\nDragonair\n\n4.0  m\n16.5 kg",
" 149      \n\nDragonite\n\n2.2  m\n210.0 kg",
" 150      \n\n+Mewtwo\n\n2.0  m\n122.0 kg",
" 151      \n\n+Mew\n\n0.4  m\n4.0 kg",
" ?&0      \n\nMissingNo\n\n???  m\n??? kg",
" 152      \n\nChikorita\n\n0.98  m\n6.4 kg",
" 153      \n\nBayleef\n\n1.19  m\n15.8 kg",
" 154      \n\nMeganium\n\n1.80  m\n100.5 kg",
" 155      \n\nCyndaquil\n\n0.51  m\n7.9 kg",
" 156      \n\nQuilava\n\n0.89  m\n19.0 kg",
" 157      \n\nTyphlosion\n\n1.70  m\n79.5 kg",
" 158      \n\nTotodile\n\n0.61  m\n9.5 kg",
" 159      \n\nCroconaw\n\n1.09  m\n25.0 kg",
" 160      \n\nFeraligatr\n\n2.31  m\n88.8 kg",
" 161      \n\nSentret\n\n0.79  m\n6.0 kg",
" 162      \n\nFurret\n\n1.80  m\n3.25 kg",
" 163      \n\nHoothoot\n\n0.71  m\n21.2 kg",
" 164      \n\nNoctowl\n\n1.60  m\n40.8 kg",
" 165      \n\nLedyba\n\n0.99  m\n10.8 kg",
" 166      \n\nLedian\n\n1.40  m\n35.6 kg",
" 167      \n\nSpinarak\n\n0.51  m\n8.5 kg",
" 168      \n\nAriados\n\n1.09  m\n33.5 kg",
" 169      \n\nCrobat\n\n1.80  m\n75.0 kg",
" 170      \n\nChinchou\n\n0.51  m\n12.0 kg",
" 171      \n\nLanturn\n\n1.19  m\n22.5 kg",
" 172      \n\nPichu\n\n0.30  m\n2.0 kg",
" 173      \n\nCleffa\n\n0.30  m\n3.0 kg",
" 174      \n\nIgglybuff\n\n0.30  m\n1.0 kg",
" 175      \n\nTogetic\n\n0.61  m\n3.2 kg",  
" 176      \n\nTogepi\n\n0.30  m\n1.5 kg",
" 177      \n\nTogetic\n\n0.61  m\n3.2 kg", 
" 178      \n\nXatu\n\n1.50  m\n15.0 kg",
" 179      \n\nMareep\n\n0.61  m\n7.8 kg",
" 180      \n\nFlaaffy\n\n0.79  m\n13.3 kg",
" 181      \n\nAmpharos\n\n1.40  m\n61.5 kg",
" 182      \n\nBellossom\n\n0.41  m\n5.8 kg",
" 183      \n\nMarill\n\n0.41  m\n8.5 kg",  
" 184      \n\nAzumarill\n\n0.79  m\n28.5 kg",
" 185      \n\nSudowoodo\n\n1.19  m\n38.0 kg",
" 186      \n\nPolitoed\n\n1.09  m\n33.9 kg",
" 187      \n\nHoppip\n\n0.41  m\n0.5 kg",
" 188      \n\nSkiploom\n\n0.61  m\n1.0 kg",
" 189      \n\nJumpluff\n\n0.79  m\n3.0 kg",
" 190      \n\nAipom\n\n0.79  m\n11.5 kg",
" 191      \n\nSunkern\n\n0.30  m\n1.8 kg",
" 192      \n\nSunflora\n\n0.79  m\n8.5 kg",
" 193      \n\nYanma\n\n1.19  m\n38.0 kg",
" 194      \n\nWooper\n\n0.41  m\n8.5 kg",
" 195      \n\nQuagsire\n\n1.40  m\n75.0 kg",
" 196      \n\nEspeon\n\n0.89  m\n26.5 kg",
" 197      \n\nUmbreon\n\n0.99  m\n27.0 kg",
" 198      \n\nMurkrow\n\n0.51  m\n2.1 kg",
" 199      \n\nSlowking\n\n2.01  m\n79.5 kg",
" 200      \n\nMisdreavus\n\n0.71  m\n1.0 kg",
" 201      \n\nUnknown\n\n0.51  m\n5.0 kg",
" 202      \n\nWobbuffet\n\n1.30  m\n28.5 kg",
" 203      \n\nGirafarig\n\n1.50  m\n41.5 kg",
" 204      \n\nPineco\n\n0.61  m\n7.2 kg",
" 205      \n\nForretress\n\n1.19  m\n125.8 kg", 
" 206      \n\nDunsparce\n\n1.50  m\n14.0 kg",
" 207      \n\nGligar\n\n1.09  m\n64.8 kg",
" 208      \n\nSteelix\n\n9.19  m\n400.0 kg",
" 209      \n\nSnubbull\n\n0.61  m\n7.8 kg",
" 210      \n\nGranbull\n\n1.40  m\n48.7 kg",
" 211      \n\nQwilfish\n\n0.51  m\n3.9 kg",
" 212      \n\nScizor\n\n1.80  m\n118.0 kg",
" 213      \n\nShuckle\n\n0.61  m\n20.5 kg",
" 214      \n\nHeracross\n\n1.50  m\n54.0 kg",
" 215      \n\nSneasel\n\n0.89  m\n28.0 kg",
" 216      \n\nTeddiursa\n\n0.61  m\n8.8 kg",
" 217      \n\nUrsaring\n\n1.80  m\n125.8 kg",
" 218      \n\nSlugma\n\n0.71  m\n35.0 kg",
" 219      \n\nMagcargo\n\n0.79  m\n55.0 kg",
" 220      \n\nSwinub\n\n0.41  m\n6.5 kg",
" 221      \n\nPiloswine\n\n1.09  m\n55.8 kg",
" 222      \n\nCorsola\n\n0.61  m\n5.0 kg",
" 223      \n\nRemoraid\n\n0.61  m\n12.0 kg",
" 224      \n\nOctillery\n\n0.89  m\n28.5 kg",
" 225      \n\nDelibird\n\n0.89  m\n16.0 kg",
" 226      \n\nMantine\n\n2.11  m\n220.0 kg",
" 227      \n\nSkarmory\n\n1.70  m\n50.5 kg",
" 228      \n\nHoundour\n\n0.61  m\n10.8 kg",
" 229      \n\nHoundoom\n\n1.40  m\n35.0 kg",
" 230      \n\nKingdra\n\n1.80 m\n152.0 kg",
" 231      \n\nPhanpy\n\n0.51  m\n33.5 kg",
" 232      \n\nDonphan\n\n1.09  m\n120.0 kg",
" 233      \n\nPorygon2\n\n0.61  m\n32.5 kg",
" 234      \n\nStantler\n\n1.40  m\n71.2 kg",
" 235      \n\nSmeargle\n\n1.19  m\n58.0 kg",
" 236      \n\nTyrogue\n\n0.71  m\n21.0 kg",
" 237      \n\nHitmontop\n\n1.40  m\n48.0 kg",
" 238      \n\nSmoochum\n\n0.41  m\n6.0 kg",
" 239      \n\nElekid\n\n0.61  m\n23.5 kg",
" 240      \n\nMagby\n\n0.71  m\n21.4 kg",
" 241      \n\nMiltank\n\n1.19  m\n75.5 kg",
" 242      \n\nBlissey\n\n1.50  m\n46.8 kg",
" 243      \n\n+Raikou\n\n1.91  m\n178.0 kg",
" 244      \n\n+Entei\n\n2.11  m\n198.0 kg",
" 245      \n\n+Suicune\n\n2.01  m\n187.0 kg",
" 246      \n\nLarvitar\n\n0.61  m\n72.0 kg",
" 247      \n\nPupitar\n\n1.19  m\n152.0 kg",
" 248      \n\nTyranitar\n\n2.01  m\n202.0 kg",
" 249      \n\n+Lugia\n\n5.21  m\n216.0 kg",
" 250      \n\n+Ho-oh\n\n3.81  m\n199.0 kg",
" 251      \n\n+Celebi\n\n0.61  m\n5.0 kg",
NULL};


//Pokemon Images
static uint8_t poke_images[] = { \
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen1,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2, 
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
RESOURCE_ID_IMAGE_Gen2,
};
