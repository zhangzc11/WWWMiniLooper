#include "wwwtree.h"
wwwtree www;

void wwwtree::Init(TTree *tree) {

  tree->SetMakeClass(1);

  run_branch = tree->GetBranch("run");
  if (run_branch) run_branch->SetAddress(&run_);
  lumi_branch = tree->GetBranch("lumi");
  if (lumi_branch) lumi_branch->SetAddress(&lumi_);
  evt_branch = tree->GetBranch("evt");
  if (evt_branch) evt_branch->SetAddress(&evt_);
  CMS4path_branch = tree->GetBranch("CMS4path");
  if (CMS4path_branch) CMS4path_branch->SetAddress(&CMS4path_);
  CMS4index_branch = tree->GetBranch("CMS4index");
  if (CMS4index_branch) CMS4index_branch->SetAddress(&CMS4index_);
  lep_pt_branch = tree->GetBranch("lep_pt");
  if (lep_pt_branch) lep_pt_branch->SetAddress(&lep_pt_);
  lep_lostHits_branch = tree->GetBranch("lep_lostHits");
  if (lep_lostHits_branch) lep_lostHits_branch->SetAddress(&lep_lostHits_);
  lep_convVeto_branch = tree->GetBranch("lep_convVeto");
  if (lep_convVeto_branch) lep_convVeto_branch->SetAddress(&lep_convVeto_);
  lep_pass_VVV_cutbased_tight_branch = tree->GetBranch("lep_pass_VVV_cutbased_tight");
  if (lep_pass_VVV_cutbased_tight_branch) lep_pass_VVV_cutbased_tight_branch->SetAddress(&lep_pass_VVV_cutbased_tight_);
  lep_pdgId_branch = tree->GetBranch("lep_pdgId");
  if (lep_pdgId_branch) lep_pdgId_branch->SetAddress(&lep_pdgId_);
  lep_relIso03EAv2Lep_branch = tree->GetBranch("lep_relIso03EAv2Lep");
  if (lep_relIso03EAv2Lep_branch) lep_relIso03EAv2Lep_branch->SetAddress(&lep_relIso03EAv2Lep_);
  lep_MVA_branch = tree->GetBranch("lep_MVA");
  if (lep_MVA_branch) lep_MVA_branch->SetAddress(&lep_MVA_);
  jets_btag_score_branch = tree->GetBranch("jets_btag_score");
  if (jets_btag_score_branch) jets_btag_score_branch->SetAddress(&jets_btag_score_);
  met_pt_branch = tree->GetBranch("met_pt");
  if (met_pt_branch) met_pt_branch->SetAddress(&met_pt_);
  met_phi_branch = tree->GetBranch("met_phi");
  if (met_phi_branch) met_phi_branch->SetAddress(&met_phi_);
  nisoTrack_mt2_cleaned_VVV_cutbased_veto_branch = tree->GetBranch("nisoTrack_mt2_cleaned_VVV_cutbased_veto");
  if (nisoTrack_mt2_cleaned_VVV_cutbased_veto_branch) nisoTrack_mt2_cleaned_VVV_cutbased_veto_branch->SetAddress(&nisoTrack_mt2_cleaned_VVV_cutbased_veto_);
  nSFOS_branch = tree->GetBranch("nSFOS");
  if (nSFOS_branch) nSFOS_branch->SetAddress(&nSFOS_);
  nSFOSinZ_branch = tree->GetBranch("nSFOSinZ");
  if (nSFOSinZ_branch) nSFOSinZ_branch->SetAddress(&nSFOSinZ_);
  nj_branch = tree->GetBranch("nj");
  if (nj_branch) nj_branch->SetAddress(&nj_);
  nj30_branch = tree->GetBranch("nj30");
  if (nj30_branch) nj30_branch->SetAddress(&nj30_);
  nb_branch = tree->GetBranch("nb");
  if (nb_branch) nb_branch->SetAddress(&nb_);
  Mljmin_branch = tree->GetBranch("Mljmin");
  if (Mljmin_branch) Mljmin_branch->SetAddress(&Mljmin_);
  Mljmax_branch = tree->GetBranch("Mljmax");
  if (Mljmax_branch) Mljmax_branch->SetAddress(&Mljmax_);
  DRljmin_branch = tree->GetBranch("DRljmin");
  if (DRljmin_branch) DRljmin_branch->SetAddress(&DRljmin_);
  DRljmax_branch = tree->GetBranch("DRljmax");
  if (DRljmax_branch) DRljmax_branch->SetAddress(&DRljmax_);
  Mljmin3L_branch = tree->GetBranch("Mljmin3L");
  if (Mljmin3L_branch) Mljmin3L_branch->SetAddress(&Mljmin3L_);
  Mljmax3L_branch = tree->GetBranch("Mljmax3L");
  if (Mljmax3L_branch) Mljmax3L_branch->SetAddress(&Mljmax3L_);
  DRljmin3L_branch = tree->GetBranch("DRljmin3L");
  if (DRljmin3L_branch) DRljmin3L_branch->SetAddress(&DRljmin3L_);
  DRljmax3L_branch = tree->GetBranch("DRljmax3L");
  if (DRljmax3L_branch) DRljmax3L_branch->SetAddress(&DRljmax3L_);
  Mjj_branch = tree->GetBranch("Mjj");
  if (Mjj_branch) Mjj_branch->SetAddress(&Mjj_);
  MjjVBF_branch = tree->GetBranch("MjjVBF");
  if (MjjVBF_branch) MjjVBF_branch->SetAddress(&MjjVBF_);
  DetajjVBF_branch = tree->GetBranch("DetajjVBF");
  if (DetajjVBF_branch) DetajjVBF_branch->SetAddress(&DetajjVBF_);
  MjjL_branch = tree->GetBranch("MjjL");
  if (MjjL_branch) MjjL_branch->SetAddress(&MjjL_);
  DetajjL_branch = tree->GetBranch("DetajjL");
  if (DetajjL_branch) DetajjL_branch->SetAddress(&DetajjL_);
  MllSS_branch = tree->GetBranch("MllSS");
  if (MllSS_branch) MllSS_branch->SetAddress(&MllSS_);
  Mll3L_branch = tree->GetBranch("Mll3L");
  if (Mll3L_branch) Mll3L_branch->SetAddress(&Mll3L_);
  Mee3L_branch = tree->GetBranch("Mee3L");
  if (Mee3L_branch) Mee3L_branch->SetAddress(&Mee3L_);
  Mll3L1_branch = tree->GetBranch("Mll3L1");
  if (Mll3L1_branch) Mll3L1_branch->SetAddress(&Mll3L1_);
  M3l_branch = tree->GetBranch("M3l");
  if (M3l_branch) M3l_branch->SetAddress(&M3l_);
  Pt3l_branch = tree->GetBranch("Pt3l");
  if (Pt3l_branch) Pt3l_branch->SetAddress(&Pt3l_);
  Pt2l_branch = tree->GetBranch("Pt2l");
  if (Pt2l_branch) Pt2l_branch->SetAddress(&Pt2l_);
  DPhi3lMET_branch = tree->GetBranch("DPhi3lMET");
  if (DPhi3lMET_branch) DPhi3lMET_branch->SetAddress(&DPhi3lMET_);
  MTmax_branch = tree->GetBranch("MTmax");
  if (MTmax_branch) MTmax_branch->SetAddress(&MTmax_);
  MTmin_branch = tree->GetBranch("MTmin");
  if (MTmin_branch) MTmin_branch->SetAddress(&MTmin_);
  MT3rd_branch = tree->GetBranch("MT3rd");
  if (MT3rd_branch) MT3rd_branch->SetAddress(&MT3rd_);
  MTmax3L_branch = tree->GetBranch("MTmax3L");
  if (MTmax3L_branch) MTmax3L_branch->SetAddress(&MTmax3L_);
  event_weight_branch = tree->GetBranch("event_weight");
  if (event_weight_branch) event_weight_branch->SetAddress(&event_weight_);
  trigger_scale_factor_branch = tree->GetBranch("trigger_scale_factor");
  if (trigger_scale_factor_branch) trigger_scale_factor_branch->SetAddress(&trigger_scale_factor_);
  lepton_scale_factor_branch = tree->GetBranch("lepton_scale_factor");
  if (lepton_scale_factor_branch) lepton_scale_factor_branch->SetAddress(&lepton_scale_factor_);
  btag_scale_factor_branch = tree->GetBranch("btag_scale_factor");
  if (btag_scale_factor_branch) btag_scale_factor_branch->SetAddress(&btag_scale_factor_);
  SRSSee_branch = tree->GetBranch("SRSSee");
  if (SRSSee_branch) SRSSee_branch->SetAddress(&SRSSee_);
  SRSSem_branch = tree->GetBranch("SRSSem");
  if (SRSSem_branch) SRSSem_branch->SetAddress(&SRSSem_);
  SRSSmm_branch = tree->GetBranch("SRSSmm");
  if (SRSSmm_branch) SRSSmm_branch->SetAddress(&SRSSmm_);
  SR0SFOS_branch = tree->GetBranch("SR0SFOS");
  if (SR0SFOS_branch) SR0SFOS_branch->SetAddress(&SR0SFOS_);
  SR1SFOS_branch = tree->GetBranch("SR1SFOS");
  if (SR1SFOS_branch) SR1SFOS_branch->SetAddress(&SR1SFOS_);
  SR2SFOS_branch = tree->GetBranch("SR2SFOS");
  if (SR2SFOS_branch) SR2SFOS_branch->SetAddress(&SR2SFOS_);
  SRSSeeMjjInFull_branch = tree->GetBranch("SRSSeeMjjInFull");
  if (SRSSeeMjjInFull_branch) SRSSeeMjjInFull_branch->SetAddress(&SRSSeeMjjInFull_);
  SRSSemMjjInFull_branch = tree->GetBranch("SRSSemMjjInFull");
  if (SRSSemMjjInFull_branch) SRSSemMjjInFull_branch->SetAddress(&SRSSemMjjInFull_);
  SRSSmmMjjInFull_branch = tree->GetBranch("SRSSmmMjjInFull");
  if (SRSSmmMjjInFull_branch) SRSSmmMjjInFull_branch->SetAddress(&SRSSmmMjjInFull_);
  SRSSeeMjjOutFull_branch = tree->GetBranch("SRSSeeMjjOutFull");
  if (SRSSeeMjjOutFull_branch) SRSSeeMjjOutFull_branch->SetAddress(&SRSSeeMjjOutFull_);
  SRSSemMjjOutFull_branch = tree->GetBranch("SRSSemMjjOutFull");
  if (SRSSemMjjOutFull_branch) SRSSemMjjOutFull_branch->SetAddress(&SRSSemMjjOutFull_);
  SRSSmmMjjOutFull_branch = tree->GetBranch("SRSSmmMjjOutFull");
  if (SRSSmmMjjOutFull_branch) SRSSmmMjjOutFull_branch->SetAddress(&SRSSmmMjjOutFull_);
  SRSS1JeeFull_branch = tree->GetBranch("SRSS1JeeFull");
  if (SRSS1JeeFull_branch) SRSS1JeeFull_branch->SetAddress(&SRSS1JeeFull_);
  SRSS1JemFull_branch = tree->GetBranch("SRSS1JemFull");
  if (SRSS1JemFull_branch) SRSS1JemFull_branch->SetAddress(&SRSS1JemFull_);
  SRSS1JmmFull_branch = tree->GetBranch("SRSS1JmmFull");
  if (SRSS1JmmFull_branch) SRSS1JmmFull_branch->SetAddress(&SRSS1JmmFull_);
  SR0SFOSFull_branch = tree->GetBranch("SR0SFOSFull");
  if (SR0SFOSFull_branch) SR0SFOSFull_branch->SetAddress(&SR0SFOSFull_);
  SR1SFOSFull_branch = tree->GetBranch("SR1SFOSFull");
  if (SR1SFOSFull_branch) SR1SFOSFull_branch->SetAddress(&SR1SFOSFull_);
  SR2SFOSFull_branch = tree->GetBranch("SR2SFOSFull");
  if (SR2SFOSFull_branch) SR2SFOSFull_branch->SetAddress(&SR2SFOSFull_);

  tree->SetMakeClass(0);
}

