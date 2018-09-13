#ifndef YT_SELECTOR_H
#define YT_SELECTOR_H

#include <iostream>
#include <vector>
#include <iterator>
#include <typeinfo>
using namespace std;

#define Mu_Mass 105.6583715

#include "ytCutflows/AnaNtup_MC.h"
#include "ytCutflows/AnaNtup_Data.h"
#include "ytCutflows/Leptons.h"
#include "ytCutflows/Jet.h"
#include "ytCutflows/yt_cutflows.h"
#include "ytCutflows/yt_skim.h"
#include "ytCutflows/yt_skim_MC.h"
#include "ytCutflows/yt_skim_data.h"

#define _IS_MC_
//#define _IS_DATA_

#define _SKIM_ // if doing skim

#ifdef _IS_MC_
typedef AnaNtup_MC AnaNtup;
#endif // #ifdef _IS_MC_

#ifdef _IS_DATA_
typedef AnaNtup_Data AnaNtup;
#endif // #ifdef _IS_DATA_

//class yt_selector : public AnaNtup_MC {
class yt_selector : public AnaNtup {
public:
    // flag
    bool isMC;
    bool isData;
    // user defined variables
    double              derivation_stat_weights; // sum of EventWeight
    TString             process;
    double              luminosity;
    vector<double>      sum_of_weight_at_cut; // weight =

    yt_cutflows         *m_cutflow;
#ifdef _SKIM_
    yt_skim_MC          *m_skim_mc;
    yt_skim_data        *m_skim_data;
#endif // #ifdef _SKIM_

    vector<Electron>    vec_elec;
    vector<Muon>        vec_muon;
    vector<Lepton>      vec_lept;
    vector<Jet>         vec_jets;

    vector<Electron>    vec_baseline_elec;
    vector<Muon>        vec_baseline_muon;
    vector<Lepton>      vec_baseline_lept;
    vector<Jet>         vec_baseline_jets;

    vector<Electron>    vec_OR_elec;
    vector<Muon>        vec_OR_muon;
    vector<Lepton>      vec_OR_lept;
    vector<Jet>         vec_OR_jets;

    vector<Jet>         vec_JVT_jets;

    vector<Electron>    vec_signal_elec;
    vector<Muon>        vec_signal_muon;
    vector<Lepton>      vec_signal_lept;
    vector<Jet>         vec_signal_jets;

    TH1 *hCutFlows;

public:
    TTree   *fChain; //!pointer to the analyzed TTree or TChain

