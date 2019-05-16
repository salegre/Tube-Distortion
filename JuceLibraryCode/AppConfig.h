/*

    IMPORTANT! This file is auto-generated each time you save your
    project - if you alter its contents, your changes may be overwritten!

    There's a section below where you can add your own custom code safely, and the
    Projucer will preserve the contents of that block, but the best way to change
    any of these definitions is by using the Projucer's project settings.

    Any commented-out settings will assume their default values.

*/

#pragma once

//==============================================================================
// [BEGIN_USER_CODE_SECTION]

// (You can add your own code in this section, and the Projucer will not overwrite it)

// [END_USER_CODE_SECTION]

/*
  ==============================================================================

   In accordance with the terms of the JUCE 5 End-Use License Agreement, the
   JUCE Code in SECTION A cannot be removed, changed or otherwise rendered
   ineffective unless you have a JUCE Indie or Pro license, or are using JUCE
   under the GPL v3 license.

   End User License Agreement: www.juce.com/juce-5-licence
  ==============================================================================
*/

// BEGIN SECTION A

#ifndef JUCE_DISPLAY_SPLASH_SCREEN
 #define JUCE_DISPLAY_SPLASH_SCREEN 1
#endif

#ifndef JUCE_REPORT_APP_USAGE
 #define JUCE_REPORT_APP_USAGE 1
#endif


// END SECTION A

#define JUCE_USE_DARK_SPLASH_SCREEN 1

//==============================================================================

#define JUCE_GLOBAL_MODULE_SETTINGS_INCLUDED 1
//==============================================================================
#ifndef    JUCE_STANDALONE_APPLICATION
 #if defined(JucePlugin_Name) && defined(JucePlugin_Build_Standalone)
  #define  JUCE_STANDALONE_APPLICATION JucePlugin_Build_Standalone
 #else
  #define  JUCE_STANDALONE_APPLICATION 0
 #endif
#endif

//==============================================================================
// Audio plugin settings..

#ifndef  JucePlugin_Build_VST
 #define JucePlugin_Build_VST              0
#endif
#ifndef  JucePlugin_Build_VST3
 #define JucePlugin_Build_VST3             0
#endif
#ifndef  JucePlugin_Build_AU
 #define JucePlugin_Build_AU               1
#endif
#ifndef  JucePlugin_Build_AUv3
 #define JucePlugin_Build_AUv3             0
#endif
#ifndef  JucePlugin_Build_RTAS
 #define JucePlugin_Build_RTAS             0
#endif
#ifndef  JucePlugin_Build_AAX
 #define JucePlugin_Build_AAX              0
#endif
#ifndef  JucePlugin_Build_Standalone
 #define JucePlugin_Build_Standalone       0
#endif
#ifndef  JucePlugin_Enable_IAA
 #define JucePlugin_Enable_IAA             0
#endif
#ifndef  JucePlugin_Name
 #define JucePlugin_Name                   "TubeDistortion"
#endif
#ifndef  JucePlugin_Desc
 #define JucePlugin_Desc                   "TubeDistortion"
#endif
#ifndef  JucePlugin_Manufacturer
 #define JucePlugin_Manufacturer           "yourcompany"
#endif
#ifndef  JucePlugin_ManufacturerWebsite
 #define JucePlugin_ManufacturerWebsite    ""
#endif
#ifndef  JucePlugin_ManufacturerEmail
 #define JucePlugin_ManufacturerEmail      ""
#endif
#ifndef  JucePlugin_ManufacturerCode
 #define JucePlugin_ManufacturerCode       0x4d616e75 // 'Manu'
#endif
#ifndef  JucePlugin_PluginCode
 #define JucePlugin_PluginCode             0x4d653579 // 'Me5y'
#endif
#ifndef  JucePlugin_IsSynth
 #define JucePlugin_IsSynth                0
#endif
#ifndef  JucePlugin_WantsMidiInput
 #define JucePlugin_WantsMidiInput         0
