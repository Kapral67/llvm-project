/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Calling Convention Implementation Fragment                                 *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

static bool CC_XCore(unsigned ValNo, MVT ValVT,
                     MVT LocVT, CCValAssign::LocInfo LocInfo,
                     ISD::ArgFlagsTy ArgFlags, CCState &State);
static bool RetCC_XCore(unsigned ValNo, MVT ValVT,
                        MVT LocVT, CCValAssign::LocInfo LocInfo,
                        ISD::ArgFlagsTy ArgFlags, CCState &State);


static bool CC_XCore(unsigned ValNo, MVT ValVT,
                     MVT LocVT, CCValAssign::LocInfo LocInfo,
                     ISD::ArgFlagsTy ArgFlags, CCState &State) {

  if (LocVT == MVT::i8 ||
      LocVT == MVT::i16) {
    LocVT = MVT::i32;
    if (ArgFlags.isSExt())
      LocInfo = CCValAssign::SExt;
    else if (ArgFlags.isZExt())
      LocInfo = CCValAssign::ZExt;
    else
      LocInfo = CCValAssign::AExt;
  }

  if (ArgFlags.isNest()) {
    if (unsigned Reg = State.AllocateReg(XCore::R11)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (LocVT == MVT::i32) {
    static const MCPhysReg RegList1[] = {
      XCore::R0, XCore::R1, XCore::R2, XCore::R3
    };
    if (unsigned Reg = State.AllocateReg(RegList1)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (LocVT == MVT::i32) {
    unsigned Offset2 = State.AllocateStack(4, Align(4));
    State.addLoc(CCValAssign::getMem(ValNo, ValVT, Offset2, LocVT, LocInfo));
    return false;
  }

  return true; // CC didn't match.
}


static bool RetCC_XCore(unsigned ValNo, MVT ValVT,
                        MVT LocVT, CCValAssign::LocInfo LocInfo,
                        ISD::ArgFlagsTy ArgFlags, CCState &State) {

  if (LocVT == MVT::i32) {
    static const MCPhysReg RegList1[] = {
      XCore::R0, XCore::R1, XCore::R2, XCore::R3
    };
    if (unsigned Reg = State.AllocateReg(RegList1)) {
      State.addLoc(CCValAssign::getReg(ValNo, ValVT, Reg, LocVT, LocInfo));
      return false;
    }
  }

  if (LocVT == MVT::i32) {
    unsigned Offset2 = State.AllocateStack(4, Align(4));
    State.addLoc(CCValAssign::getMem(ValNo, ValVT, Offset2, LocVT, LocInfo));
    return false;
  }

  return true; // CC didn't match.
}
