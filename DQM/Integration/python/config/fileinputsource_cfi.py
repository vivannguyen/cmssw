import FWCore.ParameterSet.Config as cms

source = cms.Source("PoolSource",
                    fileNames = cms.untracked.vstring(
'root://eoscms//store/express/Commissioning2016/ExpressCosmics/FEVT/Express-v1/000/264/593/00000/E8F68B40-0ED2-E511-90DB-02163E0145B3.root',
'root://eoscms//store/express/Commissioning2016/ExpressCosmics/FEVT/Express-v1/000/264/593/00000/EA333C9D-2BD2-E511-AF4D-02163E0138BE.root',
'root://eoscms//store/express/Commissioning2016/ExpressCosmics/FEVT/Express-v1/000/264/593/00000/EC0A64B5-21D2-E511-B525-02163E0136D0.root',
'root://eoscms//store/express/Commissioning2016/ExpressCosmics/FEVT/Express-v1/000/264/593/00000/EC871D40-1AD2-E511-96AF-02163E0133C2.root',
#        "file:/afs/cern.ch/cms/CAF/CMSCOMM/COMM_DQM/DQMTest/MinimumBias__RAW__v1__165633__1CC420EE-B686-E011-A788-0030487CD6E8.root",
#        "/store/data/Commissioning2014/Cosmics/RAW//v3/000/224/380/00000/E05943D1-1227-E411-BB8E-02163E00F0C4.root"
#    "/store/data/Commissioning2014/Cosmics/RAW/v3/000/224/380/00000/68FDADE5-1227-E411-8AA6-02163E00A10C.root"
        )
)
maxEvents = cms.untracked.PSet(
    input = cms.untracked.int32(-1)
#    input = cms.untracked.int32(1000)
)

# Parameters for runType
import FWCore.ParameterSet.VarParsing as VarParsing
import sys
from dqmPythonTypes import *

options = VarParsing.VarParsing('analysis')

options.register ('runkey',
          'cosmic_run',
          VarParsing.VarParsing.multiplicity.singleton,
          VarParsing.VarParsing.varType.string,
          "Run Keys of CMS")

options.parseArguments()

# Fix to allow scram to compile
#if len(sys.argv) > 1:
#  options.parseArguments()

runType = RunType()
if not options.runkey.strip():
  options.runkey = 'pp_run'

runType.setRunType(options.runkey.strip())
