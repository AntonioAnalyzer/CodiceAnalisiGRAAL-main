///////////////////////////////////////////////////
// File utility contente diverse funzioni che
// vengono utilizzate durante il processing
// dei dati
///////////////////////////////////////////////////



//Funzione che ritorna un vettore di stringhe contente i nomi di tutti i file
//e carte presenti nel path passato
std::vector<std::string> Analysis::GetNames(string dir_name, bool debug = 0){
  DIR *dir;
  struct dirent *ent;
  vector<string> files;
  if ((dir = opendir (dir_name.c_str())) != NULL) {
    /* print all the files and directories within directory */
    while ((ent = readdir (dir)) != NULL) {
      if(debug) cout<<ent->d_name<<endl;
      files.push_back(ent->d_name);
    }
    closedir (dir);
  }
  return files;
}

//Funzione che ritorna un TTree con più file run....root
TTree *Analysis::InitializeAll(){
  vector<string> directories = Analysis::GetNames("..");

  cout<<"Scegli la cartella da analizzare (<0 tutte): "<<endl;
  for(int i = 0; i < directories.size(); i++){
    if(directories[i].find("data") != std::string::npos){
      cout<<"["<<i<<"] "<<directories[i]<<endl;
    }
  }

  TChain * chain = new TChain("h70","");
  bool end = true;
  TTree *tree;

  while(end){
    int chosen_dir;
    cout<<"Inserisci [0 stop]: ";
    cin>>chosen_dir;

    if(chosen_dir < 0){
      for(auto dir_names : directories){
        if(dir_names.find("data") != std::string::npos){
          // cout<<dir_names<<endl;
          string inside_dir = "../" + dir_names + "/";
          vector<string> files = GetNames(inside_dir);
          for(auto file_names : files){
            if(file_names.find("run") != std::string::npos && file_names.find(".root") != std::string::npos && file_names.find(".gz") == std::string::npos && file_names.find("_analizzato") == std::string::npos){
              // cout<<file_names<<endl;
              string file_path = inside_dir + file_names;
              chain->Add(file_path.c_str());
            }
            else if(file_names.find(".gz") != std::string::npos){
              cout<<"Non sto analizzando il file: "<<file_names<<" controllare di averlo estratto!!!"<<endl;
            }
          }
        }
      }

      tree = chain;
      end = false;
      break;
    }
    else if(chosen_dir > 0){

      string inside_dir = "../" + directories[chosen_dir] + "/";
      vector<string> files = GetNames(inside_dir);

      for(auto file_names : files){
        if(file_names.find("run") != std::string::npos && file_names.find(".root") != std::string::npos && file_names.find(".gz") == std::string::npos && file_names.find("_analizzato") == std::string::npos){
          string file_path = inside_dir + file_names;
          cout<<"Sto analizzando: "<<file_names<<endl;
          chain->Add(file_path.c_str());
        }
        else if(file_names.find(".gz") != std::string::npos){
          cout<<"Non sto analizzando: "<<file_names<<" controllare di averlo estratto!!!"<<endl;
        }
      }

    }
    else if(chosen_dir == 0){
      tree = chain;
      end = false;
    }
  }
  return tree;
}

//Funzione che ritorna un vettore di pair contenente il percorso del file run.root e il suo nome senza percorso
std::vector<std::pair<std::string, std::string>> Analysis::AllNames(){
  vector<string> directories = Analysis::GetNames("..");
  vector<pair<string,string>> paths_names;
  pair<string, string> coppia;

  for(auto dir_names : directories){
    if(dir_names.find("data") != std::string::npos){
      // cout<<dir_names<<endl;
      string inside_dir = "../" + dir_names + "/";
      vector<string> files = GetNames(inside_dir);
      for(auto file_names : files){
        if(file_names.find("run") != std::string::npos && file_names.find(".root") != std::string::npos && file_names.find(".gz") == std::string::npos && file_names.find("_analizzato") == std::string::npos){
          // cout<<file_names<<endl;
          string file_path = inside_dir + file_names;
          coppia.first = file_path;
          coppia.second = file_names;
          paths_names.push_back(coppia);
        }
        else if(file_names.find(".gz") != std::string::npos){
          cout<<"Non sto analizzando il file: "<<file_names<<" controllare di averlo estratto!!!"<<endl;
        }
      }
    }
  }

  return paths_names;
}

//Funzione che serve per creare cartelle, passato il path
void Analysis::CreateFolder(string f_path, bool debug = 0){
  struct stat st;
	string path = f_path;
	if(stat(path.c_str(),&st) == 0){
  	if(debug) cout<<"The directory "<<path<<" already exists skipping creating it"<<endl;
	}
	else{
		cout<<path<<" does not exits, creating it"<<endl;
		mkdir(path.c_str(), ACCESSPERMS);
	}
}

//Funzione che setta l'enviroment
void Analysis::Setter(){

  cout<<"Setto l'enviroment per analizzare i dati..."<<endl;
  gErrorIgnoreLevel = 6001;
  gSystem->RedirectOutput("/dev/null");
  gROOT->ProcessLine(".L Loader.C+");
  gSystem->RedirectOutput(0,0);

}

//Funzione per ripulire la cartella dai file creati durante l'analisi
void Analysis::Clean(){
    remove("./Loader_C_ACLiC_dict_rdict.pcm");
    remove("./Loader_C.d");
    remove("./Loader_C.so");
}