void wwwtree::GetEntry(unsigned int idx) {
  // this only marks branches as not loaded, saving a lot of time
  index = idx;
  run_isLoaded = false;
  lumi_isLoaded = false;
  evt_isLoaded = false;
  CMS4path_isLoaded = false;
  CMS4index_isLoaded = false;
  lep_pt_isLoaded = false;
  lep_lostHits_isLoaded = false;
  lep_convVeto_isLoaded = false;
  lep_pass_VVV_cutbased_tight_isLoaded = false;
  lep_pdgId_isLoaded = false;
  lep_relIso03EAv2Lep_isLoaded = false;
  lep_MVA_isLoaded = false;
  jets_btag_score_isLoaded = false;
  met_pt_isLoaded = false;
  met_phi_isLoaded = false;
  nisoTrack_mt2_cleaned_VVV_cutbased_veto_isLoaded = false;
  nSFOS_isLoaded = false;
  nSFOSinZ_isLoaded = false;
  nj_isLoaded = false;
  nj30_isLoaded = false;
  nb_isLoaded = false;
  Mljmin_isLoaded = false;
  Mljmax_isLoaded = false;
  DRljmin_isLoaded = false;
  DRljmax_isLoaded = false;
  Mljmin3L_isLoaded = false;
  Mljmax3L_isLoaded = false;
  DRljmin3L_isLoaded = false;
  DRljmax3L_isLoaded = false;
  Mjj_isLoaded = false;
  MjjVBF_isLoaded = false;
  DetajjVBF_isLoaded = false;
  MjjL_isLoaded = false;
  DetajjL_isLoaded = false;
  MllSS_isLoaded = false;
  Mll3L_isLoaded = false;
  Mee3L_isLoaded = false;
  Mll3L1_isLoaded = false;
  M3l_isLoaded = false;
  Pt3l_isLoaded = false;
  Pt2l_isLoaded = false;
  DPhi3lMET_isLoaded = false;
  MTmax_isLoaded = false;
  MTmin_isLoaded = false;
  MT3rd_isLoaded = false;
  MTmax3L_isLoaded = false;
  event_weight_isLoaded = false;
  trigger_scale_factor_isLoaded = false;
  lepton_scale_factor_isLoaded = false;
  btag_scale_factor_isLoaded = false;
  SRSSee_isLoaded = false;
  SRSSem_isLoaded = false;
  SRSSmm_isLoaded = false;
  SR0SFOS_isLoaded = false;
  SR1SFOS_isLoaded = false;
  SR2SFOS_isLoaded = false;
  SRSSeeMjjInFull_isLoaded = false;
  SRSSemMjjInFull_isLoaded = false;
  SRSSmmMjjInFull_isLoaded = false;
  SRSSeeMjjOutFull_isLoaded = false;
  SRSSemMjjOutFull_isLoaded = false;
  SRSSmmMjjOutFull_isLoaded = false;
  SRSS1JeeFull_isLoaded = false;
  SRSS1JemFull_isLoaded = false;
  SRSS1JmmFull_isLoaded = false;
  SR0SFOSFull_isLoaded = false;
  SR1SFOSFull_isLoaded = false;
  SR2SFOSFull_isLoaded = false;
}