    yt_selector(TTree * /*tree*/ =0) : fChain(0) {}
    virtual ~yt_selector() {}
    virtual Int_t   Version() const { return 2; }
    virtual void    Begin(TTree *tree);
    virtual void    SlaveBegin(TTree *tree);
    virtual void    Init(TTree *tree);
    virtual Bool_t  Notify();
    virtual Bool_t  Process(Long64_t entry);
    virtual Int_t   GetEntry(Long64_t entry, Int_t getall = 0) { return fChain ? fChain->GetTree()->GetEntry(entry, getall) : 0; }  
    virtual void    SetOption(const char *option) { fOption = option; } 
    virtual void    SetObject(TObject *obj) { fObject = obj; }
    virtual void    SetInputList(TList *input) { fInput = input; }
    virtual TList  *GetOutputList() const { return fOutput; }
    virtual void    SlaveTerminate();
    virtual void    Terminate();
    // user defined functions
#ifdef _IS_MC_
    void fill_electrons(Int_t           NEl,
                        int             flavor,
                        vector<double>  *El_eta,
                        vector<double>  *El_etaclus,
                        vector<double>  *El_phi,
                        vector<double>  *El_pT,
                        vector<double>  *El_E,
                        vector<int>     *El_charge,
                        vector<double>  *El_sigd0,
                        vector<double>  *El_z0sinTheta,
                        vector<double>  *El_d0pvtx,
                        vector<bool>    *El_passOR,
                        vector<double>  *El_SFwMediumLH,
                        vector<float>   *El_IsoSFwMediumLH,
                        vector<double>  *El_SFwTightLH,
                        vector<double>  *El_SFwLooseAndBLayerLH,
                        vector<double>  *El_SFwTrigMediumLH_e12_lhloose_L1EM10VH,
                        vector<double>  *El_SFwTrigMediumLH_e17_lhloose,
                        vector<double>  *El_SFwTrigMediumLH_single,
                        vector<double>  *El_SFwTrigLooseAndBLayerLH_e12_lhloose_L1EM10VH,
                        vector<bool>    *El_isLooseAndBLayerLH,
                        vector<bool>    *El_isMediumLH,
                        vector<bool>    *El_isTightLH,
                        vector<int>     *El_nBLayerHits,
                        vector<int>     *El_expectBLayerHit,
//
                        vector<int>     *El_type, // MC only
                        vector<int>     *El_origin, // MC only
                        vector<int>     *El_bkgMotherPdgId, // MC only
                        vector<int>     *El_bkgOrigin, // MC only
                        vector<int>     *El_chFlip, // MC only
//
                        vector<double>  *El_ptcone20,
                        vector<double>  *El_ptcone30,
                        vector<double>  *El_ptcone40,
                        vector<double>  *El_ptvarcone20,
                        vector<double>  *El_ptvarcone30,
                        vector<double>  *El_ptvarcone40,
                        vector<double>  *El_topoetcone20,
                        vector<double>  *El_topoetcone30,
                        vector<double>  *El_topoetcone40,
                        vector<bool>    *El_passIsoLooseTO,
                        vector<bool>    *El_passIsoLoose,
                        vector<bool>    *El_passIsoTight,
                        vector<bool>    *El_passIsoGrad,
                        vector<bool>    *El_passIsoGradCustomTight,
                        vector<bool>    *El_passIsoGradCustom,
                        vector<bool>    *El_passIsoGradLoose,
                        vector<bool>    *El_trigMatch_e12_lhloose_L1EM10VH,
                        vector<bool>    *El_trigMatch_e17_lhloose,
                        vector<bool>    *El_trigMatch_e60_lhmedium,
                        vector<bool>    *El_trigMatch_e24_lhmedium_iloose_L1EM20VH,
                        vector<bool>    *El_trigMatch_2e12_lhloose_L12EM10VH,
                        vector<bool>    *El_trigMatch_2e15_lhloose_L12EM10VH,
                        vector<bool>    *El_trigMatch_2e15_lhvloose_L12EM13VH,
                        vector<bool>    *El_trigMatch_2e15_lhvloose_nod0_L12EM13VH,
                        vector<bool>    *El_trigMatch_2e17_lhvloose_nod0,
                        vector<bool>    *El_trigMatch_e17_lhloose_mu14,
                        vector<bool>    *El_trigMatch_e17_lhloose_nod0_mu14,
                        vector<bool>    *El_TrigMatch_e24_lhmedium_nod0_ivarloose,
                        vector<bool>    *El_TrigMatch_e24_lhtight_nod0_ivarloose,
                        vector<bool>    *El_TrigMatch_e60_lhmedium_nod0);

