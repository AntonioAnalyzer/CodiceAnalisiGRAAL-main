#define Analysis_cxx
#include "Analysis.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <vector>
#include <stdio.h>
#include "TLorentzVector.h"
#include "TFile.h"
#include "TTree.h"
#include "TSystem.h"
#include "TCutG.h"
#include "cut.h"
#include <chrono>
#include "util.h"
#include "process.h"

//Utilizzando questa funzione si avvia l'analisi di tutti i files
//o di tutti i file in una cartella
void Analysis::ProcessAll(){

  Setter();

  vector<TTree*> alberi = InitializeAll();
  cout<<alberi.size()<<endl; 

  auto start = std::chrono::steady_clock::now();
  cout<<"Sto analizzando... ";
  for(auto albero : alberi){
    string titolo(albero->GetTitle());
    string nome_file = "../" + titolo + ".root";
    process(albero, nome_file.c_str());
  }
  
  cout<<"("<<since(start).count()<<"s)"<<endl;

  Clean();

}
