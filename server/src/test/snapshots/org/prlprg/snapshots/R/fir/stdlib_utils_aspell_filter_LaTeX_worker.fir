fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4016508322;
    st aspell_filter_LaTeX_worker = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4016508322(x, vrbs, cmds, envs) {
  (reg x:*, reg vrbs:*, reg cmds:*, reg envs:*) -+> V { var x:*, var vrbs:*, reg vrbs_isMissing:L, reg vrbs_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), var cmds:*, reg cmds_isMissing:L, reg cmds_orDefault:*, var envs:*, reg envs_isMissing:L, reg envs_orDefault:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg list:cls, reg r6:V, reg r7:cls, reg r8:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg cmds1:*, reg cmds2:V, reg length:cls, reg r11:V, reg c1:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r12:V, reg r13:V, reg cmds3:*, reg cmds4:V, reg aspell_filter_LaTeX_commands:*, reg aspell_filter_LaTeX_commands1:V, reg c2:cls, reg r14:V, reg strsplit:cls, reg trimws:cls, reg cmds5:*, reg cmds6:V, reg p1:p(V +), reg r16:V, reg p2:p(V +), reg r18:V, reg vapply:cls, reg cmds7:*, reg cmds8:V, reg p3:p(V +), reg __:*, reg __1:V, reg p4:p(V +), reg r21:V, reg vapply1:cls, reg cmds9:*, reg cmds10:V, reg p5:p(V +), reg __2:*, reg __3:V, reg p6:p(V +), reg r24:V, reg lapply:cls, reg strsplit1:cls, reg gsub:cls, reg twos:*, reg twos1:V, reg p7:p(V +), reg r26:V, reg p8:p(V +), reg r28:V, reg p9:p(V +), reg r30:cls, reg p10:p(V +), reg r32:V, reg paste0:cls, reg ones:*, reg ones1:V, reg p11:p(V +), reg r34:V, reg l:*, reg names__:cls, reg r35:V, reg r37:cls, reg recurse:cls, reg __4:cls, reg r38:V, reg r39:cls, reg x1:*, reg x2:V, reg p12:p(V +), reg vrbs1:*, reg vrbs2:V, reg p13:p(V +), reg r42:V, reg p14:p(V +), reg r44:V, reg blank_out_character_ranges:cls, reg x3:*, reg x4:V, reg p15:p(V +), reg ranges:*, reg ranges1:V, reg p16:p(V +), reg r47:V |
    mkenv;
    st x = x;
    vrbs_isMissing = missing.0(vrbs);
    if vrbs_isMissing then L0() else L1(vrbs);
  L0():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c("verbatim", "verbatim*", "Sinput", "Soutput");
      goto L0(r2);
    L2():
      r = dyn base("verbatim", "verbatim*", "Sinput", "Soutput");
      goto L0(r);
    };
    goto L1(p);
  L1(vrbs_orDefault):
    st vrbs = vrbs_orDefault;
    cmds_isMissing = missing.0(cmds);
    if cmds_isMissing then L2(NULL) else L2(cmds);
  L2(cmds_orDefault):
    st cmds = cmds_orDefault;
    envs_isMissing = missing.0(envs);
    if envs_isMissing then L3(NULL) else L3(envs);
  L3(envs_orDefault):
    st envs = envs_orDefault;
    sym1 = ldf list;
    base1 = ldf list in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L9() else L10();
  L4(r5):
    st ranges = r5;
    r7 = clos inner3708401697;
    st chrran = r7;
    r8 = clos inner3708401697;
    st ltxtag = r8;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L12() else L13();
  L9():
    list = ldf list in base;
    r6 = dyn list();
    check L11() else D0();
  L10():
    r4 = dyn base1();
    goto L4(r4);
  D0():
    deopt 3 [r6];
  L5(r10):
    c1 = `as.logical`(r10);
    if c1 then L16() else L6();
  L11():
    goto L4(r6);
  L12():
    cmds1 = ld cmds;
    check L14() else D1();
  L13():
    r9 = dyn base2(<sym cmds>);
    goto L5(r9);
  D1():
    deopt 13 [cmds1];
  L6():
    goto L8();
  L8():
    r37 = clos inner3708401697;
    st recurse = r37;
    recurse = ldf recurse;
    check L35() else D18();
  L14():
    cmds2 = force? cmds1;
    checkMissing(cmds2);
    length = ldf length in base;
    r11 = dyn length(cmds2);
    check L15() else D2();
  L16():
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L17() else L18();
  D2():
    deopt 16 [r11];
  D18():
    deopt 70 [];
  L7(r13):
    st cmds = r13;
    strsplit = ldf strsplit;
    check L22() else D6();
  L15():
    goto L5(r11);
  L17():
    cmds3 = ld cmds;
    check L19() else D3();
  L18():
    r12 = dyn base3(<sym cmds>, <sym aspell_filter_LaTeX_commands>);
    goto L7(r12);
  L35():
    p14 = prom<V +>{
      __4 = ldf `::`;
      r38 = dyn __4("tools", "parseLatex");
      checkFun.0(r38);
      r39 = r38 as cls;
      p12 = prom<V +>{
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        return x2;
      };
      p13 = prom<V +>{
        vrbs1 = ld vrbs;
        vrbs2 = force? vrbs1;
        checkMissing(vrbs2);
        return vrbs2;
      };
      r42 = dyn r39[, verbatim](p12, p13);
      return r42;
    };
    r44 = dyn recurse(p14);
    check L36() else D19();
  D3():
    deopt 19 [cmds3];
  D6():
    deopt 27 [];
  D19():
    deopt 72 [r44];
  L19():
    cmds4 = force? cmds3;
    checkMissing(cmds4);
    aspell_filter_LaTeX_commands = ld aspell_filter_LaTeX_commands;
    check L20() else D4();
  L22():
    p2 = prom<V +>{
      trimws = ldf trimws;
      p1 = prom<V +>{
        cmds5 = ld cmds;
        cmds6 = force? cmds5;
        checkMissing(cmds6);
        return cmds6;
      };
      r16 = dyn trimws(p1);
      return r16;
    };
    r18 = dyn strsplit(p2, " +");
    check L23() else D7();
  L36():
    blank_out_character_ranges = ldf blank_out_character_ranges;
    check L37() else D20();
  D4():
    deopt 21 [aspell_filter_LaTeX_commands];
  D7():
    deopt 30 [r18];
  D20():
    deopt 74 [];
  L20():
    aspell_filter_LaTeX_commands1 = force? aspell_filter_LaTeX_commands;
    checkMissing(aspell_filter_LaTeX_commands1);
    c2 = ldf c in base;
    r14 = dyn c2(cmds4, aspell_filter_LaTeX_commands1);
    check L21() else D5();
  L23():
    st cmds = r18;
    vapply = ldf vapply;
    check L24() else D8();
  L37():
    p15 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    p16 = prom<V +>{
      ranges = ld ranges;
      ranges1 = force? ranges;
      checkMissing(ranges1);
      return ranges1;
    };
    r47 = dyn blank_out_character_ranges(p15, p16);
    check L38() else D21();
  D5():
    deopt 24 [r14];
  D8():
    deopt 33 [];
  D21():
    deopt 77 [r47];
  L21():
    goto L7(r14);
  L24():
    p3 = prom<V +>{
      cmds7 = ld cmds;
      cmds8 = force? cmds7;
      checkMissing(cmds8);
      return cmds8;
    };
    p4 = prom<V +>{
      __ = ld `[[`;
      __1 = force? __;
      checkMissing(__1);
      return __1;
    };
    r21 = dyn vapply(p3, p4, "", 1);
    check L25() else D9();
  L38():
    popenv;
    return r47;
  D9():
    deopt 38 [r21];
  L25():
    st ones = r21;
    vapply1 = ldf vapply;
    check L26() else D10();
  D10():
    deopt 41 [];
  L26():
    p5 = prom<V +>{
      cmds9 = ld cmds;
      cmds10 = force? cmds9;
      checkMissing(cmds10);
      return cmds10;
    };
    p6 = prom<V +>{
      __2 = ld `[[`;
      __3 = force? __2;
      checkMissing(__3);
      return __3;
    };
    r24 = dyn vapply1(p5, p6, "", 2);
    check L27() else D11();
  D11():
    deopt 46 [r24];
  L27():
    st twos = r24;
    lapply = ldf lapply;
    check L28() else D12();
  D12():
    deopt 49 [];
  L28():
    p9 = prom<V +>{
      strsplit1 = ldf strsplit;
      p8 = prom<V +>{
        gsub = ldf gsub;
        p7 = prom<V +>{
          twos = ld twos;
          twos1 = force? twos;
          checkMissing(twos1);
          return twos1;
        };
        r26 = dyn gsub("[^pP]", "", p7);
        return r26;
      };
      r28 = dyn strsplit1(p8, "");
      return r28;
    };
    p10 = prom<V +>{
      r30 = clos inner3708401697;
      return r30;
    };
    r32 = dyn lapply(p9, p10);
    check L29() else D13();
  D13():
    deopt 52 [r32];
  L29():
    st cmds = r32;
    paste0 = ldf paste0;
    check L30() else D14();
  D14():
    deopt 55 [];
  L30():
    p11 = prom<V +>{
      ones = ld ones;
      ones1 = force? ones;
      checkMissing(ones1);
      return ones1;
    };
    r34 = dyn paste0("\\", p11);
    check L31() else D15();
  D15():
    deopt 58 [r34];
  L31():
    l = ld cmds;
    names__ = ldf `names<-`;
    check L32() else D16();
  D16():
    deopt 60 [r34, l, r34];
  L32():
    r35 = dyn names__(l, NULL, r34);
    check L33() else D17();
  D17():
    deopt 62 [r34, r35];
  L33():
    st cmds = r35;
    goto L8();
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg getSrcref:cls, reg e1:*, reg e2:V, reg p:p(V +), reg r1:V, reg c:L, reg r3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg r7:V, reg r8:V, reg c1:cls, reg r9:V, reg __:cls, reg r10:V |
    mkenv;
    st e = e;
    getSrcref = ldf getSrcref;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p = prom<V +>{
      e1 = ld e;
      e2 = force? e1;
      checkMissing(e2);
      return e2;
    };
    r1 = dyn getSrcref(p);
    check L3() else D1();
  D1():
    deopt 3 [r1];
  L3():
    c = `is.object`(r1);
    if c then L4() else L5(r1);
  L0(dx1):
    popenv;
    return dx1;
  L4():
    dr = tryDispatchBuiltin.1("[", r1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L6() else L5(dr);
  L5(r3):
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L1(r7, r8):
    __ = ldf `[` in base;
    r10 = dyn __(r7, r8);
    goto L0(r10);
  L6():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L7():
    c1 = ldf c in base;
    r9 = dyn c1(1, 5, 3, 6);
    check L9() else D2();
  L8():
    r6 = dyn base(1, 5, 3, 6);
    goto L1(r3, r6);
  D2():
    deopt 11 [r3, r9];
  L9():
    goto L1(r3, r9);
  }
}