    void fill_muons(Int_t           NMu,
                    int             flavor,
                    vector<double>  *Mu_eta,
                    vector<double>  *Mu_phi,
                    vector<double>  *Mu_pT,
                    vector<double>  *Mu_SFw,
                    vector<float>   *Mu_IsoSFw,
                    vector<int>     *Mu_charge,
                    vector<double>  *Mu_d0pvtx,
                    vector<double>  *Mu_sigd0,
                    vector<double>  *Mu_z0sinTheta,
                    vector<bool>    *Mu_isBad,
                    vector<bool>    *Mu_passOR,
                    vector<bool>    *Mu_isTight,
                    vector<bool>    *Mu_isCosmic,
//
                    vector<int>     *Mu_type, // MC only
                    vector<int>     *Mu_origin, // MC only
//
                    vector<double>  *Mu_ptcone20,
                    vector<double>  *Mu_ptcone30,
                    vector<double>  *Mu_ptcone40,
                    vector<double>  *Mu_ptvarcone20,
                    vector<double>  *Mu_ptvarcone30,
                    vector<double>  *Mu_ptvarcone40,
                    vector<double>  *Mu_topoetcone20,
                    vector<double>  *Mu_topoetcone30,
                    vector<double>  *Mu_topoetcone40,
                    vector<bool>    *Mu_passIsoLooseTO,
                    vector<bool>    *Mu_passIsoLoose,
                    vector<bool>    *Mu_passIsoTight,
                    vector<bool>    *Mu_passIsoGrad,
                    vector<bool>    *Mu_passIsoGradCustomTight,
                    vector<bool>    *Mu_passIsoGradCustom,
                    vector<bool>    *Mu_passIsoGradLoose,
                    Float_t         MuTrigSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50,
                    vector<bool>    *Mu_trigMatch_mu26_imedium,
                    vector<bool>    *Mu_trigMatch_mu50,
                    vector<bool>    *Mu_trigMatch_mu8noL1,
                    vector<bool>    *Mu_trigMatch_mu14,
                    vector<bool>    *Mu_trigMatch_mu18,
                    vector<bool>    *Mu_trigMatch_mu18_mu8noL1,
                    vector<bool>    *Mu_trigMatch_e17_lhloose_mu14,
                    vector<bool>    *Mu_trigMatch_e17_lhloose_nod0_mu14,
                    vector<bool>    *Mu_trigMatch_mu20_mu8noL1,
                    vector<bool>    *Mu_trigMatch_mu22_mu8noL1,
                    vector<bool>    *Mu_TrigMatch_mu24_iloose,
                    vector<bool>    *Mu_TrigMatch_mu24_ivarloose,
                    vector<bool>    *Mu_TrigMatch_mu24_iloose_L1MU15,
                    vector<bool>    *Mu_TrigMatch_mu24_ivarloose_L1MU15,
                    vector<vector<bool> > *Mu_trigMatchPair_mu18_mu8noL1,
                    vector<vector<bool> > *Mu_trigMatchPair_mu20_mu8noL1,
                    vector<vector<bool> > *Mu_trigMatchPair_mu22_mu8noL1);

