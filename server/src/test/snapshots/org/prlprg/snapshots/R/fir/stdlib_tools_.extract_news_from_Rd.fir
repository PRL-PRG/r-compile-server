fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st `.extract_news_from_Rd` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg r:cls, reg r1:cls, reg r2:cls, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg RdTags:cls, reg x5:*, reg x6:V, reg p:p(V +), reg r4:V, reg r5:V, reg __:cls, reg r6:V, reg Map:cls, reg cbind_safely:*, reg cbind_safely1:V, reg p1:p(V +), reg get_section_names:cls, reg x7:*, reg x8:V, reg p2:p(V +), reg r9:V, reg p3:p(V +), reg lapply:cls, reg x9:*, reg x10:V, reg p4:p(V +), reg r12:cls, reg p5:p(V +), reg r14:V, reg p6:p(V +), reg r16:V, reg do_call:cls, reg rbind:*, reg rbind1:V, reg p7:p(V +), reg y:*, reg y1:V, reg p8:p(V +), reg r19:V, reg trimws:cls, reg y2:*, reg y3:V, reg c1:L, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r20:V, reg p9:p(V +), reg r22:V, reg which:cls, reg startsWith:cls, reg s:*, reg s1:V, reg p10:p(V +), reg r24:V, reg endsWith:cls, reg s2:*, reg s3:V, reg p11:p(V +), reg r26:V, reg r27:V, reg r28:V, reg p12:p(V +), reg r30:V, reg sym:cls, reg base:cls, reg guard:L, reg r31:V, reg r32:V, reg i:*, reg i1:V, reg length:cls, reg r33:V, reg c2:L, reg s4:*, reg s5:V, reg c3:L, reg s7:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg i2:*, reg i3:V, reg __2:cls, reg r34:V, reg which1:cls, reg lengths:cls, reg gregexpr:cls, reg z:*, reg z1:V, reg p13:p(V +), reg r36:V, reg p14:p(V +), reg r38:V, reg __3:cls, reg r39:V, reg r40:V, reg p15:p(V +), reg r42:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r43:V, reg r44:V, reg j:*, reg j1:V, reg length1:cls, reg r45:V, reg c4:L, reg paste0:cls, reg z2:*, reg z3:V, reg c5:L, reg z5:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg j2:*, reg j3:V, reg __4:cls, reg r46:V, reg p16:p(V +), reg r48:V, reg l:*, reg c6:L, reg r50:V, reg l2:*, reg dr8:V, reg dc4:L, reg dx8:V, reg r52:V, reg dx9:V, reg i4:*, reg i5:V, reg c7:L, reg r55:V, reg l4:*, reg r56:V, reg i7:V, reg dr10:V, reg dc5:L, reg dx10:V, reg r59:V, reg l6:*, reg r60:V, reg dx11:V, reg j4:*, reg j5:V, reg __5:cls, reg r61:V, reg ___:cls, reg r62:V, reg r63:V, reg s8:*, reg s9:V, reg l7:*, reg c8:L, reg s11:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg ___1:cls, reg r65:V, reg y6:*, reg y7:V |
    mkenv;
    st x = x;
    r = clos inner2501545716;
    st get_section_names = r;
    r1 = clos inner2501545716;
    st get_item_texts = r1;
    r2 = clos inner4198313549;
    st cbind_safely = r2;
    x1 = ld x;
    check L11() else D0();
  D0():
    deopt 9 [x1];
  L11():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.object`(x2);
    if c then L12() else L13(x2);
  L0(dx1):
    st x = dx1;
    Map = ldf Map;
    check L17() else D3();
  L12():
    dr = tryDispatchBuiltin.1("[", x2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L14() else L13(dr);
  L13(x4):
    RdTags = ldf RdTags;
    check L15() else D1();
  D1():
    deopt 12 [x4];
  D3():
    deopt 20 [];
  L14():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L15():
    p = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r4 = dyn RdTags(p);
    check L16() else D2();
  L17():
    p1 = prom<V +>{
      cbind_safely = ld cbind_safely;
      cbind_safely1 = force? cbind_safely;
      checkMissing(cbind_safely1);
      return cbind_safely1;
    };
    p3 = prom<V +>{
      get_section_names = ldf get_section_names;
      p2 = prom<V +>{
        x7 = ld x;
        x8 = force? x7;
        checkMissing(x8);
        return x8;
      };
      r9 = dyn get_section_names(p2);
      return r9;
    };
    p6 = prom<V +>{
      lapply = ldf lapply;
      p4 = prom<V +>{
        x9 = ld x;
        x10 = force? x9;
        checkMissing(x10);
        return x10;
      };
      p5 = prom<V +>{
        r12 = clos inner3708401697;
        return r12;
      };
      r14 = dyn lapply(p4, p5);
      return r14;
    };
    r16 = dyn Map(p1, p3, p6);
    check L18() else D4();
  D2():
    deopt 14 [x4, r4];
  D4():
    deopt 24 [r16];
  L16():
    r5 = `==`(r4, "\\section");
    __ = ldf `[` in base;
    r6 = dyn __(x4, r5);
    goto L0(r6);
  L18():
    st y = r16;
    do_call = ldf `do.call`;
    check L19() else D5();
  D5():
    deopt 27 [];
  L19():
    p7 = prom<V +>{
      rbind = ld rbind;
      rbind1 = force? rbind;
      checkMissing(rbind1);
      return rbind1;
    };
    p8 = prom<V +>{
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      return y1;
    };
    r19 = dyn do_call(p7, p8);
    check L20() else D6();
  D6():
    deopt 30 [r19];
  L20():
    st y = r19;
    trimws = ldf trimws;
    check L21() else D7();
  D7():
    deopt 33 [];
  L21():
    p9 = prom<V +>{
      y2 = ld y;
      y3 = force? y2;
      checkMissing(y3);
      c1 = `is.object`(y3);
      if c1 then L1() else L2();
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", y3);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2();
    L2():
      __1 = ldf `[` in base;
      r20 = dyn __1(y3, <missing>, "HTML");
      goto L0(r20);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r22 = dyn trimws(p9);
    check L22() else D8();
  D8():
    deopt 35 [r22];
  L22():
    st s = r22;
    which = ldf which;
    check L23() else D9();
  D9():
    deopt 38 [];
  L23():
    p12 = prom<V +>{
      startsWith = ldf startsWith;
      p10 = prom<V +>{
        s = ld s;
        s1 = force? s;
        checkMissing(s1);
        return s1;
      };
      r24 = dyn startsWith(p10, "<p>");
      endsWith = ldf endsWith;
      p11 = prom<V +>{
        s2 = ld s;
        s3 = force? s2;
        checkMissing(s3);
        return s3;
      };
      r26 = dyn endsWith(p11, "</p>");
      r27 = `!`(r26);
      r28 = `&&`(r24, r27);
      return r28;
    };
    r30 = dyn which(p12);
    check L24() else D10();
  D10():
    deopt 40 [r30];
  L24():
    st i = r30;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L25() else L26();
  L1(r32):
    c2 = `as.logical`(r32);
    if c2 then L29() else L2();
  L25():
    i = ld i;
    check L27() else D11();
  L26():
    r31 = dyn base(<sym i>);
    goto L1(r31);
  D11():
    deopt 44 [i];
  L2():
    goto L9();
  L9():
    s8 = ld s;
    check L54() else D23();
  L27():
    i1 = force? i;
    checkMissing(i1);
    length = ldf length in base;
    r33 = dyn length(i1);
    check L28() else D12();
  L29():
    s4 = ld s;
    check L30() else D13();
  D12():
    deopt 47 [r33];
  D13():
    deopt 48 [s4];
  D23():
    deopt 82 [s8];
  L28():
    goto L1(r33);
  L30():
    s5 = force? s4;
    checkMissing(s5);
    c3 = `is.object`(s5);
    if c3 then L31() else L32(s5);
  L54():
    s9 = force? s8;
    checkMissing(s9);
    l7 = ld y;
    c8 = `is.object`(l7);
    if c8 then L55() else L56(s9);
  L3(dx5):
    st z = dx5;
    which1 = ldf which;
    check L35() else D15();
  L10(dx13):
    st y = dx13;
    y6 = ld y;
    check L58() else D24();
  L31():
    dr4 = tryDispatchBuiltin.1("[", s5);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L33() else L32(dr4);
  L32(s7):
    i2 = ld i;
    check L34() else D14();
  L55():
    dr12 = tryDispatchBuiltin.0("[<-", l7, s9);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L57() else L56(s9);
  L56(s11):
    ___1 = ldf `[<-` in base;
    r65 = dyn ___1(l7, <missing>, "HTML", s9);
    goto L10(r65);
  D14():
    deopt 50 [s7, i2];
  D15():
    deopt 55 [];
  D24():
    deopt 90 [y6];
  L33():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L3(dx4);
  L34():
    i3 = force? i2;
    __2 = ldf `[` in base;
    r34 = dyn __2(s7, i3);
    goto L3(r34);
  L35():
    p15 = prom<V +>{
      lengths = ldf lengths;
      p14 = prom<V +>{
        gregexpr = ldf gregexpr;
        p13 = prom<V +>{
          z = ld z;
          z1 = force? z;
          checkMissing(z1);
          return z1;
        };
        r36 = dyn gregexpr("</?p>", p13);
        return r36;
      };
      r38 = dyn lengths(p14);
      __3 = ldf `%%` in base;
      r39 = dyn __3(r38, 2);
      r40 = `>`(r39, 0);
      return r40;
    };
    r42 = dyn which1(p15);
    check L36() else D16();
  L57():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L10(dx12);
  L58():
    y7 = force? y6;
    checkMissing(y7);
    popenv;
    return y7;
  D16():
    deopt 57 [r42];
  L36():
    st j = r42;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L37() else L38();
  L4(r44):
    c4 = `as.logical`(r44);
    if c4 then L41() else L5();
  L37():
    j = ld j;
    check L39() else D17();
  L38():
    r43 = dyn base1(<sym j>);
    goto L4(r43);
  D17():
    deopt 61 [j];
  L5():
    goto L8(NULL);
  L8(r63):
    goto L9();
  L39():
    j1 = force? j;
    checkMissing(j1);
    length1 = ldf length in base;
    r45 = dyn length1(j1);
    check L40() else D18();
  L41():
    paste0 = ldf paste0;
    check L42() else D19();
  D18():
    deopt 64 [r45];
  D19():
    deopt 66 [];
  L40():
    goto L4(r45);
  L42():
    p16 = prom<V +>{
      z2 = ld z;
      z3 = force? z2;
      checkMissing(z3);
      c5 = `is.object`(z3);
      if c5 then L1() else L2(z3);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[", z3);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(z5):
      j2 = ld j;
      j3 = force? j2;
      __4 = ldf `[` in base;
      r46 = dyn __4(z5, j3);
      goto L0(r46);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    r48 = dyn paste0(p16, "</p>");
    check L43() else D20();
  D20():
    deopt 69 [r48];
  L43():
    l = ld s;
    c6 = `is.object`(l);
    if c6 then L44() else L45(r48, l);
  L6(r52, dx9):
    st s = dx9;
    goto L8(r52);
  L44():
    dr8 = tryDispatchBuiltin.0("[<-", l, r48);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L46() else L45(r48, dr8);
  L45(r50, l2):
    i4 = ld i;
    check L47() else D21();
  D21():
    deopt 71 [r50, l2, r48, i4];
  L46():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L6(r48, dx8);
  L47():
    i5 = force? i4;
    checkMissing(i5);
    c7 = `is.object`(i5);
    if c7 then L48() else L49(r50, l2, r48, i5);
  L7(r59, l6, r60, dx11):
    ___ = ldf `[<-` in base;
    r62 = dyn ___(l6, r60, dx11);
    goto L6(r59, r62);
  L48():
    dr10 = tryDispatchBuiltin.1("[", i5);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L50() else L49(r50, l2, r48, dr10);
  L49(r55, l4, r56, i7):
    j4 = ld j;
    check L51() else D22();
  D22():
    deopt 73 [r55, l4, r56, i7, j4];
  L50():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L7(r50, l2, r48, dx10);
  L51():
    j5 = force? j4;
    __5 = ldf `[` in base;
    r61 = dyn __5(i7, j5);
    goto L7(r55, l4, r56, r61);
  }
}
fun inner4198313549(u, v) {
  (reg u:*, reg v:*) -+> V { var u:*, var v:*, reg cbind:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg u1:*, reg u2:V, reg NROW:cls, reg v1:*, reg v2:V, reg p:p(V +), reg r3:V, reg rep_len:cls, reg r4:V, reg p1:p(V +), reg v3:*, reg v4:V, reg p2:p(V +), reg r7:V |
    mkenv;
    st u = u;
    st v = v;
    cbind = ldf cbind;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p1 = prom<V +>{
      sym = ldf rep_len;
      base = ldf rep_len in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      u1 = ld u;
      u2 = force? u1;
      checkMissing(u2);
      NROW = ldf NROW;
      p = prom<V +>{
        v1 = ld v;
        v2 = force? v1;
        checkMissing(v2);
        return v2;
      };
      r3 = dyn NROW(p);
      rep_len = ldf rep_len in base;
      r4 = dyn rep_len(u2, r3);
      goto L0(r4);
    L2():
      r = dyn base(<sym u>, <lang NROW(v)>);
      goto L0(r);
    };
    p2 = prom<V +>{
      v3 = ld v;
      v4 = force? v3;
      checkMissing(v4);
      return v4;
    };
    r7 = dyn cbind(p1, p2);
    check L1() else D1();
  D1():
    deopt 4 [r7];
  L1():
    popenv;
    return r7;
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg e1:*, reg e2:V, reg c:L, reg e4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r:V, reg RdTags:cls, reg z:*, reg z1:V, reg p:p(V +), reg r2:V, reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg ind:*, reg ind1:V, reg any:cls, reg r6:V, reg c1:L, reg z2:*, reg z3:V, reg c2:L, reg z5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg ind2:*, reg ind3:V, reg __1:cls, reg r7:V, reg do_call:cls, reg rbind:*, reg rbind1:V, reg p1:p(V +), reg Map:cls, reg cbind_safely:*, reg cbind_safely1:V, reg p2:p(V +), reg get_section_names:cls, reg z6:*, reg z7:V, reg p3:p(V +), reg r11:V, reg p4:p(V +), reg lapply:cls, reg z8:*, reg z9:V, reg p5:p(V +), reg r14:cls, reg p6:p(V +), reg r16:V, reg p7:p(V +), reg r18:V, reg p8:p(V +), reg r20:V, reg cbind_safely2:cls, reg get_item_texts:cls, reg z10:*, reg z11:V, reg p9:p(V +), reg r22:V, reg p10:p(V +), reg r24:V |
    mkenv;
    st e = e;
    e1 = ld e;
    check L4() else D0();
  D0():
    deopt 0 [e1];
  L4():
    e2 = force? e1;
    checkMissing(e2);
    c = `is.object`(e2);
    if c then L5() else L6(e2);
  L0(dx1):
    st z = dx1;
    RdTags = ldf RdTags;
    check L8() else D1();
  L5():
    dr = tryDispatchBuiltin.1("[[", e2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L7() else L6(dr);
  L6(e4):
    __ = ldf `[[` in base;
    r = dyn __(e4, 2);
    goto L0(r);
  D1():
    deopt 7 [];
  L7():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L8():
    p = prom<V +>{
      z = ld z;
      z1 = force? z;
      checkMissing(z1);
      return z1;
    };
    r2 = dyn RdTags(p);
    check L9() else D2();
  D2():
    deopt 9 [r2];
  L9():
    r3 = `==`(r2, "\\subsection");
    st ind = r3;
    sym = ldf any;
    base = ldf any in base;
    guard = `==`.4(sym, base);
    if guard then L10() else L11();
  L1(r5):
    c1 = `as.logical`(r5);
    if c1 then L14() else L2();
  L10():
    ind = ld ind;
    check L12() else D3();
  L11():
    r4 = dyn base(<sym ind>);
    goto L1(r4);
  D3():
    deopt 15 [ind];
  L2():
    cbind_safely2 = ldf cbind_safely;
    check L23() else D9();
  L12():
    ind1 = force? ind;
    checkMissing(ind1);
    any = ldf any in base;
    r6 = dyn any(ind1);
    check L13() else D4();
  L14():
    z2 = ld z;
    check L15() else D5();
  D4():
    deopt 18 [r6];
  D5():
    deopt 19 [z2];
  D9():
    deopt 31 [];
  L13():
    goto L1(r6);
  L15():
    z3 = force? z2;
    checkMissing(z3);
    c2 = `is.object`(z3);
    if c2 then L16() else L17(z3);
  L23():
    p10 = prom<V +>{
      get_item_texts = ldf get_item_texts;
      p9 = prom<V +>{
        z10 = ld z;
        z11 = force? z10;
        checkMissing(z11);
        return z11;
      };
      r22 = dyn get_item_texts(p9);
      return r22;
    };
    r24 = dyn cbind_safely2(NA_STR, p10);
    check L24() else D10();
  D10():
    deopt 34 [r24];
  L3(dx3):
    st z = dx3;
    do_call = ldf `do.call`;
    check L20() else D7();
  L16():
    dr2 = tryDispatchBuiltin.1("[", z3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L18() else L17(dr2);
  L17(z5):
    ind2 = ld ind;
    check L19() else D6();
  L24():
    popenv;
    return r24;
  D6():
    deopt 21 [z5, ind2];
  D7():
    deopt 26 [];
  L18():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L3(dx2);
  L19():
    ind3 = force? ind2;
    __1 = ldf `[` in base;
    r7 = dyn __1(z5, ind3);
    goto L3(r7);
  L20():
    p1 = prom<V +>{
      rbind = ld rbind;
      rbind1 = force? rbind;
      checkMissing(rbind1);
      return rbind1;
    };
    p8 = prom<V +>{
      Map = ldf Map;
      p2 = prom<V +>{
        cbind_safely = ld cbind_safely;
        cbind_safely1 = force? cbind_safely;
        checkMissing(cbind_safely1);
        return cbind_safely1;
      };
      p4 = prom<V +>{
        get_section_names = ldf get_section_names;
        p3 = prom<V +>{
          z6 = ld z;
          z7 = force? z6;
          checkMissing(z7);
          return z7;
        };
        r11 = dyn get_section_names(p3);
        return r11;
      };
      p7 = prom<V +>{
        lapply = ldf lapply;
        p5 = prom<V +>{
          z8 = ld z;
          z9 = force? z8;
          checkMissing(z9);
          return z9;
        };
        p6 = prom<V +>{
          r14 = clos inner3708401697;
          return r14;
        };
        r16 = dyn lapply(p5, p6);
        return r16;
      };
      r18 = dyn Map(p2, p4, p7);
      return r18;
    };
    r20 = dyn do_call(p1, p8);
    check L21() else D8();
  D8():
    deopt 29 [r20];
  L21():
    popenv;
    return r20;
  }
}