void wwwtree::LoadAllBranches() {
  // load all branches
  if (run_branch != 0) run();
  if (lumi_branch != 0) lumi();
  if (evt_branch != 0) evt();
  if (CMS4path_branch != 0) CMS4path();
  if (CMS4index_branch != 0) CMS4index();
  if (lep_pt_branch != 0) lep_pt();
  if (lep_lostHits_branch != 0) lep_lostHits();
  if (lep_convVeto_branch != 0) lep_convVeto();
  if (lep_pass_VVV_cutbased_tight_branch != 0) lep_pass_VVV_cutbased_tight();
  if (lep_pdgId_branch != 0) lep_pdgId();
  if (lep_relIso03EAv2Lep_branch != 0) lep_relIso03EAv2Lep();
  if (lep_MVA_branch != 0) lep_MVA();
  if (jets_btag_score_branch != 0) jets_btag_score();
  if (met_pt_branch != 0) met_pt();
  if (met_phi_branch != 0) met_phi();
  if (nisoTrack_mt2_cleaned_VVV_cutbased_veto_branch != 0) nisoTrack_mt2_cleaned_VVV_cutbased_veto();
  if (nSFOS_branch != 0) nSFOS();
  if (nSFOSinZ_branch != 0) nSFOSinZ();
  if (nj_branch != 0) nj();
  if (nj30_branch != 0) nj30();
  if (nb_branch != 0) nb();
  if (Mljmin_branch != 0) Mljmin();
  if (Mljmax_branch != 0) Mljmax();
  if (DRljmin_branch != 0) DRljmin();
  if (DRljmax_branch != 0) DRljmax();
  if (Mljmin3L_branch != 0) Mljmin3L();
  if (Mljmax3L_branch != 0) Mljmax3L();
  if (DRljmin3L_branch != 0) DRljmin3L();
  if (DRljmax3L_branch != 0) DRljmax3L();
  if (Mjj_branch != 0) Mjj();
  if (MjjVBF_branch != 0) MjjVBF();
  if (DetajjVBF_branch != 0) DetajjVBF();
  if (MjjL_branch != 0) MjjL();
  if (DetajjL_branch != 0) DetajjL();
  if (MllSS_branch != 0) MllSS();
  if (Mll3L_branch != 0) Mll3L();
  if (Mee3L_branch != 0) Mee3L();
  if (Mll3L1_branch != 0) Mll3L1();
  if (M3l_branch != 0) M3l();
  if (Pt3l_branch != 0) Pt3l();
  if (Pt2l_branch != 0) Pt2l();
  if (DPhi3lMET_branch != 0) DPhi3lMET();
  if (MTmax_branch != 0) MTmax();
  if (MTmin_branch != 0) MTmin();
  if (MT3rd_branch != 0) MT3rd();
  if (MTmax3L_branch != 0) MTmax3L();
  if (event_weight_branch != 0) event_weight();
  if (trigger_scale_factor_branch != 0) trigger_scale_factor();
  if (lepton_scale_factor_branch != 0) lepton_scale_factor();
  if (btag_scale_factor_branch != 0) btag_scale_factor();
  if (SRSSee_branch != 0) SRSSee();
  if (SRSSem_branch != 0) SRSSem();
  if (SRSSmm_branch != 0) SRSSmm();
  if (SR0SFOS_branch != 0) SR0SFOS();
  if (SR1SFOS_branch != 0) SR1SFOS();
  if (SR2SFOS_branch != 0) SR2SFOS();
  if (SRSSeeMjjInFull_branch != 0) SRSSeeMjjInFull();
  if (SRSSemMjjInFull_branch != 0) SRSSemMjjInFull();
  if (SRSSmmMjjInFull_branch != 0) SRSSmmMjjInFull();
  if (SRSSeeMjjOutFull_branch != 0) SRSSeeMjjOutFull();
  if (SRSSemMjjOutFull_branch != 0) SRSSemMjjOutFull();
  if (SRSSmmMjjOutFull_branch != 0) SRSSmmMjjOutFull();
  if (SRSS1JeeFull_branch != 0) SRSS1JeeFull();
  if (SRSS1JemFull_branch != 0) SRSS1JemFull();
  if (SRSS1JmmFull_branch != 0) SRSS1JmmFull();
  if (SR0SFOSFull_branch != 0) SR0SFOSFull();
  if (SR1SFOSFull_branch != 0) SR1SFOSFull();
  if (SR2SFOSFull_branch != 0) SR2SFOSFull();
}