    void fill_jets(Int_t           NJet,
                   vector<double>  *Jet_eta,
                   vector<double>  *Jet_phi,
                   vector<double>  *Jet_pT,
                   vector<double>  *Jet_E,
                   vector<double>  *Jet_quality,
                   vector<double>  *Jet_JVT,
                   vector<double>  *Jet_JVTsf,
                   vector<double>  *Jet_MV2c20,
                   vector<double>  *Jet_MV2c10,
                   vector<double>  *Jet_SFw,
//
                   vector<int>     *Jet_ConeTruthLabel, // MC only
                   vector<int>     *Jet_PartonTruthLabel, // MC only
                   vector<int>     *Jet_HadronConeExclTruthLabel, // MC only
                   vector<double>  *Jet_deltaR, // MC only
//
                   vector<int>     *Jet_nTrk,
                   vector<bool>    *Jet_passOR);
#endif // #ifdef _IS_MC_

#ifdef _IS_DATA_
    void fill_electrons(Int_t           NEl,
                        int             flavor,
                        vector<double>  *El_eta,
                        vector<double>  *El_etaclus,
                        vector<double>  *El_phi,
                        vector<double>  *El_pT,
                        vector<double>  *El_E,
                        vector<int>     *El_charge,
                        vector<double>  *El_sigd0,
                        vector<double>  *El_z0sinTheta,
                        vector<double>  *El_d0pvtx,
                        vector<bool>    *El_passOR,
                        vector<double>  *El_SFwMediumLH,
                        vector<float>   *El_IsoSFwMediumLH,
                        vector<double>  *El_SFwTightLH,
                        vector<double>  *El_SFwLooseAndBLayerLH,
                        vector<double>  *El_SFwTrigMediumLH_e12_lhloose_L1EM10VH,
                        vector<double>  *El_SFwTrigMediumLH_e17_lhloose,
                        vector<double>  *El_SFwTrigMediumLH_single,
                        vector<double>  *El_SFwTrigLooseAndBLayerLH_e12_lhloose_L1EM10VH,
                        vector<bool>    *El_isLooseAndBLayerLH,
                        vector<bool>    *El_isMediumLH,
                        vector<bool>    *El_isTightLH,
                        vector<int>     *El_nBLayerHits,
                        vector<int>     *El_expectBLayerHit,
                        /*
                        vector<int>     *El_type, // MC only
                        vector<int>     *El_origin, // MC only
                        vector<int>     *El_bkgMotherPdgId, // MC only
                        vector<int>     *El_bkgOrigin, // MC only
                        vector<int>     *El_chFlip, // MC only
                        */
                        vector<double>  *El_ptcone20,
                        vector<double>  *El_ptcone30,
                        vector<double>  *El_ptcone40,
                        vector<double>  *El_ptvarcone20,
                        vector<double>  *El_ptvarcone30,
                        vector<double>  *El_ptvarcone40,
                        vector<double>  *El_topoetcone20,
                        vector<double>  *El_topoetcone30,
                        vector<double>  *El_topoetcone40,
                        vector<bool>    *El_passIsoLooseTO,
                        vector<bool>    *El_passIsoLoose,
                        vector<bool>    *El_passIsoTight,
                        vector<bool>    *El_passIsoGrad,
                        vector<bool>    *El_passIsoGradCustomTight,
                        vector<bool>    *El_passIsoGradCustom,
                        vector<bool>    *El_passIsoGradLoose,
                        vector<bool>    *El_trigMatch_e12_lhloose_L1EM10VH,
                        vector<bool>    *El_trigMatch_e17_lhloose,
                        vector<bool>    *El_trigMatch_e60_lhmedium,
                        vector<bool>    *El_trigMatch_e24_lhmedium_iloose_L1EM20VH,
                        vector<bool>    *El_trigMatch_2e12_lhloose_L12EM10VH,
                        vector<bool>    *El_trigMatch_2e15_lhloose_L12EM10VH,
                        vector<bool>    *El_trigMatch_2e15_lhvloose_L12EM13VH,
                        vector<bool>    *El_trigMatch_2e15_lhvloose_nod0_L12EM13VH,
                        vector<bool>    *El_trigMatch_2e17_lhvloose_nod0,
                        vector<bool>    *El_trigMatch_e17_lhloose_mu14,
                        vector<bool>    *El_trigMatch_e17_lhloose_nod0_mu14,
                        vector<bool>    *El_TrigMatch_e24_lhmedium_nod0_ivarloose,
                        vector<bool>    *El_TrigMatch_e24_lhtight_nod0_ivarloose,
                        vector<bool>    *El_TrigMatch_e60_lhmedium_nod0);
    
    void fill_muons(Int_t           NMu,
                    int             flavor,
                    vector<double>  *Mu_eta,
                    vector<double>  *Mu_phi,
                    vector<double>  *Mu_pT,
                    vector<double>  *Mu_SFw,
                    vector<float>   *Mu_IsoSFw,
                    vector<int>     *Mu_charge,
                    vector<double>  *Mu_d0pvtx,
                    vector<double>  *Mu_sigd0,
                    vector<double>  *Mu_z0sinTheta,
                    vector<bool>    *Mu_isBad,
                    vector<bool>    *Mu_passOR,
                    vector<bool>    *Mu_isTight,
                    vector<bool>    *Mu_isCosmic,
                    /*
                    vector<int>     *Mu_type, // MC only
                    vector<int>     *Mu_origin, // MC only
                    */
                    vector<double>  *Mu_ptcone20,
                    vector<double>  *Mu_ptcone30,
                    vector<double>  *Mu_ptcone40,
                    vector<double>  *Mu_ptvarcone20,
                    vector<double>  *Mu_ptvarcone30,
                    vector<double>  *Mu_ptvarcone40,
                    vector<double>  *Mu_topoetcone20,
                    vector<double>  *Mu_topoetcone30,
                    vector<double>  *Mu_topoetcone40,
                    vector<bool>    *Mu_passIsoLooseTO,
                    vector<bool>    *Mu_passIsoLoose,
                    vector<bool>    *Mu_passIsoTight,
                    vector<bool>    *Mu_passIsoGrad,
                    vector<bool>    *Mu_passIsoGradCustomTight,
                    vector<bool>    *Mu_passIsoGradCustom,
                    vector<bool>    *Mu_passIsoGradLoose,
                    Float_t         MuTrigSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50,
                    vector<bool>    *Mu_trigMatch_mu26_imedium,
                    vector<bool>    *Mu_trigMatch_mu50,
                    vector<bool>    *Mu_trigMatch_mu8noL1,
                    vector<bool>    *Mu_trigMatch_mu14,
                    vector<bool>    *Mu_trigMatch_mu18,
                    vector<bool>    *Mu_trigMatch_mu18_mu8noL1,
                    vector<bool>    *Mu_trigMatch_e17_lhloose_mu14,
                    vector<bool>    *Mu_trigMatch_e17_lhloose_nod0_mu14,
                    vector<bool>    *Mu_trigMatch_mu20_mu8noL1,
                    vector<bool>    *Mu_trigMatch_mu22_mu8noL1,
                    vector<bool>    *Mu_TrigMatch_mu24_iloose,
                    vector<bool>    *Mu_TrigMatch_mu24_ivarloose,
                    vector<bool>    *Mu_TrigMatch_mu24_iloose_L1MU15,
                    vector<bool>    *Mu_TrigMatch_mu24_ivarloose_L1MU15,
                    vector<vector<bool> > *Mu_trigMatchPair_mu18_mu8noL1,
                    vector<vector<bool> > *Mu_trigMatchPair_mu20_mu8noL1,
                    vector<vector<bool> > *Mu_trigMatchPair_mu22_mu8noL1);
    
