///////////////////////////////////////////////////
// File contente i cut utilizzati nel l'algorimo
// di progessing dei dati
///////////////////////////////////////////////////


#include "TCutG.h"

TCutG *myProtonCentrCut(){
  TCutG *ProtonCentrCut = new TCutG("myProtonCentrCut",26);
  ProtonCentrCut->SetVarX("");
  ProtonCentrCut->SetVarY("");
  ProtonCentrCut->SetNameTitle("ProtonCentrCut");
  ProtonCentrCut->SetFillStyle(1000);
  ProtonCentrCut->SetPoint(0,0.0279198,10.105);
  ProtonCentrCut->SetPoint(1,0.0507851,7.84664);
  ProtonCentrCut->SetPoint(2,0.0820745,6.06092);
  ProtonCentrCut->SetPoint(3,0.114567,4.95798);
  ProtonCentrCut->SetPoint(4,0.145857,4.32773);
  ProtonCentrCut->SetPoint(5,0.190384,3.69748);
  ProtonCentrCut->SetPoint(6,0.228894,3.17227);
  ProtonCentrCut->SetPoint(7,0.266201,3.06723);
  ProtonCentrCut->SetPoint(8,0.310728,3.06723);
  ProtonCentrCut->SetPoint(9,0.375713,2.96218);
  ProtonCentrCut->SetPoint(10,0.414223,2.96218);
  ProtonCentrCut->SetPoint(11,0.458751,2.85714);
  ProtonCentrCut->SetPoint(12,0.52133,2.85714);
  ProtonCentrCut->SetPoint(13,0.536974,3.53992);
  ProtonCentrCut->SetPoint(14,0.434682,3.69748);
  ProtonCentrCut->SetPoint(15,0.375713,3.69748);
  ProtonCentrCut->SetPoint(16,0.286659,4.85294);
  ProtonCentrCut->SetPoint(17,0.22047,5.79832);
  ProtonCentrCut->SetPoint(18,0.14706,7.42647);
  ProtonCentrCut->SetPoint(19,0.100126,9.42227);
  ProtonCentrCut->SetPoint(20,0.0604126,11.6807);
  ProtonCentrCut->SetPoint(21,0.0435645,13.8866);
  ProtonCentrCut->SetPoint(22,0.0291232,14.7794);
  ProtonCentrCut->SetPoint(23,0.0134785,14.1492);
  ProtonCentrCut->SetPoint(24,0.0267163,10.3151);
  ProtonCentrCut->SetPoint(25,0.0279198,10.105);

  return ProtonCentrCut;
}

TCutG *myPionCentrCut(){
  TCutG *PionCentrCut = new TCutG("myPionCentrCut",18);
  PionCentrCut->SetVarX("");
  PionCentrCut->SetVarY("");
  PionCentrCut->SetNameTitle("PionCentrCut");
  PionCentrCut->SetFillStyle(1000);
  PionCentrCut->SetPoint(0,0.0171944,8.08926);
  PionCentrCut->SetPoint(1,0.0361938,6.28063);
  PionCentrCut->SetPoint(2,0.0665928,4.76371);
  PionCentrCut->SetPoint(3,0.0979417,3.85939);
  PionCentrCut->SetPoint(4,0.16159,3.1301);
  PionCentrCut->SetPoint(5,0.210038,2.83839);
  PionCentrCut->SetPoint(6,0.210038,2.83839);
  PionCentrCut->SetPoint(7,0.299335,2.83839);
  PionCentrCut->SetPoint(8,0.359183,2.7217);
  PionCentrCut->SetPoint(9,0.44563,2.78005);
  PionCentrCut->SetPoint(10,0.498828,2.22579);
  PionCentrCut->SetPoint(11,0.498828,2.22579);
  PionCentrCut->SetPoint(12,0.500728,1.55484);
  PionCentrCut->SetPoint(13,0.214788,1.32147);
  PionCentrCut->SetPoint(14,0.0086447,1.02975);
  PionCentrCut->SetPoint(15,0.00959467,8.06009);
  PionCentrCut->SetPoint(16,0.0171944,8.08926);
  PionCentrCut->SetPoint(17,0.0171944,8.08926);

  return PionCentrCut;
}