const int &wwwtree::run() {
  if (not run_isLoaded) {
    if (run_branch != 0) {
      run_branch->GetEntry(index);
    } else {
      printf("branch run_branch does not exist!\n");
      exit(1);
    }
    run_isLoaded = true;
  }
  return run_;
}

const int &wwwtree::lumi() {
  if (not lumi_isLoaded) {
    if (lumi_branch != 0) {
      lumi_branch->GetEntry(index);
    } else {
      printf("branch lumi_branch does not exist!\n");
      exit(1);
    }
    lumi_isLoaded = true;
  }
  return lumi_;
}

const unsigned long long &wwwtree::evt() {
  if (not evt_isLoaded) {
    if (evt_branch != 0) {
      evt_branch->GetEntry(index);
    } else {
      printf("branch evt_branch does not exist!\n");
      exit(1);
    }
    evt_isLoaded = true;
  }
  return evt_;
}

const TString &wwwtree::CMS4path() {
  if (not CMS4path_isLoaded) {
    if (CMS4path_branch != 0) {
      CMS4path_branch->GetEntry(index);
    } else {
      printf("branch CMS4path_branch does not exist!\n");
      exit(1);
    }
    CMS4path_isLoaded = true;
  }
  return *CMS4path_;
}

const int &wwwtree::CMS4index() {
  if (not CMS4index_isLoaded) {
    if (CMS4index_branch != 0) {
      CMS4index_branch->GetEntry(index);
    } else {
      printf("branch CMS4index_branch does not exist!\n");
      exit(1);
    }
    CMS4index_isLoaded = true;
  }
  return CMS4index_;
}

const vector<float> &wwwtree::lep_pt() {
  if (not lep_pt_isLoaded) {
    if (lep_pt_branch != 0) {
      lep_pt_branch->GetEntry(index);
    } else {
      printf("branch lep_pt_branch does not exist!\n");
      exit(1);
    }
    lep_pt_isLoaded = true;
  }
  return *lep_pt_;
}

const vector<int> &wwwtree::lep_lostHits() {
  if (not lep_lostHits_isLoaded) {
    if (lep_lostHits_branch != 0) {
      lep_lostHits_branch->GetEntry(index);
    } else {
      printf("branch lep_lostHits_branch does not exist!\n");
      exit(1);
    }
    lep_lostHits_isLoaded = true;
  }
  return *lep_lostHits_;
}

const vector<int> &wwwtree::lep_convVeto() {
  if (not lep_convVeto_isLoaded) {
    if (lep_convVeto_branch != 0) {
      lep_convVeto_branch->GetEntry(index);
    } else {
      printf("branch lep_convVeto_branch does not exist!\n");
      exit(1);
    }
    lep_convVeto_isLoaded = true;
  }
  return *lep_convVeto_;
}

const vector<int> &wwwtree::lep_pass_VVV_cutbased_tight() {
  if (not lep_pass_VVV_cutbased_tight_isLoaded) {
    if (lep_pass_VVV_cutbased_tight_branch != 0) {
      lep_pass_VVV_cutbased_tight_branch->GetEntry(index);
    } else {
      printf("branch lep_pass_VVV_cutbased_tight_branch does not exist!\n");
      exit(1);
    }
    lep_pass_VVV_cutbased_tight_isLoaded = true;
  }
  return *lep_pass_VVV_cutbased_tight_;
}

const vector<int> &wwwtree::lep_pdgId() {
  if (not lep_pdgId_isLoaded) {
    if (lep_pdgId_branch != 0) {
      lep_pdgId_branch->GetEntry(index);
    } else {
      printf("branch lep_pdgId_branch does not exist!\n");
      exit(1);
    }
    lep_pdgId_isLoaded = true;
  }
  return *lep_pdgId_;
}

const vector<float> &wwwtree::lep_relIso03EAv2Lep() {
  if (not lep_relIso03EAv2Lep_isLoaded) {
    if (lep_relIso03EAv2Lep_branch != 0) {
      lep_relIso03EAv2Lep_branch->GetEntry(index);
    } else {
      printf("branch lep_relIso03EAv2Lep_branch does not exist!\n");
      exit(1);
    }
    lep_relIso03EAv2Lep_isLoaded = true;
  }
  return *lep_relIso03EAv2Lep_;
}

const vector<float> &wwwtree::lep_MVA() {
  if (not lep_MVA_isLoaded) {
    if (lep_MVA_branch != 0) {
      lep_MVA_branch->GetEntry(index);
    } else {
      printf("branch lep_MVA_branch does not exist!\n");
      exit(1);
    }
    lep_MVA_isLoaded = true;
  }
  return *lep_MVA_;
}

const vector<float> &wwwtree::jets_btag_score() {
  if (not jets_btag_score_isLoaded) {
    if (jets_btag_score_branch != 0) {
      jets_btag_score_branch->GetEntry(index);
    } else {
      printf("branch jets_btag_score_branch does not exist!\n");
      exit(1);
    }
    jets_btag_score_isLoaded = true;
  }
  return *jets_btag_score_;
}

const float &wwwtree::met_pt() {
  if (not met_pt_isLoaded) {
    if (met_pt_branch != 0) {
      met_pt_branch->GetEntry(index);
    } else {
      printf("branch met_pt_branch does not exist!\n");
      exit(1);
    }
    met_pt_isLoaded = true;
  }
  return met_pt_;
}

const float &wwwtree::met_phi() {
  if (not met_phi_isLoaded) {
    if (met_phi_branch != 0) {
      met_phi_branch->GetEntry(index);
    } else {
      printf("branch met_phi_branch does not exist!\n");
      exit(1);
    }
    met_phi_isLoaded = true;
  }
  return met_phi_;
}

