fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2541542646;
    st R_check_outdirs = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2541542646(dir, all, invert) {
  (reg dir:*, reg all:*, reg invert:*) -+> V { var dir:*, var all:*, reg all_isMissing:L, reg all_orDefault:*, var invert:*, reg invert_isMissing:L, reg invert_orDefault:*, reg normalizePath:cls, reg dir1:*, reg dir2:V, reg p:p(V +), reg r1:V, reg dir3:cls, reg dir4:*, reg dir5:V, reg p1:p(V +), reg r3:V, reg startsWith:cls, reg basename:cls, reg outdirs:*, reg outdirs1:V, reg p2:p(V +), reg r5:V, reg p3:p(V +), reg r7:V, reg invert1:*, reg invert2:V, reg c:L, reg sym:cls, reg base:cls, reg guard:L, reg r8:V, reg r9:V, reg all1:*, reg all2:V, reg c1:L, reg outdirs2:*, reg outdirs3:V, reg c2:L, reg outdirs5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ind:*, reg ind1:V, reg r10:V, reg __:cls, reg r11:V, reg dx2:V, reg outdirs6:*, reg outdirs7:V, reg c3:L, reg outdirs9:V, reg dr2:V, reg dc1:L, reg dx3:V, reg dx4:V, reg ind2:*, reg ind3:V, reg __1:cls, reg r12:V, reg c4:cls, reg r13:V, reg r14:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r15:V, reg outdirs10:*, reg outdirs11:V, reg c5:L, reg outdirs13:V, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg ind4:*, reg ind5:V, reg r16:V, reg __2:cls, reg r17:V, reg all3:*, reg all4:V, reg c6:L, reg outdirs14:*, reg outdirs15:V, reg c7:L, reg outdirs17:V, reg dr6:V, reg dc3:L, reg dx7:V, reg dx8:V, reg ind6:*, reg ind7:V, reg __3:cls, reg r18:V, reg dx9:V, reg c8:cls, reg r19:V, reg file_path:cls, reg dir6:*, reg dir7:V, reg p4:p(V +), reg outdirs18:*, reg outdirs19:V, reg p5:p(V +), reg r22:V |
    mkenv;
    st dir = dir;
    all_isMissing = missing.0(all);
    if all_isMissing then L0(FALSE) else L0(all);
  L0(all_orDefault):
    st all = all_orDefault;
    invert_isMissing = missing.0(invert);
    if invert_isMissing then L1(FALSE) else L1(invert);
  L1(invert_orDefault):
    st invert = invert_orDefault;
    normalizePath = ldf normalizePath;
    check L13() else D0();
  D0():
    deopt 1 [];
  L13():
    p = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    r1 = dyn normalizePath(p);
    check L14() else D1();
  D1():
    deopt 3 [r1];
  L14():
    st dir = r1;
    dir3 = ldf dir;
    check L15() else D2();
  D2():
    deopt 6 [];
  L15():
    p1 = prom<V +>{
      dir4 = ld dir;
      dir5 = force? dir4;
      checkMissing(dir5);
      return dir5;
    };
    r3 = dyn dir3[, pattern](p1, "\\.Rcheck");
    check L16() else D3();
  D3():
    deopt 10 [r3];
  L16():
    st outdirs = r3;
    startsWith = ldf startsWith;
    check L17() else D4();
  D4():
    deopt 13 [];
  L17():
    p3 = prom<V +>{
      basename = ldf basename;
      p2 = prom<V +>{
        outdirs = ld outdirs;
        outdirs1 = force? outdirs;
        checkMissing(outdirs1);
        return outdirs1;
      };
      r5 = dyn basename(p2);
      return r5;
    };
    r7 = dyn startsWith(p3, "rdepends_");
    check L18() else D5();
  D5():
    deopt 16 [r7];
  L18():
    st ind = r7;
    invert1 = ld invert;
    check L19() else D6();
  D6():
    deopt 18 [invert1];
  L19():
    invert2 = force? invert1;
    checkMissing(invert2);
    c = `as.logical`(invert2);
    if c then L20() else L2();
  L2():
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L38() else L39();
  L8(r14):
    st outdirs = r14;
    file_path = ldf `file.path`;
    check L54() else D19();
  L20():
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L21() else L22();
  D19():
    deopt 60 [];
  L3(r9):
    goto L8(r9);
  L21():
    all1 = ld all;
    check L23() else D7();
  L22():
    r8 = dyn base(<lang if(all, `[`(outdirs, `!`(ind)))>, <lang `[`(outdirs, ind)>);
    goto L3(r8);
  L38():
    outdirs10 = ld outdirs;
    check L40() else D13();
  L39():
    r15 = dyn base1(<lang `[`(outdirs, `!`(ind))>, <lang if(all, `[`(outdirs, ind))>);
    goto L8(r15);
  L54():
    p4 = prom<V +>{
      dir6 = ld dir;
      dir7 = force? dir6;
      checkMissing(dir7);
      return dir7;
    };
    p5 = prom<V +>{
      outdirs18 = ld outdirs;
      outdirs19 = force? outdirs18;
      checkMissing(outdirs19);
      return outdirs19;
    };
    r22 = dyn file_path(p4, p5);
    check L55() else D20();
  D7():
    deopt 22 [all1];
  D13():
    deopt 41 [outdirs10];
  D20():
    deopt 63 [r22];
  L23():
    all2 = force? all1;
    checkMissing(all2);
    c1 = `as.logical`(all2);
    if c1 then L24() else L4();
  L40():
    outdirs11 = force? outdirs10;
    checkMissing(outdirs11);
    c5 = `is.object`(outdirs11);
    if c5 then L41() else L42(outdirs11);
  L55():
    popenv;
    return r22;
  L4():
    goto L6(NULL);
  L6(dx2):
    outdirs6 = ld outdirs;
    check L31() else D10();
  L9(dx6):
    all3 = ld all;
    check L45() else D15();
  L24():
    outdirs2 = ld outdirs;
    check L25() else D8();
  L41():
    dr4 = tryDispatchBuiltin.1("[", outdirs11);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L43() else L42(dr4);
  L42(outdirs13):
    ind4 = ld ind;
    check L44() else D14();
  D8():
    deopt 24 [outdirs2];
  D10():
    deopt 32 [outdirs6];
  D14():
    deopt 43 [outdirs13, ind4];
  D15():
    deopt 47 [all3];
  L25():
    outdirs3 = force? outdirs2;
    checkMissing(outdirs3);
    c2 = `is.object`(outdirs3);
    if c2 then L26() else L27(outdirs3);
  L31():
    outdirs7 = force? outdirs6;
    checkMissing(outdirs7);
    c3 = `is.object`(outdirs7);
    if c3 then L32() else L33(outdirs7);
  L43():
    dx5 = getTryDispatchBuiltinValue(dr4);
    goto L9(dx5);
  L44():
    ind5 = force? ind4;
    checkMissing(ind5);
    r16 = `!`(ind5);
    __2 = ldf `[` in base;
    r17 = dyn __2(outdirs13, r16);
    goto L9(r17);
  L45():
    all4 = force? all3;
    checkMissing(all4);
    c6 = `as.logical`(all4);
    if c6 then L46() else L10();
  L5(dx1):
    goto L6(dx1);
  L7(dx4):
    c4 = ldf c in base;
    r13 = dyn c4(dx2, dx4);
    check L36() else D12();
  L10():
    goto L12(NULL);
  L12(dx9):
    c8 = ldf c in base;
    r19 = dyn c8(dx6, dx9);
    check L53() else D18();
  L26():
    dr = tryDispatchBuiltin.1("[", outdirs3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L28() else L27(dr);
  L27(outdirs5):
    ind = ld ind;
    check L29() else D9();
  L32():
    dr2 = tryDispatchBuiltin.1("[", outdirs7);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L34() else L33(dr2);
  L33(outdirs9):
    ind2 = ld ind;
    check L35() else D11();
  L46():
    outdirs14 = ld outdirs;
    check L47() else D16();
  D9():
    deopt 26 [outdirs5, ind];
  D11():
    deopt 34 [outdirs9, ind2];
  D12():
    deopt 38 [r13];
  D16():
    deopt 49 [outdirs14];
  D18():
    deopt 57 [r19];
  L28():
    dx = getTryDispatchBuiltinValue(dr);
    goto L5(dx);
  L29():
    ind1 = force? ind;
    checkMissing(ind1);
    r10 = `!`(ind1);
    __ = ldf `[` in base;
    r11 = dyn __(outdirs5, r10);
    goto L5(r11);
  L34():
    dx3 = getTryDispatchBuiltinValue(dr2);
    goto L7(dx3);
  L35():
    ind3 = force? ind2;
    __1 = ldf `[` in base;
    r12 = dyn __1(outdirs9, ind3);
    goto L7(r12);
  L36():
    goto L3(r13);
  L47():
    outdirs15 = force? outdirs14;
    checkMissing(outdirs15);
    c7 = `is.object`(outdirs15);
    if c7 then L48() else L49(outdirs15);
  L53():
    goto L8(r19);
  L11(dx8):
    goto L12(dx8);
  L48():
    dr6 = tryDispatchBuiltin.1("[", outdirs15);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L50() else L49(dr6);
  L49(outdirs17):
    ind6 = ld ind;
    check L51() else D17();
  D17():
    deopt 51 [outdirs17, ind6];
  L50():
    dx7 = getTryDispatchBuiltinValue(dr6);
    goto L11(dx7);
  L51():
    ind7 = force? ind6;
    __3 = ldf `[` in base;
    r18 = dyn __3(outdirs17, ind7);
    goto L11(r18);
  }
}