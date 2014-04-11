#
# OMNeT++/OMNEST Makefile for libmixim
#
# This file was generated with the command:
#  opp_makemake -f --deep --make-so -o mixim -O out -Xinet_stub -I$(INET_PROJ)/src/linklayer/ethernet -I$(INET_PROJ)/src/linklayer/ieee80211/radio -I$(INET_PROJ)/src/networklayer/common -I$(INET_PROJ)/src/networklayer/icmpv6 -I$(INET_PROJ)/src -I$(INET_PROJ)/src/world/obstacles -I$(INET_PROJ)/src/mobility/models -I$(INET_PROJ)/src/networklayer/xmipv6 -I$(INET_PROJ)/src/mobility -I$(INET_PROJ)/src/networklayer/contract -I$(INET_PROJ)/src/networklayer/manetrouting/base -I$(INET_PROJ)/src/linklayer/ieee80211/mgmt -I$(INET_PROJ)/src/util -I$(INET_PROJ)/src/transport/contract -I$(INET_PROJ)/src/linklayer/radio/propagation -I$(INET_PROJ)/src/linklayer/ieee80211/radio/errormodel -I$(INET_PROJ)/src/world/powercontrol -I$(INET_PROJ)/src/linklayer/radio -I$(INET_PROJ)/src/util/headerserializers/tcp -I$(INET_PROJ)/src/networklayer/ipv4 -I$(INET_PROJ)/src/util/headerserializers/ipv4 -I$(INET_PROJ)/src/base -I$(INET_PROJ)/src/util/headerserializers -I$(INET_PROJ)/src/world/radio -I$(INET_PROJ)/src/linklayer/ieee80211/mac -I$(INET_PROJ)/src/networklayer/ipv6 -I$(INET_PROJ)/src/transport/sctp -I$(INET_PROJ)/src/util/headerserializers/udp -I$(INET_PROJ)/src/networklayer/ipv6tunneling -I$(INET_PROJ)/src/battery/models -I$(INET_PROJ)/src/applications/pingapp -I$(INET_PROJ)/src/linklayer/contract -I$(INET_PROJ)/src/util/headerserializers/sctp -I$(INET_PROJ)/src/transport/tcp_common -I$(INET_PROJ)/src/networklayer/arp -I$(INET_PROJ)/src/transport/udp -L$(INET_PROJ)/out/$(CONFIGNAME)/src -linet -lsqlite3 -DMIXIM_INET -DINET_IMPORT -KINET_PROJ=../../inet
#

# Name of target to be created (-o option)
TARGET = libmixim$(SHARED_LIB_SUFFIX)

# C++ include paths (with -I)
INCLUDE_PATH = \
    -I$(INET_PROJ)/src/linklayer/ethernet \
    -I$(INET_PROJ)/src/linklayer/ieee80211/radio \
    -I$(INET_PROJ)/src/networklayer/common \
    -I$(INET_PROJ)/src/networklayer/icmpv6 \
    -I$(INET_PROJ)/src \
    -I$(INET_PROJ)/src/world/obstacles \
    -I$(INET_PROJ)/src/mobility/models \
    -I$(INET_PROJ)/src/networklayer/xmipv6 \
    -I$(INET_PROJ)/src/mobility \
    -I$(INET_PROJ)/src/networklayer/contract \
    -I$(INET_PROJ)/src/networklayer/manetrouting/base \
    -I$(INET_PROJ)/src/linklayer/ieee80211/mgmt \
    -I$(INET_PROJ)/src/util \
    -I$(INET_PROJ)/src/transport/contract \
    -I$(INET_PROJ)/src/linklayer/radio/propagation \
    -I$(INET_PROJ)/src/linklayer/ieee80211/radio/errormodel \
    -I$(INET_PROJ)/src/world/powercontrol \
    -I$(INET_PROJ)/src/linklayer/radio \
    -I$(INET_PROJ)/src/util/headerserializers/tcp \
    -I$(INET_PROJ)/src/networklayer/ipv4 \
    -I$(INET_PROJ)/src/util/headerserializers/ipv4 \
    -I$(INET_PROJ)/src/base \
    -I$(INET_PROJ)/src/util/headerserializers \
    -I$(INET_PROJ)/src/world/radio \
    -I$(INET_PROJ)/src/linklayer/ieee80211/mac \
    -I$(INET_PROJ)/src/networklayer/ipv6 \
    -I$(INET_PROJ)/src/transport/sctp \
    -I$(INET_PROJ)/src/util/headerserializers/udp \
    -I$(INET_PROJ)/src/networklayer/ipv6tunneling \
    -I$(INET_PROJ)/src/battery/models \
    -I$(INET_PROJ)/src/applications/pingapp \
    -I$(INET_PROJ)/src/linklayer/contract \
    -I$(INET_PROJ)/src/util/headerserializers/sctp \
    -I$(INET_PROJ)/src/transport/tcp_common \
    -I$(INET_PROJ)/src/networklayer/arp \
    -I$(INET_PROJ)/src/transport/udp \
    -I. \
    -Ibase \
    -Ibase/connectionManager \
    -Ibase/messages \
    -Ibase/modules \
    -Ibase/phyLayer \
    -Ibase/utils \
    -Imodules \
    -Imodules/analogueModel \
    -Imodules/application \
    -Imodules/connectionManager \
    -Imodules/mac \
    -Imodules/messages \
    -Imodules/netw \
    -Imodules/nic \
    -Imodules/node \
    -Imodules/phy \
    -Imodules/power \
    -Imodules/power/battery \
    -Imodules/transport \
    -Imodules/utility

# Additional object and library files to link with
EXTRA_OBJS =

# Additional libraries (-L, -l options)
LIBS = -L$(INET_PROJ)/out/$(CONFIGNAME)/src  -linet -lsqlite3
LIBS += -Wl,-rpath,`abspath $(INET_PROJ)/out/$(CONFIGNAME)/src`

# Output directory
PROJECT_OUTPUT_DIR = ../out
PROJECTRELATIVE_PATH = /src
O = $(PROJECT_OUTPUT_DIR)/$(CONFIGNAME)/$(PROJECTRELATIVE_PATH)

# Object files for local .cc and .msg files
OBJS = \
    $O/base/connectionManager/BaseConnectionManager.o \
    $O/base/connectionManager/ConnectionManager.o \
    $O/base/connectionManager/ConnectionManagerAccess.o \
    $O/base/connectionManager/NicEntryDebug.o \
    $O/base/connectionManager/NicEntryDirect.o \
    $O/base/modules/BaseApplLayer.o \
    $O/base/modules/BaseArp.o \
    $O/base/modules/BaseBattery.o \
    $O/base/modules/BaseLayer.o \
    $O/base/modules/BaseMacLayer.o \
    $O/base/modules/BaseModule.o \
    $O/base/modules/BaseNetwLayer.o \
    $O/base/modules/BaseWorldUtility.o \
    $O/base/modules/MiximBatteryAccess.o \
    $O/base/modules/TestApplLayer.o \
    $O/base/phyLayer/BaseDecider.o \
    $O/base/phyLayer/BasePhyLayer.o \
    $O/base/phyLayer/ChannelInfo.o \
    $O/base/phyLayer/ChannelState.o \
    $O/base/phyLayer/Decider.o \
    $O/base/phyLayer/MappingBase.o \
    $O/base/phyLayer/MappingUtils.o \
    $O/base/phyLayer/PhyUtils.o \
    $O/base/phyLayer/Signal.o \
    $O/base/utils/NetwToMacControlInfo.o \
    $O/base/utils/SimpleAddress.o \
    $O/base/utils/winsupport.o \
    $O/modules/analogueModel/BreakpointPathlossModel.o \
    $O/modules/analogueModel/JakesFading.o \
    $O/modules/analogueModel/LogNormalShadowing.o \
    $O/modules/analogueModel/PERModel.o \
    $O/modules/analogueModel/SimplePathlossModel.o \
    $O/modules/analogueModel/UWBIRIEEE802154APathlossModel.o \
    $O/modules/analogueModel/UWBIRStochasticPathlossModel.o \
    $O/modules/application/BurstApplLayer.o \
    $O/modules/application/BurstApplLayerBattery.o \
    $O/modules/application/SensorApplLayer.o \
    $O/modules/application/TestApplication.o \
    $O/modules/application/TrafficGen.o \
    $O/modules/connectionManager/UnitDisk.o \
    $O/modules/mac/AlohaMacLayer.o \
    $O/modules/mac/BMacLayer.o \
    $O/modules/mac/csma.o \
    $O/modules/mac/CSMA802154.o \
    $O/modules/mac/CSMAMacLayer.o \
    $O/modules/mac/LMacLayer.o \
    $O/modules/mac/Mac80211.o \
    $O/modules/mac/Mac80211MultiChannel.o \
    $O/modules/mac/UWBIRMac.o \
    $O/modules/messages/AggrPkt.o \
    $O/modules/messages/UWBIRMacPkt.o \
    $O/modules/netw/AdaptiveProbabilisticBroadcast.o \
    $O/modules/netw/ArpHost.o \
    $O/modules/netw/DummyRoute.o \
    $O/modules/netw/Flood.o \
    $O/modules/netw/ProbabilisticBroadcast.o \
    $O/modules/netw/WiseRoute.o \
    $O/modules/phy/Decider80211.o \
    $O/modules/phy/Decider80211Battery.o \
    $O/modules/phy/Decider80211MultiChannel.o \
    $O/modules/phy/Decider802154Narrow.o \
    $O/modules/phy/DeciderUWBIRED.o \
    $O/modules/phy/DeciderUWBIREDSync.o \
    $O/modules/phy/DeciderUWBIREDSyncOnAddress.o \
    $O/modules/phy/PhyLayer.o \
    $O/modules/phy/PhyLayerBattery.o \
    $O/modules/phy/PhyLayerUWBIR.o \
    $O/modules/phy/SNRThresholdDecider.o \
    $O/modules/power/battery/BatteryStats.o \
    $O/modules/power/battery/SimpleBattery.o \
    $O/modules/transport/Aggregation.o \
    $O/modules/utility/IEEE802154A.o \
    $O/modules/utility/phyPER.o \
    $O/modules/utility/SimTracer.o \
    $O/base/messages/ApplPkt_m.o \
    $O/base/messages/BorderMsg_m.o \
    $O/base/messages/ChannelSenseRequest_m.o \
    $O/base/messages/MacPkt_m.o \
    $O/base/messages/MiximAirFrame_m.o \
    $O/base/messages/NetwPkt_m.o \
    $O/modules/messages/AggrPkt_m.o \
    $O/modules/messages/AirFrameUWBIR_m.o \
    $O/modules/messages/DummyRoutePkt_m.o \
    $O/modules/messages/LMacPkt_m.o \
    $O/modules/messages/Mac80211Pkt_m.o \
    $O/modules/messages/ProbabilisticBroadcastPkt_m.o \
    $O/modules/messages/UWBIRMacPkt_m.o \
    $O/modules/messages/WiseRoutePkt_m.o

