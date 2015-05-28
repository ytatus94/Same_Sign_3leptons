# SS_v04_bunch_spacing_study
The 25 ns vs 50 ns bunch spacing study for SS/3L+jets

v01:
Modify from AnaNtupV04Selector.h and AnaNtupV04Selector.C.
The run.cxx run the root file for cutflow comparison and can get the same results.
Comment out the lines include Jet_deltaR because the root file has no Jet_deltaR branch.

v02:
Uncomment the Jet_deltaR branch in codes.

v03:
Modify some histogram Fill() functions.
Fill pT, eta, phi using TLorentzVector in Fill().

v04:
Add new classes in header and source.
Modify run.cxx to run the 50ns root file.
user.jpoveda.t26_v04.50ns.110401.PowhegPythia_P2012_ttbar_nonallhad_output.root/
Add functions to make plots in run.cxx.

v05:
Fix the bug in FillMuon().
The order of the argument must match the order in the branch.

v06:
Comment out the lines include Jet_deltaR in header and source files.
Modify run.cxx to run 25ns root file.
user.jpoveda.t26_v04_p1872.204533.Herwigpp_UEEE4_CTEQ6L1_Gtt_G1000_T5000_L100_output.root.24717794
This version can get the same result as cutflow study.

v07:
Uncomment the lines linclude Jet_deltaR in header and source files.
Remove the unnecessary comment parts in header and source files.
Modify run.cxx to run over all 50ns root files under 
user.jpoveda.t26_v04.50ns.110401.PowhegPythia_P2012_ttbar_nonallhad_output.root/
Add the output.txt which lists the cutflow counts for 50ns root files.

v08:
Add root_ratio_plots.C. 
Modify run.cxx:
1. Add root files for tab, G1000_T5000_L100, and G1300_T5000_L700 for 50ns and 25ns.
2. Overload make_plot() function for plotting 3 histograms.

v09:
1. Add vec_OR_XXX and vec_signal_XXX.
2. Add fill functions for leptons, OR e/mu/jet/lepton, and signal e/mu/jet/lepton.
3. Change the unit for Pt, MET, and Meff to GeV.
4. Replace (obj.get_TLV()).Pt() to obj.get_pt().

v10:
1. Change root_ratio_plots.C to make_rato_plot.C which can make a single ratio plot.
2. Add a new root_ratio_plots.C which can make lots of ratio plots.
3. Fix bugs in run.cxx

v11:
For some unkonw reason, root_ratio_plots.C cannot upload to GitHub. Re-commit root_ratio_plots.C again.

v12:
Modify root_ratio_plots.C. Then new version includes 3 different input files.
