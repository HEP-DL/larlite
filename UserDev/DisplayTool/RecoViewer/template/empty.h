/**
 * \file DrawEmpty.h
 *
 * \ingroup RecoViewer
 *
 * \brief Class def header for a class DrawTrack
 *
 * @author cadams
 */

/** \addtogroup RecoViewer

    @{*/
#ifndef LARLITE_DRAWEMPTY_H
#define LARLITE_DRAWEMPTY_H

#include <iostream>
#include "Analysis/ana_base.h"
#include "LArUtil/Geometry.h"

#include "RecoBase.h"


namespace evd {

class Empty2D {
public:
    std::vector<std::pair<float, float> > _track;
    const std::vector<std::pair<float, float> > & track() {return _track;}
    const std::vector<std::pair<float, float> > & direction() {return _track;}
};

// typedef std::vector<std::pair<float, float> > Empty2D;

class DrawTrack : public larlite::ana_base, public RecoBase<Empty2D> {

public:

    /// Default constructor
    DrawTrack();

    /// Default destructor
    ~DrawTrack();

    /** IMPLEMENT in DrawCluster.cc!
        Initialization method to be called before the analysis event loop.
    */
    virtual bool initialize();

    /** IMPLEMENT in DrawCluster.cc!
        Analyze a data event-by-event
    */
    virtual bool analyze(larlite::storage_manager* storage);

    /** IMPLEMENT in DrawCluster.cc!
        Finalize method to be called after all events processed.
    */
    virtual bool finalize();

    Empty2D getEmpty2D(larlite::empty empty, unsigned int plane);

private:


};

} // evd

#endif
/** @} */ // end of doxygen group

