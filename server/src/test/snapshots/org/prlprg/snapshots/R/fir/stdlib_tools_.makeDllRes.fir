fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1313621415;
    st `.makeDllRes` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1313621415(name, version) {
  (reg name:*, reg version:*) -+> V { var name:*, reg name_isMissing:L, reg name_orDefault:*, var version:*, reg version_isMissing:L, reg version_orDefault:*, reg file_exists:cls, reg p:p(V +), reg r1:V, reg c:L, reg c1:V, reg file_exists1:cls, reg p1:p(V +), reg r3:V, reg c3:L, reg c4:V, reg c6:L, reg read_dcf:cls, reg f:*, reg f1:V, reg p2:p(V +), reg r5:V, reg c7:L, reg r7:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r8:V, reg sym:cls, reg base:cls, reg guard:L, reg r9:V, reg r10:V, reg desc:*, reg desc1:V, reg c8:L, reg desc3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r11:V, reg is_na:cls, reg r12:V, reg r13:V, reg c9:L, reg f2:*, reg f3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r14:V, reg r15:V, reg desc4:*, reg desc5:V, reg c10:L, reg desc7:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r16:V, reg is_na1:cls, reg r17:V, reg r18:V, reg c11:L, reg f5:*, reg f6:V, reg f7:V, reg writeLines:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r19:V, reg r20:V, reg c12:cls, reg r21:V, reg p3:p(V +), reg r23:V, reg cat:cls, reg name1:*, reg name2:V, reg p4:p(V +), reg version1:*, reg version2:V, reg p5:p(V +), reg r26:V, reg writeLines1:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r27:V, reg r28:V, reg c13:cls, reg r29:V, reg p6:p(V +), reg r31:V |
    mkenv;
    name_isMissing = missing.0(name);
    if name_isMissing then L0("") else L0(name);
  L0(name_orDefault):
    st name = name_orDefault;
    version_isMissing = missing.0(version);
    if version_isMissing then L1("0.0") else L1(version);
  L1(version_orDefault):
    st version = version_orDefault;
    file_exists = ldf `file.exists`;
    check L14() else D0();
  D0():
    deopt 1 [];
  L14():
    p = prom<V +>{
      st f = "../DESCRIPTION";
      invisible.0();
      return "../DESCRIPTION";
    };
    r1 = dyn file_exists(p);
    check L15() else D1();
  D1():
    deopt 3 [r1];
  L15():
    c = `as.logical`(r1);
    if c then L2(c) else L16();
  L2(c1):
    c6 = `as.logical`(c1);
    if c6 then L20() else L3();
  L16():
    file_exists1 = ldf `file.exists`;
    check L17() else D2();
  D2():
    deopt 5 [c];
  L3():
    goto L13();
  L13():
    writeLines = ldf writeLines;
    check L47() else D12();
  L17():
    p1 = prom<V +>{
      st f = "../../DESCRIPTION";
      invisible.0();
      return "../../DESCRIPTION";
    };
    r3 = dyn file_exists1(p1);
    check L18() else D3();
  L20():
    read_dcf = ldf `read.dcf`;
    check L21() else D4();
  D3():
    deopt 7 [c, r3];
  D4():
    deopt 10 [];
  D12():
    deopt 52 [];
  L18():
    c3 = `as.logical`(r3);
    c4 = `||`(c, c3);
    goto L2(c4);
  L21():
    p2 = prom<V +>{
      f = ld f;
      f1 = force? f;
      checkMissing(f1);
      return f1;
    };
    r5 = dyn read_dcf(p2);
    check L22() else D5();
  L47():
    p3 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r20):
      return r20;
    L1():
      c12 = ldf c in base;
      r21 = dyn c12("#include <windows.h>", "#include \"Rversion.h\"", "", "VS_VERSION_INFO VERSIONINFO", "FILEVERSION R_FILEVERSION", "PRODUCTVERSION 3,0,0,0", "FILEFLAGSMASK 0x3L", "FILEOS VOS__WINDOWS32", "FILETYPE VFT_APP", "BEGIN", "    BLOCK \"StringFileInfo\"", "    BEGIN", "        BLOCK \"040904E4\"", "        BEGIN");
      goto L0(r21);
    L2():
      r19 = dyn base2("#include <windows.h>", "#include \"Rversion.h\"", "", "VS_VERSION_INFO VERSIONINFO", "FILEVERSION R_FILEVERSION", "PRODUCTVERSION 3,0,0,0", "FILEFLAGSMASK 0x3L", "FILEOS VOS__WINDOWS32", "FILETYPE VFT_APP", "BEGIN", "    BLOCK \"StringFileInfo\"", "    BEGIN", "        BLOCK \"040904E4\"", "        BEGIN");
      goto L0(r19);
    };
    r23 = dyn writeLines(p3);
    check L48() else D13();
  D5():
    deopt 12 [r5];
  D13():
    deopt 54 [r23];
  L22():
    c7 = `is.object`(r5);
    if c7 then L23() else L24(r5);
  L48():
    cat = ldf cat;
    check L49() else D14();
  D14():
    deopt 56 [];
  L4(dx1):
    st desc = dx1;
    sym = ldf `is.na`;
    base = ldf `is.na` in base;
    guard = `==`.4(sym, base);
    if guard then L26() else L27();
  L23():
    dr = tryDispatchBuiltin.1("[[", r5);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L25() else L24(dr);
  L24(r7):
    __ = ldf `[[` in base;
    r8 = dyn __(r7, 1);
    goto L4(r8);
  L49():
    p4 = prom<V +>{
      name1 = ld name;
      name2 = force? name1;
      checkMissing(name2);
      return name2;
    };
    p5 = prom<V +>{
      version1 = ld version;
      version2 = force? version1;
      checkMissing(version2);
      return version2;
    };
    r26 = dyn cat[, , , , , , sep]("            VALUE \"FileDescription\", \"DLL for R package `", p4, "'\\0\"\n", "            VALUE \"FileVersion\", \"", p5, "\\0\"\n", "");
    check L50() else D15();
  D15():
    deopt 65 [r26];
  L5(r10):
    r13 = `!`(r10);
    c9 = `as.logical`(r13);
    if c9 then L33() else L7();
  L25():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(dx);
  L26():
    desc = ld desc;
    check L28() else D6();
  L27():
    r9 = dyn base(<lang `<-`(f, `[`(desc, "Package"))>);
    goto L5(r9);
  L50():
    writeLines1 = ldf writeLines;
    check L51() else D16();
  D6():
    deopt 19 [desc];
  D16():
    deopt 67 [];
  L7():
    goto L8();
  L8():
    sym1 = ldf `is.na`;
    base1 = ldf `is.na` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L36() else L37();
  L28():
    desc1 = force? desc;
    checkMissing(desc1);
    c8 = `is.object`(desc1);
    if c8 then L29() else L30(desc1);
  L33():
    f2 = ld f;
    check L34() else D8();
  L51():
    p6 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r28):
      return r28;
    L1():
      c13 = ldf c in base;
      r29 = dyn c13("            VALUE \"Compiled under R Version\", R_MAJOR \".\" R_MINOR \" (\" R_YEAR \"-\" R_MONTH \"-\" R_DAY \")\\0\"", "            VALUE \"Project info\", \"https://www.r-project.org\\0\"", "        END", "    END", "    BLOCK \"VarFileInfo\"", "    BEGIN", "        VALUE \"Translation\", 0x409, 1252", "    END", "END");
      goto L0(r29);
    L2():
      r27 = dyn base3("            VALUE \"Compiled under R Version\", R_MAJOR \".\" R_MINOR \" (\" R_YEAR \"-\" R_MONTH \"-\" R_DAY \")\\0\"", "            VALUE \"Project info\", \"https://www.r-project.org\\0\"", "        END", "    END", "    BLOCK \"VarFileInfo\"", "    BEGIN", "        VALUE \"Translation\", 0x409, 1252", "    END", "END");
      goto L0(r27);
    };
    r31 = dyn writeLines1(p6);
    check L52() else D17();
  D8():
    deopt 28 [f2];
  D17():
    deopt 69 [r31];
  L6(dx3):
    st f = dx3;
    is_na = ldf `is.na` in base;
    r12 = dyn is_na(dx3);
    check L32() else D7();
  L9(r15):
    r18 = `!`(r15);
    c11 = `as.logical`(r18);
    if c11 then L43() else L11();
  L29():
    dr2 = tryDispatchBuiltin.1("[", desc1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L31() else L30(dr2);
  L30(desc3):
    __1 = ldf `[` in base;
    r11 = dyn __1(desc3, "Package");
    goto L6(r11);
  L34():
    f3 = force? f2;
    checkMissing(f3);
    st name = f3;
    goto L8();
  L36():
    desc4 = ld desc;
    check L38() else D9();
  L37():
    r14 = dyn base1(<lang `<-`(f, `[`(desc, "Version"))>);
    goto L9(r14);
  L52():
    popenv;
    return r31;
  D7():
    deopt 26 [r12];
  D9():
    deopt 35 [desc4];
  L11():
    goto L12(NULL);
  L12(f7):
    goto L13();
  L31():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L6(dx2);
  L32():
    goto L5(r12);
  L38():
    desc5 = force? desc4;
    checkMissing(desc5);
    c10 = `is.object`(desc5);
    if c10 then L39() else L40(desc5);
  L43():
    f5 = ld f;
    check L44() else D11();
  D11():
    deopt 44 [f5];
  L10(dx5):
    st f = dx5;
    is_na1 = ldf `is.na` in base;
    r17 = dyn is_na1(dx5);
    check L42() else D10();
  L39():
    dr4 = tryDispatchBuiltin.1("[", desc5);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L41() else L40(dr4);
  L40(desc7):
    __2 = ldf `[` in base;
    r16 = dyn __2(desc7, "Version");
    goto L10(r16);
  L44():
    f6 = force? f5;
    checkMissing(f6);
    st version = f6;
    goto L12(f6);
  D10():
    deopt 42 [r17];
  L41():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L10(dx4);
  L42():
    goto L9(r17);
  }
}