fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4223163328;
    st summarize_check_packages_in_dir_depends = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4223163328(dir, all, which) {
  (reg dir:*, reg all:*, reg which:*) -+> V { var dir:*, var all:*, reg all_isMissing:L, reg all_orDefault:*, var which:*, reg which_isMissing:L, reg which_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg which1:*, reg which2:V, reg identical:cls, reg r6:V, reg c1:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg c2:cls, reg r9:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r11:V, reg r12:V, reg which3:*, reg which4:V, reg identical1:cls, reg r13:V, reg c3:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r14:V, reg r15:V, reg c4:cls, reg r16:V, reg R_check_outdirs:cls, reg dir1:*, reg dir2:V, reg p1:p(V +), reg all1:*, reg all2:V, reg p2:p(V +), reg r19:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c5:L, reg x:V, reg Sys_glob:cls, reg file_path:cls, reg d:*, reg d1:V, reg p3:p(V +), reg r21:V, reg p4:p(V +), reg r23:V, reg c6:L, reg i6:I, reg r25:V, reg dr:V, reg dc:L, reg dx:V, reg i8:I, reg dx1:V, reg __:cls, reg r26:V, reg file_test:cls, reg dfile:*, reg dfile1:V, reg p5:p(V +), reg r28:V, reg c7:L, reg _read_description:cls, reg dfile2:*, reg dfile3:V, reg p6:p(V +), reg r30:V, reg meta:*, reg meta1:V, reg c8:L, reg i12:I, reg meta3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg i14:I, reg dx3:V, reg __1:cls, reg r31:V, reg meta4:*, reg meta5:V, reg c9:L, reg i16:I, reg meta7:V, reg dr4:V, reg dc2:L, reg dx4:V, reg i18:I, reg dx5:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r32:V, reg i21:I, reg meta10:V, reg r33:V, reg which5:*, reg which6:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r34:V, reg i24:I, reg meta13:V, reg r35:V, reg meta14:*, reg meta15:V, reg names:cls, reg r36:V, reg match:cls, reg r37:V, reg __2:cls, reg r38:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r39:V, reg i27:I, reg r40:V, reg meta16:*, reg meta17:V, reg length:cls, reg r41:V, reg c10:L, reg writeLines:cls, reg sym8:cls, reg base8:cls, reg guard8:L, reg r42:V, reg r43:V, reg sprintf:cls, reg package:*, reg package1:V, reg p7:p(V +), reg r45:V, reg unlist:cls, reg Map:cls, reg r46:cls, reg p8:p(V +), reg sym9:cls, reg base9:cls, reg guard9:L, reg r48:V, reg r49:V, reg meta18:*, reg meta19:V, reg names1:cls, reg r50:V, reg p9:p(V +), reg meta20:*, reg meta21:V, reg p10:p(V +), reg r53:V, reg p11:p(V +), reg r55:V, reg c11:cls, reg r56:V, reg p12:p(V +), reg r58:V, reg i30:I, reg r59:V, reg i31:I, reg sym10:cls, reg base10:cls, reg guard10:L, reg r61:V, reg r62:V, reg invisible:cls, reg r63:V |
    mkenv;
    st dir = dir;
    all_isMissing = missing.0(all);
    if all_isMissing then L0(FALSE) else L0(all);
  L0(all_orDefault):
    st all = all_orDefault;
    which_isMissing = missing.0(which);
    if which_isMissing then L1() else L2(which);
  L1():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c("Depends", "Imports", "LinkingTo");
      goto L0(r2);
    L2():
      r = dyn base("Depends", "Imports", "LinkingTo");
      goto L0(r);
    };
    goto L2(p);
  L2(which_orDefault):
    st which = which_orDefault;
    sym1 = ldf identical;
    base1 = ldf identical in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L23() else L24();
  L3(r5):
    c1 = `as.logical`(r5);
    if c1 then L27() else L4();
  L23():
    which1 = ld which;
    check L25() else D0();
  L24():
    r4 = dyn base1(<sym which>, "all");
    goto L3(r4);
  D0():
    deopt 2 [which1];
  L4():
    sym3 = ldf identical;
    base3 = ldf identical in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L32() else L33();
  L6():
    R_check_outdirs = ldf R_check_outdirs;
    check L41() else D6();
  L25():
    which2 = force? which1;
    checkMissing(which2);
    identical = ldf identical in base;
    r6 = dyn identical(which2, "all", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L26() else D1();
  L27():
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L28() else L29();
  D1():
    deopt 13 [r6];
  D6():
    deopt 50 [];
  L5(r8):
    st which = r8;
    goto L6();
  L7(r12):
    c3 = `as.logical`(r12);
    if c3 then L36() else L8();
  L26():
    goto L3(r6);
  L28():
    c2 = ldf c in base;
    r9 = dyn c2("Depends", "Imports", "LinkingTo", "Suggests", "Enhances");
    check L30() else D2();
  L29():
    r7 = dyn base2("Depends", "Imports", "LinkingTo", "Suggests", "Enhances");
    goto L5(r7);
  L32():
    which3 = ld which;
    check L34() else D3();
  L33():
    r11 = dyn base3(<sym which>, "most");
    goto L7(r11);
  L41():
    p1 = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    p2 = prom<V +>{
      all1 = ld all;
      all2 = force? all1;
      checkMissing(all2);
      return all2;
    };
    r19 = dyn R_check_outdirs[, all](p1, p2);
    check L42() else D7();
  D2():
    deopt 22 [r9];
  D3():
    deopt 26 [which3];
  D7():
    deopt 54 [r19];
  L8():
    goto L6();
  L30():
    goto L5(r9);
  L34():
    which4 = force? which3;
    checkMissing(which4);
    identical1 = ldf identical in base;
    r13 = dyn identical1(which4, "most", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L35() else D4();
  L36():
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L37() else L38();
  L42():
    s = toForSeq(r19);
    l = length(s);
    i = 0;
    goto L10(i);
  D4():
    deopt 37 [r13];
  L9(r15):
    st which = r15;
    goto L6();
  L10(i1):
    i2 = `+`.1(i1, 1);
    c5 = `<`.1(l, i2);
    if c5 then L43() else L21();
  L35():
    goto L7(r13);
  L37():
    c4 = ldf c in base;
    r16 = dyn c4("Depends", "Imports", "LinkingTo", "Suggests");
    check L39() else D5();
  L38():
    r14 = dyn base4("Depends", "Imports", "LinkingTo", "Suggests");
    goto L9(r14);
  D5():
    deopt 45 [r16];
  L21():
    x = `[[`(s, i2, NULL, TRUE);
    st d = x;
    Sys_glob = ldf `Sys.glob`;
    check L44() else D8();
  L39():
    goto L9(r16);
  L43():
    sym10 = ldf invisible;
    base10 = ldf invisible in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L79() else L80();
  D8():
    deopt 56 [i2];
  L22(r62):
    popenv;
    return r62;
  L44():
    p4 = prom<V +>{
      file_path = ldf `file.path`;
      p3 = prom<V +>{
        d = ld d;
        d1 = force? d;
        checkMissing(d1);
        return d1;
      };
      r21 = dyn file_path(p3, "00_pkg_src", "*", "DESCRIPTION");
      return r21;
    };
    r23 = dyn Sys_glob(p4);
    check L45() else D9();
  L79():
    invisible = ldf invisible in base;
    r63 = dyn invisible();
    check L81() else D24();
  L80():
    r61 = dyn base10();
    goto L22(r61);
  D9():
    deopt 58 [i2, r23];
  D24():
    deopt 117 [r63];
  L45():
    c6 = `is.object`(r23);
    if c6 then L46() else L47(i2, r23);
  L81():
    goto L22(r63);
  L11(i8, dx1):
    st dfile = dx1;
    file_test = ldf file_test;
    check L49() else D10();
  L46():
    dr = tryDispatchBuiltin.1("[", r23);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L48() else L47(i2, dr);
  L47(i6, r25):
    __ = ldf `[` in base;
    r26 = dyn __(r25, 1);
    goto L11(i6, r26);
  D10():
    deopt 64 [i8];
  L48():
    dx = getTryDispatchBuiltinValue(dr);
    goto L11(i2, dx);
  L49():
    p5 = prom<V +>{
      dfile = ld dfile;
      dfile1 = force? dfile;
      checkMissing(dfile1);
      return dfile1;
    };
    r28 = dyn file_test("-f", p5);
    check L50() else D11();
  D11():
    deopt 67 [i8, r28];
  L50():
    c7 = `as.logical`(r28);
    if c7 then L51() else L12();
  L12():
    goto L20(i8);
  L20(i31):
    goto L10(i31);
  L51():
    _read_description = ldf `.read_description`;
    check L52() else D12();
  D12():
    deopt 69 [i8];
  L52():
    p6 = prom<V +>{
      dfile2 = ld dfile;
      dfile3 = force? dfile2;
      checkMissing(dfile3);
      return dfile3;
    };
    r30 = dyn _read_description(p6);
    check L53() else D13();
  D13():
    deopt 71 [i8, r30];
  L53():
    st meta = r30;
    meta = ld meta;
    check L54() else D14();
  D14():
    deopt 73 [i8, meta];
  L54():
    meta1 = force? meta;
    checkMissing(meta1);
    c8 = `is.object`(meta1);
    if c8 then L55() else L56(i8, meta1);
  L13(i14, dx3):
    st package = dx3;
    meta4 = ld meta;
    check L58() else D15();
  L55():
    dr2 = tryDispatchBuiltin.1("[", meta1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L57() else L56(i8, dr2);
  L56(i12, meta3):
    __1 = ldf `[` in base;
    r31 = dyn __1(meta3, "Package");
    goto L13(i12, r31);
  D15():
    deopt 79 [i14, meta4];
  L57():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L13(i8, dx2);
  L58():
    meta5 = force? meta4;
    checkMissing(meta5);
    c9 = `is.object`(meta5);
    if c9 then L59() else L60(i14, meta5);
  L14(i18, dx5):
    st meta = dx5;
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L70() else L71();
  L59():
    dr4 = tryDispatchBuiltin.1("[", meta5);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L61() else L60(i14, dr4);
  L60(i16, meta7):
    sym5 = ldf match;
    base5 = ldf match in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L62() else L63();
  L15(i21, meta10, r33):
    __2 = ldf `[` in base;
    r38 = dyn __2(meta10, r33);
    goto L14(i21, r38);
  L17(i27, r40):
    c10 = `as.logical`(r40);
    if c10 then L74() else L18();
  L61():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L14(i14, dx4);
  L62():
    which5 = ld which;
    check L64() else D16();
  L63():
    r32 = dyn base5[, , nomatch](<sym which>, <lang names(meta)>, 0);
    goto L15(i16, meta7, r32);
  L70():
    meta16 = ld meta;
    check L72() else D20();
  L71():
    r39 = dyn base7(<sym meta>);
    goto L17(i18, r39);
  D16():
    deopt 83 [i16, meta7, which5];
  D20():
    deopt 99 [i18, meta16];
  L18():
    goto L19(i27, NULL);
  L19(i30, r59):
    goto L20(i30);
  L64():
    which6 = force? which5;
    checkMissing(which6);
    sym6 = ldf names;
    base6 = ldf names in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L65() else L66();
  L72():
    meta17 = force? meta16;
    checkMissing(meta17);
    length = ldf length in base;
    r41 = dyn length(meta17);
    check L73() else D21();
  L74():
    writeLines = ldf writeLines;
    check L75() else D22();
  D21():
    deopt 102 [i18, r41];
  D22():
    deopt 104 [i27];
  L16(i24, meta13, r35):
    match = ldf match in base;
    r37 = dyn match(which6, r35, 0, NULL);
    check L69() else D19();
  L65():
    meta14 = ld meta;
    check L67() else D17();
  L66():
    r34 = dyn base6(<sym meta>);
    goto L16(i16, meta7, r34);
  L73():
    goto L17(i18, r41);
  L75():
    p12 = prom<V +>{
      sym8 = ldf c;
      base8 = ldf c in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L1() else L2();
    L0(r43):
      return r43;
    L1():
      sprintf = ldf sprintf;
      p7 = prom<V +>{
        package = ld package;
        package1 = force? package;
        checkMissing(package1);
        return package1;
      };
      r45 = dyn sprintf("Package: %s", p7);
      unlist = ldf unlist;
      p11 = prom<V +>{
        Map = ldf Map;
        p8 = prom<V +>{
          r46 = clos inner2202630067;
          return r46;
        };
        p9 = prom<V +>{
          sym9 = ldf names;
          base9 = ldf names in base;
          guard9 = `==`.4(sym9, base9);
          if guard9 then L1() else L2();
        L0(r49):
          return r49;
        L1():
          meta18 = ld meta;
          meta19 = force? meta18;
          checkMissing(meta19);
          names1 = ldf names in base;
          r50 = dyn names1(meta19);
          goto L0(r50);
        L2():
          r48 = dyn base9(<sym meta>);
          goto L0(r48);
        };
        p10 = prom<V +>{
          meta20 = ld meta;
          meta21 = force? meta20;
          checkMissing(meta21);
          return meta21;
        };
        r53 = dyn Map(p8, p9, p10);
        return r53;
      };
      r55 = dyn unlist(p11);
      c11 = ldf c in base;
      r56 = dyn c11(r45, r55);
      goto L0(r56);
    L2():
      r42 = dyn base8(<lang sprintf("Package: %s", package)>, <lang unlist(Map(function((tag=, val=), {
              strwrap(sprintf("%s: %s", tag, val), indent=2, exdent=4)
            }, NULL), names(meta), meta))>);
      goto L0(r42);
    };
    r58 = dyn writeLines(p12);
    check L76() else D23();
  D17():
    deopt 87 [i16, meta7, meta14];
  D19():
    deopt 94 [i24, meta13, r37];
  D23():
    deopt 106 [i27, r58];
  L67():
    meta15 = force? meta14;
    checkMissing(meta15);
    names = ldf names in base;
    r36 = dyn names(meta15);
    check L68() else D18();
  L69():
    goto L15(i24, meta13, r37);
  L76():
    goto L19(i27, r58);
  D18():
    deopt 90 [i16, meta7, r36];
  L68():
    goto L16(i16, meta7, r36);
  }
}
fun inner2202630067(tag, val) {
  (reg tag:*, reg val:*) -+> V { var tag:*, var val:*, reg strwrap:cls, reg sprintf:cls, reg tag1:*, reg tag2:V, reg p:p(V +), reg val1:*, reg val2:V, reg p1:p(V +), reg r2:V, reg p2:p(V +), reg r4:V |
    mkenv;
    st tag = tag;
    st val = val;
    strwrap = ldf strwrap;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p2 = prom<V +>{
      sprintf = ldf sprintf;
      p = prom<V +>{
        tag1 = ld tag;
        tag2 = force? tag1;
        checkMissing(tag2);
        return tag2;
      };
      p1 = prom<V +>{
        val1 = ld val;
        val2 = force? val1;
        checkMissing(val2);
        return val2;
      };
      r2 = dyn sprintf("%s: %s", p, p1);
      return r2;
    };
    r4 = dyn strwrap[, indent, exdent](p2, 2, 4);
    check L1() else D1();
  D1():
    deopt 7 [r4];
  L1():
    popenv;
    return r4;
  }
}