fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner222451200;
    st writeDefaultNamespace = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner222451200(filename, desc) {
  (reg filename:*, reg desc:*) -+> V { var filename:*, var desc:*, reg desc_isMissing:L, reg desc_orDefault:*, reg file_path:cls, reg dirname:cls, reg filename1:*, reg filename2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V, reg p2:p(V +), reg _split_description:cls, reg _read_description:cls, reg desc1:*, reg desc2:V, reg p3:p(V +), reg r6:V, reg p4:p(V +), reg r8:V, reg unique:cls, reg sym:cls, reg base:cls, reg guard:L, reg r9:V, reg r10:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg r12:V, reg pkgInfo:*, reg pkgInfo1:V, reg c:L, reg pkgInfo3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r13:V, reg names:cls, reg r14:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r15:V, reg r16:V, reg pkgInfo4:*, reg pkgInfo5:V, reg c1:L, reg pkgInfo7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r17:V, reg names1:cls, reg r18:V, reg c2:cls, reg r19:V, reg p5:p(V +), reg r21:V, reg pkgs:*, reg pkgs1:V, reg c3:L, reg pkgs3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg pkgs4:*, reg pkgs5:V, reg r22:V, reg __:cls, reg r23:V, reg writeLines:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r24:V, reg r25:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r26:V, reg r27:V, reg pkgs6:*, reg pkgs7:V, reg length:cls, reg r28:V, reg c4:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r29:V, reg r30:V, reg paste0:cls, reg pkgs8:*, reg pkgs9:V, reg p6:p(V +), reg r32:V, reg c5:cls, reg r33:V, reg r34:V, reg c6:cls, reg r35:V, reg p7:p(V +), reg filename3:*, reg filename4:V, reg p8:p(V +), reg r38:V |
    mkenv;
    st filename = filename;
    desc_isMissing = missing.0(desc);
    if desc_isMissing then L0() else L1(desc);
  L0():
    p2 = prom<V +>{
      file_path = ldf `file.path`;
      p1 = prom<V +>{
        dirname = ldf dirname;
        p = prom<V +>{
          filename1 = ld filename;
          filename2 = force? filename1;
          checkMissing(filename2);
          return filename2;
        };
        r1 = dyn dirname(p);
        return r1;
      };
      r3 = dyn file_path(p1, "DESCRIPTION");
      return r3;
    };
    goto L1(p2);
  L1(desc_orDefault):
    st desc = desc_orDefault;
    _split_description = ldf `.split_description`;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    p4 = prom<V +>{
      _read_description = ldf `.read_description`;
      p3 = prom<V +>{
        desc1 = ld desc;
        desc2 = force? desc1;
        checkMissing(desc2);
        return desc2;
      };
      r6 = dyn _read_description(p3);
      return r6;
    };
    r8 = dyn _split_description(p4);
    check L4() else D1();
  D1():
    deopt 3 [r8];
  L4():
    st pkgInfo = r8;
    unique = ldf unique;
    check L5() else D2();
  D2():
    deopt 6 [];
  L5():
    p5 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L3() else L4();
    L0(r10):
      return r10;
    L3():
      sym1 = ldf names;
      base1 = ldf names in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L5() else L6();
    L4():
      r9 = dyn base(<lang names(`$`(pkgInfo, Imports))>, <lang names(`$`(pkgInfo, Depends))>);
      goto L0(r9);
    L1(r12):
      sym2 = ldf names;
      base2 = ldf names in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L11() else L12();
    L5():
      pkgInfo = ld pkgInfo;
      pkgInfo1 = force? pkgInfo;
      checkMissing(pkgInfo1);
      c = `is.object`(pkgInfo1);
      if c then L8() else L9(pkgInfo1);
    L6():
      r11 = dyn base1(<lang `$`(pkgInfo, Imports)>);
      goto L1(r11);
    L2(r16):
      c2 = ldf c in base;
      r19 = dyn c2(r12, r16);
      goto L0(r19);
    L7(dx1):
      names = ldf names in base;
      r14 = dyn names(dx1);
      goto L1(r14);
    L8():
      dr = tryDispatchBuiltin.1("$", pkgInfo1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L10() else L9(dr);
    L9(pkgInfo3):
      r13 = `$`(pkgInfo3, <sym Imports>);
      goto L7(r13);
    L11():
      pkgInfo4 = ld pkgInfo;
      pkgInfo5 = force? pkgInfo4;
      checkMissing(pkgInfo5);
      c1 = `is.object`(pkgInfo5);
      if c1 then L14() else L15(pkgInfo5);
    L12():
      r15 = dyn base2(<lang `$`(pkgInfo, Depends)>);
      goto L2(r15);
    L10():
      dx = getTryDispatchBuiltinValue(dr);
      goto L7(dx);
    L13(dx3):
      names1 = ldf names in base;
      r18 = dyn names1(dx3);
      goto L2(r18);
    L14():
      dr2 = tryDispatchBuiltin.1("$", pkgInfo5);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L16() else L15(dr2);
    L15(pkgInfo7):
      r17 = `$`(pkgInfo7, <sym Depends>);
      goto L13(r17);
    L16():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L13(dx2);
    };
    r21 = dyn unique(p5);
    check L6() else D3();
  D3():
    deopt 8 [r21];
  L6():
    st pkgs = r21;
    pkgs = ld pkgs;
    check L7() else D4();
  D4():
    deopt 10 [pkgs];
  L7():
    pkgs1 = force? pkgs;
    checkMissing(pkgs1);
    c3 = `is.object`(pkgs1);
    if c3 then L8() else L9(pkgs1);
  L2(dx5):
    st pkgs = dx5;
    writeLines = ldf writeLines;
    check L12() else D6();
  L8():
    dr4 = tryDispatchBuiltin.1("[", pkgs1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L10() else L9(dr4);
  L9(pkgs3):
    pkgs4 = ld pkgs;
    check L11() else D5();
  D5():
    deopt 12 [pkgs3, pkgs4];
  D6():
    deopt 19 [];
  L10():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L2(dx4);
  L11():
    pkgs5 = force? pkgs4;
    checkMissing(pkgs5);
    r22 = `!=`(pkgs5, "base");
    __ = ldf `[` in base;
    r23 = dyn __(pkgs3, r22);
    goto L2(r23);
  L12():
    p7 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L5() else L6();
    L0(r25):
      return r25;
    L5():
      sym4 = ldf length;
      base4 = ldf length in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L7() else L8();
    L6():
      r24 = dyn base3("# Default NAMESPACE created by R", "# Remove the previous line if you edit this file", "", "# Export all names", "exportPattern(\"^[^.]\")", <lang if(length(pkgs), c("", "# Import all packages listed as Imports or Depends", "import(", paste0("  ", pkgs, collapse=",\n"), ")"))>);
      goto L0(r24);
    L1(r27):
      c4 = `as.logical`(r27);
      if c4 then L9() else L2();
    L7():
      pkgs6 = ld pkgs;
      pkgs7 = force? pkgs6;
      checkMissing(pkgs7);
      length = ldf length in base;
      r28 = dyn length(pkgs7);
      goto L1(r28);
    L8():
      r26 = dyn base4(<sym pkgs>);
      goto L1(r26);
    L2():
      goto L4(NULL);
    L4(r34):
      c6 = ldf c in base;
      r35 = dyn c6("# Default NAMESPACE created by R", "# Remove the previous line if you edit this file", "", "# Export all names", "exportPattern(\"^[^.]\")", r34);
      goto L0(r35);
    L9():
      sym5 = ldf c;
      base5 = ldf c in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L10() else L11();
    L3(r30):
      goto L4(r30);
    L10():
      paste0 = ldf paste0;
      p6 = prom<V +>{
        pkgs8 = ld pkgs;
        pkgs9 = force? pkgs8;
        checkMissing(pkgs9);
        return pkgs9;
      };
      r32 = dyn paste0[, , collapse]("  ", p6, ",\n");
      c5 = ldf c in base;
      r33 = dyn c5("", "# Import all packages listed as Imports or Depends", "import(", r32, ")");
      goto L3(r33);
    L11():
      r29 = dyn base5("", "# Import all packages listed as Imports or Depends", "import(", <lang paste0("  ", pkgs, collapse=",\n")>, ")");
      goto L3(r29);
    };
    p8 = prom<V +>{
      filename3 = ld filename;
      filename4 = force? filename3;
      checkMissing(filename4);
      return filename4;
    };
    r38 = dyn writeLines(p7, p8);
    check L13() else D7();
  D7():
    deopt 22 [r38];
  L13():
    popenv;
    return r38;
  }
}