TCutG *myProtonForwCut(){
  TCutG *ProtonForwCut = new TCutG("myProtonForwCut",37);
  ProtonForwCut->SetVarX("");
  ProtonForwCut->SetVarY("");
  ProtonForwCut->SetNameTitle("ProtonForwCut");
  ProtonForwCut->SetFillStyle(1000);
  ProtonForwCut->SetPoint(0,12.0089,198.931);
  ProtonForwCut->SetPoint(1,12.0089,106.19);
  ProtonForwCut->SetPoint(2,13.2211,101.552);
  ProtonForwCut->SetPoint(3,14.5141,113.145);
  ProtonForwCut->SetPoint(4,14.5141,113.145);
  ProtonForwCut->SetPoint(5,21.3832,307.903);
  ProtonForwCut->SetPoint(6,24.2521,430.786);
  ProtonForwCut->SetPoint(7,26.6361,549.032);
  ProtonForwCut->SetPoint(8,28.4544,711.331);
  ProtonForwCut->SetPoint(9,29.0605,727.56);
  ProtonForwCut->SetPoint(10,29.0605,727.56);
  ProtonForwCut->SetPoint(11,33.9093,486.431);
  ProtonForwCut->SetPoint(12,37.061,377.46);
  ProtonForwCut->SetPoint(13,37.061,377.46);
  ProtonForwCut->SetPoint(14,46.8798,159.516);
  ProtonForwCut->SetPoint(15,50.5568,103.871);
  ProtonForwCut->SetPoint(16,54.5571,66.7742);
  ProtonForwCut->SetPoint(17,56.6582,59.8185);
  ProtonForwCut->SetPoint(18,56.6582,59.8185);
  ProtonForwCut->SetPoint(19,55.244,180.383);
  ProtonForwCut->SetPoint(20,55.244,180.383);
  ProtonForwCut->SetPoint(21,48.6577,222.117);
  ProtonForwCut->SetPoint(22,44.1322,365.867);
  ProtonForwCut->SetPoint(23,39.2026,532.802);
  ProtonForwCut->SetPoint(24,34.9194,729.879);
  ProtonForwCut->SetPoint(25,32.495,933.911);
  ProtonForwCut->SetPoint(26,30.2323,1054.48);
  ProtonForwCut->SetPoint(27,30.2323,1054.48);
  ProtonForwCut->SetPoint(28,28.7372,1107.8);
  ProtonForwCut->SetPoint(29,27.2422,1070.71);
  ProtonForwCut->SetPoint(30,27.2422,1070.71);
  ProtonForwCut->SetPoint(31,23.1207,695.101);
  ProtonForwCut->SetPoint(32,16.8173,412.238);
  ProtonForwCut->SetPoint(33,13.1807,282.399);
  ProtonForwCut->SetPoint(34,13.1807,282.399);
  ProtonForwCut->SetPoint(35,12.2109,201.25);
  ProtonForwCut->SetPoint(36,12.0089,198.931);

  return ProtonForwCut;
}

TCutG *myPionForwCut(){
  TCutG * PionForwCut = new TCutG("myPionForwCut",18);
  PionForwCut->SetVarX("");
  PionForwCut->SetVarY("");
  PionForwCut->SetNameTitle("PionForwCut");
  PionForwCut->SetFillStyle(1000);
  PionForwCut->SetPoint(0,8.89755,129.375);
  PionForwCut->SetPoint(1,9.1804,73.7298);
  PionForwCut->SetPoint(2,9.1804,73.7298);
  PionForwCut->SetPoint(3,9.70568,73.7298);
  PionForwCut->SetPoint(4,10.1906,73.7298);
  PionForwCut->SetPoint(5,10.5946,73.7298);
  PionForwCut->SetPoint(6,11.0391,80.6855);
  PionForwCut->SetPoint(7,11.5644,131.694);
  PionForwCut->SetPoint(8,11.5644,180.383);
  PionForwCut->SetPoint(9,11.5644,180.383);
  PionForwCut->SetPoint(10,10.8775,203.569);
  PionForwCut->SetPoint(11,10.8775,203.569);
  PionForwCut->SetPoint(12,9.74609,203.569);
  PionForwCut->SetPoint(13,9.2208,203.569);
  PionForwCut->SetPoint(14,8.97836,168.79);
  PionForwCut->SetPoint(15,8.97836,168.79);
  PionForwCut->SetPoint(16,8.97836,110.827);
  PionForwCut->SetPoint(17,8.89755,129.375);

  return PionForwCut;
}
