import sys
from ROOT import larlite
import ROOT

man=larlite.storage_manager()
man.set_io_mode(man.kREAD)
man.add_in_filename("trialpy.root")
man.set_verbosity(larlite.msg.kDEBUG)
man.open()

while man.next_event() :

    my_track_v = man.get_data(larlite.data.kTrack, "test")
    my_larsofthits = man.get_data(larlite.data.kLarSoftHit, "test");
    my_larsoftclusters = man.get_data(larlite.data.kLarSoftCluster, "test");

    print "Found event {} ... {} tracks! ".format(my_track_v.event_id(), my_track_v.size())
    print "larsoft hits size = {}, element 0 RMS = {}, element 1 RMS = {}".format(my_larsofthits.product().size(), my_larsofthits.product().at(0).RMS(), my_larsofthits.product().at(1).RMS())
    print "larsoft clusters size = {}, element 0 NHits = {}, element 1 NHits = {}".format(my_larsoftclusters.product().size(), my_larsoftclusters.product().at(0).NHits(), my_larsoftclusters.product().at(1).NHits())

man.close()