# Message files
MSGFILES = \
    base/messages/ApplPkt.msg \
    base/messages/BorderMsg.msg \
    base/messages/ChannelSenseRequest.msg \
    base/messages/MacPkt.msg \
    base/messages/MiximAirFrame.msg \
    base/messages/NetwPkt.msg \
    modules/messages/AggrPkt.msg \
    modules/messages/AirFrameUWBIR.msg \
    modules/messages/DummyRoutePkt.msg \
    modules/messages/LMacPkt.msg \
    modules/messages/Mac80211Pkt.msg \
    modules/messages/ProbabilisticBroadcastPkt.msg \
    modules/messages/UWBIRMacPkt.msg \
    modules/messages/WiseRoutePkt.msg

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
OMNETPP_LIBS = -L"$(OMNETPP_LIB_SUBDIR)" -L"$(OMNETPP_LIB_DIR)" -loppenvir$D $(KERNEL_LIBS) $(SYS_LIBS)

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
	@echo Creating shared library: $@
	$(Q)$(SHLIB_LD) -o $O/$(TARGET)  $(OBJS) $(EXTRA_OBJS) $(AS_NEEDED_OFF) $(WHOLE_ARCHIVE_ON) $(LIBS) $(WHOLE_ARCHIVE_OFF) $(OMNETPP_LIBS) $(LDFLAGS)
	$(Q)$(SHLIB_POSTPROCESS) $O/$(TARGET)

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
	$(Q)-rm -f mixim mixim.exe libmixim.so libmixim.a libmixim.dll libmixim.dylib
	$(Q)-rm -f ./*_m.cc ./*_m.h
	$(Q)-rm -f base/*_m.cc base/*_m.h
	$(Q)-rm -f base/connectionManager/*_m.cc base/connectionManager/*_m.h
	$(Q)-rm -f base/messages/*_m.cc base/messages/*_m.h
	$(Q)-rm -f base/modules/*_m.cc base/modules/*_m.h
	$(Q)-rm -f base/phyLayer/*_m.cc base/phyLayer/*_m.h
	$(Q)-rm -f base/utils/*_m.cc base/utils/*_m.h
	$(Q)-rm -f modules/*_m.cc modules/*_m.h
	$(Q)-rm -f modules/analogueModel/*_m.cc modules/analogueModel/*_m.h
	$(Q)-rm -f modules/application/*_m.cc modules/application/*_m.h
	$(Q)-rm -f modules/connectionManager/*_m.cc modules/connectionManager/*_m.h
	$(Q)-rm -f modules/mac/*_m.cc modules/mac/*_m.h
	$(Q)-rm -f modules/messages/*_m.cc modules/messages/*_m.h
	$(Q)-rm -f modules/netw/*_m.cc modules/netw/*_m.h
	$(Q)-rm -f modules/nic/*_m.cc modules/nic/*_m.h
	$(Q)-rm -f modules/node/*_m.cc modules/node/*_m.h
	$(Q)-rm -f modules/phy/*_m.cc modules/phy/*_m.h
	$(Q)-rm -f modules/power/*_m.cc modules/power/*_m.h
	$(Q)-rm -f modules/power/battery/*_m.cc modules/power/battery/*_m.h
	$(Q)-rm -f modules/transport/*_m.cc modules/transport/*_m.h
	$(Q)-rm -f modules/utility/*_m.cc modules/utility/*_m.h

cleanall: clean
	$(Q)-rm -rf $(PROJECT_OUTPUT_DIR)

depend:
	$(qecho) Creating dependencies...
	$(Q)$(MAKEDEPEND) $(INCLUDE_PATH) -f Makefile -P\$$O/ -- $(MSG_CC_FILES)  ./*.cc base/*.cc base/connectionManager/*.cc base/messages/*.cc base/modules/*.cc base/phyLayer/*.cc base/utils/*.cc modules/*.cc modules/analogueModel/*.cc modules/application/*.cc modules/connectionManager/*.cc modules/mac/*.cc modules/messages/*.cc modules/netw/*.cc modules/nic/*.cc modules/node/*.cc modules/phy/*.cc modules/power/*.cc modules/power/battery/*.cc modules/transport/*.cc modules/utility/*.cc

# DO NOT DELETE THIS LINE -- make depend depends on it.
$O/base/connectionManager/BaseConnectionManager.o: base/connectionManager/BaseConnectionManager.cc \
  base/connectionManager/NicEntryDebug.h \
  base/utils/miximkerneldefs.h \
  ../../inet/src/base/INETDefs.h \
  base/connectionManager/BaseConnectionManager.h \
  base/connectionManager/NicEntry.h \
  base/modules/BaseWorldUtility.h \
  ../../inet/src/util/FWMath.h \
  base/utils/MiXiMDefs.h \
  base/utils/FindModule.h \
  base/connectionManager/NicEntryDirect.h \
  ../../inet/src/base/Coord.h
$O/base/connectionManager/ConnectionManager.o: base/connectionManager/ConnectionManager.cc \
  base/utils/miximkerneldefs.h \
  base/connectionManager/ConnectionManager.h \
  ../../inet/src/base/INETDefs.h \
  base/connectionManager/BaseConnectionManager.h \
  base/connectionManager/NicEntry.h \
  ../../inet/src/util/FWMath.h \
  base/modules/BaseWorldUtility.h \
  base/utils/MiXiMDefs.h \
  ../../inet/src/base/Coord.h
$O/base/connectionManager/ConnectionManagerAccess.o: base/connectionManager/ConnectionManagerAccess.cc \
  base/connectionManager/../modules/BaseModule.h \
  base/utils/miximkerneldefs.h \
  ../../inet/src/mobility/IMobility.h \
  ../../inet/src/base/INETDefs.h \
  base/connectionManager/../modules/BaseBattery.h \
  base/connectionManager/BaseConnectionManager.h \
  base/connectionManager/NicEntry.h \
  ../../inet/src/util/FWMath.h \
  base/modules/BaseWorldUtility.h \
  ../../inet/src/base/ModuleAccess.h \
  base/utils/MiXiMDefs.h \
  base/utils/FindModule.h \
  base/utils/HostState.h \
  ../../inet/src/base/Coord.h \
  ../../inet/src/mobility/models/MobilityAccess.h \
  base/connectionManager/ConnectionManagerAccess.h \
  base/connectionManager/../modules/MiximBatteryAccess.h
$O/base/connectionManager/NicEntryDebug.o: base/connectionManager/NicEntryDebug.cc \
  base/connectionManager/NicEntryDebug.h \
  base/connectionManager/../modules/BaseModule.h \
  base/utils/miximkerneldefs.h \
  ../../inet/src/mobility/IMobility.h \
  base/connectionManager/../modules/BaseBattery.h \
  ../../inet/src/base/INETDefs.h \
  base/connectionManager/NicEntry.h \
  ../../inet/src/util/FWMath.h \
  ../../inet/src/base/ModuleAccess.h \
  base/utils/MiXiMDefs.h \
  base/utils/FindModule.h \
  base/utils/HostState.h \
  ../../inet/src/mobility/models/MobilityAccess.h \
  ../../inet/src/base/Coord.h \
  base/connectionManager/ConnectionManagerAccess.h \
  base/connectionManager/../modules/MiximBatteryAccess.h
$O/base/connectionManager/NicEntryDirect.o: base/connectionManager/NicEntryDirect.cc \
  base/connectionManager/../modules/BaseModule.h \
  base/utils/miximkerneldefs.h \
  ../../inet/src/mobility/IMobility.h \
  base/connectionManager/../modules/BaseBattery.h \
  ../../inet/src/base/INETDefs.h \
  base/connectionManager/NicEntry.h \
  ../../inet/src/util/FWMath.h \
  ../../inet/src/base/ModuleAccess.h \
  base/utils/MiXiMDefs.h \
  base/utils/FindModule.h \
  base/utils/HostState.h \
  base/connectionManager/NicEntryDirect.h \
  ../../inet/src/mobility/models/MobilityAccess.h \
  ../../inet/src/base/Coord.h \
  base/connectionManager/ConnectionManagerAccess.h \
  base/connectionManager/../modules/MiximBatteryAccess.h
$O/base/messages/ApplPkt_m.o: base/messages/ApplPkt_m.cc \
  base/messages/ApplPkt_m.h \
  base/utils/SimpleAddress.h \
  base/utils/miximkerneldefs.h \
  ../../inet/src/base/INETDefs.h \
  base/utils/MiXiMDefs.h \
  ../../inet/src/linklayer/contract/MACAddress.h
$O/base/messages/ChannelSenseRequest_m.o: base/messages/ChannelSenseRequest_m.cc \
  base/utils/miximkerneldefs.h \
  base/phyLayer/ChannelState.h \
  base/messages/ChannelSenseRequest_m.h \
  base/utils/MiXiMDefs.h
$O/base/messages/MacPkt_m.o: base/messages/MacPkt_m.cc \
  base/messages/MacPkt_m.h \
  base/utils/SimpleAddress.h \
  base/utils/miximkerneldefs.h \
  ../../inet/src/base/INETDefs.h \
  base/utils/MiXiMDefs.h \
  ../../inet/src/linklayer/contract/MACAddress.h
$O/base/messages/MiximAirFrame_m.o: base/messages/MiximAirFrame_m.cc \
  base/messages/MiximAirFrame_m.h \
  base/phyLayer/Signal_.h \
  base/phyLayer/MappingBase.h \
  base/utils/miximkerneldefs.h \
  base/phyLayer/MappingUtils.h \
  base/phyLayer/Interpolation.h \
  base/phyLayer/Mapping.h \
  base/utils/MiXiMDefs.h
$O/base/messages/NetwPkt_m.o: base/messages/NetwPkt_m.cc \
  base/messages/NetwPkt_m.h \
  base/utils/SimpleAddress.h \
  base/utils/miximkerneldefs.h \
  ../../inet/src/base/INETDefs.h \
  base/utils/MiXiMDefs.h \
  ../../inet/src/linklayer/contract/MACAddress.h
$O/base/modules/BaseApplLayer.o: base/modules/BaseApplLayer.cc \
  base/modules/../modules/BaseBattery.h \
  base/utils/SimpleAddress.h \
  base/utils/miximkerneldefs.h \
  base/modules/../modules/BaseModule.h \
  ../../inet/src/base/INETDefs.h \
  base/modules/BaseApplLayer.h \
  base/utils/MiXiMDefs.h \
  base/modules/BaseLayer.h \
  ../../inet/src/linklayer/contract/MACAddress.h \
  base/utils/PassedMessage.h \
  base/utils/HostState.h \
  base/modules/../modules/MiximBatteryAccess.h
$O/base/modules/BaseArp.o: base/modules/BaseArp.cc \
  base/modules/BaseModule.h \
  base/utils/miximkerneldefs.h \
  base/utils/SimpleAddress.h \
  base/modules/BaseArp.h \
  ../../inet/src/base/INETDefs.h \
  base/utils/MiXiMDefs.h \
  ../../inet/src/linklayer/contract/MACAddress.h \
  base/modules/ArpInterface.h \
  base/utils/FindModule.h \
  base/modules/AddressingInterface.h \
  base/utils/HostState.h
$O/base/modules/BaseBattery.o: base/modules/BaseBattery.cc \
  base/modules/BaseModule.h \
  base/utils/miximkerneldefs.h \
  base/utils/MiXiMDefs.h \
  base/modules/BaseBattery.h \
  base/utils/HostState.h
$O/base/modules/BaseLayer.o: base/modules/BaseLayer.cc \
  base/modules/../modules/BaseBattery.h \
  base/utils/miximkerneldefs.h \
  base/modules/../modules/BaseModule.h \
  base/utils/MiXiMDefs.h \
  base/modules/BaseLayer.h \
  base/utils/PassedMessage.h \
  base/modules/../modules/MiximBatteryAccess.h \
  base/utils/HostState.h
$O/base/modules/BaseMacLayer.o: base/modules/BaseMacLayer.cc \
  base/phyLayer/Signal_.h \
  ../../inet/src/base/NotifierConsts.h \
  base/phyLayer/MappingBase.h \
  ../../inet/src/mobility/IMobility.h \
  base/phyLayer/Interpolation.h \
  base/utils/NetwToMacControlInfo.h \
  ../../inet/src/base/ModuleAccess.h \
  base/utils/PassedMessage.h \
  ../../inet/src/networklayer/common/InterfaceToken.h \
  base/messages/MacPkt_m.h \
  ../../inet/src/util/FWMath.h \
  ../../inet/src/networklayer/common/IInterfaceTable.h \
  base/utils/MiXiMDefs.h \
  ../../inet/src/linklayer/contract/MACAddress.h \
  ../../inet/src/networklayer/common/InterfaceEntry.h \
  base/utils/HostState.h \
  base/phyLayer/MacToPhyInterface.h \
  base/connectionManager/ConnectionManagerAccess.h \
  base/connectionManager/../modules/BaseModule.h \
  base/utils/MacToNetwControlInfo.h \
  base/connectionManager/../modules/BaseBattery.h \
  base/phyLayer/AnalogueModel.h \
  base/phyLayer/MappingUtils.h \
  base/phyLayer/Mapping.h \
  ../../inet/src/networklayer/common/InterfaceTableAccess.h \
  base/phyLayer/MacToPhyControlInfo.h \
  base/modules/../modules/MiximBatteryAccess.h \
  ../../inet/src/base/Coord.h \
  base/connectionManager/../modules/MiximBatteryAccess.h \
  base/modules/../modules/BaseBattery.h \
  base/utils/miximkerneldefs.h \
  base/modules/../modules/BaseModule.h \
  base/utils/SimpleAddress.h \
  ../../inet/src/base/INETDefs.h \
  base/phyLayer/ChannelState.h \
  base/modules/BaseMacLayer.h \
  base/modules/BaseLayer.h \
  base/utils/FindModule.h \
  base/modules/AddressingInterface.h \
  base/phyLayer/PhyUtils.h \
  ../../inet/src/mobility/models/MobilityAccess.h
$O/base/modules/BaseModule.o: base/modules/BaseModule.cc \
  base/utils/MiXiMDefs.h \
  base/utils/HostState.h \
  base/modules/BaseModule.h \
  base/utils/miximkerneldefs.h \
  base/utils/FindModule.h
$O/base/modules/BaseNetwLayer.o: base/modules/BaseNetwLayer.cc \
  base/phyLayer/MappingBase.h \
  base/phyLayer/Interpolation.h \
  base/utils/NetwToMacControlInfo.h \
  base/utils/PassedMessage.h \
  base/messages/NetwPkt_m.h \
  base/utils/MiXiMDefs.h \
  ../../inet/src/linklayer/contract/MACAddress.h \
  base/utils/HostState.h \
  base/modules/BaseNetwLayer.h \
  base/modules/../modules/MiximBatteryAccess.h \
  base/modules/../modules/BaseBattery.h \
  base/utils/NetwControlInfo.h \
  base/utils/miximkerneldefs.h \
  base/modules/../modules/BaseModule.h \
  base/utils/SimpleAddress.h \
  ../../inet/src/base/INETDefs.h \
  base/modules/BaseLayer.h \
  base/modules/BaseMacLayer.h \
  base/modules/ArpInterface.h \
  base/utils/FindModule.h \
  base/modules/AddressingInterface.h
$O/base/modules/BaseWorldUtility.o: base/modules/BaseWorldUtility.cc \
  base/connectionManager/BaseConnectionManager.h \
  base/modules/BaseWorldUtility.h \
  ../../inet/src/util/FWMath.h \
  base/utils/MiXiMDefs.h \
  ../../inet/src/base/Coord.h \
  base/utils/miximkerneldefs.h \
  ../../inet/src/base/INETDefs.h \
  base/connectionManager/NicEntry.h \
  base/utils/FindModule.h
$O/base/modules/MiximBatteryAccess.o: base/modules/MiximBatteryAccess.cc \
  ./base/modules/BaseBattery.h \
  base/utils/MiXiMDefs.h \
  base/utils/HostState.h \
  ./base/modules/MiximBatteryAccess.h \
  base/utils/miximkerneldefs.h \
  ./base/modules/BaseModule.h \
  base/utils/FindModule.h
$O/base/modules/TestApplLayer.o: base/modules/TestApplLayer.cc \
  base/utils/PassedMessage.h \
  base/modules/TestApplLayer.h \
  base/utils/MiXiMDefs.h \
  ../../inet/src/linklayer/contract/MACAddress.h \
  base/utils/HostState.h \
  base/modules/BaseApplLayer.h \
  base/modules/../modules/MiximBatteryAccess.h \
  base/modules/../modules/BaseBattery.h \
  base/utils/NetwControlInfo.h \
  base/messages/ApplPkt_m.h \
  base/utils/miximkerneldefs.h \
  base/modules/../modules/BaseModule.h \
  base/utils/SimpleAddress.h \
  ../../inet/src/base/INETDefs.h \
  base/modules/BaseLayer.h
$O/base/phyLayer/BaseDecider.o: base/phyLayer/BaseDecider.cc \
  base/phyLayer/Signal_.h \
  base/phyLayer/MappingBase.h \
  base/phyLayer/Interpolation.h \
  base/messages/ChannelSenseRequest_m.h \
  ../../inet/src/util/FWMath.h \
  base/utils/MiXiMDefs.h \
  base/messages/MiXiMAirFrame.h \
  base/phyLayer/PhyToMacControlInfo.h \
  base/phyLayer/MappingUtils.h \
  base/phyLayer/Mapping.h \
  base/messages/MiximAirFrame_m.h \
  base/phyLayer/DeciderToPhyInterface.h \
  base/utils/miximkerneldefs.h \
  ../../inet/src/base/INETDefs.h \
  base/phyLayer/Decider.h \
  base/phyLayer/ChannelState.h \
  base/phyLayer/BaseDecider.h
$O/base/phyLayer/BasePhyLayer.o: base/phyLayer/BasePhyLayer.cc \
  base/phyLayer/Signal_.h \
  base/phyLayer/MappingBase.h \
  ../../inet/src/mobility/IMobility.h \
  base/connectionManager/BaseConnectionManager.h \
  base/phyLayer/Interpolation.h \
  base/modules/BaseWorldUtility.h \
  base/phyLayer/ChannelInfo.h \
  ../../inet/src/base/ModuleAccess.h \
  base/messages/ChannelSenseRequest_m.h \
  ../../inet/src/util/FWMath.h \
  base/utils/MiXiMDefs.h \
  base/messages/MiXiMAirFrame.h \
  base/utils/HostState.h \
  base/phyLayer/MacToPhyInterface.h \
  base/connectionManager/ConnectionManagerAccess.h \
  base/connectionManager/../modules/BaseModule.h \
  base/phyLayer/PhyToMacControlInfo.h \
  base/phyLayer/BasePhyLayer.h \
  base/connectionManager/../modules/BaseBattery.h \
  base/phyLayer/AnalogueModel.h \
  base/phyLayer/MappingUtils.h \
  base/phyLayer/Mapping.h \
  base/phyLayer/MacToPhyControlInfo.h \
  ../../inet/src/base/Coord.h \
  base/connectionManager/../modules/MiximBatteryAccess.h \
  base/messages/MiximAirFrame_m.h \
  base/phyLayer/DeciderToPhyInterface.h \
  base/utils/miximkerneldefs.h \
  ../../inet/src/base/INETDefs.h \
  base/phyLayer/ChannelState.h \
  base/phyLayer/Decider.h \
  base/connectionManager/NicEntry.h \
  base/utils/FindModule.h \
  base/phyLayer/PhyUtils.h \
  ../../inet/src/mobility/models/MobilityAccess.h
$O/base/phyLayer/ChannelInfo.o: base/phyLayer/ChannelInfo.cc \
  base/phyLayer/Signal_.h \
  base/phyLayer/MappingBase.h \
  base/phyLayer/Interpolation.h \
  base/phyLayer/ChannelInfo.h \
  base/utils/MiXiMDefs.h \
  base/messages/MiXiMAirFrame.h \
  base/phyLayer/MappingUtils.h \
  base/phyLayer/Mapping.h \
  base/messages/MiximAirFrame_m.h \
  base/utils/miximkerneldefs.h
$O/base/phyLayer/ChannelState.o: base/phyLayer/ChannelState.cc \
  base/utils/MiXiMDefs.h \
  base/utils/miximkerneldefs.h \
  base/phyLayer/ChannelState.h
$O/base/phyLayer/Decider.o: base/phyLayer/Decider.cc \
  base/messages/ChannelSenseRequest_m.h \
  base/utils/MiXiMDefs.h \
  base/phyLayer/DeciderToPhyInterface.h \
  base/utils/miximkerneldefs.h \
  base/phyLayer/ChannelState.h \
  base/phyLayer/Decider.h
$O/base/phyLayer/MappingBase.o: base/phyLayer/MappingBase.cc \
  base/phyLayer/MappingBase.h \
  base/phyLayer/Interpolation.h \
  base/utils/MiXiMDefs.h \
  base/utils/miximkerneldefs.h
$O/base/phyLayer/MappingUtils.o: base/phyLayer/MappingUtils.cc \
  base/phyLayer/MappingBase.h \
  base/phyLayer/Interpolation.h \
  base/utils/MiXiMDefs.h \
  base/phyLayer/MappingUtils.h \
  base/utils/miximkerneldefs.h
$O/base/phyLayer/PhyUtils.o: base/phyLayer/PhyUtils.cc \
  base/phyLayer/Signal_.h \
  base/phyLayer/MappingBase.h \
  base/phyLayer/Interpolation.h \
  ../../inet/src/util/FWMath.h \
  base/utils/MiXiMDefs.h \
  base/messages/MiXiMAirFrame.h \
  base/phyLayer/AnalogueModel.h \
  base/phyLayer/MappingUtils.h \
  base/phyLayer/Mapping.h \
  ../../inet/src/base/Coord.h \
  base/messages/MiximAirFrame_m.h \
  base/utils/miximkerneldefs.h \
  ../../inet/src/base/INETDefs.h \
  base/phyLayer/PhyUtils.h
$O/base/phyLayer/Signal.o: base/phyLayer/Signal.cc \
  base/phyLayer/Signal_.h \
  base/phyLayer/MappingBase.h \
  base/phyLayer/Interpolation.h \
  base/utils/MiXiMDefs.h \
  base/phyLayer/MappingUtils.h \
  base/phyLayer/Mapping.h \
  base/utils/miximkerneldefs.h
$O/base/utils/NetwToMacControlInfo.o: base/utils/NetwToMacControlInfo.cc \
  base/utils/NetwToMacControlInfo.h \
  ../../inet/src/linklayer/contract/Ieee802Ctrl_m.h \
  base/utils/MiXiMDefs.h \
  ../../inet/src/linklayer/contract/MACAddress.h \
  base/utils/SimpleAddress.h \
  base/utils/miximkerneldefs.h \
  ../../inet/src/base/INETDefs.h
$O/base/utils/SimpleAddress.o: base/utils/SimpleAddress.cc \
  ../../inet/src/linklayer/contract/MACAddress.h \
  base/utils/MiXiMDefs.h \
  base/utils/miximkerneldefs.h \
  base/utils/SimpleAddress.h \
  ../../inet/src/base/INETDefs.h
$O/base/utils/winsupport.o: base/utils/winsupport.cc \
  base/utils/winsupport.h
$O/modules/analogueModel/BreakpointPathlossModel.o: modules/analogueModel/BreakpointPathlossModel.cc \
  base/phyLayer/Signal_.h \
  base/phyLayer/MappingBase.h \
  base/phyLayer/Interpolation.h \
  modules/analogueModel/BreakpointPathlossModel.h \
  ../../inet/src/util/FWMath.h \
  base/utils/MiXiMDefs.h \
  base/messages/MiXiMAirFrame.h \
  base/phyLayer/AnalogueModel.h \
  base/phyLayer/MappingUtils.h \
  base/phyLayer/Mapping.h \
  ../../inet/src/base/Coord.h \
  base/messages/MiximAirFrame_m.h \
  base/utils/miximkerneldefs.h \
  ../../inet/src/base/INETDefs.h
$O/modules/analogueModel/JakesFading.o: modules/analogueModel/JakesFading.cc \
  base/phyLayer/Signal_.h \
  base/phyLayer/MappingBase.h \
  ../../inet/src/mobility/IMobility.h \
  modules/analogueModel/JakesFading.h \
  base/phyLayer/Interpolation.h \
  base/modules/BaseWorldUtility.h \
  ../../inet/src/base/ModuleAccess.h \
  ../../inet/src/util/FWMath.h \
  base/utils/MiXiMDefs.h \
  base/messages/MiXiMAirFrame.h \
  base/utils/HostState.h \
  base/connectionManager/ConnectionManagerAccess.h \
  base/connectionManager/../modules/BaseModule.h \
  base/connectionManager/../modules/BaseBattery.h \
  base/phyLayer/AnalogueModel.h \
  base/phyLayer/MappingUtils.h \
  base/phyLayer/Mapping.h \
  ../../inet/src/base/Coord.h \
  base/connectionManager/../modules/MiximBatteryAccess.h \
  base/messages/MiximAirFrame_m.h \
  base/utils/miximkerneldefs.h \
  ../../inet/src/base/INETDefs.h \
  base/utils/FindModule.h \
  ../../inet/src/mobility/models/MobilityAccess.h
$O/modules/analogueModel/LogNormalShadowing.o: modules/analogueModel/LogNormalShadowing.cc \
  base/phyLayer/Signal_.h \
  base/phyLayer/MappingBase.h \
  base/phyLayer/Interpolation.h \
  modules/analogueModel/LogNormalShadowing.h \
  ../../inet/src/util/FWMath.h \
  base/utils/MiXiMDefs.h \
  base/messages/MiXiMAirFrame.h \
  base/phyLayer/AnalogueModel.h \
  base/phyLayer/MappingUtils.h \
  base/phyLayer/Mapping.h \
  ../../inet/src/base/Coord.h \
  base/messages/MiximAirFrame_m.h \
  base/utils/miximkerneldefs.h \
  ../../inet/src/base/INETDefs.h
$O/modules/analogueModel/PERModel.o: modules/analogueModel/PERModel.cc \
  base/phyLayer/Signal_.h \
  base/phyLayer/MappingBase.h \
  base/phyLayer/Interpolation.h \
  ../../inet/src/util/FWMath.h \
  base/utils/MiXiMDefs.h \
  base/messages/MiXiMAirFrame.h \
  modules/analogueModel/PERModel.h \
  base/phyLayer/AnalogueModel.h \
  base/phyLayer/MappingUtils.h \
  base/phyLayer/Mapping.h \
  ../../inet/src/base/Coord.h \
  base/messages/MiximAirFrame_m.h \
  base/utils/miximkerneldefs.h \
  ../../inet/src/base/INETDefs.h
$O/modules/analogueModel/SimplePathlossModel.o: modules/analogueModel/SimplePathlossModel.cc \
  base/phyLayer/Signal_.h \
  base/phyLayer/MappingBase.h \
  base/phyLayer/Interpolation.h \
  base/modules/BaseWorldUtility.h \
  ../../inet/src/util/FWMath.h \
  base/utils/MiXiMDefs.h \
  base/messages/MiXiMAirFrame.h \
  base/phyLayer/AnalogueModel.h \
  base/phyLayer/MappingUtils.h \
  base/phyLayer/Mapping.h \
  ../../inet/src/base/Coord.h \
  base/messages/MiximAirFrame_m.h \
  base/utils/miximkerneldefs.h \
  ../../inet/src/base/INETDefs.h \
  modules/analogueModel/SimplePathlossModel.h
$O/modules/analogueModel/UWBIRIEEE802154APathlossModel.o: modules/analogueModel/UWBIRIEEE802154APathlossModel.cc \
  base/phyLayer/Signal_.h \
  base/phyLayer/MappingBase.h \
  base/phyLayer/Interpolation.h \
  ../../inet/src/util/FWMath.h \
  base/utils/MiXiMDefs.h \
  base/messages/MiXiMAirFrame.h \
  base/phyLayer/AnalogueModel.h \
  base/phyLayer/MappingUtils.h \
  base/phyLayer/Mapping.h \
  ../../inet/src/base/Coord.h \
  modules/utility/IEEE802154A.h \
  base/messages/MiximAirFrame_m.h \
  modules/analogueModel/UWBIRIEEE802154APathlossModel.h \
  base/utils/miximkerneldefs.h \
  ../../inet/src/base/INETDefs.h \
  modules/utility/SimpleTimeConstMapping.h
$O/modules/analogueModel/UWBIRStochasticPathlossModel.o: modules/analogueModel/UWBIRStochasticPathlossModel.cc \
  base/phyLayer/Signal_.h \
  base/phyLayer/MappingBase.h \
  base/phyLayer/Interpolation.h \
  base/modules/BaseWorldUtility.h \
  ../../inet/src/util/FWMath.h \
  base/utils/MiXiMDefs.h \
  base/messages/MiXiMAirFrame.h \
  modules/analogueModel/UWBIRStochasticPathlossModel.h \
  base/phyLayer/AnalogueModel.h \
  base/phyLayer/MappingUtils.h \
  base/phyLayer/Mapping.h \
  ../../inet/src/base/Coord.h \
  base/messages/MiximAirFrame_m.h \
  base/utils/miximkerneldefs.h \
  ../../inet/src/base/INETDefs.h
$O/modules/application/BurstApplLayer.o: modules/application/BurstApplLayer.cc \
  base/utils/PassedMessage.h \
  base/modules/TestApplLayer.h \
  base/utils/MiXiMDefs.h \
  ../../inet/src/linklayer/contract/MACAddress.h \
  base/utils/HostState.h \
  base/modules/BaseApplLayer.h \
  base/modules/../modules/MiximBatteryAccess.h \
  modules/application/BurstApplLayer.h \
  base/modules/../modules/BaseBattery.h \
  base/messages/ApplPkt_m.h \
  base/utils/miximkerneldefs.h \
  base/utils/SimpleAddress.h \
  base/modules/../modules/BaseModule.h \
  ../../inet/src/base/INETDefs.h \
  base/modules/BaseLayer.h
$O/modules/application/BurstApplLayerBattery.o: modules/application/BurstApplLayerBattery.cc \
  base/utils/PassedMessage.h \
  base/modules/TestApplLayer.h \
  base/utils/MiXiMDefs.h \
  ../../inet/src/linklayer/contract/MACAddress.h \
  modules/application/BurstApplLayerBattery.h \
  base/utils/HostState.h \
  base/modules/BaseApplLayer.h \
  base/modules/../modules/MiximBatteryAccess.h \
  modules/application/BurstApplLayer.h \
  base/modules/../modules/BaseBattery.h \
  base/messages/ApplPkt_m.h \
  base/utils/miximkerneldefs.h \
  base/modules/../modules/BaseModule.h \
  base/utils/SimpleAddress.h \
  ../../inet/src/base/INETDefs.h \
  base/modules/BaseLayer.h
$O/modules/application/SensorApplLayer.o: modules/application/SensorApplLayer.cc \
  base/modules/BaseWorldUtility.h \
  base/utils/PassedMessage.h \
  ../../inet/src/util/FWMath.h \
  base/utils/MiXiMDefs.h \
  ../../inet/src/linklayer/contract/MACAddress.h \
  base/utils/HostState.h \
  modules/application/SensorApplLayer.h \
  modules/utility/Packet.h \
  base/modules/BaseNetwLayer.h \
  base/modules/../modules/MiximBatteryAccess.h \
  ../../inet/src/base/Coord.h \
  base/modules/BaseModule.h \
  base/modules/../modules/BaseBattery.h \
  base/utils/NetwControlInfo.h \
  base/messages/ApplPkt_m.h \
  base/utils/miximkerneldefs.h \
  base/modules/../modules/BaseModule.h \
  base/utils/SimpleAddress.h \
  ../../inet/src/base/INETDefs.h \
  base/modules/BaseLayer.h \
  base/utils/FindModule.h \
  base/modules/AddressingInterface.h
$O/modules/application/TestApplication.o: modules/application/TestApplication.cc \
  base/phyLayer/MappingBase.h \
  base/phyLayer/Interpolation.h \
  base/utils/PassedMessage.h \
  base/utils/MiXiMDefs.h \
  ../../inet/src/linklayer/contract/MACAddress.h \
  base/utils/HostState.h \
  modules/application/TestApplication.h \
  base/modules/../modules/MiximBatteryAccess.h \
  base/modules/BaseModule.h \
  base/modules/../modules/BaseBattery.h \
  base/utils/NetwControlInfo.h \
  base/messages/ApplPkt_m.h \
  base/modules/../modules/BaseModule.h \
  base/utils/SimpleAddress.h \
  base/utils/miximkerneldefs.h \
  ../../inet/src/base/INETDefs.h \
  base/modules/BaseLayer.h \
  base/modules/BaseMacLayer.h
$O/modules/application/TrafficGen.o: modules/application/TrafficGen.cc \
  modules/application/TrafficGen.h \
  base/modules/BaseWorldUtility.h \
  base/utils/PassedMessage.h \
  ../../inet/src/util/FWMath.h \
  base/utils/MiXiMDefs.h \
  ../../inet/src/linklayer/contract/MACAddress.h \
  base/utils/HostState.h \
  modules/utility/Packet.h \
  base/modules/BaseApplLayer.h \
  base/modules/BaseNetwLayer.h \
  base/modules/../modules/MiximBatteryAccess.h \
  ../../inet/src/base/Coord.h \
  base/modules/../modules/BaseBattery.h \
  base/utils/NetwControlInfo.h \
  base/messages/ApplPkt_m.h \
  base/utils/miximkerneldefs.h \
  base/modules/../modules/BaseModule.h \
  base/utils/SimpleAddress.h \
  ../../inet/src/base/INETDefs.h \
  base/modules/BaseLayer.h \
  base/utils/FindModule.h
$O/modules/connectionManager/UnitDisk.o: modules/connectionManager/UnitDisk.cc \
  base/connectionManager/BaseConnectionManager.h \
  base/connectionManager/ConnectionManager.h \
  ../../inet/src/util/FWMath.h \
  base/utils/MiXiMDefs.h \
  ../../inet/src/base/Coord.h \
  base/utils/miximkerneldefs.h \
  ../../inet/src/base/INETDefs.h \
  base/connectionManager/NicEntry.h \
  modules/connectionManager/UnitDisk.h
$O/modules/mac/AlohaMacLayer.o: modules/mac/AlohaMacLayer.cc \
  base/phyLayer/Signal_.h \
  base/phyLayer/MappingBase.h \
  base/phyLayer/Interpolation.h \
  base/utils/PassedMessage.h \
  modules/messages/UWBIRMacPkt.h \
  base/messages/MacPkt_m.h \
  ../../inet/src/util/FWMath.h \
  base/utils/MiXiMDefs.h \
  ../../inet/src/linklayer/contract/MACAddress.h \
  base/utils/HostState.h \
  base/phyLayer/MacToPhyInterface.h \
  modules/utility/Packet.h \
  base/phyLayer/AnalogueModel.h \
  base/phyLayer/MappingUtils.h \
  base/phyLayer/Mapping.h \
  base/modules/../modules/MiximBatteryAccess.h \
  ../../inet/src/base/Coord.h \
  modules/mac/UWBIRMac.h \
  modules/utility/IEEE802154A.h \
  base/modules/../modules/BaseBattery.h \
  base/utils/miximkerneldefs.h \
  base/modules/../modules/BaseModule.h \
  base/utils/SimpleAddress.h \
  ../../inet/src/base/INETDefs.h \
  base/phyLayer/ChannelState.h \
  modules/mac/AlohaMacLayer.h \
  base/messages/MiXiMMacPkt.h \
  base/modules/BaseMacLayer.h \
  base/modules/BaseLayer.h \
  modules/messages/UWBIRMacPkt_m.h \
  base/phyLayer/PhyUtils.h
$O/modules/mac/BMacLayer.o: modules/mac/BMacLayer.cc \
  base/phyLayer/Signal_.h \
  base/phyLayer/MappingBase.h \
  base/connectionManager/BaseConnectionManager.h \
  base/phyLayer/Interpolation.h \
  modules/utility/DroppedPacket.h \
  base/utils/PassedMessage.h \
  base/messages/MacPkt_m.h \
  base/modules/BaseArp.h \
  ../../inet/src/util/FWMath.h \
  base/utils/MiXiMDefs.h \
  ../../inet/src/linklayer/contract/MACAddress.h \
  base/utils/HostState.h \
  base/phyLayer/MacToPhyInterface.h \
  base/phyLayer/AnalogueModel.h \
  base/phyLayer/MappingUtils.h \
  base/phyLayer/Mapping.h \
  base/modules/../modules/MiximBatteryAccess.h \
  base/phyLayer/MacToPhyControlInfo.h \
  ../../inet/src/base/Coord.h \
  base/modules/BaseModule.h \
  base/modules/../modules/BaseBattery.h \
  base/utils/miximkerneldefs.h \
  base/modules/../modules/BaseModule.h \
  base/utils/SimpleAddress.h \
  ../../inet/src/base/INETDefs.h \
  base/phyLayer/ChannelState.h \
  base/connectionManager/NicEntry.h \
  modules/mac/BMacLayer.h \
  base/modules/BaseMacLayer.h \
  base/modules/BaseLayer.h \
  base/modules/ArpInterface.h \
  base/modules/AddressingInterface.h \
  base/phyLayer/PhyUtils.h
$O/modules/mac/CSMA802154.o: modules/mac/CSMA802154.cc \
  base/phyLayer/MappingBase.h \
  base/phyLayer/Interpolation.h \
  base/utils/PassedMessage.h \
  modules/utility/DroppedPacket.h \
  base/messages/MacPkt_m.h \
  base/messages/ChannelSenseRequest_m.h \
  base/utils/MiXiMDefs.h \
  modules/mac/csma.h \
  ../../inet/src/linklayer/contract/MACAddress.h \
  base/utils/HostState.h \
  modules/phy/Decider802154Narrow.h \
  modules/phy/DeciderResult802154Narrow.h \
  base/phyLayer/PhyToMacControlInfo.h \
  base/utils/MacToNetwControlInfo.h \
  modules/mac/CSMA802154.h \
  base/modules/../modules/MiximBatteryAccess.h \
  base/modules/../modules/BaseBattery.h \
  base/phyLayer/DeciderToPhyInterface.h \
  base/utils/miximkerneldefs.h \
  base/utils/SimpleAddress.h \
  base/modules/../modules/BaseModule.h \
  ../../inet/src/base/INETDefs.h \
  base/phyLayer/Decider.h \
  base/phyLayer/ChannelState.h \
  base/modules/BaseLayer.h \
  base/modules/BaseMacLayer.h \
  base/phyLayer/BaseDecider.h
$O/modules/mac/CSMAMacLayer.o: modules/mac/CSMAMacLayer.cc \
  base/phyLayer/Signal_.h \
  base/phyLayer/MappingBase.h \
  base/connectionManager/BaseConnectionManager.h \
  base/phyLayer/Interpolation.h \
  base/utils/PassedMessage.h \
  modules/mac/./CSMAMacLayer.h \
  base/messages/MacPkt_m.h \
  ../../inet/src/util/FWMath.h \
  base/utils/MiXiMDefs.h \
  ../../inet/src/linklayer/contract/MACAddress.h \
  base/utils/HostState.h \
  base/phyLayer/MacToPhyInterface.h \
  base/phyLayer/AnalogueModel.h \
  base/phyLayer/MappingUtils.h \
  base/phyLayer/Mapping.h \
  base/modules/../modules/MiximBatteryAccess.h \
  ../../inet/src/base/Coord.h \
  base/modules/../modules/BaseBattery.h \
  base/utils/miximkerneldefs.h \
  base/modules/../modules/BaseModule.h \
  base/utils/SimpleAddress.h \
  ../../inet/src/base/INETDefs.h \
  base/phyLayer/ChannelState.h \
  base/connectionManager/NicEntry.h \
  base/modules/BaseMacLayer.h \
  base/modules/BaseLayer.h \
  base/phyLayer/PhyUtils.h
$O/modules/mac/LMacLayer.o: modules/mac/LMacLayer.cc \
  base/phyLayer/Signal_.h \
  base/phyLayer/MappingBase.h \
  base/phyLayer/Interpolation.h \
  modules/utility/DroppedPacket.h \
  base/utils/PassedMessage.h \
  base/messages/MacPkt_m.h \
  ../../inet/src/util/FWMath.h \
  base/utils/MiXiMDefs.h \
  ../../inet/src/linklayer/contract/MACAddress.h \
  base/utils/HostState.h \
  base/phyLayer/MacToPhyInterface.h \
  modules/mac/LMacLayer.h \
  base/phyLayer/AnalogueModel.h \
  base/phyLayer/MappingUtils.h \
  base/phyLayer/Mapping.h \
  base/modules/../modules/MiximBatteryAccess.h \
  ../../inet/src/base/Coord.h \
  modules/messages/LMacPkt_m.h \
  base/modules/../modules/BaseBattery.h \
  base/utils/SimpleAddress.h \
  base/utils/miximkerneldefs.h \
  base/modules/../modules/BaseModule.h \
  ../../inet/src/base/INETDefs.h \
  base/phyLayer/ChannelState.h \
  base/messages/MiXiMMacPkt.h \
  base/modules/BaseMacLayer.h \
  base/modules/BaseLayer.h \
  base/utils/FindModule.h \
  base/phyLayer/PhyUtils.h
$O/modules/mac/Mac80211.o: modules/mac/Mac80211.cc \
  base/phyLayer/Signal_.h \
  base/phyLayer/MappingBase.h \
  base/connectionManager/BaseConnectionManager.h \
  base/phyLayer/Interpolation.h \
  base/utils/PassedMessage.h \
  modules/phy/DeciderResult80211.h \
  base/messages/MacPkt_m.h \
  base/messages/ChannelSenseRequest_m.h \
  ../../inet/src/util/FWMath.h \
  base/utils/MiXiMDefs.h \
  ../../inet/src/linklayer/contract/MACAddress.h \
  modules/utility/Consts80211.h \
  base/utils/HostState.h \
  base/phyLayer/MacToPhyInterface.h \
  modules/mac/Mac80211.h \
  base/phyLayer/PhyToMacControlInfo.h \
  base/phyLayer/AnalogueModel.h \
  base/phyLayer/MappingUtils.h \
  base/phyLayer/Mapping.h \
  base/modules/../modules/MiximBatteryAccess.h \
  ../../inet/src/base/Coord.h \
  base/modules/../modules/BaseBattery.h \
  base/phyLayer/DeciderToPhyInterface.h \
  base/utils/miximkerneldefs.h \
  base/modules/../modules/BaseModule.h \
  base/utils/SimpleAddress.h \
  modules/messages/Mac80211Pkt_m.h \
  ../../inet/src/base/INETDefs.h \
  base/phyLayer/Decider.h \
  base/phyLayer/ChannelState.h \
  base/connectionManager/NicEntry.h \
  base/messages/MiXiMMacPkt.h \
  base/modules/BaseMacLayer.h \
  base/modules/BaseLayer.h \
  base/phyLayer/PhyUtils.h \
  base/phyLayer/BaseDecider.h \
  modules/phy/Decider80211.h
$O/modules/mac/Mac80211MultiChannel.o: modules/mac/Mac80211MultiChannel.cc \
  base/phyLayer/Signal_.h \
  base/phyLayer/MappingBase.h \
  ../../inet/src/mobility/IMobility.h \
  base/phyLayer/Interpolation.h \
  base/phyLayer/ChannelInfo.h \
  ../../inet/src/base/ModuleAccess.h \
  base/utils/PassedMessage.h \
  base/messages/MacPkt_m.h \
  ../../inet/src/util/FWMath.h \
  base/utils/MiXiMDefs.h \
  ../../inet/src/linklayer/contract/MACAddress.h \
  base/messages/MiXiMAirFrame.h \
  base/phyLayer/MacToPhyInterface.h \
  base/utils/HostState.h \
  modules/utility/Consts80211.h \
  base/connectionManager/ConnectionManagerAccess.h \
  modules/mac/./Mac80211.h \
  base/connectionManager/../modules/BaseModule.h \
  base/phyLayer/BasePhyLayer.h \
  base/connectionManager/../modules/BaseBattery.h \
  base/phyLayer/AnalogueModel.h \
  base/phyLayer/MappingUtils.h \
  base/phyLayer/Mapping.h \
  base/modules/../modules/MiximBatteryAccess.h \
  ../../inet/src/base/Coord.h \
  base/connectionManager/../modules/MiximBatteryAccess.h \
  base/messages/MiximAirFrame_m.h \
  modules/mac/Mac80211MultiChannel.h \
  base/modules/../modules/BaseBattery.h \
  base/phyLayer/DeciderToPhyInterface.h \
  base/utils/miximkerneldefs.h \
  base/utils/SimpleAddress.h \
  base/modules/../modules/BaseModule.h \
  ../../inet/src/base/INETDefs.h \
  modules/messages/Mac80211Pkt_m.h \
  base/phyLayer/ChannelState.h \
  base/messages/MiXiMMacPkt.h \
  base/modules/BaseLayer.h \
  base/modules/BaseMacLayer.h \
  base/utils/FindModule.h \
  base/phyLayer/PhyUtils.h \
  ../../inet/src/mobility/models/MobilityAccess.h
$O/modules/mac/UWBIRMac.o: modules/mac/UWBIRMac.cc \
  base/phyLayer/Signal_.h \
  base/phyLayer/MappingBase.h \
  base/phyLayer/Interpolation.h \
  modules/phy/MacToUWBIRPhyControlInfo.h \
  base/utils/PassedMessage.h \
  modules/messages/UWBIRMacPkt.h \
  base/messages/MacPkt_m.h \
  base/messages/ChannelSenseRequest_m.h \
  ../../inet/src/util/FWMath.h \
  ../../inet/src/linklayer/contract/MACAddress.h \
  base/utils/MiXiMDefs.h \
  base/utils/HostState.h \
  base/phyLayer/MacToPhyInterface.h \
  modules/utility/Packet.h \
  base/phyLayer/PhyToMacControlInfo.h \
  base/phyLayer/AnalogueModel.h \
  base/phyLayer/MappingUtils.h \
  base/phyLayer/Mapping.h \
  base/phyLayer/MacToPhyControlInfo.h \
  base/modules/../modules/MiximBatteryAccess.h \
  modules/phy/DeciderResultUWBIR.h \
  ../../inet/src/base/Coord.h \
  modules/mac/UWBIRMac.h \
  modules/utility/IEEE802154A.h \
  base/modules/../modules/BaseBattery.h \
  base/phyLayer/DeciderToPhyInterface.h \
  base/utils/SimpleAddress.h \
  base/modules/../modules/BaseModule.h \
  base/utils/miximkerneldefs.h \
  ../../inet/src/base/INETDefs.h \
  base/phyLayer/Decider.h \
  base/phyLayer/ChannelState.h \
  base/messages/MiXiMMacPkt.h \
  base/modules/BaseLayer.h \
  base/modules/BaseMacLayer.h \
  modules/messages/UWBIRMacPkt_m.h \
  base/utils/FindModule.h \
  base/phyLayer/PhyUtils.h
$O/modules/mac/csma.o: modules/mac/csma.cc \
  base/phyLayer/Signal_.h \
  base/phyLayer/MappingBase.h \
  ../../inet/src/mobility/IMobility.h \
  base/connectionManager/BaseConnectionManager.h \
  base/phyLayer/Interpolation.h \
  base/phyLayer/ChannelInfo.h \
  ../../inet/src/base/ModuleAccess.h \
  modules/utility/DroppedPacket.h \
  base/utils/PassedMessage.h \
  base/messages/MacPkt_m.h \
  base/modules/BaseArp.h \
  base/messages/ChannelSenseRequest_m.h \
  ../../inet/src/util/FWMath.h \
  base/utils/MiXiMDefs.h \
  ../../inet/src/linklayer/contract/MACAddress.h \
  modules/mac/csma.h \
  base/messages/MiXiMAirFrame.h \
  base/phyLayer/MacToPhyInterface.h \
  base/utils/HostState.h \
  base/connectionManager/ConnectionManagerAccess.h \
  base/connectionManager/../modules/BaseModule.h \
  base/phyLayer/BasePhyLayer.h \
  base/connectionManager/../modules/BaseBattery.h \
  base/phyLayer/AnalogueModel.h \
  base/phyLayer/MappingUtils.h \
  base/phyLayer/Mapping.h \
  base/modules/../modules/MiximBatteryAccess.h \
  ../../inet/src/base/Coord.h \
  base/connectionManager/../modules/MiximBatteryAccess.h \
  base/messages/MiximAirFrame_m.h \
  base/modules/BaseModule.h \
  base/modules/../modules/BaseBattery.h \
  base/phyLayer/DeciderToPhyInterface.h \
  base/utils/miximkerneldefs.h \
  base/modules/../modules/BaseModule.h \
  base/utils/SimpleAddress.h \
  ../../inet/src/base/INETDefs.h \
  base/phyLayer/Decider.h \
  base/phyLayer/ChannelState.h \
  base/connectionManager/NicEntry.h \
  base/modules/BaseMacLayer.h \
  base/modules/BaseLayer.h \
  base/modules/ArpInterface.h \
  base/utils/FindModule.h \
  base/phyLayer/PhyUtils.h \
  base/modules/AddressingInterface.h \
  base/phyLayer/BaseDecider.h \
  ../../inet/src/mobility/models/MobilityAccess.h
$O/modules/messages/AggrPkt.o: modules/messages/AggrPkt.cc \
  modules/messages/AggrPkt_m.h \
  base/utils/MiXiMDefs.h \
  ../../inet/src/linklayer/contract/MACAddress.h \
  base/messages/ApplPkt_m.h \
  base/utils/miximkerneldefs.h \
  base/utils/SimpleAddress.h \
  ../../inet/src/base/INETDefs.h \
  modules/messages/AggrPkt.h
$O/modules/messages/AggrPkt_m.o: modules/messages/AggrPkt_m.cc \
  modules/messages/AggrPkt_m.h \
  ../../inet/src/linklayer/contract/MACAddress.h \
  base/utils/MiXiMDefs.h \
  base/messages/ApplPkt_m.h \
  base/utils/miximkerneldefs.h \
  base/utils/SimpleAddress.h \
  ../../inet/src/base/INETDefs.h
$O/modules/messages/AirFrameUWBIR_m.o: modules/messages/AirFrameUWBIR_m.cc \
  base/phyLayer/Signal_.h \
  base/phyLayer/MappingBase.h \
  base/phyLayer/Interpolation.h \
  base/utils/MiXiMDefs.h \
  base/messages/MiXiMAirFrame.h \
  modules/messages/AirFrameUWBIR_m.h \
  base/phyLayer/MappingUtils.h \
  base/phyLayer/Mapping.h \
  modules/utility/IEEE802154A.h \
  base/messages/MiximAirFrame_m.h \
  base/utils/miximkerneldefs.h
$O/modules/messages/DummyRoutePkt_m.o: modules/messages/DummyRoutePkt_m.cc \
  base/messages/NetwPkt_m.h \
  ../../inet/src/linklayer/contract/MACAddress.h \
  base/utils/MiXiMDefs.h \
  base/utils/miximkerneldefs.h \
  base/utils/SimpleAddress.h \
  ../../inet/src/base/INETDefs.h \
  modules/messages/DummyRoutePkt_m.h
$O/modules/messages/LMacPkt_m.o: modules/messages/LMacPkt_m.cc \
  base/messages/MacPkt_m.h \
  base/utils/MiXiMDefs.h \
  ../../inet/src/linklayer/contract/MACAddress.h \
  modules/messages/LMacPkt_m.h \
  base/utils/SimpleAddress.h \
  base/utils/miximkerneldefs.h \
  ../../inet/src/base/INETDefs.h \
  base/messages/MiXiMMacPkt.h
$O/modules/messages/Mac80211Pkt_m.o: modules/messages/Mac80211Pkt_m.cc \
  base/messages/MacPkt_m.h \
  base/utils/MiXiMDefs.h \
  ../../inet/src/linklayer/contract/MACAddress.h \
  base/utils/SimpleAddress.h \
  base/utils/miximkerneldefs.h \
  ../../inet/src/base/INETDefs.h \
  modules/messages/Mac80211Pkt_m.h \
  base/messages/MiXiMMacPkt.h
$O/modules/messages/ProbabilisticBroadcastPkt_m.o: modules/messages/ProbabilisticBroadcastPkt_m.cc \
  base/messages/NetwPkt_m.h \
  ../../inet/src/linklayer/contract/MACAddress.h \
  base/utils/MiXiMDefs.h \
  modules/messages/ProbabilisticBroadcastPkt_m.h \
  base/utils/miximkerneldefs.h \
  base/utils/SimpleAddress.h \
  ../../inet/src/base/INETDefs.h
$O/modules/messages/UWBIRMacPkt.o: modules/messages/UWBIRMacPkt.cc \
  modules/messages/UWBIRMacPkt.h \
  base/messages/MacPkt_m.h \
  base/utils/MiXiMDefs.h \
  ../../inet/src/linklayer/contract/MACAddress.h \
  base/utils/miximkerneldefs.h \
  base/utils/SimpleAddress.h \
  ../../inet/src/base/INETDefs.h \
  base/messages/MiXiMMacPkt.h \
  modules/messages/UWBIRMacPkt_m.h
$O/modules/messages/UWBIRMacPkt_m.o: modules/messages/UWBIRMacPkt_m.cc \
  base/messages/MacPkt_m.h \
  base/utils/MiXiMDefs.h \
  ../../inet/src/linklayer/contract/MACAddress.h \
  base/utils/SimpleAddress.h \
  base/utils/miximkerneldefs.h \
  ../../inet/src/base/INETDefs.h \
  base/messages/MiXiMMacPkt.h \
  modules/messages/UWBIRMacPkt_m.h
$O/modules/messages/WiseRoutePkt_m.o: modules/messages/WiseRoutePkt_m.cc \
  modules/messages/WiseRoutePkt_m.h \
  base/messages/NetwPkt_m.h \
  ../../inet/src/linklayer/contract/MACAddress.h \
  base/utils/MiXiMDefs.h \
  base/utils/miximkerneldefs.h \
  base/utils/SimpleAddress.h \
  ../../inet/src/base/INETDefs.h
$O/modules/netw/AdaptiveProbabilisticBroadcast.o: modules/netw/AdaptiveProbabilisticBroadcast.cc \
  base/utils/PassedMessage.h \
  modules/netw/AdaptiveProbabilisticBroadcast.h \
  base/messages/NetwPkt_m.h \
  base/utils/MiXiMDefs.h \
  ../../inet/src/linklayer/contract/MACAddress.h \
  base/utils/HostState.h \
  modules/netw/ProbabilisticBroadcast.h \
  base/modules/BaseNetwLayer.h \
  base/modules/../modules/MiximBatteryAccess.h \
  base/modules/../modules/BaseBattery.h \
  modules/messages/ProbabilisticBroadcastPkt_m.h \
  base/utils/SimpleAddress.h \
  base/utils/miximkerneldefs.h \
  base/modules/../modules/BaseModule.h \
  ../../inet/src/base/INETDefs.h \
  base/modules/BaseLayer.h
$O/modules/netw/ArpHost.o: modules/netw/ArpHost.cc \
  modules/netw/ArpHost.h \
  base/utils/MiXiMDefs.h \
  ../../inet/src/linklayer/contract/MACAddress.h \
  base/utils/HostState.h \
  base/modules/BaseModule.h \
  base/utils/miximkerneldefs.h \
  base/utils/SimpleAddress.h \
  ../../inet/src/base/INETDefs.h \
  base/modules/ArpInterface.h \
  base/utils/FindModule.h \
  base/modules/AddressingInterface.h
$O/modules/netw/DummyRoute.o: modules/netw/DummyRoute.cc \
  base/utils/PassedMessage.h \
  modules/netw/DummyRoute.h \
  base/messages/NetwPkt_m.h \
  base/utils/MiXiMDefs.h \
  ../../inet/src/linklayer/contract/MACAddress.h \
  base/utils/HostState.h \
  base/modules/BaseNetwLayer.h \
  base/modules/../modules/MiximBatteryAccess.h \
  base/modules/../modules/BaseBattery.h \
  base/utils/NetwControlInfo.h \
  base/utils/miximkerneldefs.h \
  base/modules/../modules/BaseModule.h \
  base/utils/SimpleAddress.h \
  ../../inet/src/base/INETDefs.h \
  modules/messages/DummyRoutePkt_m.h \
  base/modules/BaseLayer.h \
  base/modules/ArpInterface.h
$O/modules/netw/Flood.o: modules/netw/Flood.cc \
  base/utils/PassedMessage.h \
  base/messages/NetwPkt_m.h \
  base/utils/MiXiMDefs.h \
  ../../inet/src/linklayer/contract/MACAddress.h \
  base/utils/HostState.h \
  base/modules/BaseNetwLayer.h \
  modules/netw/Flood.h \
  base/modules/../modules/MiximBatteryAccess.h \
  base/modules/../modules/BaseBattery.h \
  base/utils/NetwControlInfo.h \
  base/utils/SimpleAddress.h \
  base/utils/miximkerneldefs.h \
  base/modules/../modules/BaseModule.h \
  ../../inet/src/base/INETDefs.h \
  base/modules/BaseLayer.h
$O/modules/netw/ProbabilisticBroadcast.o: modules/netw/ProbabilisticBroadcast.cc \
  modules/utility/ProbBcastNetwControlInfo.h \
  base/utils/PassedMessage.h \
  base/messages/NetwPkt_m.h \
  base/utils/MiXiMDefs.h \
  ../../inet/src/linklayer/contract/MACAddress.h \
  base/utils/HostState.h \
  base/utils/MacToNetwControlInfo.h \
  modules/netw/ProbabilisticBroadcast.h \
  base/modules/BaseNetwLayer.h \
  base/modules/../modules/MiximBatteryAccess.h \
  base/utils/NetwControlInfo.h \
  base/modules/../modules/BaseBattery.h \
  modules/messages/ProbabilisticBroadcastPkt_m.h \
  base/utils/miximkerneldefs.h \
  base/utils/SimpleAddress.h \
  base/modules/../modules/BaseModule.h \
  ../../inet/src/base/INETDefs.h \
  base/modules/BaseLayer.h
$O/modules/netw/WiseRoute.o: modules/netw/WiseRoute.cc \
  ../../inet/src/mobility/IMobility.h \
  modules/messages/WiseRoutePkt_m.h \
  base/modules/BaseWorldUtility.h \
  ../../inet/src/base/ModuleAccess.h \
  base/utils/PassedMessage.h \
  base/messages/NetwPkt_m.h \
  modules/netw/WiseRoute.h \
  ../../inet/src/util/FWMath.h \
  base/utils/MiXiMDefs.h \
  ../../inet/src/linklayer/contract/MACAddress.h \
  base/utils/HostState.h \
  base/connectionManager/ConnectionManagerAccess.h \
  base/connectionManager/../modules/BaseModule.h \
  modules/utility/Packet.h \
  base/utils/MacToNetwControlInfo.h \
  base/connectionManager/../modules/BaseBattery.h \
  modules/utility/SimTracer.h \
  base/modules/BaseNetwLayer.h \
  base/modules/../modules/MiximBatteryAccess.h \
  ../../inet/src/base/Coord.h \
  base/connectionManager/../modules/MiximBatteryAccess.h \
  base/modules/../modules/BaseBattery.h \
  base/utils/NetwControlInfo.h \
  base/utils/SimpleAddress.h \
  base/utils/miximkerneldefs.h \
  base/modules/../modules/BaseModule.h \
  ../../inet/src/base/INETDefs.h \
  base/modules/BaseLayer.h \
  base/utils/FindModule.h \
  base/modules/ArpInterface.h \
  ../../inet/src/mobility/models/MobilityAccess.h
$O/modules/phy/Decider80211.o: modules/phy/Decider80211.cc \
  base/phyLayer/Signal_.h \
  base/phyLayer/MappingBase.h \
  base/phyLayer/Interpolation.h \
  modules/phy/DeciderResult80211.h \
  base/messages/MacPkt_m.h \
  base/messages/ChannelSenseRequest_m.h \
  ../../inet/src/util/FWMath.h \
  ../../inet/src/linklayer/contract/MACAddress.h \
  base/utils/MiXiMDefs.h \
  base/messages/MiXiMAirFrame.h \
  modules/utility/Consts80211.h \
  base/phyLayer/MappingUtils.h \
  base/phyLayer/Mapping.h \
  base/messages/MiximAirFrame_m.h \
  base/phyLayer/DeciderToPhyInterface.h \
  modules/phy/./Decider80211.h \
  base/utils/SimpleAddress.h \
  base/utils/miximkerneldefs.h \
  modules/messages/Mac80211Pkt_m.h \
  ../../inet/src/base/INETDefs.h \
  base/phyLayer/ChannelState.h \
  base/phyLayer/Decider.h \
  base/messages/MiXiMMacPkt.h \
  base/phyLayer/BaseDecider.h
$O/modules/phy/Decider80211Battery.o: modules/phy/Decider80211Battery.cc \
  base/phyLayer/MappingBase.h \
  base/phyLayer/Interpolation.h \
  modules/phy/Decider80211Battery.h \
  base/messages/ChannelSenseRequest_m.h \
  ../../inet/src/util/FWMath.h \
  base/utils/MiXiMDefs.h \
  base/phyLayer/AnalogueModel.h \
  base/phyLayer/MappingUtils.h \
  base/phyLayer/Mapping.h \
  ../../inet/src/base/Coord.h \
  modules/phy/./Decider80211.h \
  base/phyLayer/DeciderToPhyInterface.h \
  base/utils/miximkerneldefs.h \
  ../../inet/src/base/INETDefs.h \
  base/phyLayer/Decider.h \
  base/phyLayer/ChannelState.h \
  base/phyLayer/BaseDecider.h \
  base/phyLayer/PhyUtils.h
$O/modules/phy/Decider80211MultiChannel.o: modules/phy/Decider80211MultiChannel.cc \
  base/phyLayer/Signal_.h \
  base/phyLayer/MappingBase.h \
  modules/phy/Decider80211Battery.h \
  base/phyLayer/Interpolation.h \
  modules/phy/Decider80211MultiChannel.h \
  modules/phy/DeciderResult80211.h \
  base/messages/ChannelSenseRequest_m.h \
  base/utils/MiXiMDefs.h \
  base/messages/MiXiMAirFrame.h \
  modules/utility/Consts80211.h \
  base/phyLayer/MappingUtils.h \
  base/phyLayer/Mapping.h \
  base/messages/MiximAirFrame_m.h \
  base/phyLayer/DeciderToPhyInterface.h \
  modules/phy/./Decider80211.h \
  base/utils/miximkerneldefs.h \
  base/phyLayer/ChannelState.h \
  base/phyLayer/Decider.h \
  base/phyLayer/BaseDecider.h
$O/modules/phy/Decider802154Narrow.o: modules/phy/Decider802154Narrow.cc \
  base/phyLayer/Signal_.h \
  base/phyLayer/MappingBase.h \
  base/phyLayer/Interpolation.h \
  base/messages/MacPkt_m.h \
  base/messages/ChannelSenseRequest_m.h \
  ../../inet/src/util/FWMath.h \
  ../../inet/src/linklayer/contract/MACAddress.h \
  base/utils/MiXiMDefs.h \
  base/messages/MiXiMAirFrame.h \
  modules/phy/Decider802154Narrow.h \
  modules/phy/DeciderResult802154Narrow.h \
  base/phyLayer/PhyToMacControlInfo.h \
  base/phyLayer/MappingUtils.h \
  base/phyLayer/Mapping.h \
  base/messages/MiximAirFrame_m.h \
  base/phyLayer/DeciderToPhyInterface.h \
  base/utils/SimpleAddress.h \
  base/utils/miximkerneldefs.h \
  ../../inet/src/base/INETDefs.h \
  base/phyLayer/ChannelState.h \
  base/phyLayer/Decider.h \
  base/messages/MiXiMMacPkt.h \
  base/phyLayer/BaseDecider.h
$O/modules/phy/DeciderUWBIRED.o: modules/phy/DeciderUWBIRED.cc \
  base/phyLayer/Signal_.h \
  base/phyLayer/MappingBase.h \
  ../../inet/src/mobility/IMobility.h \
  base/phyLayer/Interpolation.h \
  modules/phy/PhyLayerUWBIR.h \
  ../../inet/src/base/ModuleAccess.h \
  base/phyLayer/ChannelInfo.h \
  modules/phy/DeciderUWBIRED.h \
  modules/phy/PhyLayer.h \
  base/messages/ChannelSenseRequest_m.h \
  ../../inet/src/util/FWMath.h \
  base/utils/MiXiMDefs.h \
  base/messages/MiXiMAirFrame.h \
  base/utils/HostState.h \
  base/phyLayer/MacToPhyInterface.h \
  base/connectionManager/ConnectionManagerAccess.h \
  modules/phy/RadioUWBIR.h \
  base/connectionManager/../modules/BaseModule.h \
  modules/messages/AirFrameUWBIR_m.h \
  base/phyLayer/BasePhyLayer.h \
  base/connectionManager/../modules/BaseBattery.h \
  base/phyLayer/AnalogueModel.h \
  base/phyLayer/MappingUtils.h \
  base/phyLayer/Mapping.h \
  modules/utility/UWBIRPacket.h \
  modules/phy/DeciderResultUWBIR.h \
  ../../inet/src/base/Coord.h \
  base/connectionManager/../modules/MiximBatteryAccess.h \
  modules/utility/IEEE802154A.h \
  base/messages/MiximAirFrame_m.h \
  modules/phy/PhyLayerBattery.h \
  base/phyLayer/DeciderToPhyInterface.h \
  base/utils/miximkerneldefs.h \
  ../../inet/src/base/INETDefs.h \
  base/phyLayer/ChannelState.h \
  base/phyLayer/Decider.h \
  base/utils/FindModule.h \
  base/phyLayer/BaseDecider.h \
  base/phyLayer/PhyUtils.h \
  ../../inet/src/mobility/models/MobilityAccess.h
$O/modules/phy/DeciderUWBIREDSync.o: modules/phy/DeciderUWBIREDSync.cc \
  base/phyLayer/Signal_.h \
  base/phyLayer/MappingBase.h \
  base/phyLayer/Interpolation.h \
  modules/phy/DeciderUWBIRED.h \
  base/messages/ChannelSenseRequest_m.h \
  ../../inet/src/util/FWMath.h \
  base/utils/MiXiMDefs.h \
  base/messages/MiXiMAirFrame.h \
  base/phyLayer/MacToPhyInterface.h \
  base/phyLayer/AnalogueModel.h \
  base/phyLayer/MappingUtils.h \
  base/phyLayer/Mapping.h \
  modules/phy/DeciderUWBIREDSync.h \
  modules/utility/UWBIRPacket.h \
  ../../inet/src/base/Coord.h \
  modules/utility/IEEE802154A.h \
  base/messages/MiximAirFrame_m.h \
  base/phyLayer/DeciderToPhyInterface.h \
  base/utils/miximkerneldefs.h \
  ../../inet/src/base/INETDefs.h \
  base/phyLayer/Decider.h \
  base/phyLayer/ChannelState.h \
  base/phyLayer/PhyUtils.h \
  base/phyLayer/BaseDecider.h
$O/modules/phy/DeciderUWBIREDSyncOnAddress.o: modules/phy/DeciderUWBIREDSyncOnAddress.cc \
  base/phyLayer/Signal_.h \
  base/phyLayer/MappingBase.h \
  base/phyLayer/Interpolation.h \
  modules/phy/DeciderUWBIRED.h \
  base/messages/MacPkt_m.h \
  base/messages/ChannelSenseRequest_m.h \
  ../../inet/src/util/FWMath.h \
  base/utils/MiXiMDefs.h \
  ../../inet/src/linklayer/contract/MACAddress.h \
  base/messages/MiXiMAirFrame.h \
  base/phyLayer/MacToPhyInterface.h \
  base/phyLayer/AnalogueModel.h \
  base/phyLayer/MappingUtils.h \
  base/phyLayer/Mapping.h \
  modules/utility/UWBIRPacket.h \
  ../../inet/src/base/Coord.h \
  modules/utility/IEEE802154A.h \
  base/messages/MiximAirFrame_m.h \
  base/phyLayer/DeciderToPhyInterface.h \
  base/utils/SimpleAddress.h \
  base/utils/miximkerneldefs.h \
  ../../inet/src/base/INETDefs.h \
  base/phyLayer/Decider.h \
  base/phyLayer/ChannelState.h \
  base/messages/MiXiMMacPkt.h \
  modules/phy/DeciderUWBIREDSyncOnAddress.h \
  base/phyLayer/PhyUtils.h \
  base/phyLayer/BaseDecider.h
$O/modules/phy/PhyLayer.o: modules/phy/PhyLayer.cc \
  base/phyLayer/Signal_.h \
  base/phyLayer/MappingBase.h \
  ../../inet/src/mobility/IMobility.h \
  base/connectionManager/BaseConnectionManager.h \
  modules/analogueModel/JakesFading.h \
  base/phyLayer/Interpolation.h \
  base/modules/BaseWorldUtility.h \
  ../../inet/src/base/ModuleAccess.h \
  base/phyLayer/ChannelInfo.h \
  modules/analogueModel/LogNormalShadowing.h \
  modules/phy/PhyLayer.h \
  modules/analogueModel/BreakpointPathlossModel.h \
  base/messages/ChannelSenseRequest_m.h \
  ../../inet/src/util/FWMath.h \
  base/utils/MiXiMDefs.h \
  base/messages/MiXiMAirFrame.h \
  base/phyLayer/MacToPhyInterface.h \
  base/utils/HostState.h \
  base/connectionManager/ConnectionManagerAccess.h \
  modules/phy/Decider802154Narrow.h \
  base/connectionManager/../modules/BaseModule.h \
  base/phyLayer/BasePhyLayer.h \
  modules/analogueModel/PERModel.h \
  base/phyLayer/AnalogueModel.h \
  base/connectionManager/../modules/BaseBattery.h \
  base/phyLayer/MappingUtils.h \
  base/phyLayer/Mapping.h \
  ../../inet/src/base/Coord.h \
  base/connectionManager/../modules/MiximBatteryAccess.h \
  base/messages/MiximAirFrame_m.h \
  base/phyLayer/DeciderToPhyInterface.h \
  modules/phy/./Decider80211.h \
  base/utils/miximkerneldefs.h \
  ../../inet/src/base/INETDefs.h \
  base/phyLayer/Decider.h \
  base/phyLayer/ChannelState.h \
  base/connectionManager/NicEntry.h \
  base/utils/FindModule.h \
  modules/analogueModel/SimplePathlossModel.h \
  base/phyLayer/BaseDecider.h \
  base/phyLayer/PhyUtils.h \
  ../../inet/src/mobility/models/MobilityAccess.h \
  modules/phy/SNRThresholdDecider.h
$O/modules/phy/PhyLayerBattery.o: modules/phy/PhyLayerBattery.cc \
  base/phyLayer/Signal_.h \
  base/phyLayer/MappingBase.h \
  ../../inet/src/mobility/IMobility.h \
  modules/phy/Decider80211Battery.h \
  base/phyLayer/Interpolation.h \
  modules/phy/Decider80211MultiChannel.h \
  base/phyLayer/ChannelInfo.h \
  ../../inet/src/base/ModuleAccess.h \
  modules/phy/PhyLayer.h \
  base/messages/MacPkt_m.h \
  base/messages/ChannelSenseRequest_m.h \
  ../../inet/src/util/FWMath.h \
  ../../inet/src/linklayer/contract/MACAddress.h \
  base/utils/MiXiMDefs.h \
  base/messages/MiXiMAirFrame.h \
  base/utils/HostState.h \
  base/phyLayer/MacToPhyInterface.h \
  base/connectionManager/ConnectionManagerAccess.h \
  base/connectionManager/../modules/BaseModule.h \
  base/phyLayer/BasePhyLayer.h \
  base/connectionManager/../modules/BaseBattery.h \
  base/phyLayer/AnalogueModel.h \
  base/phyLayer/MappingUtils.h \
  base/phyLayer/Mapping.h \
  base/phyLayer/MacToPhyControlInfo.h \
  ../../inet/src/base/Coord.h \
  base/connectionManager/../modules/MiximBatteryAccess.h \
  base/messages/MiximAirFrame_m.h \
  modules/phy/PhyLayerBattery.h \
  modules/phy/./Decider80211.h \
  base/phyLayer/DeciderToPhyInterface.h \
  base/utils/SimpleAddress.h \
  base/utils/miximkerneldefs.h \
  ../../inet/src/base/INETDefs.h \
  base/phyLayer/Decider.h \
  base/phyLayer/ChannelState.h \
  base/messages/MiXiMMacPkt.h \
  base/utils/FindModule.h \
  base/phyLayer/BaseDecider.h \
  base/phyLayer/PhyUtils.h \
  ../../inet/src/mobility/models/MobilityAccess.h
$O/modules/phy/PhyLayerUWBIR.o: modules/phy/PhyLayerUWBIR.cc \
  base/phyLayer/Signal_.h \
  base/phyLayer/MappingBase.h \
  ../../inet/src/mobility/IMobility.h \
  base/phyLayer/Interpolation.h \
  modules/phy/PhyLayerUWBIR.h \
  base/modules/BaseWorldUtility.h \
  modules/phy/MacToUWBIRPhyControlInfo.h \
  ../../inet/src/base/ModuleAccess.h \
  base/phyLayer/ChannelInfo.h \
  modules/phy/DeciderUWBIRED.h \
  modules/phy/PhyLayer.h \
  base/messages/ChannelSenseRequest_m.h \
  ../../inet/src/util/FWMath.h \
  ../../inet/src/linklayer/contract/MACAddress.h \
  base/utils/MiXiMDefs.h \
  base/messages/MiXiMAirFrame.h \
  base/utils/HostState.h \
  base/phyLayer/MacToPhyInterface.h \
  base/connectionManager/ConnectionManagerAccess.h \
  modules/analogueModel/UWBIRStochasticPathlossModel.h \
  modules/phy/RadioUWBIR.h \
  base/connectionManager/../modules/BaseModule.h \
  modules/messages/AirFrameUWBIR_m.h \
  base/phyLayer/BasePhyLayer.h \
  base/connectionManager/../modules/BaseBattery.h \
  base/phyLayer/AnalogueModel.h \
  base/phyLayer/MappingUtils.h \
  base/phyLayer/Mapping.h \
  modules/phy/DeciderUWBIREDSync.h \
  base/phyLayer/MacToPhyControlInfo.h \
  modules/utility/UWBIRPacket.h \
  ../../inet/src/base/Coord.h \
  base/connectionManager/../modules/MiximBatteryAccess.h \
  modules/utility/IEEE802154A.h \
  base/messages/MiximAirFrame_m.h \
  modules/phy/PhyLayerBattery.h \
  modules/analogueModel/UWBIRIEEE802154APathlossModel.h \
  base/phyLayer/DeciderToPhyInterface.h \
  base/utils/SimpleAddress.h \
  base/utils/miximkerneldefs.h \
  ../../inet/src/base/INETDefs.h \
  base/phyLayer/ChannelState.h \
  base/phyLayer/Decider.h \
  modules/utility/SimpleTimeConstMapping.h \
  modules/phy/DeciderUWBIREDSyncOnAddress.h \
  base/utils/FindModule.h \
  base/phyLayer/PhyUtils.h \
  base/phyLayer/BaseDecider.h \
  ../../inet/src/mobility/models/MobilityAccess.h
$O/modules/phy/SNRThresholdDecider.o: modules/phy/SNRThresholdDecider.cc \
  base/phyLayer/Signal_.h \
  base/phyLayer/MappingBase.h \
  base/phyLayer/Interpolation.h \
  base/messages/ChannelSenseRequest_m.h \
  base/utils/MiXiMDefs.h \
  base/messages/MiXiMAirFrame.h \
  base/phyLayer/MappingUtils.h \
  base/phyLayer/Mapping.h \
  base/messages/MiximAirFrame_m.h \
  base/phyLayer/DeciderToPhyInterface.h \
  base/utils/miximkerneldefs.h \
  base/phyLayer/ChannelState.h \
  base/phyLayer/Decider.h \
  base/phyLayer/BaseDecider.h \
  modules/phy/SNRThresholdDecider.h
$O/modules/power/battery/BatteryStats.o: modules/power/battery/BatteryStats.cc \
  modules/power/battery/BatteryState.h \
  base/utils/MiXiMDefs.h \
  base/utils/HostState.h \
  modules/power/battery/BatteryStats.h \
  base/modules/BaseModule.h \
  modules/power/battery/DeviceEntry.h \
  base/utils/miximkerneldefs.h \
  base/modules/BaseBattery.h
$O/modules/power/battery/SimpleBattery.o: modules/power/battery/SimpleBattery.cc \
  modules/power/battery/BatteryState.h \
  ../../inet/src/util/FWMath.h \
  base/utils/MiXiMDefs.h \
  base/utils/HostState.h \
  modules/power/battery/BatteryStats.h \
  base/modules/BaseModule.h \
  modules/power/battery/SimpleBattery.h \
  modules/power/battery/DeviceEntry.h \
  base/utils/miximkerneldefs.h \
  ../../inet/src/base/INETDefs.h \
  base/modules/BaseBattery.h \
  base/utils/FindModule.h
$O/modules/transport/Aggregation.o: modules/transport/Aggregation.cc \
  modules/messages/AggrPkt_m.h \
  base/utils/PassedMessage.h \
  modules/transport/Aggregation.h \
  base/utils/MiXiMDefs.h \
  ../../inet/src/linklayer/contract/MACAddress.h \
  base/utils/HostState.h \
  base/modules/../modules/MiximBatteryAccess.h \
  base/modules/../modules/BaseBattery.h \
  base/messages/ApplPkt_m.h \
  base/utils/SimpleAddress.h \
  base/utils/miximkerneldefs.h \
  base/modules/../modules/BaseModule.h \
  ../../inet/src/base/INETDefs.h \
  base/modules/BaseLayer.h \
  modules/messages/AggrPkt.h
$O/modules/utility/IEEE802154A.o: modules/utility/IEEE802154A.cc \
  base/phyLayer/Signal_.h \
  base/phyLayer/MappingBase.h \
  base/phyLayer/Interpolation.h \
  base/utils/MiXiMDefs.h \
  base/phyLayer/MappingUtils.h \
  base/phyLayer/Mapping.h \
  modules/utility/IEEE802154A.h \
  base/utils/miximkerneldefs.h
$O/modules/utility/SimTracer.o: modules/utility/SimTracer.cc \
  base/modules/BaseWorldUtility.h \
  base/utils/PassedMessage.h \
  ../../inet/src/util/FWMath.h \
  base/utils/MiXiMDefs.h \
  ../../inet/src/linklayer/contract/MACAddress.h \
  base/utils/HostState.h \
  modules/utility/Packet.h \
  modules/utility/SimTracer.h \
  base/modules/../modules/MiximBatteryAccess.h \
  ../../inet/src/base/Coord.h \
  base/modules/../modules/BaseBattery.h \
  base/modules/../modules/BaseModule.h \
  base/utils/miximkerneldefs.h \
  base/utils/SimpleAddress.h \
  ../../inet/src/base/INETDefs.h \
  base/modules/BaseLayer.h \
  base/utils/FindModule.h
$O/modules/utility/phyPER.o: modules/utility/phyPER.cc \
  base/phyLayer/Signal_.h \
  base/phyLayer/MappingBase.h \
  base/phyLayer/Interpolation.h \
  base/utils/PassedMessage.h \
  modules/phy/DeciderUWBIRED.h \
  base/messages/ChannelSenseRequest_m.h \
  ../../inet/src/util/FWMath.h \
  base/utils/MiXiMDefs.h \
  ../../inet/src/linklayer/contract/MACAddress.h \
  base/phyLayer/MacToPhyInterface.h \
  base/utils/HostState.h \
  modules/utility/phyPER.h \
  modules/utility/Packet.h \
  base/phyLayer/AnalogueModel.h \
  base/phyLayer/MappingUtils.h \
  base/phyLayer/Mapping.h \
  base/modules/../modules/MiximBatteryAccess.h \
  modules/utility/UWBIRPacket.h \
  ../../inet/src/base/Coord.h \
  modules/utility/IEEE802154A.h \
  base/modules/BaseModule.h \
  base/modules/../modules/BaseBattery.h \
  base/phyLayer/DeciderToPhyInterface.h \
  base/modules/../modules/BaseModule.h \
  base/utils/miximkerneldefs.h \
  base/utils/SimpleAddress.h \
  ../../inet/src/base/INETDefs.h \
  base/phyLayer/ChannelState.h \
  base/phyLayer/Decider.h \
  base/modules/BaseLayer.h \
  base/phyLayer/BaseDecider.h \
  base/phyLayer/PhyUtils.h