    void fill_jets(Int_t           NJet,
                   vector<double>  *Jet_eta,
                   vector<double>  *Jet_phi,
                   vector<double>  *Jet_pT,
                   vector<double>  *Jet_E,
                   vector<double>  *Jet_quality,
                   vector<double>  *Jet_JVT,
                   vector<double>  *Jet_JVTsf,
                   vector<double>  *Jet_MV2c20,
                   vector<double>  *Jet_MV2c10,
                   vector<double>  *Jet_SFw,
                   /*
                   vector<int>     *Jet_ConeTruthLabel, // MC only
                   vector<int>     *Jet_PartonTruthLabel, // MC only
                   vector<int>     *Jet_HadronConeExclTruthLabel, // MC only
                   vector<double>  *Jet_deltaR, // MC only
                   */
                   vector<int>     *Jet_nTrk,
                   vector<bool>    *Jet_passOR);
#endif // #ifdef _IS_DATA_

    void fill_leptons(vector<Electron> elec, vector<Muon> muon);

    void fill_baseline_electrons(vector<Electron> elec);
    void fill_baseline_muons(vector<Muon> muon);
    void fill_baseline_leptons(vector<Electron> elec, vector<Muon> muon);
    void fill_baseline_jets(vector<Jet> jets);

    void fill_OR_electrons(vector<Electron> elec);
    void fill_OR_muons(vector<Muon> muon);
    void fill_OR_leptons(vector<Electron> elec, vector<Muon> muon);
    void fill_OR_jets(vector<Jet> jets);

    void fill_JVT_jets(vector<Jet> jets);

    void fill_signal_electrons(vector<Electron> elec);
    void fill_signal_muons(vector<Muon> muon);
    void fill_signal_leptons(vector<Electron> elec, vector<Muon> muon);
    void fill_signal_jets(vector<Jet> jets);

    void set_baseline_and_signal_electrons();
    void set_baseline_and_signal_muons();
    void set_jets_and_bjets();

    void set_isMC(bool b) { isMC = b; }
    void set_isData(bool b) { isData = b; }
    void set_process(TString str) { process = str; }
    void set_derivation_stat_weights(double d) { derivation_stat_weights = d; }
    void set_luminosity(double d) { luminosity = d; }

    // Output methods
    template<typename T>
    void debug_print(vector<T> vec);
    void debug_elec_print(vector<Electron> elec);
    void debug_muon_print(vector<Muon> muon);
    void debug_lept_print(vector<Lepton> lept);
    void debug_jets_print(vector<Jet> jets);

