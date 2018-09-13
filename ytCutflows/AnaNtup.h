//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Thu May 26 14:45:00 2016 by ROOT version 6.04/16
// from TTree AnaNtup/AnaNtup
// found on file: user.jpoveda.8482167._000001.output.root
//////////////////////////////////////////////////////////

#ifndef AnaNtup_h
#define AnaNtup_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TSelector.h>

// Header file for the classes stored in the TTree if any.
#include "vector"
using std::vector;

class AnaNtup : public TSelector {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   Bool_t          HLT_e24_lhmedium_nod0_ivarloose;
   Bool_t          HLT_e24_lhtight_nod0_ivarloose;
   Bool_t          HLT_e26_lhtight_iloose;
   Bool_t          HLT_e26_lhtight_ivarloose;
   Bool_t          HLT_e26_lhtight_nod0_iloose;
   Bool_t          HLT_e26_lhtight_nod0_ivarloose;
   Bool_t          HLT_e60_lhmedium;
   Bool_t          HLT_e60_lhmedium_nod0;
   Bool_t          HLT_e120_lhloose_nod0;
   Bool_t          HLT_e140_lhloose_nod0;
   Bool_t          HLT_2e17_lhvloose_nod0;
   Bool_t          HLT_2e15_lhvloose_nod0_L12EM13VH;
   Bool_t          HLT_e24_lhmedium_e9_lhmedium;
   Bool_t          HLT_e24_lhmedium_L1EM20VH;
   Bool_t          HLT_e12_lhvloose_L12EM10VH;
   Bool_t          HLT_e17_lhloose_2e9_lhloose;
   Bool_t          HLT_mu24_ivarmedium;
   Bool_t          HLT_mu24_imedium;
   Bool_t          HLT_mu24_ivarloose;
   Bool_t          HLT_mu24_iloose;
   Bool_t          HLT_mu26_ivarmedium;
   Bool_t          HLT_mu26_imedium;
   Bool_t          HLT_mu20_ivarmedium_L1MU15;
   Bool_t          HLT_mu20_imedium_L1MU15;
   Bool_t          HLT_mu20_ivarloose_L1MU15;
   Bool_t          HLT_mu20_iloose_L1MU15;
   Bool_t          HLT_mu20_L1MU15;
   Bool_t          HLT_mu20_mu8noL1;
   Bool_t          HLT_mu22_mu8noL1;
   Bool_t          HLT_mu22_2mu4noL1;
   Bool_t          HLT_mu40;
   Bool_t          HLT_mu50;
   Bool_t          HLT_2mu10;
   Bool_t          HLT_2mu10_nomucomb;
   Bool_t          HLT_2mu14;
   Bool_t          HLT_2mu14_nomucomb;
   Bool_t          HLT_3mu6;
   Bool_t          HLT_3mu6_msonly;
   Bool_t          HLT_xe100_L1XE50;
   Bool_t          HLT_xe80_mht_L1XE50;
   Bool_t          HLT_xe90_mht_L1XE50;
   Bool_t          HLT_xe110_pueta_L1XE50;
   Bool_t          HLT_xe110_pufit_L1XE50;
   Bool_t          HLT_xe100_tc_em_L1XE50;
   Bool_t          HLT_xe80_tc_lcw_L1XE50;
   Bool_t          HLT_xe90_tc_lcw_L1XE50;
   Bool_t          HLT_xe80_tc_lcw_wEFMu_L1XE50;
   Bool_t          HLT_e7_lhmedium_mu24;
   Bool_t          HLT_e17_lhloose_nod0_mu14;
   Bool_t          HLT_e26_lhmedium_nod0_L1EM22VHI_mu8noL1;
   Bool_t          HLT_e24_lhmedium_nod0_L1EM22VHI_mu8noL1;
   Bool_t          HLT_2e12_lhloose_L12EM10VH;
   Bool_t          HLT_e17_lhloose_mu14;
   Bool_t          HLT_mu18_mu8noL1;
   Bool_t          HLT_xe70;
   UInt_t          EventNumber;
   Int_t           ChannelNumber;
   Double_t        AvgMu;
   Double_t        EventWeight;
   Int_t           bcid;
   Int_t           LB;
   Int_t           RunNb;
   Int_t           DetError;
   Int_t           NMu;
   vector<double>  *Mu_eta;
   vector<double>  *Mu_phi;
   vector<double>  *Mu_pT;
   vector<double>  *Mu_SFw;
   vector<float>   *Mu_IsoSFw;
   vector<int>     *Mu_charge;
   vector<double>  *Mu_d0pvtx;
   vector<double>  *Mu_sigd0;
   vector<double>  *Mu_z0sinTheta;
   vector<bool>    *Mu_isBad;
   vector<bool>    *Mu_passOR;
   vector<bool>    *Mu_isTight;
   vector<bool>    *Mu_isCosmic;
   vector<int>     *Mu_type;
   vector<int>     *Mu_origin;
   vector<double>  *Mu_ptcone20;
   vector<double>  *Mu_ptcone30;
   vector<double>  *Mu_ptcone40;
   vector<double>  *Mu_ptvarcone20;
   vector<double>  *Mu_ptvarcone30;
   vector<double>  *Mu_ptvarcone40;
   vector<double>  *Mu_topoetcone20;
   vector<double>  *Mu_topoetcone30;
   vector<double>  *Mu_topoetcone40;
   vector<bool>    *Mu_passIsoLooseTO;
   vector<bool>    *Mu_passIsoLoose;
   vector<bool>    *Mu_passIsoTight;
   vector<bool>    *Mu_passIsoGrad;
   vector<bool>    *Mu_passIsoGradCustomTight;
   vector<bool>    *Mu_passIsoGradCustom;
   vector<bool>    *Mu_passIsoGradLoose;
   Float_t         MuTrigSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50;
   vector<bool>    *Mu_trigMatch_mu26_imedium;
   vector<bool>    *Mu_trigMatch_mu50;
   vector<bool>    *Mu_trigMatch_mu18_mu8noL1;
   vector<bool>    *Mu_trigMatch_mu14;
   vector<bool>    *Mu_trigMatch_mu18;
   Int_t           NEl;
   vector<double>  *El_eta;
   vector<double>  *El_etaclus;
   vector<double>  *El_phi;
   vector<double>  *El_pT;
   vector<double>  *El_E;
   vector<int>     *El_charge;
   vector<double>  *El_sigd0;
   vector<double>  *El_z0sinTheta;
   vector<double>  *El_d0pvtx;
   vector<bool>    *El_passOR;
   vector<double>  *El_SFwMediumLH;
   vector<float>   *El_IsoSFwTightLH;
   vector<double>  *El_SFwTightLH;
   vector<double>  *El_SFwLooseAndBLayerLH;
   vector<double>  *El_SFwTrigMediumLH_e12_lhloose_L1EM10VH;
   vector<double>  *El_SFwTrigTightLH_e12_lhloose_L1EM10VH;
   vector<double>  *El_SFwTrigTightLH_e17_lhloose;
   vector<double>  *El_SFwTrigTightLH_single;
   vector<double>  *El_SFwTrigLooseAndBLayerLH_e12_lhloose_L1EM10VH;
   vector<bool>    *El_isLooseAndBLayerLH;
   vector<bool>    *El_isMediumLH;
   vector<bool>    *El_isTightLH;
   vector<int>     *El_nBLayerHits;
   vector<int>     *El_expectBLayerHit;
   vector<int>     *El_type;
   vector<int>     *El_origin;
   vector<int>     *El_bkgMotherPdgId;
   vector<int>     *El_bkgOrigin;
   vector<int>     *El_chFlip;
   vector<double>  *El_ptcone20;
   vector<double>  *El_ptcone30;
   vector<double>  *El_ptcone40;
   vector<double>  *El_ptvarcone20;
   vector<double>  *El_ptvarcone30;
   vector<double>  *El_ptvarcone40;
   vector<double>  *El_topoetcone20;
   vector<double>  *El_topoetcone30;
   vector<double>  *El_topoetcone40;
   vector<bool>    *El_passIsoLooseTO;
   vector<bool>    *El_passIsoLoose;
   vector<bool>    *El_passIsoTight;
   vector<bool>    *El_passIsoGrad;
   vector<bool>    *El_passIsoGradCustomTight;
   vector<bool>    *El_passIsoGradCustom;
   vector<bool>    *El_passIsoGradLoose;
   vector<bool>    *El_trigMatch_e12_lhloose_L1EM10VH;
   vector<bool>    *El_trigMatch_e17_lhloose;
   vector<bool>    *El_trigMatch_e60_lhmedium;
   vector<bool>    *El_trigMatch_e24_lhmedium_iloose_L1EM20VH;
   Int_t           NJet;
   vector<double>  *Jet_eta;
   vector<double>  *Jet_phi;
   vector<double>  *Jet_pT;
   vector<double>  *Jet_E;
   vector<double>  *Jet_quality;
   vector<double>  *Jet_JVT;
   vector<double>  *Jet_JVTsf;
   vector<double>  *Jet_MV2c20;
   vector<double>  *Jet_MV2c10;
   vector<double>  *Jet_SFw;
   vector<int>     *Jet_ConeTruthLabel;
   vector<int>     *Jet_PartonTruthLabel;
   vector<int>     *Jet_HadronConeExclTruthLabel;
   vector<double>  *Jet_deltaR;
   vector<int>     *Jet_nTrk;
   vector<bool>    *Jet_passOR;
   Float_t         Etmiss_CST_Etx;
   Float_t         Etmiss_CST_Ety;
   Float_t         Etmiss_CST_Et;
   Float_t         Etmiss_TST_Etx;
   Float_t         Etmiss_TST_Ety;
   Float_t         Etmiss_TST_Et;
   Float_t         Etmiss_TSTterm_Etx;
   Float_t         Etmiss_TSTterm_Ety;
   Float_t         Etmiss_TSTterm_Et;
   Float_t         Etmiss_Truth_Etx;
   Float_t         Etmiss_Truth_Ety;
   Float_t         Etmiss_Truth_Et;
   Int_t           NTruthJet;
   vector<double>  *TruthJet_eta;
   vector<double>  *TruthJet_phi;
   vector<double>  *TruthJet_pT;
   vector<double>  *TruthJet_E;
   vector<int>     *TruthJet_ConeTruthLabel;
   vector<int>     *TruthJet_PartonTruthLabel;
   Int_t           NTruthL;
   vector<double>  *TruthL_eta;
   vector<double>  *TruthL_phi;
   vector<double>  *TruthL_pT;
   vector<int>     *TruthL_id;
   Int_t           SUSY_Spart_pdgId1;
   Int_t           SUSY_Spart_pdgId2;
   Int_t           SUSY_Gluino_decay1;
   Int_t           SUSY_Gluino_decay2;
   Float_t         GenFiltHT;
   Float_t         GenFiltMET;
   Float_t         PV_z;
   Int_t           Nvtx;
   Float_t         TruthX1;
   Float_t         TruthX2;
   Float_t         TruthQ;
   Float_t         SherpaNjetWeight;
   Int_t           TruthPDGID1;
   Int_t           TruthPDGID2;

