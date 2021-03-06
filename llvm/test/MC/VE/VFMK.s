# RUN: llvm-mc -triple=ve --show-encoding < %s \
# RUN:     | FileCheck %s --check-prefixes=CHECK-ENCODING,CHECK-INST
# RUN: llvm-mc -triple=ve -filetype=obj < %s | llvm-objdump -d - \
# RUN:     | FileCheck %s --check-prefixes=CHECK-INST

# CHECK-INST: vfmk.l.at %vm11
# CHECK-ENCODING: encoding: [0x00,0x00,0x0f,0x0b,0x00,0x00,0x00,0xb4]
vfmk.l %vm11

# CHECK-INST: vfmk.l.at %vm1, %vm15
# CHECK-ENCODING: encoding: [0x00,0x00,0x0f,0x01,0x00,0x00,0x0f,0xb4]
vfmk.l.at %vm1, %vm15

# CHECK-INST: vfmk.l.af %vm1, %vm15
# CHECK-ENCODING: encoding: [0x00,0x00,0x00,0x01,0x00,0x00,0x0f,0xb4]
vfmk.l.af %vm1, %vm15

# CHECK-INST: vfmk.l.gt %vm12, %v22
# CHECK-ENCODING: encoding: [0x00,0x16,0x01,0x0c,0x00,0x00,0x00,0xb4]
vfmk.l.gt %vm12, %v22

# CHECK-INST: vfmk.l.lt %vm12, %vix, %vm15
# CHECK-ENCODING: encoding: [0x00,0xff,0x02,0x0c,0x00,0x00,0x0f,0xb4]
vfmk.l.lt %vm12, %vix, %vm15

# CHECK-INST: vfmk.l.ne %vm11, %v32
# CHECK-ENCODING: encoding: [0x00,0x20,0x03,0x0b,0x00,0x00,0x00,0xb4]
vfmk.l.ne %vm11, %v32

# CHECK-INST: vfmk.l.eq %vm1, %vix, %vm15
# CHECK-ENCODING: encoding: [0x00,0xff,0x04,0x01,0x00,0x00,0x0f,0xb4]
vfmk.l.eq %vm1, %vix, %vm15

# CHECK-INST: vfmk.l.ge %vm12, %v22
# CHECK-ENCODING: encoding: [0x00,0x16,0x05,0x0c,0x00,0x00,0x00,0xb4]
vfmk.l.ge %vm12, %v22

# CHECK-INST: vfmk.l.le %vm12, %vix, %vm15
# CHECK-ENCODING: encoding: [0x00,0xff,0x06,0x0c,0x00,0x00,0x0f,0xb4]
vfmk.l.le %vm12, %vix, %vm15
