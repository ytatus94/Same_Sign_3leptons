#!/bin/bash
Run skim isMC Zee > skim_MC_Zee.log 2>&1 &
Run skim isMC Zmumu > skim_MC_Zmumu.log 2>&1 &
Run skim isMC ttbar > skim_MC_ttbar.log 2>&1 &
#Run skim isMC GG_ttn1 > skim_MC_GG_ttn1.log 2>&1 &
Run skim isMC sample=GG_ttn1_1100_5000_1    > skim_MC_GG_ttn1_1100_5000_1.log    2>&1 &
Run skim isMC sample=GG_ttn1_1200_5000_1    > skim_MC_GG_ttn1_1200_5000_1.log    2>&1 &
Run skim isMC sample=GG_ttn1_1200_5000_100  > skim_MC_GG_ttn1_1200_5000_100.log  2>&1 &
Run skim isMC sample=GG_ttn1_1300_5000_1    > skim_MC_GG_ttn1_1300_5000_1.log    2>&1 &
Run skim isMC sample=GG_ttn1_1300_5000_200  > skim_MC_GG_ttn1_1300_5000_200.log  2>&1 &
Run skim isMC sample=GG_ttn1_1400_5000_100  > skim_MC_GG_ttn1_1400_5000_100.log  2>&1 &
Run skim isMC sample=GG_ttn1_1500_5000_1    > skim_MC_GG_ttn1_1500_5000_1.log    2>&1 &
Run skim isMC sample=GG_ttn1_1600_5000_400  > skim_MC_GG_ttn1_1600_5000_400.log  2>&1 &
Run skim isMC sample=GG_ttn1_1600_5000_600  > skim_MC_GG_ttn1_1600_5000_600.log  2>&1 &
Run skim isMC sample=GG_ttn1_1700_5000_1    > skim_MC_GG_ttn1_1700_5000_1.log    2>&1 &
Run skim isMC sample=GG_ttn1_1700_5000_200  > skim_MC_GG_ttn1_1700_5000_200.log  2>&1 &
Run skim isMC sample=GG_ttn1_1700_5000_400  > skim_MC_GG_ttn1_1700_5000_400.log  2>&1 &
Run skim isMC sample=GG_ttn1_1800_5000_1    > skim_MC_GG_ttn1_1800_5000_1.log    2>&1 &
Run skim isMC sample=GG_ttn1_1800_5000_400  > skim_MC_GG_ttn1_1800_5000_400.log  2>&1 &
Run skim isMC sample=GG_ttn1_1800_5000_600  > skim_MC_GG_ttn1_1800_5000_600.log  2>&1 &
Run skim isMC sample=GG_ttn1_1900_5000_1    > skim_MC_GG_ttn1_1900_5000_1.log    2>&1 &
Run skim isMC sample=GG_ttn1_1900_5000_200  > skim_MC_GG_ttn1_1900_5000_200.log  2>&1 &
Run skim isMC sample=GG_ttn1_1900_5000_800  > skim_MC_GG_ttn1_1900_5000_800.log  2>&1 &
Run skim isMC sample=GG_ttn1_2000_5000_200  > skim_MC_GG_ttn1_2000_5000_200.log  2>&1 &
Run skim isMC sample=GG_ttn1_2000_5000_800  > skim_MC_GG_ttn1_2000_5000_800.log  2>&1 &
Run skim isMC sample=GG_ttn1_2000_5000_1000 > skim_MC_GG_ttn1_2000_5000_1000.log 2>&1 &
Run skim isMC sample=GG_ttn1_2100_5000_200  > skim_MC_GG_ttn1_2100_5000_200.log  2>&1 &
Run skim isMC sample=GG_ttn1_2100_5000_800  > skim_MC_GG_ttn1_2100_5000_800.log  2>&1 &
Run skim isMC sample=GG_ttn1_2100_5000_1000 > skim_MC_GG_ttn1_2100_5000_1000.log 2>&1 &
Run skim isMC sample=GG_ttn1_2200_5000_1    > skim_MC_GG_ttn1_2200_5000_1.log    2>&1 &
Run skim isMC sample=GG_ttn1_2300_5000_1200 > skim_MC_GG_ttn1_2300_5000_1200.log 2>&1 &
Run skim isMC sample=GG_ttn1_2400_5000_200  > skim_MC_GG_ttn1_2400_5000_200.log  2>&1 &
Run skim isMC sample=GG_ttn1_2400_5000_800  > skim_MC_GG_ttn1_2400_5000_800.log  2>&1 &
Run skim isMC sample=GG_ttn1_2400_5000_1200 > skim_MC_GG_ttn1_2400_5000_1200.log 2>&1 &

Run skim isData sample=merged_data15_periodD > skim_Data_merged_data15_periodD.log 2>&1 &
Run skim isData sample=merged_data15_periodE > skim_Data_merged_data15_periodE.log 2>&1 &
Run skim isData sample=merged_data15_periodF > skim_Data_merged_data15_periodF.log 2>&1 &
Run skim isData sample=merged_data15_periodG > skim_Data_merged_data15_periodG.log 2>&1 &
Run skim isData sample=merged_data15_periodH > skim_Data_merged_data15_periodH.log 2>&1 &
Run skim isData sample=merged_data15_periodJ > skim_Data_merged_data15_periodJ.log 2>&1 &

Run skim isData sample=merged_data16_periodA > skim_Data_merged_data16_periodA.log 2>&1 &
Run skim isData sample=merged_data16_periodB > skim_Data_merged_data16_periodB.log 2>&1 &
Run skim isData sample=merged_data16_periodC > skim_Data_merged_data16_periodC.log 2>&1 &
Run skim isData sample=merged_data16_periodD > skim_Data_merged_data16_periodD.log 2>&1 &
Run skim isData sample=merged_data16_periodE > skim_Data_merged_data16_periodE.log 2>&1 &
Run skim isData sample=merged_data16_periodF > skim_Data_merged_data16_periodF.log 2>&1 &
Run skim isData sample=merged_data16_periodG > skim_Data_merged_data16_periodG.log 2>&1 &
Run skim isData sample=merged_data16_periodI > skim_Data_merged_data16_periodI.log 2>&1 &
Run skim isData sample=merged_data16_periodK > skim_Data_merged_data16_periodK.log 2>&1 &
Run skim isData sample=merged_data16_periodL > skim_Data_merged_data16_periodL.log 2>&1 &