#endif
#ifndef  JucePlugin_ProducesMidiOutput
 #define JucePlugin_ProducesMidiOutput     0
#endif
#ifndef  JucePlugin_IsMidiEffect
 #define JucePlugin_IsMidiEffect           0
#endif
#ifndef  JucePlugin_EditorRequiresKeyboardFocus
 #define JucePlugin_EditorRequiresKeyboardFocus  0
#endif
#ifndef  JucePlugin_Version
 #define JucePlugin_Version                1.0.0
#endif
#ifndef  JucePlugin_VersionCode
 #define JucePlugin_VersionCode            0x10000
#endif
#ifndef  JucePlugin_VersionString
 #define JucePlugin_VersionString          "1.0.0"
#endif
#ifndef  JucePlugin_VSTUniqueID
 #define JucePlugin_VSTUniqueID            JucePlugin_PluginCode
#endif
#ifndef  JucePlugin_VSTCategory
 #define JucePlugin_VSTCategory            kPlugCategEffect
#endif
#ifndef  JucePlugin_AUMainType
 #define JucePlugin_AUMainType             kAudioUnitType_Effect
#endif
#ifndef  JucePlugin_AUSubType
 #define JucePlugin_AUSubType              JucePlugin_PluginCode
#endif
#ifndef  JucePlugin_AUExportPrefix
 #define JucePlugin_AUExportPrefix         TubeDistortionAU
#endif
#ifndef  JucePlugin_AUExportPrefixQuoted
 #define JucePlugin_AUExportPrefixQuoted   "TubeDistortionAU"
#endif
#ifndef  JucePlugin_AUManufacturerCode
 #define JucePlugin_AUManufacturerCode     JucePlugin_ManufacturerCode
#endif
#ifndef  JucePlugin_CFBundleIdentifier
 #define JucePlugin_CFBundleIdentifier     com.yourcompany.TubeDistortion
#endif
#ifndef  JucePlugin_RTASCategory
 #define JucePlugin_RTASCategory           ePlugInCategory_None
#endif
#ifndef  JucePlugin_RTASManufacturerCode
 #define JucePlugin_RTASManufacturerCode   JucePlugin_ManufacturerCode
#endif
#ifndef  JucePlugin_RTASProductId
 #define JucePlugin_RTASProductId          JucePlugin_PluginCode
#endif
#ifndef  JucePlugin_RTASDisableBypass
 #define JucePlugin_RTASDisableBypass      0
#endif
#ifndef  JucePlugin_RTASDisableMultiMono
 #define JucePlugin_RTASDisableMultiMono   0
#endif
#ifndef  JucePlugin_AAXIdentifier
 #define JucePlugin_AAXIdentifier          com.yourcompany.TubeDistortion
#endif
#ifndef  JucePlugin_AAXManufacturerCode
 #define JucePlugin_AAXManufacturerCode    JucePlugin_ManufacturerCode
#endif
#ifndef  JucePlugin_AAXProductId
 #define JucePlugin_AAXProductId           JucePlugin_PluginCode
#endif
#ifndef  JucePlugin_AAXCategory
 #define JucePlugin_AAXCategory            AAX_ePlugInCategory_Dynamics
#endif
#ifndef  JucePlugin_AAXDisableBypass
 #define JucePlugin_AAXDisableBypass       0
#endif
#ifndef  JucePlugin_AAXDisableMultiMono
 #define JucePlugin_AAXDisableMultiMono    0
#endif
#ifndef  JucePlugin_IAAType
 #define JucePlugin_IAAType                0x61757278 // 'aurx'
#endif
#ifndef  JucePlugin_IAASubType
 #define JucePlugin_IAASubType             JucePlugin_PluginCode
#endif
#ifndef  JucePlugin_IAAName
 #define JucePlugin_IAAName                "yourcompany: TubeDistortion"
#endif