    // Weight related methods
    double ID_weight(vector<Electron> elec, bool signal = true);
    double ID_weight(vector<Muon> muon);
    double Iso_weight(vector<Electron> elec);
    double Iso_weight(vector<Muon> muon);
    double lept_weight(double elec_ID_weight, double elec_iso_weight, double muon_ID_weight, double muon_iso_weight);
    double jets_weight(vector<Jet> jets);
    double calculate_weight(double event_weight, double PRW_weight, double lept_weight, double jets_weight);
    double calculate_weight(double event_weight, double PRW_weight, vector<Electron> elec, vector<Muon> muon, vector<Jet> jets);
    void update(int cut, bool passed, double weight);
    void debug_sum_of_weight_print();

    ClassDef(yt_selector, 0);
};

#endif // #define YT_SELECTOR_H

#ifdef YT_SELECTOR_CXX
void yt_selector::Init(TTree *tree)
{
    // The Init() function is called when the selector needs to initialize
    // a new tree or chain. Typically here the branch addresses and branch
    // pointers of the tree will be set.
    // It is normally not necessary to make changes to the generated
    // code, but the routine can be extended by the user if needed.
    // Init() will be called many times when running on PROOF
    // (once per file to be processed).

    //AnaNtup_MC::Init(tree);
    AnaNtup::Init(tree);
#ifdef _SKIM_
#ifdef _IS_MC_
    m_skim_mc->initialize(AnaNtup::fChain, process);
#endif // #ifdef _IS_MC_
#ifdef _IS_DATA_
    m_skim_data->initialize(AnaNtup::fChain);
#endif // #ifdef _IS_DATA_
#endif // #ifdef _SKIM_
}

Bool_t yt_selector::Notify()
{
    // The Notify() function is called when a new file is opened. This
    // can be either for a new TTree in a TChain or when when a new TTree
    // is started when using PROOF. It is normally not necessary to make cha    nges
    // to the generated code, but the routine can be extended by the
    // user if needed. The return value is currently not used.

    return kTRUE;
}

template<typename T>
void yt_selector::debug_print(vector<T> vec)
{
    cout << "*** Event Number=" << EventNumber << endl;
    string type = typeid(T).name();
    cout << type << endl;
// This template doesn't work...
/*
    if (type.compare("Lepton") == 0) {
        cout << "This is Lepton" << endl;
        debug_lept_print(vec);
    }
    else if (type.compare("Electron") == 0) {
        cout << "This is Electron" << endl;
        debug_elec_print(vec);
    }
    else if (type.compare("Muon") == 0) {
        cout << "This is Muon" << endl;
        debug_muon_print(vec);
    }
    else if (type.compare("Jet") == 0) {
        cout << "This is Jet" << endl;
        debug_jets_print(vec);
    }
    else {  
        cout << "Type " << type << " doesn't match" << endl;
    }
*/
}

void yt_selector::debug_lept_print(vector<Lepton> vec_lept)
{
    cout << "*** Event Number=" << EventNumber << endl;
    cout << "NEl+NMu=" << vec_lept.size() << endl;
    int i = 0;
    for (auto & lep_itr : vec_lept) {
        //cout << "NEl+NMu=" << lep_itr.get_number() << endl;
        cout << i + 1
            << ": pt=" << lep_itr.get_pt() 
            << ", eta=" << lep_itr.get_eta()
            << ", phi=" << lep_itr.get_phi() 
            << ", baseline=" << lep_itr.get_baseline() 
            << ", passOR=" << lep_itr.get_passOR() 
            << ", isSignal=" << lep_itr.get_isSignal()
            << ", flavor=" << lep_itr.get_flavor() 
            << ", charge=" << lep_itr.get_charge()
            << endl;
        i++;
    }
}