   // List of branches
   TBranch        *b_HLT_e24_lhmedium_nod0_ivarloose;   //!
   TBranch        *b_HLT_e24_lhtight_nod0_ivarloose;   //!
   TBranch        *b_HLT_e26_lhtight_iloose;   //!
   TBranch        *b_HLT_e26_lhtight_ivarloose;   //!
   TBranch        *b_HLT_e26_lhtight_nod0_iloose;   //!
   TBranch        *b_HLT_e26_lhtight_nod0_ivarloose;   //!
   TBranch        *b_HLT_e60_lhmedium;   //!
   TBranch        *b_HLT_e60_lhmedium_nod0;   //!
   TBranch        *b_HLT_e120_lhloose_nod0;   //!
   TBranch        *b_HLT_e140_lhloose_nod0;   //!
   TBranch        *b_HLT_2e17_lhvloose_nod0;   //!
   TBranch        *b_HLT_2e15_lhvloose_nod0_L12EM13VH;   //!
   TBranch        *b_HLT_e24_lhmedium_e9_lhmedium;   //!
   TBranch        *b_HLT_e24_lhmedium_L1EM20VH;   //!
   TBranch        *b_HLT_e12_lhvloose_L12EM10VH;   //!
   TBranch        *b_HLT_e17_lhloose_2e9_lhloose;   //!
   TBranch        *b_HLT_mu24_ivarmedium;   //!
   TBranch        *b_HLT_mu24_imedium;   //!
   TBranch        *b_HLT_mu24_ivarloose;   //!
   TBranch        *b_HLT_mu24_iloose;   //!
   TBranch        *b_HLT_mu26_ivarmedium;   //!
   TBranch        *b_HLT_mu26_imedium;   //!
   TBranch        *b_HLT_mu20_ivarmedium_L1MU15;   //!
   TBranch        *b_HLT_mu20_imedium_L1MU15;   //!
   TBranch        *b_HLT_mu20_ivarloose_L1MU15;   //!
   TBranch        *b_HLT_mu20_iloose_L1MU15;   //!
   TBranch        *b_HLT_mu20_L1MU15;   //!
   TBranch        *b_HLT_mu20_mu8noL1;   //!
   TBranch        *b_HLT_mu22_mu8noL1;   //!
   TBranch        *b_HLT_mu22_2mu4noL1;   //!
   TBranch        *b_HLT_mu40;   //!
   TBranch        *b_HLT_mu50;   //!
   TBranch        *b_HLT_2mu10;   //!
   TBranch        *b_HLT_2mu10_nomucomb;   //!
   TBranch        *b_HLT_2mu14;   //!
   TBranch        *b_HLT_2mu14_nomucomb;   //!
   TBranch        *b_HLT_3mu6;   //!
   TBranch        *b_HLT_3mu6_msonly;   //!
   TBranch        *b_HLT_xe100_L1XE50;   //!
   TBranch        *b_HLT_xe80_mht_L1XE50;   //!
   TBranch        *b_HLT_xe90_mht_L1XE50;   //!
   TBranch        *b_HLT_xe110_pueta_L1XE50;   //!
   TBranch        *b_HLT_xe110_pufit_L1XE50;   //!
   TBranch        *b_HLT_xe100_tc_em_L1XE50;   //!
   TBranch        *b_HLT_xe80_tc_lcw_L1XE50;   //!
   TBranch        *b_HLT_xe90_tc_lcw_L1XE50;   //!
   TBranch        *b_HLT_xe80_tc_lcw_wEFMu_L1XE50;   //!
   TBranch        *b_HLT_e7_lhmedium_mu24;   //!
   TBranch        *b_HLT_e17_lhloose_nod0_mu14;   //!
   TBranch        *b_HLT_e26_lhmedium_nod0_L1EM22VHI_mu8noL1;   //!
   TBranch        *b_HLT_e24_lhmedium_nod0_L1EM22VHI_mu8noL1;   //!
   TBranch        *b_HLT_2e12_lhloose_L12EM10VH;   //!
   TBranch        *b_HLT_e17_lhloose_mu14;   //!
   TBranch        *b_HLT_mu18_mu8noL1;   //!
   TBranch        *b_HLT_xe70;   //!
   TBranch        *b_EventNumber;   //!
   TBranch        *b_ChannelNumber;   //!
   TBranch        *b_AvgMu;   //!
   TBranch        *b_EventWeight;   //!
   TBranch        *b_bcid;   //!
   TBranch        *b_LB;   //!
   TBranch        *b_RunNb;   //!
   TBranch        *b_DetError;   //!
   TBranch        *b_NMu;   //!
   TBranch        *b_Mu_eta;   //!
   TBranch        *b_Mu_phi;   //!
   TBranch        *b_Mu_pT;   //!
   TBranch        *b_Mu_SFw;   //!
   TBranch        *b_Mu_IsoSFw;   //!
   TBranch        *b_Mu_charge;   //!
   TBranch        *b_Mu_d0pvtx;   //!
   TBranch        *b_Mu_sigd0;   //!
   TBranch        *b_Mu_z0sinTheta;   //!
   TBranch        *b_Mu_isBad;   //!
   TBranch        *b_Mu_passOR;   //!
   TBranch        *b_Mu_isTight;   //!
   TBranch        *b_Mu_isCosmic;   //!
   TBranch        *b_Mu_type;   //!
   TBranch        *b_Mu_origin;   //!
   TBranch        *b_Mu_ptcone20;   //!
   TBranch        *b_Mu_ptcone30;   //!
   TBranch        *b_Mu_ptcone40;   //!
   TBranch        *b_Mu_ptvarcone20;   //!
   TBranch        *b_Mu_ptvarcone30;   //!
   TBranch        *b_Mu_ptvarcone40;   //!
   TBranch        *b_Mu_topoetcone20;   //!
   TBranch        *b_Mu_topoetcone30;   //!
   TBranch        *b_Mu_topoetcone40;   //!
   TBranch        *b_Mu_passIsoLooseTO;   //!
   TBranch        *b_Mu_passIsoLoose;   //!
   TBranch        *b_Mu_passIsoTight;   //!
   TBranch        *b_Mu_passIsoGrad;   //!
   TBranch        *b_Mu_passIsoGradCustomTight;   //!
   TBranch        *b_Mu_passIsoGradCustom;   //!
   TBranch        *b_Mu_passIsoGradLoose;   //!
   TBranch        *b_MuTrigSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50;   //!
   TBranch        *b_Mu_trigMatch_mu26_imedium;   //!
   TBranch        *b_Mu_trigMatch_mu50;   //!
   TBranch        *b_Mu_trigMatch_mu18_mu8noL1;   //!
   TBranch        *b_Mu_trigMatch_mu14;   //!
   TBranch        *b_Mu_trigMatch_mu18;   //!
   TBranch        *b_NEl;   //!
   TBranch        *b_El_eta;   //!
   TBranch        *b_El_etaclus;   //!
   TBranch        *b_El_phi;   //!
   TBranch        *b_El_pT;   //!
   TBranch        *b_El_E;   //!
   TBranch        *b_El_charge;   //!
   TBranch        *b_El_sigd0;   //!
   TBranch        *b_El_z0sinTheta;   //!
   TBranch        *b_El_d0pvtx;   //!
   TBranch        *b_El_passOR;   //!
   TBranch        *b_El_SFwMediumLH;   //!
   TBranch        *b_El_IsoSFwTightLH;   //!
   TBranch        *b_El_SFwTightLH;   //!
   TBranch        *b_El_SFwLooseAndBLayerLH;   //!
   TBranch        *b_El_SFwTrigMediumLH_e12_lhloose_L1EM10VH;   //!
   TBranch        *b_El_SFwTrigTightLH_e12_lhloose_L1EM10VH;   //!
   TBranch        *b_El_SFwTrigTightLH_e17_lhloose;   //!
   TBranch        *b_El_SFwTrigTightLH_single;   //!
   TBranch        *b_El_SFwTrigLooseAndBLayerLH_e12_lhloose_L1EM10VH;   //!
   TBranch        *b_El_isLooseAndBLayerLH;   //!
   TBranch        *b_El_isMediumLH;   //!
   TBranch        *b_El_isTightLH;   //!
   TBranch        *b_El_nBLayerHits;   //!
   TBranch        *b_El_expectBLayerHit;   //!
   TBranch        *b_El_type;   //!
   TBranch        *b_El_origin;   //!
   TBranch        *b_El_bkgMotherPdgId;   //!
   TBranch        *b_El_bkgOrigin;   //!
   TBranch        *b_El_chFlip;   //!
   TBranch        *b_El_ptcone20;   //!
   TBranch        *b_El_ptcone30;   //!
   TBranch        *b_El_ptcone40;   //!
   TBranch        *b_El_ptvarcone20;   //!
   TBranch        *b_El_ptvarcone30;   //!
   TBranch        *b_El_ptvarcone40;   //!
   TBranch        *b_El_topoetcone20;   //!
   TBranch        *b_El_topoetcone30;   //!
   TBranch        *b_El_topoetcone40;   //!
   TBranch        *b_El_passIsoLooseTO;   //!
   TBranch        *b_El_passIsoLoose;   //!
   TBranch        *b_El_passIsoTight;   //!
   TBranch        *b_El_passIsoGrad;   //!
   TBranch        *b_El_passIsoGradCustomTight;   //!
   TBranch        *b_El_passIsoGradCustom;   //!
   TBranch        *b_El_passIsoGradLoose;   //!
   TBranch        *b_El_trigMatch_e12_lhloose_L1EM10VH;   //!
   TBranch        *b_El_trigMatch_e17_lhloose;   //!
   TBranch        *b_El_trigMatch_e60_lhmedium;   //!
   TBranch        *b_El_trigMatch_e24_lhmedium_iloose_L1EM20VH;   //!
   TBranch        *b_NJet;   //!
   TBranch        *b_Jet_eta;   //!
   TBranch        *b_Jet_phi;   //!
   TBranch        *b_Jet_pT;   //!
   TBranch        *b_Jet_E;   //!
   TBranch        *b_Jet_quality;   //!
   TBranch        *b_Jet_JVT;   //!
   TBranch        *b_Jet_JVTsf;   //!
   TBranch        *b_Jet_MV2c20;   //!
   TBranch        *b_Jet_MV2c10;   //!
   TBranch        *b_Jet_SFw;   //!
   TBranch        *b_Jet_ConeTruthLabel;   //!
   TBranch        *b_Jet_PartonTruthLabel;   //!
   TBranch        *b_Jet_HadronConeExclTruthLabel;   //!
   TBranch        *b_Jet_deltaR;   //!
   TBranch        *b_Jet_nTrk;   //!
   TBranch        *b_Jet_passOR;   //!
   TBranch        *b_Etmiss_CST_Etx;   //!
   TBranch        *b_Etmiss_CST_Ety;   //!
   TBranch        *b_Etmiss_CST_Et;   //!
   TBranch        *b_Etmiss_TST_Etx;   //!
   TBranch        *b_Etmiss_TST_Ety;   //!
   TBranch        *b_Etmiss_TST_Et;   //!
   TBranch        *b_Etmiss_TSTterm_Etx;   //!
   TBranch        *b_Etmiss_TSTterm_Ety;   //!
   TBranch        *b_Etmiss_TSTterm_Et;   //!
   TBranch        *b_Etmiss_Truth_Etx;   //!
   TBranch        *b_Etmiss_Truth_Ety;   //!
   TBranch        *b_Etmiss_Truth_Et;   //!
   TBranch        *b_NTruthJet;   //!
   TBranch        *b_TruthJet_eta;   //!
   TBranch        *b_TruthJet_phi;   //!
   TBranch        *b_TruthJet_pT;   //!
   TBranch        *b_TruthJet_E;   //!
   TBranch        *b_TruthJet_ConeTruthLabel;   //!
   TBranch        *b_TruthJet_PartonTruthLabel;   //!
   TBranch        *b_NTruthL;   //!
   TBranch        *b_TruthL_eta;   //!
   TBranch        *b_TruthL_phi;   //!
   TBranch        *b_TruthL_pT;   //!
   TBranch        *b_TruthL_id;   //!
   TBranch        *b_SUSY_Spart_pdgId1;   //!
   TBranch        *b_SUSY_Spart_pdgId2;   //!
   TBranch        *b_SUSY_Gluino_decay1;   //!
   TBranch        *b_SUSY_Gluino_decay2;   //!
   TBranch        *b_GenFiltHT;   //!
   TBranch        *b_GenFiltMET;   //!
   TBranch        *b_PV_z;   //!
   TBranch        *b_Nvtx;   //!
   TBranch        *b_TruthX1;   //!
   TBranch        *b_TruthX2;   //!
   TBranch        *b_TruthQ;   //!
   TBranch        *b_SherpaNjetWeight;   //!
   TBranch        *b_TruthPDGID1;   //!
   TBranch        *b_TruthPDGID2;   //!

