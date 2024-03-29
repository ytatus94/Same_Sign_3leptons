# Same_Sign_3leptons
## This is repository for all SS/3L+jets studies.
All the old repositories related to the SS/3L+jets are merged into this larger repository.
Each old respository is put in different branch and all of the old repository histories are kept.

## List of branches
* SS_v04_cutflow_study
* SS_v04_bunch_spacing_study
* SS_v12
* SS_v16
* SS_v37 (master)
* SS_v37_debug
* SS_v39
* SS_v43
* SS_v44 (master)
* SS_v44_MC_weight_comparison
* SS_v47 (master)
* SS_v47_oldskim
* SS_v47_newskim
* SS_v47_hotfix
* SS_v50
* SS_v52

## Method to merge
From the master branch do the following steps:
```
git branch SS_vOLD # create a new branch for SS_vOLD
git checkout SS_vOLD # cd to the new branch
git remote add SS_vOLD path/to/SS_vOLD # link the remove to the GitHub
git fetch SS_vOLD # download everything to local
git merge --allow-unrelated-histories SS_vOLD/branch_name # merge with remote branch_name
```
The merge process has some conflicts in README.md, resolve it and add to the stage area.
```
git add . # stage all files
git remote rm SS_vOLD # disconnect with original SS_vOLD on GitHub
git commit -m "some messages here"
git push --set-upstream origin SS_vOLD
```