const int &wwwtree::nisoTrack_mt2_cleaned_VVV_cutbased_veto() {
  if (not nisoTrack_mt2_cleaned_VVV_cutbased_veto_isLoaded) {
    if (nisoTrack_mt2_cleaned_VVV_cutbased_veto_branch != 0) {
      nisoTrack_mt2_cleaned_VVV_cutbased_veto_branch->GetEntry(index);
    } else {
      printf("branch nisoTrack_mt2_cleaned_VVV_cutbased_veto_branch does not exist!\n");
      exit(1);
    }
    nisoTrack_mt2_cleaned_VVV_cutbased_veto_isLoaded = true;
  }
  return nisoTrack_mt2_cleaned_VVV_cutbased_veto_;
}

const int &wwwtree::nSFOS() {
  if (not nSFOS_isLoaded) {
    if (nSFOS_branch != 0) {
      nSFOS_branch->GetEntry(index);
    } else {
      printf("branch nSFOS_branch does not exist!\n");
      exit(1);
    }
    nSFOS_isLoaded = true;
  }
  return nSFOS_;
}

const int &wwwtree::nSFOSinZ() {
  if (not nSFOSinZ_isLoaded) {
    if (nSFOSinZ_branch != 0) {
      nSFOSinZ_branch->GetEntry(index);
    } else {
      printf("branch nSFOSinZ_branch does not exist!\n");
      exit(1);
    }
    nSFOSinZ_isLoaded = true;
  }
  return nSFOSinZ_;
}

const int &wwwtree::nj() {
  if (not nj_isLoaded) {
    if (nj_branch != 0) {
      nj_branch->GetEntry(index);
    } else {
      printf("branch nj_branch does not exist!\n");
      exit(1);
    }
    nj_isLoaded = true;
  }
  return nj_;
}

const int &wwwtree::nj30() {
  if (not nj30_isLoaded) {
    if (nj30_branch != 0) {
      nj30_branch->GetEntry(index);
    } else {
      printf("branch nj30_branch does not exist!\n");
      exit(1);
    }
    nj30_isLoaded = true;
  }
  return nj30_;
}

const int &wwwtree::nb() {
  if (not nb_isLoaded) {
    if (nb_branch != 0) {
      nb_branch->GetEntry(index);
    } else {
      printf("branch nb_branch does not exist!\n");
      exit(1);
    }
    nb_isLoaded = true;
  }
  return nb_;
}

const float &wwwtree::Mljmin() {
  if (not Mljmin_isLoaded) {
    if (Mljmin_branch != 0) {
      Mljmin_branch->GetEntry(index);
    } else {
      printf("branch Mljmin_branch does not exist!\n");
      exit(1);
    }
    Mljmin_isLoaded = true;
  }
  return Mljmin_;
}

const float &wwwtree::Mljmax() {
  if (not Mljmax_isLoaded) {
    if (Mljmax_branch != 0) {
      Mljmax_branch->GetEntry(index);
    } else {
      printf("branch Mljmax_branch does not exist!\n");
      exit(1);
    }
    Mljmax_isLoaded = true;
  }
  return Mljmax_;
}

const float &wwwtree::DRljmin() {
  if (not DRljmin_isLoaded) {
    if (DRljmin_branch != 0) {
      DRljmin_branch->GetEntry(index);
    } else {
      printf("branch DRljmin_branch does not exist!\n");
      exit(1);
    }
    DRljmin_isLoaded = true;
  }
  return DRljmin_;
}

const float &wwwtree::DRljmax() {
  if (not DRljmax_isLoaded) {
    if (DRljmax_branch != 0) {
      DRljmax_branch->GetEntry(index);
    } else {
      printf("branch DRljmax_branch does not exist!\n");
      exit(1);
    }
    DRljmax_isLoaded = true;
  }
  return DRljmax_;
}

const float &wwwtree::Mljmin3L() {
  if (not Mljmin3L_isLoaded) {
    if (Mljmin3L_branch != 0) {
      Mljmin3L_branch->GetEntry(index);
    } else {
      printf("branch Mljmin3L_branch does not exist!\n");
      exit(1);
    }
    Mljmin3L_isLoaded = true;
  }
  return Mljmin3L_;
}

const float &wwwtree::Mljmax3L() {
  if (not Mljmax3L_isLoaded) {
    if (Mljmax3L_branch != 0) {
      Mljmax3L_branch->GetEntry(index);
    } else {
      printf("branch Mljmax3L_branch does not exist!\n");
      exit(1);
    }
    Mljmax3L_isLoaded = true;
  }
  return Mljmax3L_;
}

const float &wwwtree::DRljmin3L() {
  if (not DRljmin3L_isLoaded) {
    if (DRljmin3L_branch != 0) {
      DRljmin3L_branch->GetEntry(index);
    } else {
      printf("branch DRljmin3L_branch does not exist!\n");
      exit(1);
    }
    DRljmin3L_isLoaded = true;
  }
  return DRljmin3L_;
}

const float &wwwtree::DRljmax3L() {
  if (not DRljmax3L_isLoaded) {
    if (DRljmax3L_branch != 0) {
      DRljmax3L_branch->GetEntry(index);
    } else {
      printf("branch DRljmax3L_branch does not exist!\n");
      exit(1);
    }
    DRljmax3L_isLoaded = true;
  }
  return DRljmax3L_;
}

const float &wwwtree::Mjj() {
  if (not Mjj_isLoaded) {
    if (Mjj_branch != 0) {
      Mjj_branch->GetEntry(index);
    } else {
      printf("branch Mjj_branch does not exist!\n");
      exit(1);
    }
    Mjj_isLoaded = true;
  }
  return Mjj_;
}

const float &wwwtree::MjjVBF() {
  if (not MjjVBF_isLoaded) {
    if (MjjVBF_branch != 0) {
      MjjVBF_branch->GetEntry(index);
    } else {
      printf("branch MjjVBF_branch does not exist!\n");
      exit(1);
    }
    MjjVBF_isLoaded = true;
  }
  return MjjVBF_;
}

const float &wwwtree::DetajjVBF() {
  if (not DetajjVBF_isLoaded) {
    if (DetajjVBF_branch != 0) {
      DetajjVBF_branch->GetEntry(index);
    } else {
      printf("branch DetajjVBF_branch does not exist!\n");
      exit(1);
    }
    DetajjVBF_isLoaded = true;
  }
  return DetajjVBF_;
}

