#
# OMNeT++/OMNEST Makefile for miximexamples
#
# This file was generated with the command:
#  opp_makemake -f --deep -o miximexamples -O out -I$(INET_PROJ)/src/linklayer/ieee80211/radio -I$(INET_PROJ)/src/linklayer/ethernet -I$(INET_PROJ)/src/networklayer/common -I../src/modules/phy -I$(INET_PROJ)/src -I$(INET_PROJ)/src/networklayer/icmpv6 -I$(INET_PROJ)/src/world/obstacles -I$(INET_PROJ)/src/networklayer/xmipv6 -I$(INET_PROJ)/src/networklayer/manetrouting/base -I$(INET_PROJ)/src/mobility -I$(INET_PROJ)/src/mobility/models -I$(INET_PROJ)/src/networklayer/contract -I$(INET_PROJ)/src/linklayer/ieee80211/mgmt -I../src/base/connectionManager -I$(INET_PROJ)/src/util -I$(INET_PROJ)/src/transport/contract -I$(INET_PROJ)/src/linklayer/radio/propagation -I../src/base/phyLayer -I../src/base/modules -I../src/base/utils -I$(INET_PROJ)/src/linklayer/ieee80211/radio/errormodel -I$(INET_PROJ)/src/linklayer/radio -I$(INET_PROJ)/src/world/powercontrol -I$(INET_PROJ)/src/util/headerserializers/tcp -I$(INET_PROJ)/src/networklayer/ipv4 -I../src/base/messages -I../src/modules/utility -I$(INET_PROJ)/src/util/headerserializers/ipv4 -I$(INET_PROJ)/src/base -I../src/base -I$(INET_PROJ)/src/util/headerserializers -I$(INET_PROJ)/src/world/radio -I../src/modules/analogueModel -I../src/modules/messages -I$(INET_PROJ)/src/linklayer/ieee80211/mac -I$(INET_PROJ)/src/networklayer/ipv6 -I$(INET_PROJ)/src/transport/sctp -I$(INET_PROJ)/src/util/headerserializers/udp -I$(INET_PROJ)/src/networklayer/ipv6tunneling -I$(INET_PROJ)/src/applications/pingapp -I$(INET_PROJ)/src/battery/models -I$(INET_PROJ)/src/util/headerserializers/sctp -I$(INET_PROJ)/src/linklayer/contract -I$(INET_PROJ)/src/networklayer/arp -I$(INET_PROJ)/src/transport/tcp_common -I$(INET_PROJ)/src/transport/udp -L$(INET_PROJ)/out/$(CONFIGNAME)/src -L../out/$(CONFIGNAME)/src -lmixim -linet -lsqlite3 -DMIXIM_INET -DINET_IMPORT -KINET_PROJ=../../inet
#

# Name of target to be created (-o option)
TARGET = miximexamples$(EXE_SUFFIX)

# User interface (uncomment one) (-u option)
USERIF_LIBS = $(ALL_ENV_LIBS) # that is, $(TKENV_LIBS) $(CMDENV_LIBS)
#USERIF_LIBS = $(CMDENV_LIBS)
#USERIF_LIBS = $(TKENV_LIBS)