void yt_selector::debug_elec_print(vector<Electron> vec_elec)
{
    cout << "*** Event Number=" << EventNumber << endl;
    cout << "NEl=" << vec_elec.size() << endl;
    int i = 0;
    for (auto & el_itr : vec_elec) {
        //cout << "NEl=" << el_itr.get_number() << endl;
        cout << i + 1
            << ": pt=" << el_itr.get_pt() 
            << ", eta=" << el_itr.get_eta() << ", etaclus=" << el_itr.get_etaclus() 
            << ", phi=" << el_itr.get_phi() 
            << ", baseline=" << el_itr.get_baseline() 
            << ", passOR=" << el_itr.get_passOR() 
            << ", isSignal=" << el_itr.get_isSignal()
            << ", flavor=" << el_itr.get_flavor() 
            << ", charge=" << el_itr.get_charge()
            << ", |d0sig|=" << fabs(el_itr.get_sigd0())
            << ", |z0sinTheta|=" << fabs(el_itr.get_z0sinTheta())
            << ", ptvarcone20/pt=" << el_itr.get_ptvarcone20() / el_itr.get_pt()
            << ", topoetcone20/pt=" << el_itr.get_topoetcone20() / el_itr.get_pt()
            << ", trigMatch_2e12_lhloose_L12EM10VH=" << el_itr.get_trigMatch_2e12_lhloose_L12EM10VH()
            << ", trigMatch_e17_lhloose_mu14=" << el_itr.get_trigMatch_e17_lhloose_mu14()
            << ", trigMatch_2e17_lhvloose_nod0=" << el_itr.get_trigMatch_2e17_lhvloose_nod0()
            << ", trigMatch_e17_lhloose_nod0_mu14=" << el_itr.get_trigMatch_e17_lhloose_nod0_mu14()
            << ", SFwMediumLH=" << el_itr.get_SFwMediumLH()
            << ", SFwLooseAndBLayerLH=" << el_itr.get_SFwLooseAndBLayerLH()
            << ", IsoSFwMediumLH=" << el_itr.get_IsoSFwMediumLH()
            << ", SFwTrigMediumLH_e12_lhloose_L1EM10VH=" << el_itr.get_SFwTrigMediumLH_e12_lhloose_L1EM10VH()
            << ", SFwTrigMediumLH_e17_lhloose=" << el_itr.get_SFwTrigMediumLH_e17_lhloose()
            << ", SFwTrigMediumLH_single=" << el_itr.get_SFwTrigMediumLH_single()
            << ", SFwTrigLooseAndBLayerLH_e12_lhloose_L1EM10VH=" << el_itr.get_SFwTrigLooseAndBLayerLH_e12_lhloose_L1EM10VH()
            << endl;
        i++;
    }
}

void yt_selector::debug_muon_print(vector<Muon> vec_muon)
{
    cout << "*** Event Number=" << EventNumber << endl;
    cout << "NMu=" << vec_muon.size() << endl;
    int i = 0;
    for (auto & mu_itr : vec_muon) {
        //cout << "NMu=" << mu_itr.get_number() << endl;
        cout << i + 1
            << ": pt=" << mu_itr.get_pt()
            << ", eta=" << mu_itr.get_eta()
            << ", phi=" << mu_itr.get_phi()
            << ", baseline=" << mu_itr.get_baseline()
            << ", passOR=" << mu_itr.get_passOR()
            << ", isSignal=" << mu_itr.get_isSignal()
            << ", flavor=" << mu_itr.get_flavor()
            << ", charge=" << mu_itr.get_charge()
            << ", isBad=" << mu_itr.get_isBad()
            << ", isCosmic=" << mu_itr.get_isCosmic()
            << ", |d0sig|=" << fabs(mu_itr.get_sigd0())
            << ", |z0sinTheta|=" << fabs(mu_itr.get_z0sinTheta())
            << ", ptvarcone30/pt=" << mu_itr.get_ptvarcone30() / mu_itr.get_pt()
            << ", trigMatch_e17_lhloose_mu14=" << mu_itr.get_trigMatch_e17_lhloose_mu14()
            << endl;
        i++;
    }
}

void yt_selector::debug_jets_print(vector<Jet> vec_jets)
{
    cout << "*** Event Number=" << EventNumber << endl;
    cout << "NJet=" << vec_jets.size() << endl;
    int i = 0;
    for (auto & jet_itr : vec_jets) {
        //cout << "NJet=" << jet_itr.get_number() << endl;
        cout << i + 1
            << ": pt=" << jet_itr.get_pt()
            << ", eta=" << jet_itr.get_eta()
            << ", phi=" << jet_itr.get_phi()
            << ", baseline=" << jet_itr.get_baseline()
            << ", passOR=" << jet_itr.get_passOR()
            << ", isBjet=" << jet_itr.get_isBjet()
            << ", quality=" << jet_itr.get_quality()
            << ", JVT=" << jet_itr.get_JVT()
            << ", MV2c10=" << jet_itr.get_MV2c10()
            << ", SFw=" << jet_itr.get_SFw()
            << ", JVTsf=" << jet_itr.get_JVTsf()
            << endl;
        i++;
    }
}

