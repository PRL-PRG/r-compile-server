fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4039152909;
    st limitedLabels = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4039152909(value, maxwidth) {
  (reg value:*, reg maxwidth:*) -+> V { var value:*, var maxwidth:*, reg maxwidth_isMissing:L, reg maxwidth_orDefault:*, reg getOption:cls, reg r:V, reg r1:V, reg p:p(V +), reg sapply:cls, reg value1:*, reg value2:V, reg p1:p(V +), reg r4:cls, reg p2:p(V +), reg r6:V, reg paste0:cls, reg srcrefs:*, reg srcrefs1:V, reg p3:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r8:V, reg r9:V, reg value3:*, reg value4:V, reg as_character:cls, reg r10:V, reg p4:p(V +), reg r12:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r13:V, reg r14:V, reg maxwidth1:*, reg maxwidth2:V, reg c:V, reg c1:L, reg c2:V, reg maxwidth3:*, reg maxwidth4:V, reg r15:V, reg c4:L, reg c5:V, reg c7:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r17:V, reg r18:V, reg maxwidth5:*, reg maxwidth6:V, reg min:cls, reg r19:V, reg strtrim:cls, reg value5:*, reg value6:V, reg p5:p(V +), reg maxwidth7:*, reg maxwidth8:V, reg p6:p(V +), reg r22:V |
    mkenv;
    st value = value;
    maxwidth_isMissing = missing.0(maxwidth);
    if maxwidth_isMissing then L0() else L1(maxwidth);
  L0():
    p = prom<V +>{
      getOption = ldf getOption;
      r = dyn getOption("width");
      r1 = `-`(r, 5);
      return r1;
    };
    goto L1(p);
  L1(maxwidth_orDefault):
    st maxwidth = maxwidth_orDefault;
    sapply = ldf sapply;
    check L7() else D0();
  D0():
    deopt 1 [];
  L7():
    p1 = prom<V +>{
      value1 = ld value;
      value2 = force? value1;
      checkMissing(value2);
      return value2;
    };
    p2 = prom<V +>{
      r4 = clos inner2854634098;
      return r4;
    };
    r6 = dyn sapply(p1, p2);
    check L8() else D1();
  D1():
    deopt 4 [r6];
  L8():
    st srcrefs = r6;
    paste0 = ldf paste0;
    check L9() else D2();
  D2():
    deopt 7 [];
  L9():
    p3 = prom<V +>{
      srcrefs = ld srcrefs;
      srcrefs1 = force? srcrefs;
      checkMissing(srcrefs1);
      return srcrefs1;
    };
    p4 = prom<V +>{
      sym = ldf `as.character`;
      base = ldf `as.character` in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r9):
      return r9;
    L1():
      value3 = ld value;
      value4 = force? value3;
      checkMissing(value4);
      as_character = ldf `as.character` in base;
      r10 = dyn as_character(value4);
      goto L0(r10);
    L2():
      r8 = dyn base(<sym value>);
      goto L0(r8);
    };
    r12 = dyn paste0(p3, p4);
    check L10() else D3();
  D3():
    deopt 10 [r12];
  L10():
    st value = r12;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L11() else L12();
  L2(r14):
    c1 = `as.logical`(r14);
    if c1 then L3(c1) else L14();
  L11():
    maxwidth1 = ld maxwidth;
    check L13() else D4();
  L12():
    r13 = dyn base1(<sym maxwidth>);
    goto L2(r13);
  D4():
    deopt 13 [maxwidth1];
  L3(c2):
    c7 = `as.logical`(c2);
    if c7 then L17() else L4();
  L13():
    maxwidth2 = force? maxwidth1;
    checkMissing(maxwidth2);
    c = `==`(maxwidth2, NULL);
    goto L2(c);
  L14():
    maxwidth3 = ld maxwidth;
    check L15() else D5();
  D5():
    deopt 16 [c1, maxwidth3];
  L4():
    goto L5();
  L5():
    sym2 = ldf min;
    base2 = ldf min in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L19() else L20();
  L15():
    maxwidth4 = force? maxwidth3;
    checkMissing(maxwidth4);
    r15 = `<`(maxwidth4, 40);
    c4 = `as.logical`(r15);
    c5 = `||`(c1, c4);
    goto L3(c5);
  L17():
    st maxwidth = 40;
    goto L5();
  L6(r18):
    st maxwidth = r18;
    strtrim = ldf strtrim;
    check L23() else D8();
  L19():
    maxwidth5 = ld maxwidth;
    check L21() else D6();
  L20():
    r17 = dyn base2(<sym maxwidth>, 1000);
    goto L6(r17);
  D6():
    deopt 28 [maxwidth5];
  D8():
    deopt 35 [];
  L21():
    maxwidth6 = force? maxwidth5;
    checkMissing(maxwidth6);
    min = ldf min in base;
    r19 = dyn min(maxwidth6, 1000);
    check L22() else D7();
  L23():
    p5 = prom<V +>{
      value5 = ld value;
      value6 = force? value5;
      checkMissing(value6);
      return value6;
    };
    p6 = prom<V +>{
      maxwidth7 = ld maxwidth;
      maxwidth8 = force? maxwidth7;
      checkMissing(maxwidth8);
      return maxwidth8;
    };
    r22 = dyn strtrim(p5, p6);
    check L24() else D9();
  D7():
    deopt 32 [r19];
  D9():
    deopt 38 [r22];
  L22():
    goto L6(r19);
  L24():
    popenv;
    return r22;
  }
}
fun inner2854634098(v) {
  (reg v:*) -+> V { var v:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg v1:*, reg v2:V, reg attr:cls, reg r4:V, reg c:V, reg r5:V, reg c1:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg srcref:*, reg srcref1:V, reg attr1:cls, reg r8:V, reg paste0:cls, reg basename:cls, reg srcfile:*, reg srcfile1:V, reg c2:L, reg srcfile3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r9:V, reg p:p(V +), reg r11:V, reg p1:p(V +), reg srcref2:*, reg srcref3:V, reg c3:L, reg srcref5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __:cls, reg r13:V, reg p2:p(V +), reg r15:V |
    mkenv;
    st v = v;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r1):
    r5 = `!`(r1);
    c1 = `as.logical`(r5);
    if c1 then L10() else L2();
  L4():
    sym1 = ldf attr;
    base1 = ldf attr in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L6() else L7();
  L5():
    r = dyn base(<lang `<-`(srcref, attr(v, "srcref"))>);
    goto L0(r);
  L1(r3):
    st srcref = r3;
    c = `==`(r3, NULL);
    goto L0(c);
  L2():
    popenv;
    return "";
  L6():
    v1 = ld v;
    check L8() else D0();
  L7():
    r2 = dyn base1(<sym v>, "srcref");
    goto L1(r2);
  L10():
    sym2 = ldf attr;
    base2 = ldf attr in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L11() else L12();
  D0():
    deopt 3 [v1];
  L3(r7):
    st srcfile = r7;
    paste0 = ldf paste0;
    check L15() else D4();
  L8():
    v2 = force? v1;
    checkMissing(v2);
    attr = ldf attr in base;
    r4 = dyn attr(v2, "srcref");
    check L9() else D1();
  L11():
    srcref = ld srcref;
    check L13() else D2();
  L12():
    r6 = dyn base2(<sym srcref>, "srcfile");
    goto L3(r6);
  D1():
    deopt 7 [r4];
  D2():
    deopt 13 [srcref];
  D4():
    deopt 20 [];
  L9():
    goto L1(r4);
  L13():
    srcref1 = force? srcref;
    checkMissing(srcref1);
    attr1 = ldf attr in base;
    r8 = dyn attr1(srcref1, "srcfile");
    check L14() else D3();
  L15():
    p1 = prom<V +>{
      basename = ldf basename;
      p = prom<V +>{
        srcfile = ld srcfile;
        srcfile1 = force? srcfile;
        checkMissing(srcfile1);
        c2 = `is.object`(srcfile1);
        if c2 then L1() else L2(srcfile1);
      L0(dx1):
        return dx1;
      L1():
        dr = tryDispatchBuiltin.1("$", srcfile1);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L3() else L2(dr);
      L2(srcfile3):
        r9 = `$`(srcfile3, <sym filename>);
        goto L0(r9);
      L3():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      };
      r11 = dyn basename(p);
      return r11;
    };
    p2 = prom<V +>{
      srcref2 = ld srcref;
      srcref3 = force? srcref2;
      checkMissing(srcref3);
      c3 = `is.object`(srcref3);
      if c3 then L1() else L2(srcref3);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", srcref3);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(srcref5):
      __ = ldf `[` in base;
      r13 = dyn __(srcref5, 1);
      goto L0(r13);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r15 = dyn paste0(p1, "#", p2, ": ");
    check L16() else D5();
  D3():
    deopt 17 [r8];
  D5():
    deopt 25 [r15];
  L14():
    goto L3(r8);
  L16():
    popenv;
    return r15;
  }
}