# C++ include paths (with -I)
INCLUDE_PATH = \
    -I$(INET_PROJ)/src/linklayer/ieee80211/radio \
    -I$(INET_PROJ)/src/linklayer/ethernet \
    -I$(INET_PROJ)/src/networklayer/common \
    -I../src/modules/phy \
    -I$(INET_PROJ)/src \
    -I$(INET_PROJ)/src/networklayer/icmpv6 \
    -I$(INET_PROJ)/src/world/obstacles \
    -I$(INET_PROJ)/src/networklayer/xmipv6 \
    -I$(INET_PROJ)/src/networklayer/manetrouting/base \
    -I$(INET_PROJ)/src/mobility \
    -I$(INET_PROJ)/src/mobility/models \
    -I$(INET_PROJ)/src/networklayer/contract \
    -I$(INET_PROJ)/src/linklayer/ieee80211/mgmt \
    -I../src/base/connectionManager \
    -I$(INET_PROJ)/src/util \
    -I$(INET_PROJ)/src/transport/contract \
    -I$(INET_PROJ)/src/linklayer/radio/propagation \
    -I../src/base/phyLayer \
    -I../src/base/modules \
    -I../src/base/utils \
    -I$(INET_PROJ)/src/linklayer/ieee80211/radio/errormodel \
    -I$(INET_PROJ)/src/linklayer/radio \
    -I$(INET_PROJ)/src/world/powercontrol \
    -I$(INET_PROJ)/src/util/headerserializers/tcp \
    -I$(INET_PROJ)/src/networklayer/ipv4 \
    -I../src/base/messages \
    -I../src/modules/utility \
    -I$(INET_PROJ)/src/util/headerserializers/ipv4 \
    -I$(INET_PROJ)/src/base \
    -I../src/base \
    -I$(INET_PROJ)/src/util/headerserializers \
    -I$(INET_PROJ)/src/world/radio \
    -I../src/modules/analogueModel \
    -I../src/modules/messages \
    -I$(INET_PROJ)/src/linklayer/ieee80211/mac \
    -I$(INET_PROJ)/src/networklayer/ipv6 \
    -I$(INET_PROJ)/src/transport/sctp \
    -I$(INET_PROJ)/src/util/headerserializers/udp \
    -I$(INET_PROJ)/src/networklayer/ipv6tunneling \
    -I$(INET_PROJ)/src/applications/pingapp \
    -I$(INET_PROJ)/src/battery/models \
    -I$(INET_PROJ)/src/util/headerserializers/sctp \
    -I$(INET_PROJ)/src/linklayer/contract \
    -I$(INET_PROJ)/src/networklayer/arp \
    -I$(INET_PROJ)/src/transport/tcp_common \
    -I$(INET_PROJ)/src/transport/udp \
    -I. \
    -IanalogueModels \
    -IbaseNetwork \
    -Ibmac \
    -IBuses \
    -IBuses/omnetppini \
    -IBuses/results \
    -ICSMAMac \
    -Iieee802154a \
    -Iieee802154a/channels \
    -Iieee802154a/channels/noshadow \
    -Iieee802154a/channels/shadow \
    -Iieee802154a/receivers \
    -Iieee802154Narrow \
    -Ilmac \
    -IMac80211 \
    -ImultiConnectionManager \
    -IWSNRouting

# Additional object and library files to link with
EXTRA_OBJS =

# Additional libraries (-L, -l options)
LIBS = -L$(INET_PROJ)/out/$(CONFIGNAME)/src -L../out/$(CONFIGNAME)/src  -lmixim -linet -lsqlite3
LIBS += -Wl,-rpath,`abspath $(INET_PROJ)/out/$(CONFIGNAME)/src` -Wl,-rpath,`abspath ../out/$(CONFIGNAME)/src`

# Output directory
PROJECT_OUTPUT_DIR = ../out
PROJECTRELATIVE_PATH = /examples
O = $(PROJECT_OUTPUT_DIR)/$(CONFIGNAME)/$(PROJECTRELATIVE_PATH)

# Object files for local .cc and .msg files
OBJS = \
    $O/analogueModels/RandomFreqTimeModel.o \
    $O/analogueModels/RandomFrequencyOnlyModel.o \
    $O/analogueModels/SamplePhyLayer.o \
    $O/analogueModels/SimpleMacLayer.o \
    $O/Buses/APPositioner.o \
    $O/Buses/BusMobility.o \
    $O/Buses/ChannelController.o \
    $O/CSMAMac/SimpleNetwLayer.o \
    $O/ieee802154Narrow/NetworkStackTrafficGen.o \
    $O/ieee802154Narrow/WorldUtilityStats.o

# Message files
MSGFILES =