double yt_selector::ID_weight(vector<Electron> elec, bool signal)
{
    double total = 1.;
    if (!signal) {// baseline electrons
        for (auto & el_itr : elec) {
            total *= el_itr.get_SFwLooseAndBLayerLH();
        }
    }
    else {// signal electrons
        for (auto & el_itr : elec) {
            total *= el_itr.get_SFwMediumLH();
        }
    }
    return total;
}

double yt_selector::ID_weight(vector<Muon> muon)
{
    double total = 1.;
    for (auto & mu_itr : muon) {
        total *= mu_itr.get_SFw();
    }
    return total;
}

double yt_selector::Iso_weight(vector<Electron> elec)
{
    double total = 1.;
    for (auto & el_itr : elec) {
        total *= el_itr.get_IsoSFwMediumLH();
    }
    return total;
}

double yt_selector::Iso_weight(vector<Muon> muon)
{
    double total = 1.;
    for (auto & mu_itr : muon) {
        total *= mu_itr.get_IsoSFw();
    }
    return total;
}

double yt_selector::lept_weight(double elec_ID_weight, double elec_iso_weight, double muon_ID_weight, double muon_iso_weight)
{
    return elec_ID_weight * elec_iso_weight * muon_ID_weight * muon_ID_weight;
}

double yt_selector::jets_weight(vector<Jet> jets)
{
    double total = 1.;
    for (auto & jet_itr : jets) {
        total *= jet_itr.get_SFw() * jet_itr.get_JVTsf();
    }
    return total;
}

double yt_selector::calculate_weight(double event_weight, double PRW_weight, double lept_weight, double jets_weight)
{
    return event_weight * PRW_weight * lept_weight * jets_weight;
}

double yt_selector::calculate_weight(double event_weight, double PRW_weight, vector<Electron> elec, vector<Muon> muon, vector<Jet> jets)
{
    double total = event_weight * PRW_weight;
    for (auto & el_itr : elec) {
        total *= el_itr.get_SFwMediumLH() * el_itr.get_IsoSFwMediumLH();
    }
    for (auto & mu_itr : muon) {
        total *= mu_itr.get_SFw() * mu_itr.get_IsoSFw();
    }
    for (auto & jet_itr : jets) {
        total *= jet_itr.get_SFw() * jet_itr.get_JVTsf();
    }
    return total;
}

void yt_selector::update(int cut, bool passed, double weight)
{
    if (passed)
        sum_of_weight_at_cut[cut] += weight;
}

void yt_selector::debug_sum_of_weight_print()
{
    extern const char* cut_name[];
    cout << "**************************************************" << endl;
    cout << " Sum of EventWeight for each cut" << endl;
    cout << "**************************************************" << endl;
    for (int cuts = 0; cuts < Ncuts; cuts++) {
        //if (cuts == 14) {
        if (cuts == ee_channel_separation) {
            cout << "***** El-El channel *****" << endl;
            cout << setw(20) << left << cut_name[cuts]  << " = " << setw(10) << sum_of_weight_at_cut[cuts] << endl;
        }
        //else if (cuts == 19) {
        else if (cuts == emu_channel_separation) {
            cout << "***** El-Mu channel *****" << endl;
            cout << setw(20) << left << cut_name[cuts]  << " = " << setw(10) << sum_of_weight_at_cut[cuts] << endl;
        }
        //else if (cuts == 24) {
        else if (cuts == mumu_channel_separation) {
            cout << "***** Mu-Mu channel *****" << endl;
            cout << setw(20) << left << cut_name[cuts]  << " = " << setw(10) << sum_of_weight_at_cut[cuts] << endl;
        }
        else {
            cout << setw(20) << left << cut_name[cuts]  << " = " << setw(10) << sum_of_weight_at_cut[cuts] << endl;
        }
    }
    cout << "**************************************************" << endl;

}

#endif // #ifdef YT_SELECTOR_CXX