const float &wwwtree::MjjL() {
  if (not MjjL_isLoaded) {
    if (MjjL_branch != 0) {
      MjjL_branch->GetEntry(index);
    } else {
      printf("branch MjjL_branch does not exist!\n");
      exit(1);
    }
    MjjL_isLoaded = true;
  }
  return MjjL_;
}

const float &wwwtree::DetajjL() {
  if (not DetajjL_isLoaded) {
    if (DetajjL_branch != 0) {
      DetajjL_branch->GetEntry(index);
    } else {
      printf("branch DetajjL_branch does not exist!\n");
      exit(1);
    }
    DetajjL_isLoaded = true;
  }
  return DetajjL_;
}

const float &wwwtree::MllSS() {
  if (not MllSS_isLoaded) {
    if (MllSS_branch != 0) {
      MllSS_branch->GetEntry(index);
    } else {
      printf("branch MllSS_branch does not exist!\n");
      exit(1);
    }
    MllSS_isLoaded = true;
  }
  return MllSS_;
}

const float &wwwtree::Mll3L() {
  if (not Mll3L_isLoaded) {
    if (Mll3L_branch != 0) {
      Mll3L_branch->GetEntry(index);
    } else {
      printf("branch Mll3L_branch does not exist!\n");
      exit(1);
    }
    Mll3L_isLoaded = true;
  }
  return Mll3L_;
}

const float &wwwtree::Mee3L() {
  if (not Mee3L_isLoaded) {
    if (Mee3L_branch != 0) {
      Mee3L_branch->GetEntry(index);
    } else {
      printf("branch Mee3L_branch does not exist!\n");
      exit(1);
    }
    Mee3L_isLoaded = true;
  }
  return Mee3L_;
}

const float &wwwtree::Mll3L1() {
  if (not Mll3L1_isLoaded) {
    if (Mll3L1_branch != 0) {
      Mll3L1_branch->GetEntry(index);
    } else {
      printf("branch Mll3L1_branch does not exist!\n");
      exit(1);
    }
    Mll3L1_isLoaded = true;
  }
  return Mll3L1_;
}

const float &wwwtree::M3l() {
  if (not M3l_isLoaded) {
    if (M3l_branch != 0) {
      M3l_branch->GetEntry(index);
    } else {
      printf("branch M3l_branch does not exist!\n");
      exit(1);
    }
    M3l_isLoaded = true;
  }
  return M3l_;
}

const float &wwwtree::Pt3l() {
  if (not Pt3l_isLoaded) {
    if (Pt3l_branch != 0) {
      Pt3l_branch->GetEntry(index);
    } else {
      printf("branch Pt3l_branch does not exist!\n");
      exit(1);
    }
    Pt3l_isLoaded = true;
  }
  return Pt3l_;
}

const float &wwwtree::Pt2l() {
  if (not Pt2l_isLoaded) {
    if (Pt2l_branch != 0) {
      Pt2l_branch->GetEntry(index);
    } else {
      printf("branch Pt2l_branch does not exist!\n");
      exit(1);
    }
    Pt2l_isLoaded = true;
  }
  return Pt2l_;
}

const float &wwwtree::DPhi3lMET() {
  if (not DPhi3lMET_isLoaded) {
    if (DPhi3lMET_branch != 0) {
      DPhi3lMET_branch->GetEntry(index);
    } else {
      printf("branch DPhi3lMET_branch does not exist!\n");
      exit(1);
    }
    DPhi3lMET_isLoaded = true;
  }
  return DPhi3lMET_;
}

const float &wwwtree::MTmax() {
  if (not MTmax_isLoaded) {
    if (MTmax_branch != 0) {
      MTmax_branch->GetEntry(index);
    } else {
      printf("branch MTmax_branch does not exist!\n");
      exit(1);
    }
    MTmax_isLoaded = true;
  }
  return MTmax_;
}

const float &wwwtree::MTmin() {
  if (not MTmin_isLoaded) {
    if (MTmin_branch != 0) {
      MTmin_branch->GetEntry(index);
    } else {
      printf("branch MTmin_branch does not exist!\n");
      exit(1);
    }
    MTmin_isLoaded = true;
  }
  return MTmin_;
}

const float &wwwtree::MT3rd() {
  if (not MT3rd_isLoaded) {
    if (MT3rd_branch != 0) {
      MT3rd_branch->GetEntry(index);
    } else {
      printf("branch MT3rd_branch does not exist!\n");
      exit(1);
    }
    MT3rd_isLoaded = true;
  }
  return MT3rd_;
}

const float &wwwtree::MTmax3L() {
  if (not MTmax3L_isLoaded) {
    if (MTmax3L_branch != 0) {
      MTmax3L_branch->GetEntry(index);
    } else {
      printf("branch MTmax3L_branch does not exist!\n");
      exit(1);
    }
    MTmax3L_isLoaded = true;
  }
  return MTmax3L_;
}

const float &wwwtree::event_weight() {
  if (not event_weight_isLoaded) {
    if (event_weight_branch != 0) {
      event_weight_branch->GetEntry(index);
    } else {
      printf("branch event_weight_branch does not exist!\n");
      exit(1);
    }
    event_weight_isLoaded = true;
  }
  return event_weight_;
}

const float &wwwtree::trigger_scale_factor() {
  if (not trigger_scale_factor_isLoaded) {
    if (trigger_scale_factor_branch != 0) {
      trigger_scale_factor_branch->GetEntry(index);
    } else {
      printf("branch trigger_scale_factor_branch does not exist!\n");
      exit(1);
    }
    trigger_scale_factor_isLoaded = true;
  }
  return trigger_scale_factor_;
}

const float &wwwtree::lepton_scale_factor() {
  if (not lepton_scale_factor_isLoaded) {
    if (lepton_scale_factor_branch != 0) {
      lepton_scale_factor_branch->GetEntry(index);
    } else {
      printf("branch lepton_scale_factor_branch does not exist!\n");
      exit(1);
    }
    lepton_scale_factor_isLoaded = true;
  }
  return lepton_scale_factor_;
}

const float &wwwtree::btag_scale_factor() {
  if (not btag_scale_factor_isLoaded) {
    if (btag_scale_factor_branch != 0) {
      btag_scale_factor_branch->GetEntry(index);
    } else {
      printf("branch btag_scale_factor_branch does not exist!\n");
      exit(1);
    }
    btag_scale_factor_isLoaded = true;
  }
  return btag_scale_factor_;
}

