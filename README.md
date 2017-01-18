# SS_v47
This is SS/3L+jet cutflows study v44.

### Sample:
`user.othrif.t0812_v47.410080.MadGraphPythia8EvtGen_A14NNPDF23_4topSM.DAOD_SUSY2.s2608_r7725_p2666_output.root`

### Setting:


### v01-15-11. (newskim branch) Add python scripts
1. Change the `inputFilePath` in `RLE.cxx`
2. Add `h_eff_dRjet->Sumw2()` in `ytRealLeptonsEfficiency.cxx`
3. Add `ytBackground_subtraction.C` and `ytRelative_difference_of_efficiency.C` in `scripts/`
4. In `ytPlots.C`:
 *. Change the input file and path in 
 *. Save the figures of `baseline_and_signal_mll_distribution` for Mee and Mmumu
 *. Add one new function `yt_make_cut_efficiency_plot_2()`
 *. Re-calculate the efficiency for data in `yt_make_real_efficiency_plots()`
 *. Change the tab to space.
 *. Modify the cosmatic of figures.
5. Add python scripts


### v01-15-10. (newskim branch) Fixed the bugs for `El_DR_closest_Jet` and `Mu_DR_closest_Jet` for skim


### v01-15-09. (newskim branch) Change the input file path for the RLE


### v01-15-08. (newskim branch) Add deltaR part back to the framework
1. Add new codes for `Skimmed_MC` and `Skimmed_Data`
2. Turn on deltaR part in `yt_skim` and in `ytRealLeptonsEfficiency`.


### v01-15-07. (newskim branch) fix bug for filling `h_baseline_pt_eat_mll` & `h_signal_pt_eta_mll` twice.
1. Only fill `h_baseline_pt_eat_mll` & `h_signal_pt_eta_mll` once.


### v01-15-06. (newskim branch) Add `Avg_Mu` and  baseline/signal OSee/OSmumu mll histograms
1. Add histograms after skimming and can compare with the results before applying skim.
2. Comment out the unnecessary histograms.


### v01-15-05. (newskim branch) Add new `Skimmed_Data` and `Skimmed_MC` in `misc/`


### v01-15-04. (newskim branch) Use new `ytRealLeptonsEfficiency` 
1. Move the common methods back.(in `ytEventSelection`, `yt_optimization`, and `yt_skim`)
2. Use new `ytRealLeptonsEfficiency`


### v01-15-03. (newskim branch) Modify `ytEventSelection.cxx` to let skim works
1. In `yt_skim`: Change `initialize(TTree *tree, string process)` to `initialize(TTree *tree)`.
2. In `yt_optimization`: Change the type of variables related to normalization from `double` to `float`.
3. Change space in `Run.cxx`, `run_all_skim.sh`, and `yt_optimization.cxx`
4. In `ytEventSelection.cxx`:
   * Add the derivation weight back to the weight calculation.
   * Move `m_skim->set_isMC(isMC)`, `m_skim->set_isData(isData)`, and `m_skim->set_process(process)` from `execute ()` to `initialize ()`
   * Modify the method to fill `TLorentzVector` for electrons and muons.
5. Move `ytRealLeptonsEfficiency_Data` and `ytRealLeptonsEfficiency_MC` to `misc/`.
6. Add `ytRealLeptonsEfficiency`. So need to modify `LinkDef.h` and `RLE.cxx`.
7. Move common methods in `ytEventSelection`, `yt_optimization`, and `yt_skim` to `yt_useful_functions`.
8. In `yt_useful_functions`: modify the method to fill `TLorentzVector` for electrons and muons.
9. In `yt_skim.cxx` comment `calculate_mll()`.


### v01-15-02. (newskim branch) Add raw vectors back
* Raw vectors are needed. Otherwise, there is "out-of-range" problem and the framework aborted.


### v01-15-01. (newskim branch) Use new skim code.
1. Use new skim code which combine data and mc
2. Remove raw elec, muon, jets, lept vectors in skim code. Use baseline vectors to replace raw vectors.


### v01-15. (oldskim branch) Modify `ytEventSelection` to use the new skim code.


### v01-14. (oldskim branch) Change the implementation in `set_derivation_stat_weights()`
* Now the `h_derivation_stat_weights` is set in `set_derivation_stat_weights()`


### v01-13. (oldskim branch) Also use new single lepton trigger in `ytRealLeptonsEfficiency_MC`


### v01-12. (oldskim branch) Use new single lepton trigger and tag pt threshold.
1. tag pt threshold use 30 GeV (original use 25 GeV)
2. Single lepton trigger for 2016 uses: `HLT_e26_lhtight_nod0_ivarloose` and `HLT_mu26_ivarmedium`


### v01-11. (oldskim branch) Add two methods to calculate `AvgMu` and `pileup_weight` in `yt_cutflows`
*  Add `get_AvgMu()` and `get_pileup_weight()` in `yt_cutflows`


### v01-10. (oldskim branch) Scripts run in the background
* Let `run_all_RLE.sh` and `run_all_skim.sh` run in the background


### v01-09. (oldskim branch) Fix bug in `RLE.cxx`


### v01-08. (oldskim branch) Add two scripts to run skim and RLE
* Add `run_all_RLE.sh` and `run_all_skim.sh`
* Modify `RLE.cxx` to read different period of data.


### v01-07. (oldskim branch) Change lumi
The lumi for 2015 + 2016 data is 3.2 + 33.3 = 36.5 fb-1


### v01-06. (oldskim branch) Add RLE codes.
* new file:   `ytNUHM2Analysis/Root/ytRealLeptonsEfficiency_Data.cxx`
* new file:   `ytNUHM2Analysis/Root/ytRealLeptonsEfficiency_MC.cxx`
* new file:   `ytNUHM2Analysis/util/RLE.cxx`
* new file:   `ytNUHM2Analysis/ytNUHM2Analysis/ytRealLeptonsEfficiency_Data.h`
* new file:   `ytNUHM2Analysis/ytNUHM2Analysis/ytRealLeptonsEfficiency_MC.h`



### v01-05. (oldskim branch) Modify skim code so it can run over different dataset now.
* modified:   `ytNUHM2Analysis/Root/LinkDef.h`
* modified:   `ytNUHM2Analysis/Root/ytEventSelection.cxx`
* modified:   `ytNUHM2Analysis/Root/yt_skim_data.cxx`
* modified:   `ytNUHM2Analysis/util/Run.cxx`
* modified:   `ytNUHM2Analysis/ytNUHM2Analysis/yt_skim_data.h`


### v01-04. (oldskim branch) Change `cutflow.cxx` to `Run.cxx`.


### v01-03. (oldskim branch) Change the include path in skim codes.
Also add skim classes into `LinkDef.h`


### v01-02. (oldskim branch) Add skim codes
Add `yt_skim`, `yt_skim_MC`, `yt_skim_data` classes


### v01-01. (oldskim branch) Add `AnaNtup_Data` codes in `misc/`


### v01. First commit
This version can get the correct cutflow results.