# Other makefile variables (-K)
INET_PROJ=../../inet

#------------------------------------------------------------------------------

# Pull in OMNeT++ configuration (Makefile.inc or configuser.vc)

ifneq ("$(OMNETPP_CONFIGFILE)","")
CONFIGFILE = $(OMNETPP_CONFIGFILE)
else
ifneq ("$(OMNETPP_ROOT)","")
CONFIGFILE = $(OMNETPP_ROOT)/Makefile.inc
else
CONFIGFILE = $(shell opp_configfilepath)
endif
endif

ifeq ("$(wildcard $(CONFIGFILE))","")
$(error Config file '$(CONFIGFILE)' does not exist -- add the OMNeT++ bin directory to the path so that opp_configfilepath can be found, or set the OMNETPP_CONFIGFILE variable to point to Makefile.inc)
endif

include $(CONFIGFILE)

# Simulation kernel and user interface libraries
OMNETPP_LIB_SUBDIR = $(OMNETPP_LIB_DIR)/$(TOOLCHAIN_NAME)
OMNETPP_LIBS = -L"$(OMNETPP_LIB_SUBDIR)" -L"$(OMNETPP_LIB_DIR)" -loppmain$D $(USERIF_LIBS) $(KERNEL_LIBS) $(SYS_LIBS)

COPTS = $(CFLAGS) -DMIXIM_INET -DINET_IMPORT $(INCLUDE_PATH) -I$(OMNETPP_INCL_DIR)
MSGCOPTS = $(INCLUDE_PATH)

# we want to recompile everything if COPTS changes,
# so we store COPTS into $COPTS_FILE and have object
# files depend on it (except when "make depend" was called)
COPTS_FILE = $O/.last-copts
ifneq ($(MAKECMDGOALS),depend)
ifneq ("$(COPTS)","$(shell cat $(COPTS_FILE) 2>/dev/null || echo '')")
$(shell $(MKPATH) "$O" && echo "$(COPTS)" >$(COPTS_FILE))
endif
endif

#------------------------------------------------------------------------------
# User-supplied makefile fragment(s)
# >>>
# <<<
#------------------------------------------------------------------------------

# Main target
all: $O/$(TARGET)
	$(Q)$(LN) $O/$(TARGET) .

$O/$(TARGET): $(OBJS)  $(wildcard $(EXTRA_OBJS)) Makefile
	@$(MKPATH) $O
	@echo Creating executable: $@
	$(Q)$(CXX) $(LDFLAGS) -o $O/$(TARGET)  $(OBJS) $(EXTRA_OBJS) $(AS_NEEDED_OFF) $(WHOLE_ARCHIVE_ON) $(LIBS) $(WHOLE_ARCHIVE_OFF) $(OMNETPP_LIBS)

.PHONY: all clean cleanall depend msgheaders

.SUFFIXES: .cc

$O/%.o: %.cc $(COPTS_FILE)
	@$(MKPATH) $(dir $@)
	$(qecho) "$<"
	$(Q)$(CXX) -c $(COPTS) -o $@ $<

%_m.cc %_m.h: %.msg
	$(qecho) MSGC: $<
	$(Q)$(MSGC) -s _m.cc $(MSGCOPTS) $?

msgheaders: $(MSGFILES:.msg=_m.h)