const int &wwwtree::SRSSee() {
  if (not SRSSee_isLoaded) {
    if (SRSSee_branch != 0) {
      SRSSee_branch->GetEntry(index);
    } else {
      printf("branch SRSSee_branch does not exist!\n");
      exit(1);
    }
    SRSSee_isLoaded = true;
  }
  return SRSSee_;
}

const int &wwwtree::SRSSem() {
  if (not SRSSem_isLoaded) {
    if (SRSSem_branch != 0) {
      SRSSem_branch->GetEntry(index);
    } else {
      printf("branch SRSSem_branch does not exist!\n");
      exit(1);
    }
    SRSSem_isLoaded = true;
  }
  return SRSSem_;
}

const int &wwwtree::SRSSmm() {
  if (not SRSSmm_isLoaded) {
    if (SRSSmm_branch != 0) {
      SRSSmm_branch->GetEntry(index);
    } else {
      printf("branch SRSSmm_branch does not exist!\n");
      exit(1);
    }
    SRSSmm_isLoaded = true;
  }
  return SRSSmm_;
}

const int &wwwtree::SR0SFOS() {
  if (not SR0SFOS_isLoaded) {
    if (SR0SFOS_branch != 0) {
      SR0SFOS_branch->GetEntry(index);
    } else {
      printf("branch SR0SFOS_branch does not exist!\n");
      exit(1);
    }
    SR0SFOS_isLoaded = true;
  }
  return SR0SFOS_;
}

const int &wwwtree::SR1SFOS() {
  if (not SR1SFOS_isLoaded) {
    if (SR1SFOS_branch != 0) {
      SR1SFOS_branch->GetEntry(index);
    } else {
      printf("branch SR1SFOS_branch does not exist!\n");
      exit(1);
    }
    SR1SFOS_isLoaded = true;
  }
  return SR1SFOS_;
}

const int &wwwtree::SR2SFOS() {
  if (not SR2SFOS_isLoaded) {
    if (SR2SFOS_branch != 0) {
      SR2SFOS_branch->GetEntry(index);
    } else {
      printf("branch SR2SFOS_branch does not exist!\n");
      exit(1);
    }
    SR2SFOS_isLoaded = true;
  }
  return SR2SFOS_;
}

const int &wwwtree::SRSSeeMjjInFull() {
  if (not SRSSeeMjjInFull_isLoaded) {
    if (SRSSeeMjjInFull_branch != 0) {
      SRSSeeMjjInFull_branch->GetEntry(index);
    } else {
      printf("branch SRSSeeMjjInFull_branch does not exist!\n");
      exit(1);
    }
    SRSSeeMjjInFull_isLoaded = true;
  }
  return SRSSeeMjjInFull_;
}

const int &wwwtree::SRSSemMjjInFull() {
  if (not SRSSemMjjInFull_isLoaded) {
    if (SRSSemMjjInFull_branch != 0) {
      SRSSemMjjInFull_branch->GetEntry(index);
    } else {
      printf("branch SRSSemMjjInFull_branch does not exist!\n");
      exit(1);
    }
    SRSSemMjjInFull_isLoaded = true;
  }
  return SRSSemMjjInFull_;
}

const int &wwwtree::SRSSmmMjjInFull() {
  if (not SRSSmmMjjInFull_isLoaded) {
    if (SRSSmmMjjInFull_branch != 0) {
      SRSSmmMjjInFull_branch->GetEntry(index);
    } else {
      printf("branch SRSSmmMjjInFull_branch does not exist!\n");
      exit(1);
    }
    SRSSmmMjjInFull_isLoaded = true;
  }
  return SRSSmmMjjInFull_;
}

const int &wwwtree::SRSSeeMjjOutFull() {
  if (not SRSSeeMjjOutFull_isLoaded) {
    if (SRSSeeMjjOutFull_branch != 0) {
      SRSSeeMjjOutFull_branch->GetEntry(index);
    } else {
      printf("branch SRSSeeMjjOutFull_branch does not exist!\n");
      exit(1);
    }
    SRSSeeMjjOutFull_isLoaded = true;
  }
  return SRSSeeMjjOutFull_;
}

const int &wwwtree::SRSSemMjjOutFull() {
  if (not SRSSemMjjOutFull_isLoaded) {
    if (SRSSemMjjOutFull_branch != 0) {
      SRSSemMjjOutFull_branch->GetEntry(index);
    } else {
      printf("branch SRSSemMjjOutFull_branch does not exist!\n");
      exit(1);
    }
    SRSSemMjjOutFull_isLoaded = true;
  }
  return SRSSemMjjOutFull_;
}

const int &wwwtree::SRSSmmMjjOutFull() {
  if (not SRSSmmMjjOutFull_isLoaded) {
    if (SRSSmmMjjOutFull_branch != 0) {
      SRSSmmMjjOutFull_branch->GetEntry(index);
    } else {
      printf("branch SRSSmmMjjOutFull_branch does not exist!\n");
      exit(1);
    }
    SRSSmmMjjOutFull_isLoaded = true;
  }
  return SRSSmmMjjOutFull_;
}

const int &wwwtree::SRSS1JeeFull() {
  if (not SRSS1JeeFull_isLoaded) {
    if (SRSS1JeeFull_branch != 0) {
      SRSS1JeeFull_branch->GetEntry(index);
    } else {
      printf("branch SRSS1JeeFull_branch does not exist!\n");
      exit(1);
    }
    SRSS1JeeFull_isLoaded = true;
  }
  return SRSS1JeeFull_;
}

const int &wwwtree::SRSS1JemFull() {
  if (not SRSS1JemFull_isLoaded) {
    if (SRSS1JemFull_branch != 0) {
      SRSS1JemFull_branch->GetEntry(index);
    } else {
      printf("branch SRSS1JemFull_branch does not exist!\n");
      exit(1);
    }
    SRSS1JemFull_isLoaded = true;
  }
  return SRSS1JemFull_;
}

const int &wwwtree::SRSS1JmmFull() {
  if (not SRSS1JmmFull_isLoaded) {
    if (SRSS1JmmFull_branch != 0) {
      SRSS1JmmFull_branch->GetEntry(index);
    } else {
      printf("branch SRSS1JmmFull_branch does not exist!\n");
      exit(1);
    }
    SRSS1JmmFull_isLoaded = true;
  }
  return SRSS1JmmFull_;
}

