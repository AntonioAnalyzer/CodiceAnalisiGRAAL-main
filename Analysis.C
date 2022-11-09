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

  TTree *albero = InitializeAll();

  auto start = std::chrono::steady_clock::now();
  cout<<"Sto analizzando... ";
  process(albero, "allfiles.root");
  cout<<"("<<since(start).count()<<"s)"<<endl;

  Clean();

}

//Utilizzando questa funzione si avvia l'analisi di tutti i file uno per uno
void Analysis::ProcessAllOneByOne(){

  Setter();

  vector<pair<string, string>> paths_names = Analysis::AllNames();

  for(int i = 0; i < paths_names.size(); i++){
    TTree *albero;
    TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject(paths_names[i].first.c_str());
    if (!f || !f->IsOpen()) {
       f = new TFile(paths_names[i].first.c_str());
    }
    f->GetObject("h70",albero);

    string delimiter1 = ".root";
    string delimiter2 = "./";
    string delimiter3 = "/run";

    string name_file = paths_names[i].second.substr(0, paths_names[i].second.find(delimiter1)) + "_analizzato.root";
    string name_dir = paths_names[i].first.substr(0, paths_names[i].first.find(delimiter3)).erase(0,2) + "_analizzato";

    CreateFolder(name_dir);

    string path = name_dir + "/" + name_file;
    cout<<"Sto analizzando "<< paths_names[i].second<<"... ";
    auto start = std::chrono::steady_clock::now();
    process(albero, path);
    cout<<"("<<since(start).count()<<"s)"<<endl;
  }

  Clean();

}