   AnaNtup(TTree * /*tree*/ =0) : fChain(0) { }
   virtual ~AnaNtup() { }
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

   ClassDef(AnaNtup,0);
};

#endif

#ifdef AnaNtup_cxx
void AnaNtup::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   Mu_eta = 0;
   Mu_phi = 0;
   Mu_pT = 0;
   Mu_SFw = 0;
   Mu_IsoSFw = 0;
   Mu_charge = 0;
   Mu_d0pvtx = 0;
   Mu_sigd0 = 0;
   Mu_z0sinTheta = 0;
   Mu_isBad = 0;
   Mu_passOR = 0;
   Mu_isTight = 0;
   Mu_isCosmic = 0;
   Mu_type = 0;
   Mu_origin = 0;
   Mu_ptcone20 = 0;
   Mu_ptcone30 = 0;
   Mu_ptcone40 = 0;
   Mu_ptvarcone20 = 0;
   Mu_ptvarcone30 = 0;
   Mu_ptvarcone40 = 0;
   Mu_topoetcone20 = 0;
   Mu_topoetcone30 = 0;
   Mu_topoetcone40 = 0;
   Mu_passIsoLooseTO = 0;
   Mu_passIsoLoose = 0;
   Mu_passIsoTight = 0;
   Mu_passIsoGrad = 0;
   Mu_passIsoGradCustomTight = 0;
   Mu_passIsoGradCustom = 0;
   Mu_passIsoGradLoose = 0;
   Mu_trigMatch_mu26_imedium = 0;
   Mu_trigMatch_mu50 = 0;
   Mu_trigMatch_mu18_mu8noL1 = 0;
   Mu_trigMatch_mu14 = 0;
   Mu_trigMatch_mu18 = 0;
   El_eta = 0;
   El_etaclus = 0;
   El_phi = 0;
   El_pT = 0;
   El_E = 0;
   El_charge = 0;
   El_sigd0 = 0;
   El_z0sinTheta = 0;
   El_d0pvtx = 0;
   El_passOR = 0;
   El_SFwMediumLH = 0;
   El_IsoSFwTightLH = 0;
   El_SFwTightLH = 0;
   El_SFwLooseAndBLayerLH = 0;
   El_SFwTrigMediumLH_e12_lhloose_L1EM10VH = 0;
   El_SFwTrigTightLH_e12_lhloose_L1EM10VH = 0;
   El_SFwTrigTightLH_e17_lhloose = 0;
   El_SFwTrigTightLH_single = 0;
   El_SFwTrigLooseAndBLayerLH_e12_lhloose_L1EM10VH = 0;
   El_isLooseAndBLayerLH = 0;
   El_isMediumLH = 0;
   El_isTightLH = 0;
   El_nBLayerHits = 0;
   El_expectBLayerHit = 0;
   El_type = 0;
   El_origin = 0;
   El_bkgMotherPdgId = 0;
   El_bkgOrigin = 0;
   El_chFlip = 0;
   El_ptcone20 = 0;
   El_ptcone30 = 0;
   El_ptcone40 = 0;
   El_ptvarcone20 = 0;
   El_ptvarcone30 = 0;
   El_ptvarcone40 = 0;
   El_topoetcone20 = 0;
   El_topoetcone30 = 0;
   El_topoetcone40 = 0;
   El_passIsoLooseTO = 0;
   El_passIsoLoose = 0;
   El_passIsoTight = 0;
   El_passIsoGrad = 0;
   El_passIsoGradCustomTight = 0;
   El_passIsoGradCustom = 0;
   El_passIsoGradLoose = 0;
   El_trigMatch_e12_lhloose_L1EM10VH = 0;
   El_trigMatch_e17_lhloose = 0;
   El_trigMatch_e60_lhmedium = 0;
   El_trigMatch_e24_lhmedium_iloose_L1EM20VH = 0;
   Jet_eta = 0;
   Jet_phi = 0;
   Jet_pT = 0;
   Jet_E = 0;
   Jet_quality = 0;
   Jet_JVT = 0;
   Jet_JVTsf = 0;
   Jet_MV2c20 = 0;
   Jet_MV2c10 = 0;
   Jet_SFw = 0;
   Jet_ConeTruthLabel = 0;
   Jet_PartonTruthLabel = 0;
   Jet_HadronConeExclTruthLabel = 0;
   Jet_deltaR = 0;
   Jet_nTrk = 0;
   Jet_passOR = 0;
   TruthJet_eta = 0;
   TruthJet_phi = 0;
   TruthJet_pT = 0;
   TruthJet_E = 0;
   TruthJet_ConeTruthLabel = 0;
   TruthJet_PartonTruthLabel = 0;
   TruthL_eta = 0;
   TruthL_phi = 0;
   TruthL_pT = 0;
   TruthL_id = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("HLT_e24_lhmedium_nod0_ivarloose", &HLT_e24_lhmedium_nod0_ivarloose, &b_HLT_e24_lhmedium_nod0_ivarloose);
   fChain->SetBranchAddress("HLT_e24_lhtight_nod0_ivarloose", &HLT_e24_lhtight_nod0_ivarloose, &b_HLT_e24_lhtight_nod0_ivarloose);
   fChain->SetBranchAddress("HLT_e26_lhtight_iloose", &HLT_e26_lhtight_iloose, &b_HLT_e26_lhtight_iloose);
   fChain->SetBranchAddress("HLT_e26_lhtight_ivarloose", &HLT_e26_lhtight_ivarloose, &b_HLT_e26_lhtight_ivarloose);
   fChain->SetBranchAddress("HLT_e26_lhtight_nod0_iloose", &HLT_e26_lhtight_nod0_iloose, &b_HLT_e26_lhtight_nod0_iloose);
   fChain->SetBranchAddress("HLT_e26_lhtight_nod0_ivarloose", &HLT_e26_lhtight_nod0_ivarloose, &b_HLT_e26_lhtight_nod0_ivarloose);
   fChain->SetBranchAddress("HLT_e60_lhmedium", &HLT_e60_lhmedium, &b_HLT_e60_lhmedium);
   fChain->SetBranchAddress("HLT_e60_lhmedium_nod0", &HLT_e60_lhmedium_nod0, &b_HLT_e60_lhmedium_nod0);
   fChain->SetBranchAddress("HLT_e120_lhloose_nod0", &HLT_e120_lhloose_nod0, &b_HLT_e120_lhloose_nod0);
   fChain->SetBranchAddress("HLT_e140_lhloose_nod0", &HLT_e140_lhloose_nod0, &b_HLT_e140_lhloose_nod0);
   fChain->SetBranchAddress("HLT_2e17_lhvloose_nod0", &HLT_2e17_lhvloose_nod0, &b_HLT_2e17_lhvloose_nod0);
   fChain->SetBranchAddress("HLT_2e15_lhvloose_nod0_L12EM13VH", &HLT_2e15_lhvloose_nod0_L12EM13VH, &b_HLT_2e15_lhvloose_nod0_L12EM13VH);
   fChain->SetBranchAddress("HLT_e24_lhmedium_e9_lhmedium", &HLT_e24_lhmedium_e9_lhmedium, &b_HLT_e24_lhmedium_e9_lhmedium);
   fChain->SetBranchAddress("HLT_e24_lhmedium_L1EM20VH", &HLT_e24_lhmedium_L1EM20VH, &b_HLT_e24_lhmedium_L1EM20VH);
   fChain->SetBranchAddress("HLT_e12_lhvloose_L12EM10VH", &HLT_e12_lhvloose_L12EM10VH, &b_HLT_e12_lhvloose_L12EM10VH);
   fChain->SetBranchAddress("HLT_e17_lhloose_2e9_lhloose", &HLT_e17_lhloose_2e9_lhloose, &b_HLT_e17_lhloose_2e9_lhloose);
   fChain->SetBranchAddress("HLT_mu24_ivarmedium", &HLT_mu24_ivarmedium, &b_HLT_mu24_ivarmedium);
   fChain->SetBranchAddress("HLT_mu24_imedium", &HLT_mu24_imedium, &b_HLT_mu24_imedium);
   fChain->SetBranchAddress("HLT_mu24_ivarloose", &HLT_mu24_ivarloose, &b_HLT_mu24_ivarloose);
   fChain->SetBranchAddress("HLT_mu24_iloose", &HLT_mu24_iloose, &b_HLT_mu24_iloose);
   fChain->SetBranchAddress("HLT_mu26_ivarmedium", &HLT_mu26_ivarmedium, &b_HLT_mu26_ivarmedium);
   fChain->SetBranchAddress("HLT_mu26_imedium", &HLT_mu26_imedium, &b_HLT_mu26_imedium);
   fChain->SetBranchAddress("HLT_mu20_ivarmedium_L1MU15", &HLT_mu20_ivarmedium_L1MU15, &b_HLT_mu20_ivarmedium_L1MU15);
   fChain->SetBranchAddress("HLT_mu20_imedium_L1MU15", &HLT_mu20_imedium_L1MU15, &b_HLT_mu20_imedium_L1MU15);
   fChain->SetBranchAddress("HLT_mu20_ivarloose_L1MU15", &HLT_mu20_ivarloose_L1MU15, &b_HLT_mu20_ivarloose_L1MU15);
   fChain->SetBranchAddress("HLT_mu20_iloose_L1MU15", &HLT_mu20_iloose_L1MU15, &b_HLT_mu20_iloose_L1MU15);
   fChain->SetBranchAddress("HLT_mu20_L1MU15", &HLT_mu20_L1MU15, &b_HLT_mu20_L1MU15);
   fChain->SetBranchAddress("HLT_mu20_mu8noL1", &HLT_mu20_mu8noL1, &b_HLT_mu20_mu8noL1);
   fChain->SetBranchAddress("HLT_mu22_mu8noL1", &HLT_mu22_mu8noL1, &b_HLT_mu22_mu8noL1);
   fChain->SetBranchAddress("HLT_mu22_2mu4noL1", &HLT_mu22_2mu4noL1, &b_HLT_mu22_2mu4noL1);
   fChain->SetBranchAddress("HLT_mu40", &HLT_mu40, &b_HLT_mu40);
   fChain->SetBranchAddress("HLT_mu50", &HLT_mu50, &b_HLT_mu50);
   fChain->SetBranchAddress("HLT_2mu10", &HLT_2mu10, &b_HLT_2mu10);
   fChain->SetBranchAddress("HLT_2mu10_nomucomb", &HLT_2mu10_nomucomb, &b_HLT_2mu10_nomucomb);
   fChain->SetBranchAddress("HLT_2mu14", &HLT_2mu14, &b_HLT_2mu14);
   fChain->SetBranchAddress("HLT_2mu14_nomucomb", &HLT_2mu14_nomucomb, &b_HLT_2mu14_nomucomb);
   fChain->SetBranchAddress("HLT_3mu6", &HLT_3mu6, &b_HLT_3mu6);
   fChain->SetBranchAddress("HLT_3mu6_msonly", &HLT_3mu6_msonly, &b_HLT_3mu6_msonly);
   fChain->SetBranchAddress("HLT_xe100_L1XE50", &HLT_xe100_L1XE50, &b_HLT_xe100_L1XE50);
   fChain->SetBranchAddress("HLT_xe80_mht_L1XE50", &HLT_xe80_mht_L1XE50, &b_HLT_xe80_mht_L1XE50);
   fChain->SetBranchAddress("HLT_xe90_mht_L1XE50", &HLT_xe90_mht_L1XE50, &b_HLT_xe90_mht_L1XE50);
   fChain->SetBranchAddress("HLT_xe110_pueta_L1XE50", &HLT_xe110_pueta_L1XE50, &b_HLT_xe110_pueta_L1XE50);
   fChain->SetBranchAddress("HLT_xe110_pufit_L1XE50", &HLT_xe110_pufit_L1XE50, &b_HLT_xe110_pufit_L1XE50);
   fChain->SetBranchAddress("HLT_xe100_tc_em_L1XE50", &HLT_xe100_tc_em_L1XE50, &b_HLT_xe100_tc_em_L1XE50);
   fChain->SetBranchAddress("HLT_xe80_tc_lcw_L1XE50", &HLT_xe80_tc_lcw_L1XE50, &b_HLT_xe80_tc_lcw_L1XE50);
   fChain->SetBranchAddress("HLT_xe90_tc_lcw_L1XE50", &HLT_xe90_tc_lcw_L1XE50, &b_HLT_xe90_tc_lcw_L1XE50);
   fChain->SetBranchAddress("HLT_xe80_tc_lcw_wEFMu_L1XE50", &HLT_xe80_tc_lcw_wEFMu_L1XE50, &b_HLT_xe80_tc_lcw_wEFMu_L1XE50);
   fChain->SetBranchAddress("HLT_e7_lhmedium_mu24", &HLT_e7_lhmedium_mu24, &b_HLT_e7_lhmedium_mu24);
   fChain->SetBranchAddress("HLT_e17_lhloose_nod0_mu14", &HLT_e17_lhloose_nod0_mu14, &b_HLT_e17_lhloose_nod0_mu14);
   fChain->SetBranchAddress("HLT_e26_lhmedium_nod0_L1EM22VHI_mu8noL1", &HLT_e26_lhmedium_nod0_L1EM22VHI_mu8noL1, &b_HLT_e26_lhmedium_nod0_L1EM22VHI_mu8noL1);
   fChain->SetBranchAddress("HLT_e24_lhmedium_nod0_L1EM22VHI_mu8noL1", &HLT_e24_lhmedium_nod0_L1EM22VHI_mu8noL1, &b_HLT_e24_lhmedium_nod0_L1EM22VHI_mu8noL1);
   fChain->SetBranchAddress("HLT_2e12_lhloose_L12EM10VH", &HLT_2e12_lhloose_L12EM10VH, &b_HLT_2e12_lhloose_L12EM10VH);
   fChain->SetBranchAddress("HLT_e17_lhloose_mu14", &HLT_e17_lhloose_mu14, &b_HLT_e17_lhloose_mu14);
   fChain->SetBranchAddress("HLT_mu18_mu8noL1", &HLT_mu18_mu8noL1, &b_HLT_mu18_mu8noL1);
   fChain->SetBranchAddress("HLT_xe70", &HLT_xe70, &b_HLT_xe70);
   fChain->SetBranchAddress("EventNumber", &EventNumber, &b_EventNumber);
   fChain->SetBranchAddress("ChannelNumber", &ChannelNumber, &b_ChannelNumber);
   fChain->SetBranchAddress("AvgMu", &AvgMu, &b_AvgMu);
   fChain->SetBranchAddress("EventWeight", &EventWeight, &b_EventWeight);
   fChain->SetBranchAddress("bcid", &bcid, &b_bcid);
   fChain->SetBranchAddress("LB", &LB, &b_LB);
   fChain->SetBranchAddress("RunNb", &RunNb, &b_RunNb);
   fChain->SetBranchAddress("DetError", &DetError, &b_DetError);
   fChain->SetBranchAddress("NMu", &NMu, &b_NMu);
   fChain->SetBranchAddress("Mu_eta", &Mu_eta, &b_Mu_eta);
   fChain->SetBranchAddress("Mu_phi", &Mu_phi, &b_Mu_phi);
   fChain->SetBranchAddress("Mu_pT", &Mu_pT, &b_Mu_pT);
   fChain->SetBranchAddress("Mu_SFw", &Mu_SFw, &b_Mu_SFw);
   fChain->SetBranchAddress("Mu_IsoSFw", &Mu_IsoSFw, &b_Mu_IsoSFw);
   fChain->SetBranchAddress("Mu_charge", &Mu_charge, &b_Mu_charge);
   fChain->SetBranchAddress("Mu_d0pvtx", &Mu_d0pvtx, &b_Mu_d0pvtx);
   fChain->SetBranchAddress("Mu_sigd0", &Mu_sigd0, &b_Mu_sigd0);
   fChain->SetBranchAddress("Mu_z0sinTheta", &Mu_z0sinTheta, &b_Mu_z0sinTheta);
   fChain->SetBranchAddress("Mu_isBad", &Mu_isBad, &b_Mu_isBad);
   fChain->SetBranchAddress("Mu_passOR", &Mu_passOR, &b_Mu_passOR);
   fChain->SetBranchAddress("Mu_isTight", &Mu_isTight, &b_Mu_isTight);
   fChain->SetBranchAddress("Mu_isCosmic", &Mu_isCosmic, &b_Mu_isCosmic);
   fChain->SetBranchAddress("Mu_type", &Mu_type, &b_Mu_type);
   fChain->SetBranchAddress("Mu_origin", &Mu_origin, &b_Mu_origin);
   fChain->SetBranchAddress("Mu_ptcone20", &Mu_ptcone20, &b_Mu_ptcone20);
   fChain->SetBranchAddress("Mu_ptcone30", &Mu_ptcone30, &b_Mu_ptcone30);
   fChain->SetBranchAddress("Mu_ptcone40", &Mu_ptcone40, &b_Mu_ptcone40);
   fChain->SetBranchAddress("Mu_ptvarcone20", &Mu_ptvarcone20, &b_Mu_ptvarcone20);
   fChain->SetBranchAddress("Mu_ptvarcone30", &Mu_ptvarcone30, &b_Mu_ptvarcone30);
   fChain->SetBranchAddress("Mu_ptvarcone40", &Mu_ptvarcone40, &b_Mu_ptvarcone40);
   fChain->SetBranchAddress("Mu_topoetcone20", &Mu_topoetcone20, &b_Mu_topoetcone20);
   fChain->SetBranchAddress("Mu_topoetcone30", &Mu_topoetcone30, &b_Mu_topoetcone30);
   fChain->SetBranchAddress("Mu_topoetcone40", &Mu_topoetcone40, &b_Mu_topoetcone40);
   fChain->SetBranchAddress("Mu_passIsoLooseTO", &Mu_passIsoLooseTO, &b_Mu_passIsoLooseTO);
   fChain->SetBranchAddress("Mu_passIsoLoose", &Mu_passIsoLoose, &b_Mu_passIsoLoose);
   fChain->SetBranchAddress("Mu_passIsoTight", &Mu_passIsoTight, &b_Mu_passIsoTight);
   fChain->SetBranchAddress("Mu_passIsoGrad", &Mu_passIsoGrad, &b_Mu_passIsoGrad);
   fChain->SetBranchAddress("Mu_passIsoGradCustomTight", &Mu_passIsoGradCustomTight, &b_Mu_passIsoGradCustomTight);
   fChain->SetBranchAddress("Mu_passIsoGradCustom", &Mu_passIsoGradCustom, &b_Mu_passIsoGradCustom);
   fChain->SetBranchAddress("Mu_passIsoGradLoose", &Mu_passIsoGradLoose, &b_Mu_passIsoGradLoose);
   fChain->SetBranchAddress("MuTrigSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50", &MuTrigSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50, &b_MuTrigSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50);
   fChain->SetBranchAddress("Mu_trigMatch_mu26_imedium", &Mu_trigMatch_mu26_imedium, &b_Mu_trigMatch_mu26_imedium);
   fChain->SetBranchAddress("Mu_trigMatch_mu50", &Mu_trigMatch_mu50, &b_Mu_trigMatch_mu50);
   fChain->SetBranchAddress("Mu_trigMatch_mu18_mu8noL1", &Mu_trigMatch_mu18_mu8noL1, &b_Mu_trigMatch_mu18_mu8noL1);
   fChain->SetBranchAddress("Mu_trigMatch_mu14", &Mu_trigMatch_mu14, &b_Mu_trigMatch_mu14);
   fChain->SetBranchAddress("Mu_trigMatch_mu18", &Mu_trigMatch_mu18, &b_Mu_trigMatch_mu18);
   fChain->SetBranchAddress("NEl", &NEl, &b_NEl);
   fChain->SetBranchAddress("El_eta", &El_eta, &b_El_eta);
   fChain->SetBranchAddress("El_etaclus", &El_etaclus, &b_El_etaclus);
   fChain->SetBranchAddress("El_phi", &El_phi, &b_El_phi);
   fChain->SetBranchAddress("El_pT", &El_pT, &b_El_pT);
   fChain->SetBranchAddress("El_E", &El_E, &b_El_E);
   fChain->SetBranchAddress("El_charge", &El_charge, &b_El_charge);
   fChain->SetBranchAddress("El_sigd0", &El_sigd0, &b_El_sigd0);
   fChain->SetBranchAddress("El_z0sinTheta", &El_z0sinTheta, &b_El_z0sinTheta);
   fChain->SetBranchAddress("El_d0pvtx", &El_d0pvtx, &b_El_d0pvtx);
   fChain->SetBranchAddress("El_passOR", &El_passOR, &b_El_passOR);
   fChain->SetBranchAddress("El_SFwMediumLH", &El_SFwMediumLH, &b_El_SFwMediumLH);
   fChain->SetBranchAddress("El_IsoSFwTightLH", &El_IsoSFwTightLH, &b_El_IsoSFwTightLH);
   fChain->SetBranchAddress("El_SFwTightLH", &El_SFwTightLH, &b_El_SFwTightLH);
   fChain->SetBranchAddress("El_SFwLooseAndBLayerLH", &El_SFwLooseAndBLayerLH, &b_El_SFwLooseAndBLayerLH);
   fChain->SetBranchAddress("El_SFwTrigMediumLH_e12_lhloose_L1EM10VH", &El_SFwTrigMediumLH_e12_lhloose_L1EM10VH, &b_El_SFwTrigMediumLH_e12_lhloose_L1EM10VH);
   fChain->SetBranchAddress("El_SFwTrigTightLH_e12_lhloose_L1EM10VH", &El_SFwTrigTightLH_e12_lhloose_L1EM10VH, &b_El_SFwTrigTightLH_e12_lhloose_L1EM10VH);
   fChain->SetBranchAddress("El_SFwTrigTightLH_e17_lhloose", &El_SFwTrigTightLH_e17_lhloose, &b_El_SFwTrigTightLH_e17_lhloose);
   fChain->SetBranchAddress("El_SFwTrigTightLH_single", &El_SFwTrigTightLH_single, &b_El_SFwTrigTightLH_single);
   fChain->SetBranchAddress("El_SFwTrigLooseAndBLayerLH_e12_lhloose_L1EM10VH", &El_SFwTrigLooseAndBLayerLH_e12_lhloose_L1EM10VH, &b_El_SFwTrigLooseAndBLayerLH_e12_lhloose_L1EM10VH);
   fChain->SetBranchAddress("El_isLooseAndBLayerLH", &El_isLooseAndBLayerLH, &b_El_isLooseAndBLayerLH);
   fChain->SetBranchAddress("El_isMediumLH", &El_isMediumLH, &b_El_isMediumLH);
   fChain->SetBranchAddress("El_isTightLH", &El_isTightLH, &b_El_isTightLH);
   fChain->SetBranchAddress("El_nBLayerHits", &El_nBLayerHits, &b_El_nBLayerHits);
   fChain->SetBranchAddress("El_expectBLayerHit", &El_expectBLayerHit, &b_El_expectBLayerHit);
   fChain->SetBranchAddress("El_type", &El_type, &b_El_type);
   fChain->SetBranchAddress("El_origin", &El_origin, &b_El_origin);
   fChain->SetBranchAddress("El_bkgMotherPdgId", &El_bkgMotherPdgId, &b_El_bkgMotherPdgId);
   fChain->SetBranchAddress("El_bkgOrigin", &El_bkgOrigin, &b_El_bkgOrigin);
   fChain->SetBranchAddress("El_chFlip", &El_chFlip, &b_El_chFlip);
   fChain->SetBranchAddress("El_ptcone20", &El_ptcone20, &b_El_ptcone20);
   fChain->SetBranchAddress("El_ptcone30", &El_ptcone30, &b_El_ptcone30);
   fChain->SetBranchAddress("El_ptcone40", &El_ptcone40, &b_El_ptcone40);
   fChain->SetBranchAddress("El_ptvarcone20", &El_ptvarcone20, &b_El_ptvarcone20);
   fChain->SetBranchAddress("El_ptvarcone30", &El_ptvarcone30, &b_El_ptvarcone30);
   fChain->SetBranchAddress("El_ptvarcone40", &El_ptvarcone40, &b_El_ptvarcone40);
   fChain->SetBranchAddress("El_topoetcone20", &El_topoetcone20, &b_El_topoetcone20);
   fChain->SetBranchAddress("El_topoetcone30", &El_topoetcone30, &b_El_topoetcone30);
   fChain->SetBranchAddress("El_topoetcone40", &El_topoetcone40, &b_El_topoetcone40);
   fChain->SetBranchAddress("El_passIsoLooseTO", &El_passIsoLooseTO, &b_El_passIsoLooseTO);
   fChain->SetBranchAddress("El_passIsoLoose", &El_passIsoLoose, &b_El_passIsoLoose);
   fChain->SetBranchAddress("El_passIsoTight", &El_passIsoTight, &b_El_passIsoTight);
   fChain->SetBranchAddress("El_passIsoGrad", &El_passIsoGrad, &b_El_passIsoGrad);
   fChain->SetBranchAddress("El_passIsoGradCustomTight", &El_passIsoGradCustomTight, &b_El_passIsoGradCustomTight);
   fChain->SetBranchAddress("El_passIsoGradCustom", &El_passIsoGradCustom, &b_El_passIsoGradCustom);
   fChain->SetBranchAddress("El_passIsoGradLoose", &El_passIsoGradLoose, &b_El_passIsoGradLoose);
   fChain->SetBranchAddress("El_trigMatch_e12_lhloose_L1EM10VH", &El_trigMatch_e12_lhloose_L1EM10VH, &b_El_trigMatch_e12_lhloose_L1EM10VH);
   fChain->SetBranchAddress("El_trigMatch_e17_lhloose", &El_trigMatch_e17_lhloose, &b_El_trigMatch_e17_lhloose);
   fChain->SetBranchAddress("El_trigMatch_e60_lhmedium", &El_trigMatch_e60_lhmedium, &b_El_trigMatch_e60_lhmedium);
   fChain->SetBranchAddress("El_trigMatch_e24_lhmedium_iloose_L1EM20VH", &El_trigMatch_e24_lhmedium_iloose_L1EM20VH, &b_El_trigMatch_e24_lhmedium_iloose_L1EM20VH);
   fChain->SetBranchAddress("NJet", &NJet, &b_NJet);
   fChain->SetBranchAddress("Jet_eta", &Jet_eta, &b_Jet_eta);
   fChain->SetBranchAddress("Jet_phi", &Jet_phi, &b_Jet_phi);
   fChain->SetBranchAddress("Jet_pT", &Jet_pT, &b_Jet_pT);
   fChain->SetBranchAddress("Jet_E", &Jet_E, &b_Jet_E);
   fChain->SetBranchAddress("Jet_quality", &Jet_quality, &b_Jet_quality);
   fChain->SetBranchAddress("Jet_JVT", &Jet_JVT, &b_Jet_JVT);
   fChain->SetBranchAddress("Jet_JVTsf", &Jet_JVTsf, &b_Jet_JVTsf);
   fChain->SetBranchAddress("Jet_MV2c20", &Jet_MV2c20, &b_Jet_MV2c20);
   fChain->SetBranchAddress("Jet_MV2c10", &Jet_MV2c10, &b_Jet_MV2c10);
   fChain->SetBranchAddress("Jet_SFw", &Jet_SFw, &b_Jet_SFw);
   fChain->SetBranchAddress("Jet_ConeTruthLabel", &Jet_ConeTruthLabel, &b_Jet_ConeTruthLabel);
   fChain->SetBranchAddress("Jet_PartonTruthLabel", &Jet_PartonTruthLabel, &b_Jet_PartonTruthLabel);
   fChain->SetBranchAddress("Jet_HadronConeExclTruthLabel", &Jet_HadronConeExclTruthLabel, &b_Jet_HadronConeExclTruthLabel);
   fChain->SetBranchAddress("Jet_deltaR", &Jet_deltaR, &b_Jet_deltaR);
   fChain->SetBranchAddress("Jet_nTrk", &Jet_nTrk, &b_Jet_nTrk);
   fChain->SetBranchAddress("Jet_passOR", &Jet_passOR, &b_Jet_passOR);
   fChain->SetBranchAddress("Etmiss_CST_Etx", &Etmiss_CST_Etx, &b_Etmiss_CST_Etx);
   fChain->SetBranchAddress("Etmiss_CST_Ety", &Etmiss_CST_Ety, &b_Etmiss_CST_Ety);
   fChain->SetBranchAddress("Etmiss_CST_Et", &Etmiss_CST_Et, &b_Etmiss_CST_Et);
   fChain->SetBranchAddress("Etmiss_TST_Etx", &Etmiss_TST_Etx, &b_Etmiss_TST_Etx);
   fChain->SetBranchAddress("Etmiss_TST_Ety", &Etmiss_TST_Ety, &b_Etmiss_TST_Ety);
   fChain->SetBranchAddress("Etmiss_TST_Et", &Etmiss_TST_Et, &b_Etmiss_TST_Et);
   fChain->SetBranchAddress("Etmiss_TSTterm_Etx", &Etmiss_TSTterm_Etx, &b_Etmiss_TSTterm_Etx);
   fChain->SetBranchAddress("Etmiss_TSTterm_Ety", &Etmiss_TSTterm_Ety, &b_Etmiss_TSTterm_Ety);
   fChain->SetBranchAddress("Etmiss_TSTterm_Et", &Etmiss_TSTterm_Et, &b_Etmiss_TSTterm_Et);
   fChain->SetBranchAddress("Etmiss_Truth_Etx", &Etmiss_Truth_Etx, &b_Etmiss_Truth_Etx);
   fChain->SetBranchAddress("Etmiss_Truth_Ety", &Etmiss_Truth_Ety, &b_Etmiss_Truth_Ety);
   fChain->SetBranchAddress("Etmiss_Truth_Et", &Etmiss_Truth_Et, &b_Etmiss_Truth_Et);
   fChain->SetBranchAddress("NTruthJet", &NTruthJet, &b_NTruthJet);
   fChain->SetBranchAddress("TruthJet_eta", &TruthJet_eta, &b_TruthJet_eta);
   fChain->SetBranchAddress("TruthJet_phi", &TruthJet_phi, &b_TruthJet_phi);
   fChain->SetBranchAddress("TruthJet_pT", &TruthJet_pT, &b_TruthJet_pT);
   fChain->SetBranchAddress("TruthJet_E", &TruthJet_E, &b_TruthJet_E);
   fChain->SetBranchAddress("TruthJet_ConeTruthLabel", &TruthJet_ConeTruthLabel, &b_TruthJet_ConeTruthLabel);
   fChain->SetBranchAddress("TruthJet_PartonTruthLabel", &TruthJet_PartonTruthLabel, &b_TruthJet_PartonTruthLabel);
   fChain->SetBranchAddress("NTruthL", &NTruthL, &b_NTruthL);
   fChain->SetBranchAddress("TruthL_eta", &TruthL_eta, &b_TruthL_eta);
   fChain->SetBranchAddress("TruthL_phi", &TruthL_phi, &b_TruthL_phi);
   fChain->SetBranchAddress("TruthL_pT", &TruthL_pT, &b_TruthL_pT);
   fChain->SetBranchAddress("TruthL_id", &TruthL_id, &b_TruthL_id);
   fChain->SetBranchAddress("SUSY_Spart_pdgId1", &SUSY_Spart_pdgId1, &b_SUSY_Spart_pdgId1);
   fChain->SetBranchAddress("SUSY_Spart_pdgId2", &SUSY_Spart_pdgId2, &b_SUSY_Spart_pdgId2);
   fChain->SetBranchAddress("SUSY_Gluino_decay1", &SUSY_Gluino_decay1, &b_SUSY_Gluino_decay1);
   fChain->SetBranchAddress("SUSY_Gluino_decay2", &SUSY_Gluino_decay2, &b_SUSY_Gluino_decay2);
   fChain->SetBranchAddress("GenFiltHT", &GenFiltHT, &b_GenFiltHT);
   fChain->SetBranchAddress("GenFiltMET", &GenFiltMET, &b_GenFiltMET);
   fChain->SetBranchAddress("PV_z", &PV_z, &b_PV_z);
   fChain->SetBranchAddress("Nvtx", &Nvtx, &b_Nvtx);
   fChain->SetBranchAddress("TruthX1", &TruthX1, &b_TruthX1);
   fChain->SetBranchAddress("TruthX2", &TruthX2, &b_TruthX2);
   fChain->SetBranchAddress("TruthQ", &TruthQ, &b_TruthQ);
   fChain->SetBranchAddress("SherpaNjetWeight", &SherpaNjetWeight, &b_SherpaNjetWeight);
   fChain->SetBranchAddress("TruthPDGID1", &TruthPDGID1, &b_TruthPDGID1);
   fChain->SetBranchAddress("TruthPDGID2", &TruthPDGID2, &b_TruthPDGID2);
}

Bool_t AnaNtup::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

#endif // #ifdef AnaNtup_cxx