const int &wwwtree::SR0SFOSFull() {
  if (not SR0SFOSFull_isLoaded) {
    if (SR0SFOSFull_branch != 0) {
      SR0SFOSFull_branch->GetEntry(index);
    } else {
      printf("branch SR0SFOSFull_branch does not exist!\n");
      exit(1);
    }
    SR0SFOSFull_isLoaded = true;
  }
  return SR0SFOSFull_;
}

const int &wwwtree::SR1SFOSFull() {
  if (not SR1SFOSFull_isLoaded) {
    if (SR1SFOSFull_branch != 0) {
      SR1SFOSFull_branch->GetEntry(index);
    } else {
      printf("branch SR1SFOSFull_branch does not exist!\n");
      exit(1);
    }
    SR1SFOSFull_isLoaded = true;
  }
  return SR1SFOSFull_;
}

const int &wwwtree::SR2SFOSFull() {
  if (not SR2SFOSFull_isLoaded) {
    if (SR2SFOSFull_branch != 0) {
      SR2SFOSFull_branch->GetEntry(index);
    } else {
      printf("branch SR2SFOSFull_branch does not exist!\n");
      exit(1);
    }
    SR2SFOSFull_isLoaded = true;
  }
  return SR2SFOSFull_;
}


void wwwtree::progress( int nEventsTotal, int nEventsChain ){
  int period = 1000;
  if (nEventsTotal%1000 == 0) {
    // xterm magic from L. Vacavant and A. Cerri
    if (isatty(1)) {
      if ((nEventsChain - nEventsTotal) > period) {
        float frac = (float)nEventsTotal/(nEventsChain*0.01);
        printf("\015\033[32m ---> \033[1m\033[31m%4.1f%%"
             "\033[0m\033[32m <---\033[0m\015", frac);
        fflush(stdout);
      }
      else {
        printf("\015\033[32m ---> \033[1m\033[31m%4.1f%%"
               "\033[0m\033[32m <---\033[0m\015", 100.);
        cout << endl;
      }
    }
  }
}

namespace tas {

const int &run() { return www.run(); }
const int &lumi() { return www.lumi(); }
const unsigned long long &evt() { return www.evt(); }
const TString &CMS4path() { return www.CMS4path(); }
const int &CMS4index() { return www.CMS4index(); }
const vector<float> &lep_pt() { return www.lep_pt(); }
const vector<int> &lep_lostHits() { return www.lep_lostHits(); }
const vector<int> &lep_convVeto() { return www.lep_convVeto(); }
const vector<int> &lep_pass_VVV_cutbased_tight() { return www.lep_pass_VVV_cutbased_tight(); }
const vector<int> &lep_pdgId() { return www.lep_pdgId(); }
const vector<float> &lep_relIso03EAv2Lep() { return www.lep_relIso03EAv2Lep(); }
const vector<float> &lep_MVA() { return www.lep_MVA(); }
const vector<float> &jets_btag_score() { return www.jets_btag_score(); }
const float &met_pt() { return www.met_pt(); }
const float &met_phi() { return www.met_phi(); }
const int &nisoTrack_mt2_cleaned_VVV_cutbased_veto() { return www.nisoTrack_mt2_cleaned_VVV_cutbased_veto(); }
const int &nSFOS() { return www.nSFOS(); }
const int &nSFOSinZ() { return www.nSFOSinZ(); }
const int &nj() { return www.nj(); }
const int &nj30() { return www.nj30(); }
const int &nb() { return www.nb(); }
const float &Mljmin() { return www.Mljmin(); }
const float &Mljmax() { return www.Mljmax(); }
const float &DRljmin() { return www.DRljmin(); }
const float &DRljmax() { return www.DRljmax(); }
const float &Mljmin3L() { return www.Mljmin3L(); }
const float &Mljmax3L() { return www.Mljmax3L(); }
const float &DRljmin3L() { return www.DRljmin3L(); }
const float &DRljmax3L() { return www.DRljmax3L(); }
const float &Mjj() { return www.Mjj(); }
const float &MjjVBF() { return www.MjjVBF(); }
const float &DetajjVBF() { return www.DetajjVBF(); }
const float &MjjL() { return www.MjjL(); }
const float &DetajjL() { return www.DetajjL(); }
const float &MllSS() { return www.MllSS(); }
const float &Mll3L() { return www.Mll3L(); }
const float &Mee3L() { return www.Mee3L(); }
const float &Mll3L1() { return www.Mll3L1(); }
const float &M3l() { return www.M3l(); }
const float &Pt3l() { return www.Pt3l(); }
const float &Pt2l() { return www.Pt2l(); }
const float &DPhi3lMET() { return www.DPhi3lMET(); }
const float &MTmax() { return www.MTmax(); }
const float &MTmin() { return www.MTmin(); }
const float &MT3rd() { return www.MT3rd(); }
const float &MTmax3L() { return www.MTmax3L(); }
const float &event_weight() { return www.event_weight(); }
const float &trigger_scale_factor() { return www.trigger_scale_factor(); }
const float &lepton_scale_factor() { return www.lepton_scale_factor(); }
const float &btag_scale_factor() { return www.btag_scale_factor(); }
const int &SRSSee() { return www.SRSSee(); }
const int &SRSSem() { return www.SRSSem(); }
const int &SRSSmm() { return www.SRSSmm(); }
const int &SR0SFOS() { return www.SR0SFOS(); }
const int &SR1SFOS() { return www.SR1SFOS(); }
const int &SR2SFOS() { return www.SR2SFOS(); }
const int &SRSSeeMjjInFull() { return www.SRSSeeMjjInFull(); }
const int &SRSSemMjjInFull() { return www.SRSSemMjjInFull(); }
const int &SRSSmmMjjInFull() { return www.SRSSmmMjjInFull(); }
const int &SRSSeeMjjOutFull() { return www.SRSSeeMjjOutFull(); }
const int &SRSSemMjjOutFull() { return www.SRSSemMjjOutFull(); }
const int &SRSSmmMjjOutFull() { return www.SRSSmmMjjOutFull(); }
const int &SRSS1JeeFull() { return www.SRSS1JeeFull(); }
const int &SRSS1JemFull() { return www.SRSS1JemFull(); }
const int &SRSS1JmmFull() { return www.SRSS1JmmFull(); }
const int &SR0SFOSFull() { return www.SR0SFOSFull(); }
const int &SR1SFOSFull() { return www.SR1SFOSFull(); }
const int &SR2SFOSFull() { return www.SR2SFOSFull(); }

}

#include "rooutil.cc"
