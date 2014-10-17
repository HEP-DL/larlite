//
// cint script to generate libraries
// Declaire namespace & classes you defined
// #pragma statement: order matters! Google it ;)
//

#ifdef __CINT__
#pragma link off all globals;
#pragma link off all classes;
#pragma link off all functions;

#pragma link C++ class std::vector<std::vector<float> >+;

#pragma link C++ class std::pair<size_t,size_t>+;
#pragma link C++ class std::pair<std::string,bool>+;
#pragma link C++ class std::pair<std::string,std::string>+;

#pragma link C++ class std::map<std::string,bool>+;
#pragma link C++ class std::map<std::string,std::string>+;
#pragma link C++ class std::map<std::string,std::vector<bool> >+;
#pragma link C++ class std::map<std::string,std::vector<int > >+;
#pragma link C++ class std::map<std::string,std::vector<double> >+;
#pragma link C++ class std::map<std::string,std::vector<std::string> >+;

#pragma link C++ class std::vector<TVector3>+;
#pragma link C++ class std::vector<TMatrixD>+;
#pragma link C++ class std::vector<TLorentzVector>+;

#pragma link C++ class larlite::product_id+;

#pragma link C++ class larlite::data_base+;
#pragma link C++ class larlite::event_base+;
//#pragma link C++ class larlite::association+;

#pragma link C++ class larlite::wire+;
#pragma link C++ class std::vector<larlite::wire>+;
#pragma link C++ class larlite::event_wire+;

#pragma link C++ class larlite::hit+;
#pragma link C++ class std::vector<larlite::hit>+;
#pragma link C++ class larlite::event_hit+;

#pragma link C++ class larlite::ophit+;
#pragma link C++ class std::vector<larlite::ophit>+;
#pragma link C++ class larlite::event_ophit+;

#pragma link C++ class larlite::opflash+;
#pragma link C++ class std::vector<larlite::opflash>+;
#pragma link C++ class larlite::event_opflash+;

#pragma link C++ class larlite::cosmictag+;
#pragma link C++ class std::vector<larlite::cosmictag>+;
#pragma link C++ class larlite::event_cosmictag+;

#pragma link C++ class larlite::cluster+;
#pragma link C++ class std::vector<larlite::cluster>+;
#pragma link C++ class larlite::event_cluster+;

#pragma link C++ class larlite::endpoint2d+;
#pragma link C++ class std::vector<larlite::endpoint2d>+;
#pragma link C++ class larlite::event_endpoint2d+;

#pragma link C++ class larlite::spacepoint+;
#pragma link C++ class std::vector<larlite::spacepoint>+;
#pragma link C++ class larlite::event_spacepoint+;

#pragma link C++ class larlite::track+;
#pragma link C++ class std::vector<larlite::track>+;
#pragma link C++ class larlite::event_track+;

#pragma link C++ class larlite::shower+;
#pragma link C++ class std::vector<larlite::shower>+;
#pragma link C++ class larlite::event_shower+;

#pragma link C++ class larlite::vertex+;
#pragma link C++ class std::vector<larlite::vertex>+;
#pragma link C++ class larlite::event_vertex+;

#pragma link C++ class larlite::calorimetry+;
#pragma link C++ class std::vector<larlite::calorimetry>+;
#pragma link C++ class larlite::event_calorimetry+;

#pragma link C++ class larlite::pfpart+;
#pragma iink C++ class std::vector<larlite::pfpart>+;
#pragma link C++ class larlite::event_pfpart+;

#pragma link C++ class larlite::partid+;
#pragma link C++ class std::vector<larlite::partid>+;
#pragma link C++ class larlite::event_partid+;

#pragma link C++ class larlite::user_info+;
#pragma link C++ class std::vector<larlite::user_info>+;
#pragma link C++ class larlite::event_user+;

#pragma link C++ class larlite::gtruth+;
#pragma link C++ class std::vector<larlite::gtruth>+;
#pragma link C++ class larlite::event_gtruth+;

#pragma link C++ class larlite::mcshower+;
#pragma link C++ class std::vector<larlite::mcshower>+;
#pragma link C++ class larlite::event_mcshower+;

#pragma link C++ class larlite::mcpart+;
#pragma link C++ class std::vector<larlite::mcpart>+;
#pragma link C++ class larlite::event_mcpart+;

#pragma link C++ class larlite::mcflux+;
#pragma link C++ class std::vector<larlite::mcflux>+;
#pragma link C++ class larlite::event_mcflux+;

#pragma link C++ class larlite::mcstep+;
#pragma link C++ class std::vector<larlite::mcstep>+;
#pragma link C++ class larlite::mctrajectory+;

#pragma link C++ class larlite::mcnu+;
#pragma link C++ class std::vector<larlite::mcnu>+;

#pragma link C++ class larlite::mctruth+;
#pragma link C++ class std::vector<larlite::mctruth>+;
#pragma link C++ class larlite::event_mctruth+;

#pragma link C++ class larlite::ide+;
#pragma link C++ class larlite::simch+;
#pragma link C++ class std::vector<larlite::ide>+;
#pragma link C++ class std::map<UShort_t,larlite::simch>+;
#pragma link C++ class std::vector<larlite::simch>+;
#pragma link C++ class larlite::event_simch+;

//#pragma link C++ class larlite::trigger+;

#pragma link C++ class larlite::storage_manager+;

#endif