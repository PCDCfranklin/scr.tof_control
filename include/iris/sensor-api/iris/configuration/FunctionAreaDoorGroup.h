// ***************************************************************************
// *    _      _       ____                                 _    ____ ___    *
// *   (_)_ __(_)___  / ___|  ___ _ __  ___  ___  _ __     / \  |  _ \_ _|   *
// *   | | '__| / __| \___ \ / _ \ '_ \/ __|/ _ \| '__|   / _ \ | |_) | |    *
// *   | | |  | \__ \  ___) |  __/ | | \__ \ (_) | |     / ___ \|  __/| |    *
// *   |_|_|  |_|___/ |____/ \___|_| |_|___/\___/|_|    /_/   \_\_|  |___|   *
// *                                                                         *
// *   Copyright (c) 2010 by iris-GmbH, Berlin         All rights reserved   *
// *                                                                         *
// ***************************************************************************


// ---------------------------------------------------------------------------
// Please refer to LICENSE.TXT for more information on copyright and licensing
// terms with respect to this library and its source codes.
// ---------------------------------------------------------------------------



/******************************************************************************/
/*!
     @file          FunctionAreaDoorGroup.h
     @date          31-07-2017 14:23:28
     @author	    auto-generated with: generate_config_code.py

     code_generator:  generate_config_code.py
     generator_version: 1.1.3
     specification_file: dist500_config_spec_official.xml
     parameter_set_version: 1.7


     Warning: This file is generated automatically.
              Manual changes will be lost on next invocation!
*/
/******************************************************************************/

#ifndef CONFIGURATION_FUNCTIONAREADOORGROUP_H
#define CONFIGURATION_FUNCTIONAREADOORGROUP_H

// iris includes
#include "../Common.h"
#include "ConfigurationManager.h"

namespace iris
{

namespace configuration
{

class SENSORAPI FunctionAreaDoorGroup: public ParameterGroup
{

public:




    FunctionAreaDoorGroup();


    unsigned char getFaDoorCount(void) const;


    void setFaDoorCount(const unsigned char faDoorCount);


    unsigned short getAssignmentFaIndex(const unsigned char index) const;


    void setAssignmentFaIndex(const unsigned char index, const unsigned short faIndex);


    unsigned short getAssignmentDoorIndex(const unsigned char index) const;


    void setAssignmentDoorIndex(const unsigned char index, const unsigned short doorIndex);





}; // class FunctionAreaDoorGroup

} // namespace configuration

} // namespace iris
#endif // CONFIGURATION_FUNCTIONAREADOORGROUP_H

