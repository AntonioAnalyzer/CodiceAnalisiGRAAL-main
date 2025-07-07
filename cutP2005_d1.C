TCutG *myProtonForwCut_2005_d1(){
//========= Macro generated from object: CUTG/Graph
//========= by ROOT version6.28/06

   TCutG *cutg = new TCutG("CutForwPro_2005_d1",19);
   cutg->SetVarX("TOF(ns)");
   cutg->SetVarY("DE/dx(MeV)");
   cutg->SetTitle("Graph");
   cutg->SetFillStyle(1000);
   cutg->SetPoint(0,32.9292,4.17377);
   cutg->SetPoint(1,24.6969,5.70076);
   cutg->SetPoint(2,19.7035,4.17377);
   cutg->SetPoint(3,16.1947,3.66477);
   cutg->SetPoint(4,13.9679,14.8627);
   cutg->SetPoint(5,12.5509,34.2045);
   cutg->SetPoint(6,12.3485,54.0554);
   cutg->SetPoint(7,12.6184,77.9782);
   cutg->SetPoint(8,13.4956,97.8291);
   cutg->SetPoint(9,16.5321,126.333);
   cutg->SetPoint(10,19.3662,87.6491);
   cutg->SetPoint(11,20.7157,60.6723);
   cutg->SetPoint(12,23.1449,48.9654);
   cutg->SetPoint(13,24.2246,28.6056);
   cutg->SetPoint(14,28.0708,19.9527);
   cutg->SetPoint(15,29.7577,10.7907);
   cutg->SetPoint(16,32.5243,4.68276);
   cutg->SetPoint(17,32.5243,4.68276);
   cutg->SetPoint(18,32.9292,4.17377);

   return cutg;
}
