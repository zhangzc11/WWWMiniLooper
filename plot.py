#!/bin/env python

import plottery_wrapper as p

p.dump_plot(
        fnames=[
            "hists/Run2/ddfakes.root",
            "hists/Run2/prompt.root",
            "hists/Run2/lostlep.root",
            "hists/Run2/photon.root",
            "hists/Run2/qflip.root",
            ],
        sig_fnames=[
            "hists/Run2/signal.root"
            ],
        filter_pattern="__nj",
        dogrep=True,
        extraoptions={
            "signal_scale":1,
            }
        )
