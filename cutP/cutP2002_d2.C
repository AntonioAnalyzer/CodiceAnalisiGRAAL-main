TCutG *myProtonForwCut_2002_d2(){ 
   // cout<<"Il taglio 2002_d2 è stato caricato"<<endl;

   TCutG *cutg = new TCutG("CUTG",40);
   cutg->SetVarX("Tof_trf[0]");
   cutg->SetVarY("De_trf[0]");
   cutg->SetTitle("Graph");
   cutg->SetFillStyle(1000);
   cutg->SetPoint(0,13.2916,13.2784);
   cutg->SetPoint(1,15.0693,16.8512);
   cutg->SetPoint(2,17.4539,20.9885);
   cutg->SetPoint(3,20.2053,25.8154);
   cutg->SetPoint(4,22.0395,30.1826);
   cutg->SetPoint(5,23.6904,34.7797);
   cutg->SetPoint(6,25.433,40.9857);
   cutg->SetPoint(7,26.5335,48.341);
   cutg->SetPoint(8,27.1755,52.2485);
   cutg->SetPoint(9,28.1629,58.4942);
   cutg->SetPoint(10,28.9623,58.7575);
   cutg->SetPoint(11,29.9728,54.547);
   cutg->SetPoint(12,30.6606,48.341);
   cutg->SetPoint(13,35.7966,32.2513);
   cutg->SetPoint(14,39.1442,23.9766);
   cutg->SetPoint(15,43.8674,17.5408);
   cutg->SetPoint(16,47.7653,11.7944);
   cutg->SetPoint(17,51.1128,9.26607);
   cutg->SetPoint(18,53.5891,6.96754);
   cutg->SetPoint(19,51.9841,6.27799);
   cutg->SetPoint(20,50.0581,7.6571);
   cutg->SetPoint(21,46.573,11.1049);
   cutg->SetPoint(22,42.6293,15.7019);
   cutg->SetPoint(23,38.7773,22.1378);
   cutg->SetPoint(24,35.3839,28.3438);
   cutg->SetPoint(25,32.5408,37.9976);
   cutg->SetPoint(26,30.5689,43.9738);
   cutg->SetPoint(27,28.8424,49.41);
   cutg->SetPoint(28,27.963,43.4855);
   cutg->SetPoint(29,27.0838,38.917);
   cutg->SetPoint(30,25.7998,32.711);
   cutg->SetPoint(31,24.2865,26.7348);
   cutg->SetPoint(32,21.9937,21.9079);
   cutg->SetPoint(33,19.9989,18.4562);
   cutg->SetPoint(34,16.6618,13.0496);
   cutg->SetPoint(35,15.2997,11.1129);
   cutg->SetPoint(36,11.6,6.94456);
   cutg->SetPoint(37,11.2025,9.516);
   cutg->SetPoint(38,12.1604,11.2213);
   cutg->SetPoint(39,13.2916,13.2784);
   return cutg;
}

