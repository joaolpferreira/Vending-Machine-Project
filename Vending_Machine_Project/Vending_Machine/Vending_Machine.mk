##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Vending_Machine
ConfigurationName      :=Debug
WorkspacePath          :=/home/opt-jpf/Documentos/Vending_Machine_Project
ProjectPath            :=/home/opt-jpf/Documentos/Vending_Machine_Project/Vending_Machine
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=opt-jpf
Date                   :=27/07/22
CodeLitePath           :=/home/opt-jpf/.codelite
LinkerName             :=/usr/bin/g++
SharedObjectLinkerName :=/usr/bin/g++ -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="Vending_Machine.txt"
PCHCompileFlags        :=
MakeDirCommand         :=mkdir -p
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := /usr/bin/ar rcu
CXX      := /usr/bin/g++
CC       := /usr/bin/gcc
CXXFLAGS :=  -g -O0 -std=c++17 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := /usr/bin/as


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects0=$(IntermediateDirectory)/src_classes_Water.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_classes_Clients_List.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_classes_Client.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_classes_Eggs.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_classes_Cash.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_classes_Meat.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_classes_Vending_Machine.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_classes_Card.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_classes_Payment.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_classes_Item.cpp$(ObjectSuffix) \
	$(IntermediateDirectory)/src_classes_Receipt.cpp$(ObjectSuffix) $(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_classes_Backpack.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_classes_Basket.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@test -d ./Debug || $(MakeDirCommand) ./Debug


$(IntermediateDirectory)/.d:
	@test -d ./Debug || $(MakeDirCommand) ./Debug

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/src_classes_Water.cpp$(ObjectSuffix): src/classes/Water.cpp $(IntermediateDirectory)/src_classes_Water.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/opt-jpf/Documentos/Vending_Machine_Project/Vending_Machine/src/classes/Water.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_classes_Water.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_classes_Water.cpp$(DependSuffix): src/classes/Water.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_classes_Water.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_classes_Water.cpp$(DependSuffix) -MM src/classes/Water.cpp

$(IntermediateDirectory)/src_classes_Water.cpp$(PreprocessSuffix): src/classes/Water.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_classes_Water.cpp$(PreprocessSuffix) src/classes/Water.cpp

$(IntermediateDirectory)/src_classes_Clients_List.cpp$(ObjectSuffix): src/classes/Clients_List.cpp $(IntermediateDirectory)/src_classes_Clients_List.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/opt-jpf/Documentos/Vending_Machine_Project/Vending_Machine/src/classes/Clients_List.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_classes_Clients_List.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_classes_Clients_List.cpp$(DependSuffix): src/classes/Clients_List.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_classes_Clients_List.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_classes_Clients_List.cpp$(DependSuffix) -MM src/classes/Clients_List.cpp

$(IntermediateDirectory)/src_classes_Clients_List.cpp$(PreprocessSuffix): src/classes/Clients_List.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_classes_Clients_List.cpp$(PreprocessSuffix) src/classes/Clients_List.cpp

$(IntermediateDirectory)/src_classes_Client.cpp$(ObjectSuffix): src/classes/Client.cpp $(IntermediateDirectory)/src_classes_Client.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/opt-jpf/Documentos/Vending_Machine_Project/Vending_Machine/src/classes/Client.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_classes_Client.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_classes_Client.cpp$(DependSuffix): src/classes/Client.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_classes_Client.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_classes_Client.cpp$(DependSuffix) -MM src/classes/Client.cpp

$(IntermediateDirectory)/src_classes_Client.cpp$(PreprocessSuffix): src/classes/Client.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_classes_Client.cpp$(PreprocessSuffix) src/classes/Client.cpp

$(IntermediateDirectory)/src_classes_Eggs.cpp$(ObjectSuffix): src/classes/Eggs.cpp $(IntermediateDirectory)/src_classes_Eggs.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/opt-jpf/Documentos/Vending_Machine_Project/Vending_Machine/src/classes/Eggs.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_classes_Eggs.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_classes_Eggs.cpp$(DependSuffix): src/classes/Eggs.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_classes_Eggs.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_classes_Eggs.cpp$(DependSuffix) -MM src/classes/Eggs.cpp

$(IntermediateDirectory)/src_classes_Eggs.cpp$(PreprocessSuffix): src/classes/Eggs.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_classes_Eggs.cpp$(PreprocessSuffix) src/classes/Eggs.cpp

$(IntermediateDirectory)/src_classes_Cash.cpp$(ObjectSuffix): src/classes/Cash.cpp $(IntermediateDirectory)/src_classes_Cash.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/opt-jpf/Documentos/Vending_Machine_Project/Vending_Machine/src/classes/Cash.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_classes_Cash.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_classes_Cash.cpp$(DependSuffix): src/classes/Cash.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_classes_Cash.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_classes_Cash.cpp$(DependSuffix) -MM src/classes/Cash.cpp

$(IntermediateDirectory)/src_classes_Cash.cpp$(PreprocessSuffix): src/classes/Cash.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_classes_Cash.cpp$(PreprocessSuffix) src/classes/Cash.cpp

$(IntermediateDirectory)/src_classes_Meat.cpp$(ObjectSuffix): src/classes/Meat.cpp $(IntermediateDirectory)/src_classes_Meat.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/opt-jpf/Documentos/Vending_Machine_Project/Vending_Machine/src/classes/Meat.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_classes_Meat.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_classes_Meat.cpp$(DependSuffix): src/classes/Meat.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_classes_Meat.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_classes_Meat.cpp$(DependSuffix) -MM src/classes/Meat.cpp

$(IntermediateDirectory)/src_classes_Meat.cpp$(PreprocessSuffix): src/classes/Meat.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_classes_Meat.cpp$(PreprocessSuffix) src/classes/Meat.cpp

$(IntermediateDirectory)/src_classes_Vending_Machine.cpp$(ObjectSuffix): src/classes/Vending_Machine.cpp $(IntermediateDirectory)/src_classes_Vending_Machine.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/opt-jpf/Documentos/Vending_Machine_Project/Vending_Machine/src/classes/Vending_Machine.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_classes_Vending_Machine.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_classes_Vending_Machine.cpp$(DependSuffix): src/classes/Vending_Machine.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_classes_Vending_Machine.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_classes_Vending_Machine.cpp$(DependSuffix) -MM src/classes/Vending_Machine.cpp

$(IntermediateDirectory)/src_classes_Vending_Machine.cpp$(PreprocessSuffix): src/classes/Vending_Machine.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_classes_Vending_Machine.cpp$(PreprocessSuffix) src/classes/Vending_Machine.cpp

$(IntermediateDirectory)/src_classes_Card.cpp$(ObjectSuffix): src/classes/Card.cpp $(IntermediateDirectory)/src_classes_Card.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/opt-jpf/Documentos/Vending_Machine_Project/Vending_Machine/src/classes/Card.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_classes_Card.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_classes_Card.cpp$(DependSuffix): src/classes/Card.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_classes_Card.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_classes_Card.cpp$(DependSuffix) -MM src/classes/Card.cpp

$(IntermediateDirectory)/src_classes_Card.cpp$(PreprocessSuffix): src/classes/Card.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_classes_Card.cpp$(PreprocessSuffix) src/classes/Card.cpp

$(IntermediateDirectory)/src_classes_Payment.cpp$(ObjectSuffix): src/classes/Payment.cpp $(IntermediateDirectory)/src_classes_Payment.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/opt-jpf/Documentos/Vending_Machine_Project/Vending_Machine/src/classes/Payment.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_classes_Payment.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_classes_Payment.cpp$(DependSuffix): src/classes/Payment.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_classes_Payment.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_classes_Payment.cpp$(DependSuffix) -MM src/classes/Payment.cpp

$(IntermediateDirectory)/src_classes_Payment.cpp$(PreprocessSuffix): src/classes/Payment.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_classes_Payment.cpp$(PreprocessSuffix) src/classes/Payment.cpp

$(IntermediateDirectory)/src_classes_Item.cpp$(ObjectSuffix): src/classes/Item.cpp $(IntermediateDirectory)/src_classes_Item.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/opt-jpf/Documentos/Vending_Machine_Project/Vending_Machine/src/classes/Item.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_classes_Item.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_classes_Item.cpp$(DependSuffix): src/classes/Item.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_classes_Item.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_classes_Item.cpp$(DependSuffix) -MM src/classes/Item.cpp

$(IntermediateDirectory)/src_classes_Item.cpp$(PreprocessSuffix): src/classes/Item.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_classes_Item.cpp$(PreprocessSuffix) src/classes/Item.cpp

$(IntermediateDirectory)/src_classes_Receipt.cpp$(ObjectSuffix): src/classes/Receipt.cpp $(IntermediateDirectory)/src_classes_Receipt.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/opt-jpf/Documentos/Vending_Machine_Project/Vending_Machine/src/classes/Receipt.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_classes_Receipt.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_classes_Receipt.cpp$(DependSuffix): src/classes/Receipt.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_classes_Receipt.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_classes_Receipt.cpp$(DependSuffix) -MM src/classes/Receipt.cpp

$(IntermediateDirectory)/src_classes_Receipt.cpp$(PreprocessSuffix): src/classes/Receipt.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_classes_Receipt.cpp$(PreprocessSuffix) src/classes/Receipt.cpp

$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/opt-jpf/Documentos/Vending_Machine_Project/Vending_Machine/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/src_classes_Backpack.cpp$(ObjectSuffix): src/classes/Backpack.cpp $(IntermediateDirectory)/src_classes_Backpack.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/opt-jpf/Documentos/Vending_Machine_Project/Vending_Machine/src/classes/Backpack.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_classes_Backpack.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_classes_Backpack.cpp$(DependSuffix): src/classes/Backpack.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_classes_Backpack.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_classes_Backpack.cpp$(DependSuffix) -MM src/classes/Backpack.cpp

$(IntermediateDirectory)/src_classes_Backpack.cpp$(PreprocessSuffix): src/classes/Backpack.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_classes_Backpack.cpp$(PreprocessSuffix) src/classes/Backpack.cpp

$(IntermediateDirectory)/src_classes_Basket.cpp$(ObjectSuffix): src/classes/Basket.cpp $(IntermediateDirectory)/src_classes_Basket.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/opt-jpf/Documentos/Vending_Machine_Project/Vending_Machine/src/classes/Basket.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_classes_Basket.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_classes_Basket.cpp$(DependSuffix): src/classes/Basket.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_classes_Basket.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_classes_Basket.cpp$(DependSuffix) -MM src/classes/Basket.cpp

$(IntermediateDirectory)/src_classes_Basket.cpp$(PreprocessSuffix): src/classes/Basket.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_classes_Basket.cpp$(PreprocessSuffix) src/classes/Basket.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