clean:
	$(qecho) Cleaning...
	$(Q)-rm -rf $O
	$(Q)-rm -f miximexamples miximexamples.exe libmiximexamples.so libmiximexamples.a libmiximexamples.dll libmiximexamples.dylib
	$(Q)-rm -f ./*_m.cc ./*_m.h
	$(Q)-rm -f analogueModels/*_m.cc analogueModels/*_m.h
	$(Q)-rm -f baseNetwork/*_m.cc baseNetwork/*_m.h
	$(Q)-rm -f bmac/*_m.cc bmac/*_m.h
	$(Q)-rm -f Buses/*_m.cc Buses/*_m.h
	$(Q)-rm -f Buses/omnetppini/*_m.cc Buses/omnetppini/*_m.h
	$(Q)-rm -f Buses/results/*_m.cc Buses/results/*_m.h
	$(Q)-rm -f CSMAMac/*_m.cc CSMAMac/*_m.h
	$(Q)-rm -f ieee802154a/*_m.cc ieee802154a/*_m.h
	$(Q)-rm -f ieee802154a/channels/*_m.cc ieee802154a/channels/*_m.h
	$(Q)-rm -f ieee802154a/channels/noshadow/*_m.cc ieee802154a/channels/noshadow/*_m.h
	$(Q)-rm -f ieee802154a/channels/shadow/*_m.cc ieee802154a/channels/shadow/*_m.h
	$(Q)-rm -f ieee802154a/receivers/*_m.cc ieee802154a/receivers/*_m.h
	$(Q)-rm -f ieee802154Narrow/*_m.cc ieee802154Narrow/*_m.h
	$(Q)-rm -f lmac/*_m.cc lmac/*_m.h
	$(Q)-rm -f Mac80211/*_m.cc Mac80211/*_m.h
	$(Q)-rm -f multiConnectionManager/*_m.cc multiConnectionManager/*_m.h
	$(Q)-rm -f WSNRouting/*_m.cc WSNRouting/*_m.h

cleanall: clean
	$(Q)-rm -rf $(PROJECT_OUTPUT_DIR)

depend:
	$(qecho) Creating dependencies...
	$(Q)$(MAKEDEPEND) $(INCLUDE_PATH) -f Makefile -P\$$O/ -- $(MSG_CC_FILES)  ./*.cc analogueModels/*.cc baseNetwork/*.cc bmac/*.cc Buses/*.cc Buses/omnetppini/*.cc Buses/results/*.cc CSMAMac/*.cc ieee802154a/*.cc ieee802154a/channels/*.cc ieee802154a/channels/noshadow/*.cc ieee802154a/channels/shadow/*.cc ieee802154a/receivers/*.cc ieee802154Narrow/*.cc lmac/*.cc Mac80211/*.cc multiConnectionManager/*.cc WSNRouting/*.cc

# DO NOT DELETE THIS LINE -- make depend depends on it.
$O/analogueModels/RandomFreqTimeModel.o: analogueModels/RandomFreqTimeModel.cc \
  ../src/base/phyLayer/AnalogueModel.h \
  ../src/base/phyLayer/Interpolation.h \
  ../src/base/messages/MiximAirFrame_m.h \
  ../../inet/src/base/INETDefs.h \
  ../src/base/phyLayer/MappingUtils.h \
  ../../inet/src/util/FWMath.h \
  ../src/base/utils/miximkerneldefs.h \
  ../src/base/phyLayer/Signal_.h \
  ../src/base/phyLayer/MappingBase.h \
  ../src/base/utils/MiXiMDefs.h \
  ../../inet/src/base/Coord.h \
  ../src/base/phyLayer/Mapping.h \
  ../src/base/messages/MiXiMAirFrame.h \
  analogueModels/RandomFreqTimeModel.h
$O/analogueModels/RandomFrequencyOnlyModel.o: analogueModels/RandomFrequencyOnlyModel.cc \
  ../src/base/phyLayer/AnalogueModel.h \
  ../src/base/phyLayer/Interpolation.h \
  analogueModels/RandomFrequencyOnlyModel.h \
  ../src/base/messages/MiximAirFrame_m.h \
  ../../inet/src/base/INETDefs.h \
  ../src/base/phyLayer/MappingUtils.h \
  ../../inet/src/util/FWMath.h \
  ../src/base/utils/miximkerneldefs.h \
  ../src/base/phyLayer/Signal_.h \
  ../src/base/phyLayer/MappingBase.h \
  ../src/base/utils/MiXiMDefs.h \
  ../src/base/phyLayer/Mapping.h \
  ../../inet/src/base/Coord.h \
  ../src/base/messages/MiXiMAirFrame.h
$O/analogueModels/SamplePhyLayer.o: analogueModels/SamplePhyLayer.cc \
  ../src/base/phyLayer/DeciderToPhyInterface.h \
  analogueModels/RandomFrequencyOnlyModel.h \
  ../src/base/messages/MiximAirFrame_m.h \
  ../../inet/src/mobility/IMobility.h \
  ../../inet/src/base/ModuleAccess.h \
  ../src/base/phyLayer/MappingBase.h \
  ../src/base/connectionManager/../modules/BaseBattery.h \
  ../src/base/connectionManager/../modules/MiximBatteryAccess.h \
  ../src/base/connectionManager/../modules/BaseModule.h \
  ../src/base/messages/ChannelSenseRequest_m.h \
  ../src/base/phyLayer/BasePhyLayer.h \
  ../../inet/src/util/FWMath.h \
  ../src/base/phyLayer/ChannelState.h \
  ../src/base/utils/FindModule.h \
  ../src/base/utils/MiXiMDefs.h \
  ../src/base/phyLayer/Mapping.h \
  analogueModels/RandomFreqTimeModel.h \
  ../src/base/phyLayer/Interpolation.h \
  ../src/base/phyLayer/AnalogueModel.h \
  ../src/base/connectionManager/ConnectionManagerAccess.h \
  ../src/base/utils/HostState.h \
  ../src/base/phyLayer/MacToPhyInterface.h \
  ../../inet/src/base/Coord.h \
  ../src/modules/phy/PhyLayer.h \
  analogueModels/SamplePhyLayer.h \
  analogueModels/ThresholdDecider.h \
  ../src/base/phyLayer/ChannelInfo.h \
  ../src/base/phyLayer/Decider.h \
  ../../inet/src/base/INETDefs.h \
  ../src/base/phyLayer/MappingUtils.h \
  ../src/base/utils/miximkerneldefs.h \
  ../src/base/phyLayer/Signal_.h \
  ../src/base/messages/MiXiMAirFrame.h \
  ../../inet/src/mobility/models/MobilityAccess.h \
  ../src/base/phyLayer/PhyUtils.h
$O/analogueModels/SimpleMacLayer.o: analogueModels/SimpleMacLayer.cc \
  ../src/base/phyLayer/MappingBase.h \
  ../src/base/phyLayer/MacToPhyControlInfo.h \
  analogueModels/SimpleMacLayer.h \
  ../src/base/messages/MacPkt_m.h \
  ../src/base/phyLayer/ChannelState.h \
  ../../inet/src/util/FWMath.h \
  ../../inet/src/linklayer/contract/MACAddress.h \
  ../src/base/utils/FindModule.h \
  ../src/base/utils/MiXiMDefs.h \
  ../src/base/phyLayer/Mapping.h \
  ../src/base/phyLayer/AnalogueModel.h \
  ../src/base/phyLayer/Interpolation.h \
  ../src/base/utils/HostState.h \
  ../src/base/phyLayer/MacToPhyInterface.h \
  ../../inet/src/base/Coord.h \
  ../../inet/src/base/INETDefs.h \
  ../src/base/phyLayer/MappingUtils.h \
  ../src/base/utils/miximkerneldefs.h \
  ../src/base/phyLayer/Signal_.h \
  ../src/base/utils/SimpleAddress.h \
  ../src/base/phyLayer/PhyUtils.h \
  ../src/base/modules/BaseModule.h
$O/Buses/APPositioner.o: Buses/APPositioner.cc \
  ../../inet/src/mobility/IMobility.h \
  ../../inet/src/util/FWMath.h \
  ../../inet/src/base/Coord.h \
  ../../inet/src/base/INETDefs.h
$O/Buses/BusMobility.o: Buses/BusMobility.cc \
  ../../inet/src/mobility/IMobility.h \
  ../../inet/src/util/FWMath.h \
  ../../inet/src/base/Coord.h \
  ../../inet/src/base/INETDefs.h
$O/Buses/ChannelController.o: Buses/ChannelController.cc \
  Buses/ChannelController.h
$O/CSMAMac/SimpleNetwLayer.o: CSMAMac/SimpleNetwLayer.cc \
  ../src/base/phyLayer/MappingBase.h \
  ../src/base/modules/../modules/BaseBattery.h \
  ../src/base/modules/BaseLayer.h \
  ../src/base/utils/PassedMessage.h \
  ../src/base/utils/NetwToMacControlInfo.h \
  ../src/base/utils/FindModule.h \
  ../../inet/src/linklayer/contract/MACAddress.h \
  ../src/base/utils/MiXiMDefs.h \
  ../src/base/utils/MacToNetwControlInfo.h \
  ../src/base/modules/BaseMacLayer.h \
  ../src/base/phyLayer/Interpolation.h \
  ../src/base/utils/HostState.h \
  CSMAMac/SimpleNetwLayer.h \
  ../src/base/modules/../modules/MiximBatteryAccess.h \
  ../src/base/modules/../modules/BaseModule.h \
  ../../inet/src/base/INETDefs.h \
  ../src/base/utils/miximkerneldefs.h \
  ../src/base/utils/SimpleAddress.h \
  ../src/base/messages/NetwPkt_m.h \
  ../src/base/modules/BaseModule.h
$O/ieee802154Narrow/NetworkStackTrafficGen.o: ieee802154Narrow/NetworkStackTrafficGen.cc \
  ../src/base/phyLayer/MappingBase.h \
  ../src/base/modules/../modules/BaseBattery.h \
  ../src/base/modules/ArpInterface.h \
  ieee802154Narrow/NetworkStackTrafficGen.h \
  ../src/base/modules/BaseLayer.h \
  ../src/base/utils/PassedMessage.h \
  ../src/modules/utility/Packet.h \
  ../../inet/src/util/FWMath.h \
  ../../inet/src/linklayer/contract/MACAddress.h \
  ../src/base/utils/NetwToMacControlInfo.h \
  ../src/base/utils/FindModule.h \
  ../src/base/utils/MiXiMDefs.h \
  ../src/base/modules/BaseMacLayer.h \
  ../src/base/phyLayer/Interpolation.h \
  ../src/base/utils/HostState.h \
  ../../inet/src/base/Coord.h \
  ../src/base/modules/../modules/MiximBatteryAccess.h \
  ../src/base/modules/BaseWorldUtility.h \
  ../src/base/modules/../modules/BaseModule.h \
  ../../inet/src/base/INETDefs.h \
  ../src/base/utils/miximkerneldefs.h \
  ../src/base/utils/SimpleAddress.h \
  ../src/base/messages/NetwPkt_m.h \
  ../src/base/modules/AddressingInterface.h
$O/ieee802154Narrow/WorldUtilityStats.o: ieee802154Narrow/WorldUtilityStats.cc \
  ieee802154Narrow/WorldUtilityStats.h \
  ../src/base/modules/../modules/BaseBattery.h \
  ../src/base/modules/BaseLayer.h \
  ../src/base/utils/PassedMessage.h \
  ../src/modules/utility/Packet.h \
  ../../inet/src/util/FWMath.h \
  ../../inet/src/linklayer/contract/MACAddress.h \
  ../src/base/utils/FindModule.h \
  ../src/base/utils/MiXiMDefs.h \
  ../src/base/utils/HostState.h \
  ../../inet/src/base/Coord.h \
  ../src/base/modules/../modules/MiximBatteryAccess.h \
  ../src/base/modules/BaseWorldUtility.h \
  ../src/base/modules/../modules/BaseModule.h \
  ../../inet/src/base/INETDefs.h \
  ../src/base/utils/miximkerneldefs.h \
  ../src/base/utils/SimpleAddress.h
